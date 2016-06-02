#include "cregistrazioni.h"
#include "ui_cregistrazioni.h"
#include <QSqlDatabase>
//#include <QSqlRelationalTableModel>
#include "csqlrelationaltablemodel.h"
#include <QSqlRelation>
#include <QSqlTableModel>
#include <QMessageBox>

#include "cnuovaregistrazione.h"


CRegistrazioni::CRegistrazioni(QWidget *parent, QSqlDatabase pdb) :
    QWidget(parent),
    ui(new Ui::CRegistrazioni)
{
    ui->setupUi(this);
    showMaximized();

    db=pdb;
    if (!db.isOpen())
    {
        close();
    }

    mod=new CSqlRelationalTableModel(0,db);

    mod->setTable("registrazioni");
    mod->setRelation(2,QSqlRelation("anagrafica","ID","descrizione"));
    mod->setRelation(3,QSqlRelation("tipi_mov","ID","descrizione"));
    mod->setRelation(4,QSqlRelation("anagrafica","ID","descrizione"));

    mod->select();

    ui->tvMain->setModel(mod);
    mod->setHeaderData(1,Qt::Horizontal,"Data registrazione");
    mod->setHeaderData(2,Qt::Horizontal,"Conto");
    mod->setHeaderData(3,Qt::Horizontal,"Tipo registrazione");
    mod->setHeaderData(4,Qt::Horizontal,"Contropartita");
    mod->setHeaderData(5,Qt::Horizontal,"Liquidato");
    mod->setHeaderData(6,Qt::Horizontal,"Data liquidazione");
    mod->setHeaderData(7,Qt::Horizontal,"Mandato");
    mod->setHeaderData(8,Qt::Horizontal,"Importo");
    mod->setHeaderData(9,Qt::Horizontal,"Note");
    mod->setSort(1,Qt::DescendingOrder);

    ui->deDal->setDate(QDate::currentDate().addYears(-2));
    ui->deAl->setDate(QDate::currentDate());




   ui->tvMain->setModel(mod);



 //   ui->tvMain->setColumnHidden(0,true);

   ui->tvMain->setColumnWidth(5,20);
   ui->tvMain->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
   setDateFilter();


}

void CRegistrazioni::setDateFilter()
{
    QString filter="flag > 0";
    QString datefilter =" and datareg between '" + ui->deDal->date().toString("yyyy-MM-dd") + "' AND '" +ui->deAl->date().toString("yyyy-MM-dd")+"'";

    QString CalculatedFilter = filter + datefilter;

    mod->setFilter(CalculatedFilter);
}

CRegistrazioni::~CRegistrazioni()
{
    delete ui;
}

void CRegistrazioni::on_deDal_dateChanged(const QDate &date)
{
    setDateFilter();
}

void CRegistrazioni::on_deAl_dateChanged(const QDate &date)
{
    setDateFilter();
}

void CRegistrazioni::on_pbChiudi_clicked()
{
    if(QMessageBox::question(this,QApplication::applicationName(),"Uscire da Cimiapp2?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {
        QApplication::quit();
    }
}

void CRegistrazioni::on_pbNuovaRegistrazione_clicked()
{
    CNuovaRegistrazione *f=new CNuovaRegistrazione();
    f->show();
}
