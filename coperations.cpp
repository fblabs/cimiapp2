#include "coperations.h"
#include "ui_coperations.h"
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QDate>
#include <QSqlError>
#include "qsqlrelationaltablemodel.h"
#include <QSqlRelation>
#include <QHeaderView>
#include "cregistrazione.h"
#include "cnuovaregistrazione.h"
#include <QMessageBox>
#include "csqlrelationaltablemodel.h"
#include <QMenu>
#include <QAction>
#include <QDebug>


COperations::COperations(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::COperations)
{
    ui->setupUi(this);

    mod = new CSqlRelationalTableModel(this,db);

    ui->deAl->setDate(QDate::currentDate());
    ui->deDal->setDate(QDate::currentDate().addMonths(-8));

}

COperations::~COperations()
{
    delete ui;
}

void COperations::reload()
{

  /*  mod = new CRelationalTableModel();
    mod->setTable("registrazioni");
    mod->setSort(1,Qt::DescendingOrder);
    mod->setFilter("datareg between '" + ui->deDal->date().toString("yyyy-MM-dd") + "' AND '" +ui->deAl->date().toString("yyyy-MM-dd")+"'");
    mod->setRelation(2,QSqlRelation("anagrafica","ID","descrizione"));
    mod->setRelation(3,QSqlRelation("tipi_mov","ID","descrizione"));
    mod->setRelation(4,QSqlRelation("anagrafica","ID","descrizione"));*/
    mod->select();
   // ui->tvMain->setModel(mod);

    qDebug()<<"reload";

}

void COperations::init(QSqlDatabase pdb)
{
    showMaximized();
    db=pdb;



    if (!db.isOpen())
    {
        close();
    }




    mod->setTable("registrazioni");
    mod->setSort(1,Qt::DescendingOrder);
    mod->setFilter("datareg between '" + ui->deDal->date().toString("yyyy-MM-dd") + "' AND '" +ui->deAl->date().toString("yyyy-MM-dd")+"'");
    mod->setRelation(2,QSqlRelation("anagrafica","ID","descrizione"));
    mod->setRelation(3,QSqlRelation("tipi_mov","ID","descrizione"));
    mod->setRelation(4,QSqlRelation("anagrafica","ID","descrizione"));
    mod->select();

    mod->setHeaderData(1,Qt::Horizontal,"Data registrazione");
    mod->setHeaderData(2,Qt::Horizontal,"Conto");
    mod->setHeaderData(3,Qt::Horizontal,"Tipo registrazione");
    mod->setHeaderData(4,Qt::Horizontal,"Contropartita");
    mod->setHeaderData(5,Qt::Horizontal,"Liquidato");
    mod->setHeaderData(6,Qt::Horizontal,"Data liquidazione");
    mod->setHeaderData(7,Qt::Horizontal,"Mandato");
    mod->setHeaderData(8,Qt::Horizontal,"Importo");
    mod->setHeaderData(9,Qt::Horizontal,"Note");




   ui->tvMain->setModel(mod);



 //   ui->tvMain->setColumnHidden(0,true);

   ui->tvMain->setColumnWidth(5,20);
   ui->tvMain->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
  // setContextMenuPolicy(Qt::CustomContextMenu);
  /* connect(this, SIGNAL(customContextMenuRequested(const QPoint &)),
           this, SLOT(ShowContextMenu(const QPoint &)));*/




    if (!db.isOpen())
    {
        close();
    }

}

void COperations::setFilter(QString fil)
{
    QString filter="flag > 0";
    QString datefilter =" and datareg between '" + ui->deDal->date().toString("yyyy-MM-dd") + "' AND '" +ui->deAl->date().toString("yyyy-MM-dd")+"'";

    QString CalculatedFilter = filter + datefilter;

    mod->setFilter(CalculatedFilter);


}

void COperations::on_deDal_dateChanged(const QDate &date)
{
    setFilter();
}

void COperations::on_deAl_dateChanged(const QDate &date)
{
    setFilter();
}

void COperations::on_pushButton_clicked()
{
    CRegistrazione *f=new CRegistrazione();

    int ID=ui->tvMain->model()->index(ui->tvMain->selectionModel()->currentIndex().row(),0).data(0).toInt();
    QString tipo=ui->tvMain->model()->index(ui->tvMain->selectionModel()->currentIndex().row(),3).data(0).toString();
    QSqlQuery q(db);
    q.prepare("SELECT ID FROM tipi_mov where descrizione=:tipo");
    q.bindValue(":tipo",tipo);
    //qDebug()<<"parm tipo"<<tipo;
    q.exec();
    q.first();


    int ix=q.value(0).toInt();
 //qDebug()<<ix<<q.lastQuery()<<q.lastError().text();

    f->init(ID,ix,ui->tvMain->model()->index(ui->tvMain->selectionModel()->currentIndex().row(),2).data(0).toString(),db);
    connect(f,SIGNAL(done()),this,SLOT(reload()));

    f->show();
}

void COperations::on_pushButton_2_clicked()
{
  if (QMessageBox::Ok== QMessageBox::question(this,QApplication::applicationName(),"Chiudere la finestra?",QMessageBox::Ok|QMessageBox::Cancel))
  {
      close();
  }
}

void COperations::on_pushButton_3_clicked()
{
  CNuovaRegistrazione *f=new CNuovaRegistrazione();
  f->init(db);

  connect(f,SIGNAL(recordAdded()),this,SLOT(reload()));
  f->show();


}



void COperations::on_tvMain_doubleClicked(const QModelIndex &index)
{
    showRegistrazione();

       /* CRegistrazione *f=new CRegistrazione();

        int ID=ui->tvMain->model()->index(index.row(),0).data(0).toInt();
        QString conto=ui->tvMain->model()->index(index.row(),2).data(0).toString();
        QString tipo=ui->tvMain->model()->index(index.row(),3).data(0).toString();
        QSqlQuery q(db);
        q.prepare("SELECT ID FROM tipi_mov where descrizione=:tipo");
        q.bindValue(":tipo",tipo);
        //qDebug()<<"parm tipo"<<tipo;
        q.exec();
        q.first();


        int ix=q.value(0).toInt();
     //qDebug()<<ix<<q.lastQuery()<<q.lastError().text();

        f->init(ID,ix,conto,db);
    //   connect(f,SIGNAL(done()),this,SLOT(reload()));

        f->show();*/


}

void COperations::on_lineEdit_textChanged(const QString &arg1)
{
    mod->setFilter("relTblAl_2.descrizione LIKE '"+arg1+"%'");

}



void COperations::on_tvMain_customContextMenuRequested(const QPoint &pos)
{

   showRegistrazione();

}

void COperations::showRegistrazione()
{

    CRegistrazione *f=new CRegistrazione();

    QModelIndex index=ui->tvMain->currentIndex();



    int ID=ui->tvMain->model()->index(index.row(),0).data(0).toInt();
    QString tipo=ui->tvMain->model()->index(index.row(),3).data(0).toString();
    QSqlQuery q(db);
    q.prepare("SELECT ID FROM tipi_mov where descrizione=:tipo");
    q.bindValue(":tipo",tipo);
    //qDebug()<<"parm tipo"<<tipo;
    q.exec();
    q.first();


    int ix=q.value(0).toInt();
 //qDebug()<<ix<<q.lastQuery()<<q.lastError().text();

    f->init(ID,ix,ui->tvMain->model()->index(ui->tvMain->selectionModel()->currentIndex().row(),2).data(0).toString(),db);
    connect(f,SIGNAL(done()),this,SLOT(reload()));
    f->show();
}
