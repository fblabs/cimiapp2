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

    //qDebug()<<"INIT: "<<modregs->index(0,0).data(0).toString()<<modregs->rowCount();

    models=new QVector<QSqlRelationalTableModel*>();
    models->append(modregs);
    models->append(modrighe);



  //qDebug()<<"init: "<<modregs->rowCount()<<models->at(0)->rowCount()<<models->at(0)->lastError().text();



}

CBuoni::~CBuoni()
{
    delete ui;
}

void CBuoni::generateReport()
{


    QApplication::setOverrideCursor(Qt::WaitCursor);



    models->at(0)->setRelation(3,QSqlRelation("tipi_mov","ID","descrizione"));
    models->at(0)->setRelation(4,QSqlRelation("anagrafica","ID","descrizione"));
    models->at(1)->setRelation(2,QSqlRelation("tipi_ope","ID","descrizione"));

     CPrintingJob *f=new CPrintingJob(0,models);


    QDate dal=ui->deDal->date();
    QDate al= ui->deAL->date();


    models->at(0)->setFilter("datareg between '" +dal.toString("yyyy-MM-dd")+"' and '" + al.toString("yyyy-MM-dd")+"'");
     f->cursorToStart();
    int rws=models->at(0)->rowCount();
    for (int row=0;row<rws;row++)
    {

        models->at(0)->setSort(0,Qt::AscendingOrder);
        QString ID=models->at(0)->index(row,0).data(0).toString();
        QString del=models->at(0)->index(row,1).data(0).toDate().toString("dd-MM-yyyy");
        QString dip = models->at(0)->index(row,2).data(0).toString();

        models->at(1)->setFilter("righe_reg.ID="+ID);


        f->cursorToEnd();
        f->addText("BUONO N."+ID+" del "+del);
        f->cursorToEnd();
        f->addText("Dipendente: "+dip);
        f->cursorToEnd();
        f->addSqlTable(1,true);
        f->cursorToEnd();
        f->addText("importo: "+QString::number(calcImporti(row),'f',2)+"\n");
        f->cursorToEnd();
        f->insertPageBreak();
        f->cursorToEnd();





   }







    QApplication::restoreOverrideCursor();
    f->show();
}




double CBuoni::calcImporti(int row)
{
    double i=0.0;
    double e=0.0;
    double u=0.0;
    int rows=models->at(1)->rowCount();


          for(int rw=0;rw<rows;rw++)
          {
          e  += models->at(1)->index(rw,4).data(0).toDouble();
          u  += models->at(1)->index(rw,5).data(0).toDouble();
          }


    i=e-u;


   return i;

}



void CBuoni::on_pushButton_clicked()
{
    generateReport();
}
