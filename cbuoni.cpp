#include "cbuoni.h"
#include "ui_cbuoni.h"
#include <QSqlRelation>

CBuoni::CBuoni(QWidget *parent, QSqlDatabase pdb) :
    QWidget(parent),
    ui(new Ui::CBuoni)
{
    ui->setupUi(this);

    db=pdb;

  /*  modregs=new QSqlRelationalTableModel(0,db);
    modregs->setTable("registrazioni");
    modregs->setFilter("registrazioni.ID="+QString::number(ID));
    modregs->setRelation(2,QSqlRelation("anagrafica","ID","descrizione"));
    modregs->setEditStrategy(QSqlTableModel::OnManualSubmit);
    modregs->select();*/

}

CBuoni::~CBuoni()
{
    delete ui;
}
