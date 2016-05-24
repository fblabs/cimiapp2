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
    banchemod->setFilter("tipo='D'");
    banchemod->setSort(2,Qt::AscendingOrder);
    banchemod->select();

    ui->cbBanche->setModel(banchemod);
    ui->cbBanche->setModelColumn(2);

    ui->deDataMandato->setDate(QDate::currentDate());

    ui->deAl->setDate(QDate::currentDate());

    QSqlQuery q(db);
    q.exec("select max(numero) from mandati where year(data)=:anno");
    q.bindValue(":anno",QDate::currentDate().year());
    q.exec();
    q.first();

    int numero=q.value(0).toInt()+1;
    q.clear();

    q.exec("SELECT max(data) from mandati" );
    q.first();
    QDate dataultimomandato=q.value(0).toDate().addDays(1);
    q.clear();

    ui->deDal->setDate(dataultimomandato);

    int anno=QDate::currentDate().year();

    ui->leNumero->setText(QString::number(numero));
    ui->leAnno->setText(QString::number(anno));
    ui->deDataMandato->setDate(QDate::currentDate());


    CSqlRelationalTableModel *regs=new CSqlRelationalTableModel(0,db);
    regs->setTable("registrazioni");
    regs->setFilter("datareg between '"+dataultimomandato.toString("yyyy-MM-dd")+"' and '"+ui->deAl->date().toString("yyyy-MM-dd")+"' and tipo_mov=20");
    regs->setRelation(2,QSqlRelation("anagrafica","ID","descrizione"));
    regs->setRelation(3,QSqlRelation("tipi_mov","ID","descrizione"));
    regs->setRelation(4,QSqlRelation("anagrafica","ID","descrizione"));

    regs->select();

    ui->tvRigheMandato->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->tvRigheMandato->setModel(regs);


    qDebug()<<regs->lastError().text();


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
