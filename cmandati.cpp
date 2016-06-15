#include "cmandati.h"
#include "ui_cmandati.h"
#include <QSqlDatabase>
#include <QSqlRelationalTableModel>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlRelation>
#include <QDate>
#include <QMessageBox>
#include "cregistrazione.h"
#include "cnewmandato.h"
#include "hprint.h"
#include "cprintingjob.h"

#include <QDebug>

CMandati::CMandati(QWidget *parent,QSqlDatabase pdb) :
    QWidget(parent),
    ui(new Ui::CMandati)
{
    ui->setupUi(this);
    showMaximized();
    db=pdb;

    mod=new QSqlRelationalTableModel(0,db);
    mod->setTable("mandati_new");
    mod->setRelation(4,QSqlRelation("anagrafica","ID","descrizione"));
    mod->setSort(3,Qt::DescendingOrder);
    mod->select();
   qDebug()<<mod->rowCount();
    ui->tvMaster->setModel(mod);
  //  ui->tvMaster->setColumnHidden(1,true);
    ui->tvMaster->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tvMaster->setColumnHidden(0,true);
    ui->sbYear->setValue(QDate::currentDate().year());
    QModelIndex ix=mod->index(0,0);


    connect(ui->tvMaster->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(loadMandato()));

    ui->tvMaster->setCurrentIndex(ix);
    ui->tvMaster->selectionModel()->select(ix,QItemSelectionModel::Select);
   // ui->tvMaster->setColumnHidden(6,true);
   // ui->tvMaster->setColumnHidden(7,true);
}

CMandati::~CMandati()
{
    delete ui;
}

void CMandati::on_sbYear_valueChanged(int arg1)
{
    mod->setFilter("year(data)="+QString::number(arg1));
    qDebug()<<mod->lastError().text();
}

void CMandati::loadMandato()
{
    dmod=0;
    setCursor(Qt::WaitCursor);
    disconnect(ui->tvDetails,SIGNAL(doubleClicked(QModelIndex)),this,SLOT(editRegistrazione()));
    QSqlQuery q(db);
    int numero =ui->tvMaster->model()->index(ui->tvMaster->selectionModel()->currentIndex().row(),0).data(0).toInt();
    QString sql="select registrazioni.ID,registrazioni.datareg,anagrafica.descrizione,registrazioni.importo from registrazioni,anagrafica where anagrafica.ID=registrazioni.codana and registrazioni.ID IN (SELECT registrazione from righe_mandati_new where IDMandato=:num)";
    q.prepare(sql);
    q.bindValue(0,numero);
  //  q.bindValue(1,anno);

    q.exec();

    dmod=new QSqlQueryModel();
    dmod->setQuery(q);


    ui->tvDetails->setModel(dmod);

    ui->tvDetails->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tvDetails->setColumnHidden(0,true);

    connect(ui->tvDetails,SIGNAL(doubleClicked(QModelIndex)),this,SLOT(editRegistrazione()));
    getImporto();
    setCursor(Qt::ArrowCursor);
}

void CMandati::editRegistrazione()
{
    int id=ui->tvDetails->model()->index(ui->tvDetails->currentIndex().row(),0).data(0).toInt();
    QString conto=ui->tvDetails->model()->index(ui->tvDetails->currentIndex().row(),2).data(0).toString();
    //TODO tipo registrazione
    int tipo=20;


    CRegistrazione *f=new CRegistrazione();
    f->init(id,tipo,conto,db);
    connect(f,SIGNAL(done()),this,SLOT(loadMandato()));
    f->show();
}

void CMandati::on_pushButton_clicked()
{
    editRegistrazione();
}

void CMandati::on_pushButton_2_clicked()
{
  if (QMessageBox::Ok == QMessageBox::question(this,QApplication::applicationName(),"Chiudere?",QMessageBox::Ok|QMessageBox::Cancel))
  {
      close();
  }
}

void CMandati::getImporto()
{
    double importo;

    for (int x=0;x<mod->rowCount();x++)
    {
        importo+=ui->tvDetails->model()->index(x,3).data(0).toDouble();
        qDebug()<< ui->tvDetails->model()->index(x,3).data(0).toString();

    }



    qDebug()<<"importo: "+QString::number(importo);

    ui->leImporto->setText(QString::number(qAbs(importo),'f',2));

}

void CMandati::on_pushButton_3_clicked()
{
    CNewMandato *f=new CNewMandato(0,db);
    connect(f,SIGNAL(mandatoCreated()),this,SLOT(reloadMandati()));
    f->show();
}

void CMandati::reloadMandati()
{
    mod->select();
}


void CMandati::stampaMandato()
{
 /*   HPrint *f=new HPrint();
    f->show();

    f->append("MANDATO N° "+ui->tvMaster->model()->index(ui->tvMaster->selectionModel()->currentIndex().row(),1).data(0).toString()+" - Anno: "+ui->tvMaster->model()->index(ui->tvMaster->selectionModel()->currentIndex().row(),2).data(0).toString()+"("+ui->tvMaster->model()->index(ui->tvMaster->selectionModel()->currentIndex().row(),3).data(0).toString()+")",false);
    f->append("",false);
    int rows=ui->tvDetails->model()->rowCount();
    QTextTable *t = f->addTable(rows,3);
    for (int row=0;row<rows;row++)
    {
        f->writeTableContent(t,row,0,ui->tvDetails->model()->index(row,1).data(0).toString());
        f->writeTableContent(t,row,1,ui->tvDetails->model()->index(row,2).data(0).toString());
        f->writeTableContent(t,row,2,QString::number(ui->tvDetails->model()->index(row,3).data(0).toDouble(),'f',2));
    }

    f->append("IMPORTO: " + ui->leImporto->text(),false);*/





    QVector<QAbstractTableModel*> *models=new QVector<QAbstractTableModel*> ;
    models->append(dmod);

    CPrintingJob *f=new CPrintingJob(0,models);

    f->addText("MANDATO N° "+ui->tvMaster->model()->index(ui->tvMaster->selectionModel()->currentIndex().row(),1).data(0).toString()+" - Anno: "+ui->tvMaster->model()->index(ui->tvMaster->selectionModel()->currentIndex().row(),2).data(0).toString()+"("+ui->tvMaster->model()->index(ui->tvMaster->selectionModel()->currentIndex().row(),3).data(0).toString()+")\n\n");

    f->addSqlTable(0,false);

    f->addText("\nIMPORTO: " + ui->leImporto->text());

    f->setWindowModality(Qt::ApplicationModal);
    f->show();



}

void CMandati::on_pushButton_4_clicked()
{
    stampaMandato();
}

void CMandati::on_pbDelete_clicked()
{
    deleteMandato();
}

void CMandati::deleteMandato()
{
    if(QMessageBox::question(this,QApplication::applicationName(),"Cancellare il mandato?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {
        db.transaction();
        int id=ui->tvMaster->model()->index(ui->tvMaster->selectionModel()->currentIndex().row(),0).data(0).toInt();
        QSqlQuery q(db);
        QString sql="DELETE FROM righe_mandati_new WHERE IDMandato=:id";
        q.prepare(sql);
        q.bindValue(0,id);
        q.exec();
        q.clear();

        sql="DELETE FROM mandati_new where ID=:id";
        q.prepare(sql);
        q.bindValue(0,id);

            if(q.exec())
            {
                if (QMessageBox::question(this,QApplication::applicationName(),"Mandato eliminato - confermare?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
                {
                    db.commit();
                }
                else
                {
                    db.rollback();
                }
            }
     }
        loadMandato();
        mod->select();


}
