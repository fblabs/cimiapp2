#include "cnuovaregistrazione.h"
#include "ui_cnuovaregistrazione.h"
#include "cnuovarigaregistrrazione.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

#include <QSqlRelation>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>

#include <QMessageBox>


CNuovaRegistrazione::CNuovaRegistrazione(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CNuovaRegistrazione)
{
    ui->setupUi(this);
}

CNuovaRegistrazione::~CNuovaRegistrazione()
{
    delete ui;
}

void CNuovaRegistrazione::init(QSqlDatabase pdb)
{
    db=pdb;

    if (!db.isOpen())
    {
        close();
    }

    ui->deDataReg->setDate(QDate::currentDate());

    QSqlTableModel *tipimod=new QSqlTableModel(0,db);
    tipimod->setTable("tipi_mov");
    tipimod->setSort(1,Qt::AscendingOrder);
    tipimod->select();

    ui->cbTipoRegistrazione->setModel(tipimod);
    ui->cbTipoRegistrazione->setModelColumn(1);

    QSqlTableModel *modconti=new QSqlTableModel(0,db);

    modconti->setTable("anagrafica");
    modconti->setSort(2,Qt::AscendingOrder);
    modconti->select();

    ui->cbConto->setModel(modconti);
    ui->cbConto->setModelColumn(2);

    QSqlTableModel *modContropartite=new QSqlTableModel(0,db);
    modContropartite->setTable("anagrafica");
    modContropartite->setSort(2,Qt::AscendingOrder);
    modContropartite->select();

    ui->cbContropartita->setModel(modContropartite);
    ui->cbContropartita->setModelColumn(2);

    ui->cbSottogruppo->addItem("C");
    ui->cbSottogruppo->addItem("D");
    ui->cbSottogruppo->addItem("F");

    ui->cbCpSottogruppo->addItem("C");
    ui->cbCpSottogruppo->addItem("D");
    ui->cbCpSottogruppo->addItem("F");




}

void  CNuovaRegistrazione::filterConto()
{
   QString filter="tipo='"+ui->cbSottogruppo->currentText()+"'";
   static_cast<QSqlTableModel*>( ui->cbConto->model())->setFilter(filter);
   qDebug()<<"Conto:"<<filter;
   ui->cbConto->setCurrentIndex(0);

}

void  CNuovaRegistrazione::filterContropartita()
{
    QString filter="tipo='"+ui->cbCpSottogruppo->currentText()+"'";
    static_cast<QSqlTableModel*>( ui->cbContropartita->model())->setFilter(filter);
    qDebug()<<"Contropartita:"<<filter;
    ui->cbContropartita->setCurrentIndex(0);

}


void CNuovaRegistrazione::on_cbCpSottogruppo_currentIndexChanged(int index)
{
    filterContropartita();
}

void CNuovaRegistrazione::on_cbSottogruppo_currentIndexChanged(int index)
{
    filterConto();
}

void CNuovaRegistrazione::on_pushButton_4_clicked()
{
    if (QMessageBox::Ok==QMessageBox::question(this,QApplication::applicationName(),"Chiudere la finestra?",QMessageBox::Ok|QMessageBox::Cancel))
    {
        close();
    }
}

void CNuovaRegistrazione::on_pushButton_clicked()
{
    CNuovaRigaRegistrrazione *f= new CNuovaRigaRegistrrazione();
    f->init(db);

    f->show();
}
