#include "cregistrazione.h"
#include "ui_cregistrazione.h"
#include "crelationaltablemodel.h"
#include "cnuovarigaregistrazione.h"
#include <QSqlRelation>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>
#include <QSqlQuery>
#include <QSqlRecord>

#include <QDebug>
#include <QSqlError>

CRegistrazione::CRegistrazione(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CRegistrazione)
{
    ui->setupUi(this);

}

CRegistrazione::~CRegistrazione()
{
    delete ui;
}

void CRegistrazione::init(int pid,int tipomov, QSqlDatabase pdb)
{
    ID=pid;
    db=pdb;

    modRegistrazione=new QSqlRelationalTableModel(0,db);
    modRighe=new QSqlRelationalTableModel(0,db);

/*    CTableModel *mod=new CTableModel();*/
    QSqlTableModel *tipimod=new QSqlTableModel(0,db);
    tipimod->setTable("tipi_mov");
    tipimod->setSort(1,Qt::AscendingOrder);

    tipimod->select();
    ui->comboBox->setModel(tipimod);
    ui->comboBox->setModelColumn(1);

    modRighe= new QSqlRelationalTableModel();

    modRighe->setTable("righe_reg");
    modRighe->setFilter("righe_reg.ID="+QString::number(ID));
    modRighe->setSort(1,Qt::AscendingOrder);

    modRighe->setRelation(2,QSqlRelation("tipi_ope","ID","descrizione"));
    modRighe->select();

    //qDebug()<<mod->query().lastQuery()<<mod->lastError().text();
    qDebug()<<"tipomov: "<<tipomov;

    ui->tvDetails->setModel(modRighe);
    ui->tvDetails->setColumnHidden(0,true);

    QSqlQuery q(db);
    q.prepare("SELECT descrizione from tipi_mov where ID=:tipomov");
    q.bindValue(":tipomov",tipomov);
    q.exec();
    q.first();

    QString desc=q.value(0).toString();


    qDebug()<<"DESC:"<<desc;
    ui->comboBox->setCurrentIndex(ui->comboBox->findText(desc));

}

void CRegistrazione::on_pushButton_2_clicked()
{
    close();
}

void CRegistrazione::on_pushButton_3_clicked()
{
  CNuovaRigaRegistrazione *f =new CNuovaRigaRegistrazione();
  f->init(db,ID,0);
  f->show();
  modRighe->select();
}

void CRegistrazione::on_pushButton_clicked()
{


    QSqlRecord reg;
    QSqlRecord rig;

    reg=modRegistrazione->record();
    rig=modRighe->record();

}

void CRegistrazione::on_pushButton_4_clicked()
{
    QSqlTableModel *mod =static_cast<QSqlTableModel*>(ui->tvDetails->model());
    mod->removeRow(ui->tvDetails->currentIndex().row());
    mod->submit();
    mod->select();
}
