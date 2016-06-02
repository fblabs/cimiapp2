#include "cnewmandato.h"
#include "ui_cnewmandato.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlRelationalTableModel>
#include <QSqlRelation>
#include <QSqlTableModel>
#include <QDebug>
#include <QSqlError>
#include "csqlrelationaltablemodel.h"


CNewMandato::CNewMandato(QWidget *parent, QSqlDatabase pdb) :
    QWidget(parent),
    ui(new Ui::CNewMandato)
{
    ui->setupUi(this);


    db = pdb;

    QSqlTableModel *banchemod=new QSqlTableModel(0,db);
    banchemod->setTable("anagrafica");
    banchemod->setFilter("tipo='D' and ID=987");
    banchemod->setSort(2,Qt::AscendingOrder);
    banchemod->select();

    ui->cbBanche->setModel(banchemod);
    ui->cbBanche->setModelColumn(2);

    ui->deDataMandato->setDate(QDate::currentDate());

    ui->deAl->setDate(QDate::currentDate());
    int anno=QDate::currentDate().year();

    QSqlQuery q(db);
    QString qsql="select max(numero) from mandati_new where anno=:anno";
    q.prepare(qsql);
    q.bindValue(":anno",anno);
    q.exec();
    q.first();

    qDebug()<<q.value(0).toInt()<<q.lastQuery()<<q.boundValue(":anno").toString();

    int numero=q.value(0).toInt();
    numero++;
    q.clear();

    q.exec("SELECT max(data) from mandati_new" );
    q.first();
    QDate dataultimomandato=q.value(0).toDate().addDays(1);
    q.clear();

    ui->deDal->setDate(dataultimomandato);



    ui->leNumero->setText(QString::number(numero));
    ui->leAnno->setText(QString::number(anno));
    ui->deDataMandato->setDate(QDate::currentDate());




    regs=new CSqlRelationalTableModel(0,db);
    regs->setTable("registrazioni");

    regs->setRelation(2,QSqlRelation("anagrafica","ID","descrizione"));
    regs->setRelation(3,QSqlRelation("tipi_mov","ID","descrizione"));
    regs->setRelation(4,QSqlRelation("anagrafica","ID","descrizione"));;

    regs->select();
    regs->setFilter("datareg between '"+ui->deDal->date().toString("yyyy-MM-dd")+"' and '"+ui->deAl->date().toString("yyyy-MM-dd")+"'");

    ui->tvRigheMandato->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->tvRigheMandato->setModel(regs);


    ui->tvRigheMandato->setColumnHidden(3,true);
    ui->tvRigheMandato->setColumnHidden(4,true);
    ui->tvRigheMandato->setColumnHidden(5,true);
    ui->tvRigheMandato->setColumnHidden(7,true);
    getImporto();

    connect(ui->deDal,SIGNAL(dateChanged(QDate)),this,SLOT(setRegsDateRange()));
    connect(ui->deAl,SIGNAL(dateChanged(QDate)),this,SLOT(setRegsDateRange()));



   // qDebug()<<regs->lastError().text()<<regs->query().lastQuery();


}

void CNewMandato::getImporto()
{
    double importo=0;
    QSqlQuery q(db);
    QString sql;

    int righe=regs->rowCount();

    for (int x=0;x<righe;x++)
    {

        sql="SELECT SUM(uscite) from righe_reg where ID="+regs->index(x,0).data(Qt::DisplayRole).toString();
        q.exec(sql);
        q.first();

        importo += q.value(0).toDouble();

       // qDebug()<<q.value(0).toString()<<q.lastError().text();
    }

    ui->leImporto->setText(QString::number(importo,'f',2));
}

CNewMandato::~CNewMandato()
{
    delete ui;
}

void CNewMandato::on_pushButton_clicked()
{
    if(QMessageBox::Ok==QMessageBox::question(this,QApplication::applicationName(),"Chiudere la finestra?",QMessageBox::Ok|QMessageBox::Cancel))
    {
        close();
    }
}

/*void CNewMandato::on_deDal_dateChanged(const QDate &date)
{
    setRegsDateRange();
}

void CNewMandato::on_deAl_dateChanged(const QDate &date)
{
    setRegsDateRange();
}
*/
void CNewMandato::setRegsDateRange()
{
    QDate dal=ui->deDal->date();
    QDate al =ui->deAl->date();

    if(!regs) return;
    regs->setFilter("datareg between '"+dal.toString("yyyy-MM-dd")+"' and '"+al.toString("yyyy-MM-dd")+"'");
    getImporto();
}

bool CNewMandato::saveMandato()
{


    QString anno=ui->leAnno->text();
    QString data=ui->deDataMandato->date().toString("yyyy-MM-dd");
    QString banca=QString::number(getBancaID());
    QString numero=ui->leNumero->text();

    QString sql="insert into mandati_new(numero,anno,data,banca,dal,al) VALUES(:numero,:anno,:data,:banca,:dal,:al)";
    QSqlQuery q(db);
    q.prepare(sql);
    q.bindValue(":numero",numero);
    q.bindValue(":anno",anno);
    q.bindValue(":data",data);
    q.bindValue(":banca",banca);
    q.bindValue(":dal",ui->deDal->date().toString("yyyy-MM-dd"));
    q.bindValue(":al",ui->deAl->date().toString("yyyy-MM-dd"));


    db.transaction();
    q.exec();

    int idmandato = q.lastInsertId().toInt();
    int registrazione;
    int righe=regs->rowCount();

    for(int x=0;x<righe;x++)
    {
       sql="INSERT INTO righe_mandati_new(IDMandato,registrazione) VALUES (:idmandato,:registrazione)";
       registrazione=regs->index(x,0).data(0).toInt();
       q.prepare(sql);
       q.bindValue(":idmandato",idmandato);
       q.bindValue(":registrazione",registrazione);
      if(!q.exec())
      {
          qDebug()<<"righe: "<<q.lastError().text()<< x<<righe<<idmandato<<registrazione<<db.lastError().text();
          db.rollback();
          return false;
      }
    }
    db.commit();
    return true;


}

void CNewMandato::on_pushButton_2_clicked()
{
    if(QMessageBox::question(this,QApplication::applicationName(),"Salvare? ATTENZIONE, verificare i dati inseriti!",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {
        if( saveMandato())
        {
            QMessageBox::information(this,QApplication::applicationName(),"Mandato salvato",QMessageBox::Ok);
            ui->pushButton_2->setEnabled(false);

        }
        else
        {
            QMessageBox::warning(this,QApplication::applicationName(),"Errore salvando il mandato",QMessageBox::Ok);
        }

        emit mandatoCreated();
    }

}

int CNewMandato::getBancaID()
{
    QSqlQuery b(db);
    b.prepare("SELECT ID from anagrafica where descrizione=:desc");
    b.bindValue(":desc",ui->cbBanche->currentText());
    b.exec();
    b.first();
    int res=b.value(0).toInt();

    return res;

}
