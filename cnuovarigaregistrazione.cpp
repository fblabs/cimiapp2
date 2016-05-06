#include "cnuovarigaregistrazione.h"
#include "ui_cnuovarigaregistrazione.h"

#include <QSqlDatabase>

#include <QSqlTableModel>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QCompleter>
#include <QMessageBox>


CNuovaRigaRegistrazione::CNuovaRigaRegistrazione(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CNuovaRigaRegistrazione)
{
    ui->setupUi(this);
}

void CNuovaRigaRegistrazione::init(QSqlDatabase pdb, int pid)
{
    db=pdb;
    idRegistrazione=pid;




    if(!db.isOpen())
    {
        close();
    }

    ui->lbEntrate->setVisible(false);
    ui->leEntrate->setVisible(false);
    ui->lbUscite->setVisible(true);
    ui->leUscite->setVisible(true);
    ui->leRichiesta->setText("0");
    ui->leRichiesta->setVisible(true);
    ui->lbrichiesta->setVisible(true);
    ui->pbCalc->setVisible(true);
    ui->leElementi->setText("0.0");

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

CNuovaRigaRegistrazione::~CNuovaRigaRegistrazione()
{
    delete ui;
}

void CNuovaRigaRegistrazione::setupUI()
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
        ui->leElementi->setText("0.0");
    }
    else
    {
        ui->lbElementi->setVisible(false);
        ui->leElementi->setVisible(false);
        ui->leElementi->setText("0.0");
    }

}

void CNuovaRigaRegistrazione::on_rbE_toggled(bool checked)
{
    if (checked)
    {
        ui->lbEntrate->setVisible(true);
        ui->leEntrate->setVisible(true);
        ui->lbUscite->setVisible(false);
        ui->leUscite->setVisible(false);
        ui->leRichiesta->setText("0.0");
        ui->lbrichiesta->setVisible(false);
        ui->leRichiesta->setVisible(false);
        ui->leUscite->setText("0.0");
        ui->pbCalc->setVisible(false);

    }
    else
    {
        ui->lbEntrate->setVisible(false);
        ui->leEntrate->setVisible(false);
        ui->leEntrate->setText("0.0");
        ui->lbUscite->setVisible(true);
        ui->leUscite->setVisible(true);
        ui->leRichiesta->setText("0.0");
        ui->leRichiesta->setVisible(true);
        ui->lbrichiesta->setVisible(true);
        ui->pbCalc->setVisible(true);

    }
}

double CNuovaRigaRegistrazione::calculate()
{
    double result;
    int elementi;
    double richiesta;

    bool eok=true;
    bool ok;

    if(ui->leElementi->isVisible())
    {
            elementi=ui->leElementi->text().toInt(&eok);
    }
    if(ui->leRichiesta->isVisible())
    {
            richiesta=ui->leRichiesta->text().toDouble(&ok);
    }

    double percent=modtipiope->index(ui->cbTipoOpe->currentIndex(),4).data(0).toDouble();

    richiesta=ui->leRichiesta->text().toDouble(&ok);

    if (!ok)
    {
        ui->leRichiesta->setText("");
        QMessageBox::warning(this,QApplication::applicationName(),"Errore nel formato del numero inserito nel campo Richiesta! Verificare",QMessageBox::Ok);
    }
    if (!eok)
    {
        ui->leElementi->setText("");
        QMessageBox::warning(this,QApplication::applicationName(),"Errore nel formato del numero inserito nel campo Elementi! Verificare",QMessageBox::Ok);
    }


    result =richiesta*percent;



    return result;
}


void CNuovaRigaRegistrazione::on_pbCalc_clicked()
{
    double liquidazione = calculate();
    ui->leUscite->setText(QString::number(liquidazione));
}

void CNuovaRigaRegistrazione::on_pushButton_2_clicked()
{
    if (QMessageBox::Ok==QMessageBox::question(this,QApplication::applicationName(),"Chiudere?",QMessageBox::Ok|QMessageBox::Cancel))
    {
        close();
    }
}

void CNuovaRigaRegistrazione::on_pushButton_clicked()
{
    QSqlQuery q(db);
    QString sql;
    double richiesta=125.2;//temp
    double entrate;
    double uscite;
    if (ui->rbE->isChecked())
    {
        entrate= 12.0;
        richiesta=0.0;
        uscite=0.0;

    }
    else
    {
        entrate=0.0;
        richiesta=741.0;
        uscite=234.234;
    }

    sql= "INSERT INTO `cimidb`.`righe_reg`(`ID`,`riga`,`tipo_ope`,`richiesta`,`entrate`,`uscite`,`note`)VALUES  (:ID,:riga,:tipo_ope,:richiesta,:entrate,:uscite,:note);";
    q.prepare(sql);


    q.bindValue(":ID",idRegistrazione);
    int riga=11;
    q.bindValue(":riga",riga);//TODO vedere come incrementare il numero di riga
    q.bindValue(":tipo_ope",ui->cbTipoOpe->model()->index(ui->cbTipoOpe->currentIndex(),0).data(0).toInt());
    q.bindValue(":richiesta",richiesta);
    q.bindValue(":entrate",entrate);
    q.bindValue(":uscite",uscite);
    q.bindValue(":note",ui->ptNote->toPlainText());

   if(q.exec())
   {
      // close();
       resetForm();

   }
   else
   {
       QMessageBox::warning(this,QApplication::applicationName(),"ERRORE salvando la riga\n"+q.lastError().text(),QMessageBox::Ok);

   }

}

void CNuovaRigaRegistrazione::resetForm()
{

    ui->cbTipoOpe->setCurrentIndex(0);
    ui->ptNote->setPlainText("");


}
