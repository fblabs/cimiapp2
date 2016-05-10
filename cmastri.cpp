#include "cmastri.h"
#include "ui_cmastri.h"

#include <QDebug>
#include <QSqlError>

#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QSqlQuery>


CMastri::CMastri(QWidget *parent,QSqlDatabase pdb) :
    QWidget(parent),
    ui(new Ui::CMastri)
{
    ui->setupUi(this);

    db=pdb;

    mod=new QSqlQueryModel();

    contimod=new QSqlTableModel(0,db);

    contimod->setTable("anagrafica");
    contimod->setSort(2,Qt::AscendingOrder);
    contimod->select();
    ui->cbConti->setModel(contimod);
    ui->cbConti->setModelColumn(2);

    connect(ui->cbConti,SIGNAL(currentIndexChanged(int)),this,SLOT(getMastro()));


   }

CMastri::~CMastri()
{
    delete ui;
}

/*void CMastri::on_lineEdit_textChanged(const QString &arg1)
{

    contimod->setFilter("descrizione LIKE '" + arg1 +"%'");


}*/

void CMastri::getMastro()
{
 //   QString sql="SELECT ID,codana,codcp,tipo_mov,(SELECT SUM(righe_reg.entrate) from righe_reg where righe_reg.ID=registrazioni.ID) as Entrate,(SELECT SUM(righe_reg.uscite) from righe_reg where righe_reg.ID=registrazioni.ID) as Uscite from registrazioni where codana=:pid";
    QString sql="SELECT registrazioni.ID as ID,(SELECT anagrafica.descrizione from anagrafica where ID=:pid) as Conto,anagrafica.descrizione as Contropartita,(select descrizione from tipi_mov where tipi_mov.ID=tipo_mov) as Tipo ,(SELECT SUM(righe_reg.entrate) from righe_reg where righe_reg.ID=registrazioni.ID) as Entrate,(SELECT SUM(righe_reg.uscite) from righe_reg where righe_reg.ID=registrazioni.ID) as Uscite from registrazioni,anagrafica where anagrafica.ID=registrazioni.codcp and registrazioni.codana=:pid";

    int pid=contimod->index(ui->cbConti->currentIndex(),0).data(0).toInt();
    QSqlQuery q(db);
    q.prepare(sql);
    q.bindValue(":pid",pid);

    q.exec();
    qDebug()<<q.lastError().text();

    mod->setQuery(q);

    ui->tvMastro->setModel(mod);

    ui->tvMastro->setColumnHidden(0,true);
    ui->tvMastro->setColumnHidden(1,true);

    ui->tvMastro->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);


}


void CMastri::on_pushButton_clicked()
{
    close();
}
