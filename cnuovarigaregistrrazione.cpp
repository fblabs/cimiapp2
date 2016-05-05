#include "cnuovarigaregistrrazione.h"
#include "ui_cnuovarigaregistrrazione.h"

#include <QSqlDatabase>

#include <QSqlTableModel>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QCompleter>
#include <QMessageBox>


CNuovaRigaRegistrrazione::CNuovaRigaRegistrrazione(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CNuovaRigaRegistrrazione)
{
    ui->setupUi(this);
}

void CNuovaRigaRegistrrazione::init(QSqlDatabase pdb)
{
    db=pdb;




    if(!db.isOpen())
    {
        close();
    }

    ui->lbEntrate->setVisible(false);
    ui->leEntrate->setVisible(false);
    ui->lbUscite->setVisible(true);
    ui->leUscite->setVisible(true);
    ui->leRichiesta->setText("");
    ui->leRichiesta->setVisible(true);
    ui->lbrichiesta->setVisible(true);
    ui->pbCalc->setVisible(true);

    modtipiope=new QSqlTableModel(0,db);

    modtipiope->setTable("tipi_ope");
    modtipiope->setSort(2,Qt::AscendingOrder);
    modtipiope->select();

    ui->cbTipoOpe->setModel(modtipiope);
    ui->cbTipoOpe->setModelColumn(2);

    QCompleter *comptipiope = new QCompleter(modtipiope);
    comptipiope->setCompletionColumn(2);
    comptipiope->setCompletionMode(QCompleter::PopupCompletion);
    comptipiope->setCaseSensitivity(Qt::CaseInsensitive);

    ui->cbTipoOpe->setCompleter(comptipiope);

    connect(ui->cbTipoOpe,SIGNAL(currentIndexChanged(int)),this,SLOT(setupUI()));

}

CNuovaRigaRegistrrazione::~CNuovaRigaRegistrrazione()
{
    delete ui;
}

void CNuovaRigaRegistrrazione::setupUI()
{

    QString segno = ui->cbTipoOpe->model()->index(ui->cbTipoOpe->currentIndex(),3).data(0).toString();
    QString tipo = ui->cbTipoOpe->model()->index(ui->cbTipoOpe->currentIndex(),1).data(0).toString();

    qDebug()<<"segno: "<<segno<<"tipo: "<<tipo;

    if (segno=="E")
    {
        ui->rbE->setChecked(true);
    }
    else
    {
        ui->rbU->setChecked(true);
    }

    if (tipo=="G" || tipo=="D")
    {
        ui->lbElementi->setVisible(true);
        ui->leElementi->setVisible(true);
        ui->leElementi->setText("");
    }
    else
    {
        ui->lbElementi->setVisible(false);
        ui->leElementi->setVisible(false);
        ui->leElementi->setText("");
    }

}

void CNuovaRigaRegistrrazione::on_rbE_toggled(bool checked)
{
    if (checked)
    {
        ui->lbEntrate->setVisible(true);
        ui->leEntrate->setVisible(true);
        ui->lbUscite->setVisible(false);
        ui->leUscite->setVisible(false);
        ui->leRichiesta->setText("");
        ui->lbrichiesta->setVisible(false);
        ui->leRichiesta->setVisible(false);
        ui->leUscite->setText("");
        ui->pbCalc->setVisible(false);

    }
    else
    {
        ui->lbEntrate->setVisible(false);
        ui->leEntrate->setVisible(false);
        ui->leEntrate->setText("");
        ui->lbUscite->setVisible(true);
        ui->leUscite->setVisible(true);
        ui->leRichiesta->setText("");
        ui->leRichiesta->setVisible(true);
        ui->lbrichiesta->setVisible(true);
        ui->pbCalc->setVisible(true);

    }
}

double CNuovaRigaRegistrrazione::calculate()
{
    double result;

    double percent=modtipiope->index(ui->cbTipoOpe->currentIndex(),4).data(0).toDouble();





    bool ok;
    double richiesta=ui->leRichiesta->text().toDouble(&ok);
    if (!ok)
    {
        ui->leRichiesta->setText("");
        QMessageBox::warning(this,QApplication::applicationName(),"Errore nel formato del numero inserito nel campo richesta! Verificare",QMessageBox::Ok);
    }

    result =richiesta*percent;



    return result;
}


void CNuovaRigaRegistrrazione::on_pbCalc_clicked()
{
    double liquidazione = calculate();
    ui->leUscite->setText(QString::number(liquidazione));
}

void CNuovaRigaRegistrrazione::on_pushButton_2_clicked()
{
    if (QMessageBox::Ok==QMessageBox::question(this,QApplication::applicationName(),"Chiudere?",QMessageBox::Ok|QMessageBox::Cancel))
    {
        close();
    }
}
