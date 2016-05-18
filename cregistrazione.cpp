#include "cregistrazione.h"
#include "ui_cregistrazione.h"
#include "csqlrelationaltablemodel.h"
#include "cnuovarigaregistrazione.h"
#include <QSqlRelation>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QMessageBox>
#include <QDebug>
#include <QSqlError>

CRegistrazione::CRegistrazione(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CRegistrazione)
{
    ui->setupUi(this);
    setWindowModality(Qt::ApplicationModal);

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

    ui->dataliq->setDate(QDate::currentDate());

    QSqlQuery qRegistrazione(db);

    QString sql="SELECT codana,datareg,flag,data_liquidazione FROM registrazioni where ID=:id ";
    qRegistrazione.prepare(sql);
    qRegistrazione.bindValue(":id",pid);

    qRegistrazione.exec();
    qRegistrazione.first();

    int codana=qRegistrazione.value(0).toInt();
    QDate date=qRegistrazione.value(1).toDate();
    bool liq = qRegistrazione.value(2).toBool();
    QDate dateliq=qRegistrazione.value(3).toDate();


    qDebug()<< liq<<qRegistrazione.value(2).toString()<<qRegistrazione.value(3).toString();

    ui->dateEdit->setDate(date);
    ui->cbLiquidato->setChecked(liq);
    ui->dataliq->setDate(dateliq);

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
    ui->label_6->setVisible(liq);
    ui->dataliq->setVisible(liq);
    recordTotals();



   // connect(ui->tvDetails->,SIGNAL(),this,SLOT(recordTotals()));

}

void CRegistrazione::reload()
{
    modRighe->select();
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
    emit done();
    close();
}

void CRegistrazione::on_pushButton_3_clicked()
{
  CNuovaRigaRegistrazione *f =new CNuovaRigaRegistrazione();
  f->init(db,ID,0);
  f->show();
  connect(f,SIGNAL(nrdone()),this,SLOT(reload()));


}

void CRegistrazione::on_pushButton_clicked()
{


 //  modRegistrazione->submitAll();
 //  modRighe->submitAll();
    int l=ui->cbLiquidato->isChecked()? 1:0;
    qDebug()<<l;

    QSqlQuery q(db);

    QString sql="UPDATE registrazioni SET flag=:flag,data_liquidazione=:dataliq WHERE id=:id";
    q.prepare(sql);
    q.bindValue(":flag",l);
    q.bindValue(":id",ID);
    q.bindValue(":dataliq",ui->dataliq->isVisible()?ui->dataliq->date().toString("yyyy-MM-dd"): "NULL");
    q.exec();


    emit done();
    close();





}

void CRegistrazione::on_pushButton_4_clicked()
{
   if (QMessageBox::Ok==QMessageBox::question(this,QApplication::applicationName(),"Eliminare questa riga?\n(attenzione questa operazione è irreversibile)",QMessageBox::Ok|QMessageBox::Cancel))
  {
    modRighe->removeRow(ui->tvDetails->currentIndex().row());
    modRighe->submitAll();
    modRighe->select();
    ui->tvDetails->setModel(modRighe);
    recordTotals();
  }
}

void CRegistrazione::on_cbLiquidato_toggled(bool checked)
{
    ui->label_6->setVisible(checked);
    ui->dataliq->setVisible(checked);
}
