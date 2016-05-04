#include "cmainwindow.h"
#include "ui_cmainwindow.h"
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>

#include "coperations.h"

CMainWindow::CMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CMainWindow)
{
    ui->setupUi(this);

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
