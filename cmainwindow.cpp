#include "cmainwindow.h"
#include "ui_cmainwindow.h"
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>

#include "coperations.h"
#include "cnuovaregistrazione.h"
#include "cconti.h"
#include "ctipianagrafici.h"
#include "cmastri.h"

CMainWindow::CMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CMainWindow)
{
    ui->setupUi(this);
    showMaximized();

   db = QSqlDatabase::addDatabase("QMYSQL");

    db.setDatabaseName("cimidb");
    db.setHostName("192.168.1.34");
    db.setUserName("root");
    db.setPassword("mysql50pwd");
    db.setPort(3306);

    if (db.open())
    {
        setWindowTitle("CONNESSO");
    }
    else
    {
        setWindowTitle("MA NOOO!!!");
        QMessageBox::information(this,QApplication::applicationName(),"ERORE:\n"+db.lastError().text(),QMessageBox::Ok);

    }



}

CMainWindow::~CMainWindow()
{
    delete ui;
}

void CMainWindow::on_pBOperazioni_clicked()
{
    COperations *f =new COperations();

    f->init(db);

    f->show();
}

void CMainWindow::on_pushButton_clicked()
{
    if(QMessageBox::Ok==QMessageBox::question(this,QApplication::applicationName(),"Chiudere?",QMessageBox::Ok|QMessageBox::Cancel))
    {
    QApplication::quit();
    }
}

void CMainWindow::on_pushButton_4_clicked()
{
    CNuovaRegistrazione *f = new CNuovaRegistrazione();
    f->init(db);
    f->show();
}

void CMainWindow::on_pbConti_clicked()
{
    CConti *f=new CConti(0,db);
    f->show();
}

void CMainWindow::on_pushButton_5_clicked()
{
    CTipiAnagrafici *f=new CTipiAnagrafici(0,db);

    f->show();
}

void CMainWindow::on_pushButton_3_clicked()
{
    CMastri *f = new CMastri(0,db);
    f->show();
}
