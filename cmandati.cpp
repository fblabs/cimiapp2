#include "cmandati.h"
#include "ui_cmandati.h"
#include <QSqlDatabase>
#include <QSqlRelationalTableModel>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlRelation>
#include <QDate>
#include "cregistrazione.h"

CMandati::CMandati(QWidget *parent,QSqlDatabase pdb) :
    QWidget(parent),
    ui(new Ui::CMandati)
{
    ui->setupUi(this);
    db=pdb;

    mod=new QSqlRelationalTableModel(0,db);
    mod->setTable("mandati");
    mod->setRelation(3,QSqlRelation("anagrafica","ID","descrizione"));
    mod->select();
    ui->tvMaster->setModel(mod);
    ui->tvMaster->setColumnHidden(1,true);
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

    QSqlQuery q(db);
    int anno=ui->sbYear->value();
    int numero = ui->tvMaster->model()->index(ui->tvMaster->selectionModel()->currentIndex().row(),0).data(0).toInt();
    QString sql="SELECT DISTINCT vwrighe.Pratica AS Pratica, vwrighe.DATA AS DATA ,vwrighe.Nome AS Nome, vwrighe.Indirizzo AS Indirizzo,vwrighe.Citta AS Citta,vwrighe.IBAN AS IBAN,vwrighe.importo AS Importo FROM vwrighe, registrazioni WHERE vwrighe.Distinta  = :numero  AND YEAR(DATA) = :anno";

    q.prepare(sql);
    q.bindValue(0,numero);
    q.bindValue(1,anno);

    q.exec();

    QSqlQueryModel *qm=new QSqlQueryModel();
    qm->setQuery(q);

    ui->tvDetails->setModel(qm);
    connect(ui->tvDetails->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(loadMandatoDetails()));
}

void CMandati::loadMandatoDetails()
{

    int id=ui->tvDetails->model()->index(ui->tvDetails->currentIndex().row(),0).data(0).toInt();
  //  int tipo=ui->tvMastro->model()->index(ui->tvMastro->currentIndex().row(),4).data(0).toInt();
    int tipo=20;


    CRegistrazione *f=new CRegistrazione();
    f->init(id,tipo,db);
    f->show();


}
