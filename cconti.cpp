#include "cconti.h"
#include "ui_cconti.h"
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QSqlRecord>

CConti::CConti(QWidget *parent,QSqlDatabase pdb) :
    QWidget(parent),
    ui(new Ui::CConti)
{
    ui->setupUi(this);

    db=pdb;

    QSqlTableModel *modtipi=new QSqlTableModel(0,db);
    modtipi->setTable("tipi_ana");
    modtipi->select();

    ui->cbTipo->setModel(modtipi);
    ui->cbTipo->setModelColumn(0);

    mod=new QSqlTableModel(0,db);

    mod->setTable("anagrafica");
    mod->setEditStrategy(QSqlTableModel::OnManualSubmit);
    mod->setSort(2,Qt::AscendingOrder);

    mod->select();

    map=new QDataWidgetMapper();
    map->setModel(mod);

    map->addMapping(ui->leId,0);
    map->addMapping(ui->cbTipo,3);

    map->addMapping(ui->leDescrizione,2);
    map->addMapping(ui->leCategoria,1);
    map->addMapping(ui->ptIndirizzo,4);
    map->addMapping(ui->leCitta,5);
    map->addMapping(ui->leCap,6);
    map->addMapping(ui->leProv,7);
    map->addMapping(ui->letel,8);
    map->addMapping(ui->ptRecapito,9);
    map->addMapping(ui->leCodiceFiscale,10);
    map->addMapping(ui->cbSex,11);
    map->addMapping(ui->leIban,12);
    map->addMapping(ui->ptNote,13);






    map->toFirst();

    ui->lvAnagrafica->setModel(mod);
    ui->lvAnagrafica->setModelColumn(2);



    connect(ui->lvAnagrafica->selectionModel(),SIGNAL(currentRowChanged(QModelIndex,QModelIndex)),map,SLOT(setCurrentModelIndex(QModelIndex)));

}

CConti::~CConti()
{
    delete ui;
}

void CConti::on_pbClose_clicked()
{
    close();
}

void CConti::on_lineEdit_textChanged(const QString &arg1)
{
    mod->setFilter("descrizione like '" + arg1 +"%'");
}

void CConti::on_pbSave_clicked()
{
    if (QMessageBox::Ok==QMessageBox::question(this,QApplication::applicationName(),"Salvare le modifiche?",QMessageBox::Ok|QMessageBox::Cancel))
    {
        mod->submitAll();

    }

        mod->select();

}

void CConti::on_pushButton_clicked()
{
    QSqlRecord rec=mod->record();
    QModelIndex index=mod->index(mod->rowCount()-1,2);
    mod->insertRecord(index.row(),rec);
    if(index.isValid())
      ui->lvAnagrafica->selectionModel()->setCurrentIndex(index,QItemSelectionModel::Select);

}
