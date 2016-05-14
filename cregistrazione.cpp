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

void CRegistrazione::init(int pid,int tipomov=20, QSqlDatabase pdb=QSqlDatabase())
{
    ID=pid;
    db=pdb;

    modRegistrazione=new QSqlRelationalTableModel(0,db);
    modRighe=new QSqlRelationalTableModel(0,db);

    QSqlQuery qRegistrazione(db);

    QString sql="SELECT codana,datareg FROM registrazioni where ID=:id ";
    qRegistrazione.prepare(sql);
    qRegistrazione.bindValue(":id",pid);

    qRegistrazione.exec();
    qRegistrazione.first();

    int codana=qRegistrazione.value(0).toInt();
    QDate date=qRegistrazione.value(1).toDate();


    //qDebug()<< date.toString()<<"codana: "<<codana;

    ui->dateEdit->setDate(date);

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

    qDebug()<<modRighe->rowCount()<<modRighe->columnCount();




    ui->tvDetails->setModel(modRighe);
    ui->tvDetails->setColumnHidden(0,true);

    ui->tvDetails->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    QSqlQuery q(db);
    q.prepare("SELECT descrizione from tipi_mov where ID=:tipomov");
    q.bindValue(":tipomov",tipomov);
    q.exec();
    q.first();

    QString desc=q.value(0).toString();



    ui->comboBox->setCurrentIndex(ui->comboBox->findText(desc));
    ui->tvDetails->setCurrentIndex(ui->tvDetails->model()->index(0,0));
    recordTotals();


   // connect(ui->tvDetails->,SIGNAL(),this,SLOT(recordTotals()));

}

void CRegistrazione::recordTotals()
{
    double dare,avere,totale;
    dare=0;
    avere=0;
    int righe=modRighe->rowCount();

    for (int x=0;x<righe;x++)
    {
       avere+=modRighe->index(x,4).data(Qt::DisplayRole).toDouble();
       dare+=modRighe->index(x,5).data(Qt::DisplayRole).toDouble();
       qDebug()<<dare<<avere;

    }



   totale=avere - dare;

    ui->lbTotaleAvere->setText(QString::number(avere,'f',2));
    ui->lbTotaleDare->setText(QString::number(dare,'f',2));
    ui->lbTotaleRegistrazione->setText(QString::number(totale,'f',2));


}

void CRegistrazione::on_pushButton_2_clicked()
{
    emit closing();
    close();
}

void CRegistrazione::on_pushButton_3_clicked()
{
  CNuovaRigaRegistrazione *f =new CNuovaRigaRegistrazione();
  f->init(db,ID,0);
  f->show();
  connect(f,SIGNAL(nrdone()),this,SLOT(recordTotals()));
  modRighe->select();
  ui->tvDetails->setModel(modRighe);

}

void CRegistrazione::on_pushButton_clicked()
{


    modRighe->select();
    recordTotals();

}

void CRegistrazione::on_pushButton_4_clicked()
{
 //  QSqlTableModel *mod =static_cast<QSqlTableModel*>(ui->tvDetails->model());
    modRighe->removeRow(ui->tvDetails->currentIndex().row());
    modRighe->submitAll();
    modRighe->select();
    ui->tvDetails->setModel(modRighe);
    recordTotals();
}
