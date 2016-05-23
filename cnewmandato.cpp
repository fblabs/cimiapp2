#include "cnewmandato.h"
#include "ui_cnewmandato.h"
#include <QMessageBox>

CNewMandato::CNewMandato(QWidget *parent, QSqlDatabase pdb) :
    QWidget(parent),
    ui(new Ui::CNewMandato)
{
    ui->setupUi(this);


    db = pdb;
}

CNewMandato::~CNewMandato()
{
    delete ui;
}

void CNewMandato::on_pushButton_clicked()
{
    if(QMessageBox::Ok==QMessageBox::question(this,QApplication::applicationName(),"Chiudere la finestra?",QMessageBox::Ok|QMessageBox::Cancel))
    {
        close();
    }
}
