#include "cnuovaregistrazione.h"
#include "ui_cnuovaregistrazione.h"
#include "cnuovarigaregistrazione.h"
#include <QDate>

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
// #include <QDebug>

#include <QSqlRelation>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>
#include <QSqlRecord>
#include <QSqlField>
#include <QCompleter>


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
    registrazionimod->setTable("righe_reg");
    registrazionimod->select();
    registrazionimod->setFilter("ID="+QString::number(-1));

    ui->tvDetails->setModel(registrazionimod);


}

bool CNuovaRegistrazione::saveNewRegistration()
{
    db.transaction();
    registrazionimod=new QSqlTableModel(0,db);
    registrazionimod->setTable("registrazioni");


    if(registrazionimod->submit())
    {
      //  QMessageBox::information(this,"OK","SIII",QMessageBox::Ok)
        CNuovaRigaRegistrazione *f =new CNuovaRigaRegistrazione();
    //    f->init(db,-1);
        f->init(db,-1,0);
        f->show();


      //  db.commit();
    }
    else
    {
        db.rollback();
        QMessageBox::information(this,"NO","NOOO",QMessageBox::Ok);

    }

    registrazionimod->select();



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
        emit done();
        close();
    }
}

void CNuovaRegistrazione::on_pushButton_clicked()
{
    CNuovaRigaRegistrazione *f= new CNuovaRigaRegistrazione();

    nReg = registrazionimod->index(registrazionimod->rowCount(),0).data(0).toInt();
    //qDebug()<<nReg;

    //TEMP========
    //
    f->init(db,nReg,righemod=0);
    connect(f,SIGNAL(nrdone()),this,SLOT(reload()));

    f->show();

}

void CNuovaRegistrazione::on_pushButton_3_clicked()
{
    saveNewRegistration();
    reload();
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
}

void CNuovaRegistrazione::reload()
{
    righemod->select();
}

void CNuovaRegistrazione::on_pushButton_5_clicked()
{
   if(QMessageBox::warning(this,QApplication::applicationName(),"Confermare la creazione di un registrazione per conto e tipo selezionati?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)

    createNewRegistrazione();
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
}

bool CNuovaRegistrazione::createNewRegistrazione()
{
    db.transaction();
    registrazionimod=new QSqlTableModel(0,db);
    righemod=new QSqlTableModel(0,db);

    registrazionimod->setTable("registrazioni");
    registrazionimod->select();

    righemod->setTable("righe_reg");
    righemod->select();

    QSqlRecord rec = registrazionimod->record();

    rec.setValue(0,QVariant(-1));
    rec.setValue(1,QVariant(QDate::currentDate().toString("yyyy-MM-dd")));
    rec.setValue(2,static_cast<QSqlTableModel*>(ui->cbConto->model())->index(ui->cbConto->currentIndex(),0).data(0));
    rec.setValue(3,static_cast<QSqlTableModel*>(ui->cbTipoRegistrazione->model())->index(ui->cbTipoRegistrazione->currentIndex(),0).data(0));
    rec.setValue(4,static_cast<QSqlTableModel*>(ui->cbContropartita->model())->index(ui->cbContropartita->currentIndex(),0).data(0));
    bool flag=ui->checkBox->isChecked();
    rec.setValue(5,QVariant(flag));
    rec.setValue(6,QVariant());
    rec.setValue(7,QVariant());
    rec.setValue(8,QVariant(ui->ptNote->toPlainText()));


    registrazionimod->insertRecord(registrazionimod->rowCount(),rec);
    //qDebug()<<"rowcount registrazioni: before submit "<<registrazionimod->rowCount();

    registrazionimod->select();
    //qDebug()<<"rowcount registrazioni: after submit "<<registrazionimod->rowCount();

    if(registrazionimod->submit())
    {
        int nReg=registrazionimod->index(registrazionimod->rowCount()-1,0).data(0).toInt();
        CNuovaRigaRegistrazione *f=new CNuovaRigaRegistrazione();
        f->init(db,nReg,righemod);
        connect(f,SIGNAL(nrdone()),this,SLOT(reload()));
        f->show();
    }
    db.commit();


    return false;
}
