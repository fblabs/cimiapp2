#include "cregistrazione.h"
#include "ui_cregistrazione.h"
#include "crelationaltablemodel.h"
#include <QSqlRelation>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>
#include <QSqlQuery>

#include <QDebug>
#include <QSqlError>

CRegistrazione::CRegistrazione(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CRegistrazione)
{
    ui->setupUi(this);

}

CRegistrazione::~CRegistrazione()
{
    delete ui;
}

void CRegistrazione::init(int pid,int tipomov, QSqlDatabase pdb)
{
    ID=pid;
    db=pdb;

/*    CTableModel *mod=new CTableModel();*/
    QSqlTableModel *tipimod=new QSqlTableModel(0,db);
    tipimod->setTable("tipi_mov");
    tipimod->setSort(1,Qt::AscendingOrder);

    tipimod->select();
    ui->comboBox->setModel(tipimod);
    ui->comboBox->setModelColumn(1);

    CRelationalTableModel *mod= new CRelationalTableModel();

    mod->setTable("righe_reg");
    mod->setFilter("righe_reg.ID="+QString::number(ID));
    mod->setSort(1,Qt::AscendingOrder);

    mod->setRelation(2,QSqlRelation("tipi_ope","ID","descrizione"));
    mod->select();

    //qDebug()<<mod->query().lastQuery()<<mod->lastError().text();
    qDebug()<<"tipomov: "<<tipomov;

    ui->tvDetails->setModel(mod);

    QSqlQuery q(db);
    q.prepare("SELECT descrizione from tipi_mov where ID=:tipomov");
    q.bindValue(":tipomov",tipomov);
    q.exec();
    q.first();

    QString desc=q.value(0).toString();


    qDebug()<<"DESC:"<<desc;
    ui->comboBox->setCurrentIndex(ui->comboBox->findText(desc));

}

void CRegistrazione::on_pushButton_2_clicked()
{
    close();
}
