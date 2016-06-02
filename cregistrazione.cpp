#include "cregistrazione.h"
#include "ui_cregistrazione.h"
#include "csqlrelationaltablemodel.h"
#include "cnuovariga.h"
#include <QSqlRelation>
#include <QSqlTableModel>
#include <QSqlQueryModel>
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

void CRegistrazione::init(int pid, int tipomov=20, QString conto="", QSqlDatabase pdb=QSqlDatabase())
{
    ID=pid;
    db=pdb;
    QString sconto=conto;

    ui->leConto->setText(conto);

    modRegistrazione=new QSqlQueryModel();
    QSqlQuery q(db);
    QString sql="SELECT * FROM registrazioni WHERE ID=:id";
    q.prepare(sql);
    q.bindValue(":id",ID);

    q.exec();
    modRegistrazione->setQuery(q);


    ui->dataliq->setDate(QDate::currentDate());

    QSqlTableModel *tipimod=new QSqlTableModel(0,db);
    tipimod->setTable("tipi_mov");
    tipimod->setSort(1,Qt::AscendingOrder);
    tipimod->select();
    ui->comboBox->setModel(tipimod);
    ui->comboBox->setModelColumn(1);


    modRighe= new QSqlRelationalTableModel(0,db);
    modRighe->setTable("righe_reg");
    modRighe->setSort(1,Qt::AscendingOrder);
  //  modRighe->setRelation(0,QSqlRelation("registrazioni","ID","ID"));
  //  modRighe->setRelation(2,QSqlRelation("tipi_ope","ID","descrizione"));
    modRighe->setFilter("ID="+QString::number(ID));

    modRighe->select();

    qDebug()<<modRighe->filter()<<modRighe->lastError();


    ui->tvDetails->setModel(modRighe);
  //  ui->tvDetails->setColumnHidden(0,true);

    ui->tvDetails->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    QSqlQuery d(db);
    d.prepare("SELECT descrizione from tipi_mov where ID=:tipomov");
    d.bindValue(":tipomov",tipomov);
    d.exec();
    d.first();

    QString desc=d.value(0).toString();
    ui->deData->setDate(modRegistrazione->index(0,1).data(0).toDate());



    ui->comboBox->setCurrentIndex(ui->comboBox->findText(desc));
    ui->tvDetails->setCurrentIndex(ui->tvDetails->model()->index(0,0));
//    ui->label_6->setVisible(liq);
//    ui->dataliq->setVisible(liq);
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

    }



   totale=avere - dare;

    ui->lbTotaleAvere->setText(QString::number(avere,'f',2));
    ui->lbTotaleDare->setText(QString::number(dare,'f',2));
    ui->lbTotaleRegistrazione->setText(QString::number(qAbs(totale),'f',2));


}

void CRegistrazione::on_pushButton_2_clicked()
{
   // emit closing();
   // emit done();
    close();
}

void CRegistrazione::on_pushButton_3_clicked()
{
  db.transaction();
  CNuovaRiga *f =new CNuovaRiga();
  f->init(db,ID,0,ui->leConto->text());
  f->show();
  connect(f,SIGNAL(rowAdded()),this,SLOT(reload()));
  connect(f,SIGNAL(rowAdded()),this,SLOT(reload()));
  connect(f,SIGNAL(rowAdded()),this,SLOT(recordTotals()));


}

void CRegistrazione::reload()
{
   // modRegistrazione->select();
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
  db.transaction();
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

void CRegistrazione::on_pushButton_5_clicked()
{
    db.rollback();
    emit done();
    reload();
}
