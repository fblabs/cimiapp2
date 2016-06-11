#include "cbuoni.h"
#include "ui_cbuoni.h"
#include <QSqlRelation>
#include "cprintingjob.h"
#include <QSqlRelationalTableModel>
#include <QSqlQuery>


#include <QDebug>

CBuoni::CBuoni(QWidget *parent, QSqlDatabase pdb) :
    QWidget(parent),
    ui(new Ui::CBuoni)
{
    ui->setupUi(this);

    ui->deDal->setDate(QDate::currentDate().addYears(-1));
    ui->deAL->setDate(QDate::currentDate());

    db=pdb;

    modregs=new QSqlRelationalTableModel(0,db);
    modregs->setTable("registrazioni");
    modregs->setRelation(2,QSqlRelation("anagrafica","ID","descrizione"));
    modregs->setRelation(3,QSqlRelation("tipi_mov","ID","descrizione"));
    modregs->setRelation(4,QSqlRelation("anagrafica","ID","descrizione"));

    modrighe=new QSqlRelationalTableModel(0,db);
    modrighe->setTable("righe_reg");
    modrighe->setRelation(2,QSqlRelation("tipi_ope","ID","descrizione"));

    modregs->select();
    modrighe->select();

    qDebug()<<"INIT: "<<modregs->index(0,0).data(0).toString()<<modregs->rowCount();

    models=new QVector<QSqlRelationalTableModel*>();
    models->append(modregs);
    models->append(modrighe);



  qDebug()<<"init: "<<modregs->rowCount()<<models->at(0)->rowCount()<<models->at(0)->lastError().text();



}

CBuoni::~CBuoni()
{
    delete ui;
}

void CBuoni::generateReport()
{


qDebug()<<"generatereport->CBuoni"<<models->at(0)->rowCount()<<models->at(1)->rowCount();


    models->at(0)->setRelation(3,QSqlRelation("tipi_mov","ID","descrizione"));
    models->at(0)->setRelation(4,QSqlRelation("anagrafica","ID","descrizione"));
    models->at(1)->setRelation(2,QSqlRelation("tipi_ope","ID","descrizione"));

     CPrintingJob *f=new CPrintingJob(0,models);


    QDate dal=ui->deDal->date();
    QDate al= ui->deAL->date();


    models->at(0)->setFilter("datareg between '" +dal.toString("yyyy-MM-dd")+"' and '" + al.toString("yyyy-MM-dd")+"'");

    int rws=models->at(0)->rowCount();
    for (int row=0;row<rws;row++)
    {
    QString ID=models->at(0)->index(row,0).data(0).toString();
    models->at(0)->setFilter("registrazioni.ID="+ID);
    models->at(0)->setSort(1,Qt::AscendingOrder);
    models->at(1)->setFilter("righe_reg.ID="+ID);
    //qDebug()<<"Generatereportfor: "<<row<<ID<<models->at(0)->rowCount()<<models->at(0)->lastError().text()<<models->at(0)->query().lastQuery();
    f->addSqlTable(0,false);
    f->addSqlTable(1,true);
    models->at(0)->setFilter("");

    }





    f->show();
}








void CBuoni::on_pushButton_clicked()
{
    generateReport();
}
