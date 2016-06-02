#include "cnuovariga.h"
#include "ui_cnuovariga.h"

#include <QSqlDatabase>

#include <QSqlTableModel>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QCompleter>
#include <QMessageBox>
#include <QSqlRelationalTableModel>


CNuovaRiga::CNuovaRiga(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CNuovaRiga)
{
    ui->setupUi(this);
}

void CNuovaRiga::init(QSqlDatabase pdb, int pid, QSqlRelationalTableModel *pRows, QString dest)
{
    db=pdb;
    idRegistrazione=pid;
    ui->leConto->setText(dest);

    qDebug()<<"id = "+ QString::number(idRegistrazione);


    if (pRows)
    {
    modrighe=pRows;
    }
    else
    {
        modrighe=new QSqlRelationalTableModel(0,db);
        modrighe->setTable("righe_reg");
        modrighe->setRelation(0,QSqlRelation("registrazioni","ID","ID"));
        modrighe->setFilter ("ID="+ QString::number(idRegistrazione));
        modrighe->select();

    }

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
    ui->cbTipoOpe->setCurrentIndex(-1);

    QCompleter *comptipiope = new QCompleter(modtipiope);
    comptipiope->setCompletionColumn(2);
    comptipiope->setCompletionMode(QCompleter::PopupCompletion);
    comptipiope->setCaseSensitivity(Qt::CaseInsensitive);

    ui->cbTipoOpe->setCompleter(comptipiope);

    connect(ui->cbTipoOpe,SIGNAL(currentIndexChanged(int)),this,SLOT(setupUI()));

}

CNuovaRiga::~CNuovaRiga()
{
    delete ui;
}

void CNuovaRiga::setupUI()
{

    QString segno = ui->cbTipoOpe->model()->index(ui->cbTipoOpe->currentIndex(),3).data(0).toString();
    QString tipo = ui->cbTipoOpe->model()->index(ui->cbTipoOpe->currentIndex(),1).data(0).toString();
    QString massimale=ui->cbTipoOpe->model()->index(ui->cbTipoOpe->currentIndex(),5).data(0).toString();
    double liquidazione=ui->cbTipoOpe->model()->index(ui->cbTipoOpe->currentIndex(),4).data(0).toDouble();

    ui->leMassimale->setText(QString::number(liquidazione*100)+"%");

    //qDebug()<<"segno: "<<segno<<"tipo: "<<tipo;

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
        ui->leElementi->setText("1");
    }
    else
    {
        ui->lbElementi->setVisible(false);
        ui->leElementi->setVisible(false);
        ui->leElementi->setText("1");
    }

}

void CNuovaRiga::on_rbE_toggled(bool checked)
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

double CNuovaRiga::calculate()
{
    QString segno = ui->cbTipoOpe->model()->index(ui->cbTipoOpe->currentIndex(),3).data(0).toString();
    QString tipo = ui->cbTipoOpe->model()->index(ui->cbTipoOpe->currentIndex(),1).data(0).toString();
    double liq;

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
      //  ui->leElementi->setText("1");
        liq = calculateDays();
    }
    else
    {
        ui->lbElementi->setVisible(false);
        ui->leElementi->setVisible(false);
       // ui->leElementi->setText("1");
        liq =calculateNoDays();
    }
    return liq;
}

double CNuovaRiga::calculateNoDays()
{
    double liquidazione;
    double massimale;
    double percent;
    double richiesta;

    bool ok;

    percent=modtipiope->index(ui->cbTipoOpe->currentIndex(),4).data(0).toDouble();
    richiesta=ui->leRichiesta->text().toDouble(&ok);
    if (!ok)
    {
        ui->leRichiesta->setText("0.0");
        QMessageBox::warning(this,QApplication::applicationName(),"Errore nel formato del numero inserito nel campo Richiesta! Verificare",QMessageBox::Ok);
    }
    massimale=modtipiope->index(ui->cbTipoOpe->currentIndex(),5).data(0).toDouble();



    liquidazione=richiesta*percent;
    if (liquidazione > massimale)
    {
        liquidazione= massimale;
    }




    return liquidazione;
}

double CNuovaRiga::calculateDays()
{

    int elementi=1;
    double richiesta;
    double richiestaElemento;
    double percent;
    double massimaleRegistrazione;
    double massimaleElemento;
    double massimale;

    double liquidazioneElemento;
    double liquidazione;

    bool eok=true;
    bool ok;


//richiesta
    richiesta=ui->leRichiesta->text().toDouble(&ok);
    if (!ok)
     {
         ui->leRichiesta->setText("0.0");
         QMessageBox::warning(this,QApplication::applicationName(),"Errore nel formato del numero inserito nel campo Richiesta! Verificare",QMessageBox::Ok);
     }
//percentuale
    percent=modtipiope->index(ui->cbTipoOpe->currentIndex(),4).data(0).toDouble();
//elementi
    elementi=ui->leElementi->text().toInt(&eok);
    if (!eok)
    {
        ui->leElementi->setText("1");
        QMessageBox::warning(this,QApplication::applicationName(),"Errore nel formato del numero inserito nel campo Elementi! Verificare",QMessageBox::Ok);
    }

//il massimo per registrazione è 50% richiesta
    massimale=richiesta * percent;
 //il massimale è il massimale per singolo elemento
    massimaleElemento = modtipiope->index(ui->cbTipoOpe->currentIndex(),5).data(Qt::DisplayRole).toDouble();
// per il singolo elemento la richiesta è:
    richiestaElemento=richiesta / elementi;

    liquidazioneElemento=richiestaElemento * percent;

    liquidazione=liquidazioneElemento * elementi;

    if(liquidazione>massimale)
    {
        liquidazione=massimale;
    }



    return liquidazione;
}

void CNuovaRiga::on_pbCalc_clicked()
{
    double liquidazione = calculate();
    ui->leUscite->setText(QString::number(liquidazione));
}

void CNuovaRiga::on_pushButton_2_clicked()
{
    if (QMessageBox::Ok==QMessageBox::question(this,QApplication::applicationName(),"Chiudere?",QMessageBox::Ok|QMessageBox::Cancel))
    {
        close();
    }
}

void CNuovaRiga::on_pushButton_clicked()
{
    QSqlQuery q(db);
    QString sql;
    double richiesta;//temp
    double entrate;
    double uscite;

    if (ui->rbE->isChecked())
    {
        entrate= 0.0;
        richiesta=0.0;
        uscite=0.0;

    }
    else
    {
        entrate=0.0;
        richiesta=ui->leRichiesta->text().toDouble();
        uscite=ui->leUscite->text().toDouble();
    }

    sql="SELECT COUNT(riga) FROM righe_reg where ID=:ID";
    q.prepare(sql);
    q.bindValue(":ID",idRegistrazione);
    q.exec();
    q.first();
    int riga=q.value(0).toInt()+1;
    riga++;


    sql= "INSERT INTO `cimidb`.`righe_reg`(`ID`,`riga`,`tipo_ope`,`richiesta`,`entrate`,`uscite`,`note`)VALUES  (:ID,:riga,:tipo_ope,:richiesta,:entrate,:uscite,:note);";
    q.prepare(sql);


    q.bindValue(":ID",idRegistrazione);
    q.bindValue(":riga",riga);//TODO vedere come incrementare il numero di riga
    q.bindValue(":tipo_ope",ui->cbTipoOpe->model()->index(ui->cbTipoOpe->currentIndex(),0).data(0).toInt());
    q.bindValue(":richiesta",richiesta);
    q.bindValue(":entrate",entrate);
    q.bindValue(":uscite",uscite);
    q.bindValue(":note",ui->ptNote->toPlainText());

    bool b=q.exec();

   if(b)
   {
       emit rowAdded();
       close();
     //  resetForm();

   }
   else
   {
       QMessageBox::warning(this,QApplication::applicationName(),"ERRORE salvando la riga\n"+q.lastError().text(),QMessageBox::Ok);

   }

   modrighe->select();

}

void CNuovaRiga::resetForm()
{

    ui->cbTipoOpe->setCurrentIndex(0);
    ui->ptNote->setPlainText("");


}


