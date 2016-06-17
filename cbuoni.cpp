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

    models=new QVector<QAbstractTableModel*>();
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



    modregs->setRelation(3,QSqlRelation("tipi_mov","ID","descrizione"));
    modregs->setRelation(4,QSqlRelation("anagrafica","ID","descrizione"));
    modrighe->setRelation(2,QSqlRelation("tipi_ope","ID","descrizione"));

    models->append(modregs);
    models->append(modrighe);


    CPrintingJob *f=new CPrintingJob(0,models);


    QDate dal=ui->deDal->date();
    QDate al= ui->deAL->date();
    int printpages=ui->cbPrintNumber->currentIndex();
    qDebug()<<"printpages: "<<printpages;



    modregs->setFilter("datareg between '" +dal.toString("yyyy-MM-dd")+"' and '" + al.toString("yyyy-MM-dd")+"'");
     f->cursorToStart();
    int rws=modregs->rowCount();
    for (int row=0;row<rws;row++)
    {

        modregs->setSort(0,Qt::AscendingOrder);
        QString ID=modregs->index(row,0).data(0).toString();
        QString del=modregs->index(row,1).data(0).toDate().toString("dd-MM-yyyy");
        QString dip =modregs->index(row,2).data(0).toString();

        modrighe->setFilter("righe_reg.ID="+ID);


        f->cursorToEnd();
        QTextBlockFormat frm;
        frm.setBackground(Qt::white);
        f->addText("BUONO N."+ID+" del "+del,frm);
        f->cursorToEnd();
        f->addText("Dipendente: "+dip);
        f->cursorToEnd();
        f->addSqlTable(1,true);
        f->cursorToEnd();
        f->addText("importo: "+QString::number(calcImporti(row),'f',2)+"\n");
        f->cursorToEnd();

        int formsforpage;
        int page;

        switch(printpages)
        {
        case 0:
            //stampa continua
        break;

        case 1:
            //uno per pagina
            f->insertPageBreak();
            f->cursorToEnd();

        break;

        case 2:
            //due per pagina
            formsforpage=2;



        break;

        case 3:
          //  quattro per pagina
            formsforpage=4;

        break;


        }

        page=row+1;


        if (page % formsforpage==0)
        {
            f->insertPageBreak();
            f->cursorToEnd();
        }


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

void CBuoni::on_pushButton_2_clicked()
{
    close();
}
