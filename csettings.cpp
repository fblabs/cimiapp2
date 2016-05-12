#include "csettings.h"
#include "ui_csettings.h"

#include <QSettings>
#include <QMessageBox>


CSettings::CSettings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CSettings)
{
    ui->setupUi(this);

   QSettings settings("CimiApp2");


   ui->leServer->setText(settings.value("server").toString());
   ui->lePort->setText(settings.value("port").toString());
   ui->leDatabase->setText(settings.value("database").toString());
   ui->leUsername->setText(settings.value("username").toString());
   ui->lePassword->setText (settings.value("password").toString());


}

CSettings::~CSettings()
{
    delete ui;
}

void CSettings::on_pushButton_clicked()
{
    QSettings settings ("CimiApp2");

    QString sUser = ui->leUsername->text();
    QString sServer = ui->leServer->text();
    QString sPort = ui->lePort->text();
    QString sDatabase = ui->leDatabase->text();
    QString sPassword = ui->lePassword->text();
//    QString sConnessione = ui->leConnessione->text();

    if(QMessageBox::Ok==QMessageBox::question(this,QApplication::applicationName(),"Salvare le impostazioni?",QMessageBox::Ok|QMessageBox::Cancel))
    {

    settings.setValue("database",sDatabase);
    settings.setValue("username", sUser);
    settings.setValue("server",sServer);
    settings.setValue("port", sPort.toInt());
    settings.setValue("password", sPassword);
//    settings.setValue("conn",sConnessione);

    QMessageBox::information(this,QApplication::applicationName(),"Impostazioni salvate",QMessageBox::Ok);
    }
}

void CSettings::on_pushButton_2_clicked()
{
    close();
}
