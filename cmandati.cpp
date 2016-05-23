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

#include <QDebug>

CMandati::CMandati(QWidget *parent,QSqlDatabase pdb) :
    QWidget(parent),
    ui(new Ui::CMandati)
{
    ui->setupUi(this);
    showMaximized();
    db=pdb;

    mod=new QSqlRelationalTableModel(0,db);
    mod->setTable("mandati");
    mod->setRelation(3,QSqlRelation("anagrafica","ID","descrizione"));
    mod->select();
    ui->tvMaster->setModel(mod);
    ui->tvMaster->setColumnHidden(1,true);
    ui->tvMaster->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->sbYear->setValue(QDate::currentDate().year());

    connect(ui->tvMaster->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(loadMandato()));


}

CMandati::~CMandati()
{
    delete ui;
}

void CMandati::on_sbYear_valueChanged(int arg1)
{
    mod->setFilter("year(data)="+QString::number(arg1));
}

void CMandati::loadMandato()
{
    setCursor(Qt::WaitCursor);
    disconnect(ui->tvDetails,SIGNAL(doubleClicked(QModelIndex)),this,SLOT(editRegistrazione()));
    QSqlQuery q(db);
    int anno=ui->sbYear->value();
    int numero = ui->tvMaster->model()->index(ui->tvMaster->selectionModel()->currentIndex().row(),0).data(0).toInt();
    QString sql="SELECT DISTINCT vwrighe.Pratica AS Pratica, vwrighe.DATA AS Data ,vwrighe.Nome AS Nome, vwrighe.Indirizzo AS Indirizzo,vwrighe.Citta AS Citta,vwrighe.IBAN AS IBAN,vwrighe.importo AS Importo FROM vwrighe, registrazioni WHERE vwrighe.Distinta  = :numero  AND YEAR(DATA) = :anno";

    q.prepare(sql);
    q.bindValue(0,numero);
    q.bindValue(1,anno);

    q.exec();

    QSqlQueryModel *qm=new QSqlQueryModel();
    qm->setQuery(q);

    ui->tvDetails->setModel(qm);

    ui->tvDetails->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    connect(ui->tvDetails,SIGNAL(doubleClicked(QModelIndex)),this,SLOT(editRegistrazione()));
    getImporto();
    setCursor(Qt::ArrowCursor);
}

void CMandati::editRegistrazione()
{
    int id=ui->tvDetails->model()->index(ui->tvDetails->currentIndex().row(),0).data(0).toInt();
  //  int tipo=ui->tvMastro->model()->index(ui->tvMastro->currentIndex().row(),4).data(0).toInt();
    //TODO tipo registrazione
    int tipo=20;


    CRegistrazione *f=new CRegistrazione();
    f->init(id,tipo,db);
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
        importo+=ui->tvDetails->model()->index(x,6).data(0).toDouble();
        qDebug()<<"For "<<ui->tvDetails->model()->index(x,6).data(0).toString()<<importo;
    }

    qDebug()<<importo;

    ui->leImporto->setText(QString::number(importo,'f',2));

}

void CMandati::on_pushButton_3_clicked()
{
    CNewMandato *f=new CNewMandato(0,db);
    f->show();
}
