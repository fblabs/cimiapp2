#include "coperations.h"
#include "ui_coperations.h"
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QDate>
#include <QDebug>
#include <QSqlError>
#include "ctablemodel.h"
#include <QSqlRelation>
#include <QHeaderView>

COperations::COperations(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::COperations)
{
    ui->setupUi(this);

    ui->deAl->setDate(QDate::currentDate());
    ui->deDal->setDate(QDate::currentDate().addMonths(-8));

}

COperations::~COperations()
{
    delete ui;
}

void COperations::setDatabase(QSqlDatabase pdb)
{
    db=pdb;

    if (!db.isOpen())
    {
        close();
    }

    mod = new CTableModel();
    mod->setTable("registrazioni");
    mod->setSort(1,Qt::DescendingOrder);
    mod->setFilter("datareg between '" + ui->deDal->date().toString("yyyy-MM-dd") + "' AND '" +ui->deAl->date().toString("yyyy-MM-dd")+"'");
    mod->setRelation(2,QSqlRelation("anagrafica","ID","descrizione"));
    mod->setRelation(3,QSqlRelation("tipi_mov","ID","descrizione"));
    mod->setRelation(4,QSqlRelation("anagrafica","ID","descrizione"));
    mod->select();






    qDebug()<<mod->lastError().text()<<mod->query().lastQuery();



    ui->tvMain->setModel(mod);



    ui->tvMain->setColumnHidden(0,true);

   ui->tvMain->setColumnWidth(5,20);
   ui->tvMain->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);



    if (!db.isOpen())
    {
        close();
    }

}

void COperations::setFilter(QString fil)
{
    QString filter="flag > 0";
    QString datefilter =" and datareg between '" + ui->deDal->date().toString("yyyy-MM-dd") + "' AND '" +ui->deAl->date().toString("yyyy-MM-dd")+"'";

    QString CalculatedFilter = filter + datefilter;

    mod->setFilter(CalculatedFilter);


}

void COperations::on_deDal_dateChanged(const QDate &date)
{
    setFilter();
}

void COperations::on_deAl_dateChanged(const QDate &date)
{
    setFilter();
}
