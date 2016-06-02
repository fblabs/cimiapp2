#include "cnuovaregistrazione.h"
#include "ui_cnuovaregistrazione.h"
#include "cnuovariga.h"
#include <QDate>

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
 #include <QDebug>

#include <QSqlRelation>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>
#include <QSqlRecord>
#include <QSqlField>
#include <QCompleter>
#include <QSqlRelation>


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
    ui->cbCpSottogruppo->setCurrentIndex(1);

    ui->cbTipoRegistrazione->setCurrentIndex(ui->cbTipoRegistrazione->findText("RIMB.SPESE DIPENDENTI"));

    QCompleter *compConti = new QCompleter(modconti);
    compConti->setCaseSensitivity(Qt::CaseInsensitive);
    compConti->setCompletionMode(QCompleter::PopupCompletion);
    compConti->setCompletionColumn(2);
    ui->cbConto->setCompleter(compConti);

    QCompleter *compContro = new QCompleter(modContropartite);
    compContro->setCaseSensitivity(Qt::CaseInsensitive);
    compContro->setCompletionMode(QCompleter::PopupCompletion);
    compContro->setCompletionColumn(2);
    ui->cbContropartita->setCompleter(compContro);



    ui->cbContropartita->setCurrentIndex(ui->cbContropartita->findText("BANCA CA.RI.GE"));

    registrazionimod=new QSqlTableModel(0,db);
    registrazionimod->setTable("registrazioni");
    registrazionimod->select();
    registrazionimod->setEditStrategy(QSqlTableModel::OnManualSubmit);

    righemod=new QSqlRelationalTableModel(0,db);
    righemod->setTable("righe_reg");
    righemod->select();
    righemod->setRelation(0,QSqlRelation("registrazioni","ID","ID"));
    righemod->setFilter("ID="+QString::number(-1));

    ui->tvDetails->setModel(righemod);


}

bool CNuovaRegistrazione::saveNewRegistration()
{




    db.commit();

    return true;

}

void  CNuovaRegistrazione::filterConto()
{
   QString filter="tipo='"+ui->cbSottogruppo->currentText()+"'";
   static_cast<QSqlTableModel*>( ui->cbConto->model())->setFilter(filter);
   //qDebug()<<"Conto:"<<filter;
   ui->cbConto->setCurrentIndex(0);

}

void  CNuovaRegistrazione::filterContropartita()
{
    QString filter="tipo='"+ui->cbCpSottogruppo->currentText()+"'";
    static_cast<QSqlTableModel*>( ui->cbContropartita->model())->setFilter(filter);
   // qDebug()<<"Contropartita:"<<filter;
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
        //emit done();
        close();
    }
}

void CNuovaRegistrazione::on_pushButton_clicked()
{


    CNuovaRiga *f= new CNuovaRiga();


    qDebug()<<"nuovaregistrazione"<<nReg;

    //TEMP========
    //
    f->init(db,nReg,righemod=0,ui->cbConto->currentText());

    connect (f,SIGNAL(rowAdded()),this,SLOT(reload()));
    connect (f,SIGNAL(rowDeleted()),this,SLOT(reload()));


    f->show();

}

void CNuovaRegistrazione::reload()
{
    registrazionimod->select();
}

void CNuovaRegistrazione::on_pushButton_3_clicked()
{
    saveNewRegistration();
    db.commit();
    //reload();
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
}



void CNuovaRegistrazione::on_pushButton_5_clicked()
{
    if(QMessageBox::warning(this,QApplication::applicationName(),"Confermare la creazione di un registrazione per conto e tipo selezionati?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
{

    bool  b=createNewRegistrazione();

   if(b)
   {
       CNuovaRiga *f=new CNuovaRiga();
       f->init(db,nReg,0,ui->cbConto->currentText());
       connect (f,SIGNAL(rowAdded()),this,SLOT(reload()));
       f->show();
   }
}


    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
}

bool CNuovaRegistrazione::createNewRegistrazione()
{


   QSqlQuery q(db);
   QString sql;

   sql="INSERT INTO cimidb.registrazioni(datareg,codana,tipo_mov,codcp,flag) VALUES (:data,:codana,:tipo,:codcp,:flag)";
   q.prepare(sql);
   q.bindValue(":datareg",ui->deDataReg->date().toString("yyyy-MM-dd"));
   q.bindValue(":codana",ui->cbConto->model()->index(ui->cbConto->currentIndex(),0).data(0).toInt());
   q.bindValue(":tipo",ui->cbTipoRegistrazione->model()->index(ui->cbTipoRegistrazione->currentIndex(),0).data(0).toInt());
   q.bindValue(":codcp",ui->cbContropartita->model()->index(ui->cbContropartita->currentIndex(),0).data(0).toInt());
   q.bindValue(":flag",0);

   q.exec();
   q.first();

   nReg = q.lastInsertId().toInt();
   qDebug()<<"NR"<<nReg<<q.lastError()<<q.lastQuery();

   bool b = false;

   return b;

}


void CNuovaRegistrazione::on_pushButton_6_clicked()
{
    db.rollback();
}

void CNuovaRegistrazione::on_cbTipoRegistrazione_currentIndexChanged(int index)
{
    ui->cbxRimborso->setChecked(false);
}
