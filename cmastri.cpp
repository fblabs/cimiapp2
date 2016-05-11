#include "cmastri.h"
#include "ui_cmastri.h"
#include "cregistrazione.h"

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

 /*   QSqlQueryModel *catmod =new QSqlQueryModel();
    QSqlQuery qcat(db);
    qcat.exec("SELECT DISTINCT categoria FROM anagrafica order by categoria ASC");
    catmod->setQuery(qcat);
    ui->comboBox->setModel(catmod);
    qDebug()<< qcat.lastError();*/

    mod=new QSqlQueryModel();

    contimod=new QSqlTableModel(0,db);

    contimod->setTable("anagrafica");
    contimod->setFilter("tipo='C'");
    contimod->setSort(2,Qt::AscendingOrder);
    contimod->select();
    ui->cbConti->setModel(contimod);
    ui->cbConti->setModelColumn(2);

    connect(ui->cbConti,SIGNAL(currentIndexChanged(int)),this,SLOT(getMastro()));
    getMastro();


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
        QString sql="SELECT registrazioni.ID as ID,registrazioni.datareg as 'Data',(SELECT anagrafica.descrizione from anagrafica where ID=:pid) as Conto,anagrafica.descrizione as Contropartita,(select descrizione from tipi_mov where tipi_mov.ID=tipo_mov) as Tipo ,(SELECT SUM(righe_reg.entrate) from righe_reg where righe_reg.ID=registrazioni.ID) as Entrate,(SELECT SUM(righe_reg.uscite) from righe_reg where righe_reg.ID=registrazioni.ID) as Uscite from registrazioni,anagrafica where anagrafica.ID=registrazioni.codcp and registrazioni.codana=:pid order by registrazioni.datareg desc";
   //     QString sql="SELECT registrazioni.ID as ID,anagrafica.descrizione as Contropartita,(select descrizione from tipi_mov where tipi_mov.ID=tipo_mov) as Tipo ,(SELECT SUM(righe_reg.entrate) from righe_reg where righe_reg.ID=registrazioni.ID) as Entrate,(SELECT SUM(righe_reg.uscite) from righe_reg where righe_reg.ID=registrazioni.ID) as Uscite from registrazioni,anagrafica where anagrafica.ID=registrazioni.codcp and registrazioni.codana=:pid";

    int pid=contimod->index(ui->cbConti->currentIndex(),0).data(0).toInt();
    QSqlQuery q(db);
    q.prepare(sql);
    q.bindValue(":pid",pid);

    q.exec();
    qDebug()<<q.lastError().text();

    mod->setQuery(q);

    ui->tvMastro->setModel(mod);

    ui->tvMastro->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

   // ui->tvMastro->setColumnHidden(0,true);
   // ui->tvMastro->setColumnHidden(1,true);

    ui->tvMastro->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);


}


void CMastri::on_pushButton_clicked()
{
    close();
}

void CMastri::on_pushButton_2_clicked()
{
    int id=ui->tvMastro->model()->index(ui->tvMastro->currentIndex().row(),0).data(0).toInt();
    int tipo=ui->tvMastro->model()->index(ui->tvMastro->currentIndex().row(),4).data(0).toInt();


    CRegistrazione *f=new CRegistrazione();
    f->init(id,20,db);
    connect (f,SIGNAL(closing()),this,SLOT(getMastro()));
    f->show();
}

void CMastri::on_tvMastro_doubleClicked(const QModelIndex &index)
{
    int id=ui->tvMastro->model()->index(ui->tvMastro->currentIndex().row(),0).data(0).toInt();

    QString sTipo=ui->tvMastro->model()->index(ui->tvMastro->currentIndex().row(),4).data(0).toString();
    ;

    QSqlQuery q(db);
    q.exec("SELECT ID from tipi_mov where descrizione='"+sTipo+"'");
    q.first();
    int tipo=q.value(0).toInt();

qDebug()<<"mastri tipomov: "<<tipo<<q.lastError().text();
    CRegistrazione *f=new CRegistrazione();
    f->init(id,tipo,db);
    connect (f,SIGNAL(closing()),this,SLOT(getMastro()));
    f->show();
}


