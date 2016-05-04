#include "coperations.h"
#include "ui_coperations.h"
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QDate>
#include <QDebug>
#include <QSqlError>
#include "crelationaltablemodel.h"
#include <QSqlRelation>
#include <QHeaderView>
#include "cregistrazione.h"
#include <QMessageBox>

COperations::COperations(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::COperations)
{
    ui->setupUi(this);

    mod = new CRelationalTableModel();

    ui->deAl->setDate(QDate::currentDate());
    ui->deDal->setDate(QDate::currentDate().addMonths(-8));

}

COperations::~COperations()
{
    delete ui;
}

void COperations::init(QSqlDatabase pdb)
{
    db=pdb;

    if (!db.isOpen())
    {
        close();
    }



    qDebug()<<mod->database().databaseName();
    mod->setTable("registrazioni");
    mod->setSort(1,Qt::DescendingOrder);
    mod->setFilter("datareg between '" + ui->deDal->date().toString("yyyy-MM-dd") + "' AND '" +ui->deAl->date().toString("yyyy-MM-dd")+"'");
    mod->setRelation(2,QSqlRelation("anagrafica","ID","descrizione"));
    mod->setRelation(3,QSqlRelation("tipi_mov","ID","descrizione"));
    mod->setRelation(4,QSqlRelation("anagrafica","ID","descrizione"));
    mod->select();




    ui->tvMain->setModel(mod);



    ui->tvMain->setColumnHidden(0,true);

   ui->tvMain->setColumnWidth(5,20);
   ui->tvMain->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);



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
    qDebug()<<"parm tipo"<<tipo;
    q.exec();
    q.first();


    int ix=q.value(0).toInt();
 qDebug()<<ix<<q.lastQuery()<<q.lastError().text();

    f->init(ID,ix,db);

    f->show();
}

void COperations::on_pushButton_2_clicked()
{
  if (QMessageBox::Ok== QMessageBox::question(this,QApplication::applicationName(),"Chiudere la finestra?",QMessageBox::Ok|QMessageBox::Cancel))
  {
      close();
  }
}
