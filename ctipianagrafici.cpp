#include "ctipianagrafici.h"
#include "ui_ctipianagrafici.h"

CTipiAnagrafici::CTipiAnagrafici(QWidget *parent, QSqlDatabase pdb) :
    QWidget(parent),
    ui(new Ui::CTipiAnagrafici)
{
    ui->setupUi(this);

    db=pdb;

    mod = new CSqlTipiAnagraficiModel();

    mod->setTable("tipi_ana");
    mod->setEditStrategy(QSqlTableModel::OnFieldChange);
    mod->setSort(1,Qt::AscendingOrder);
    mod->select();

    ui->tableView->setModel(mod);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

CTipiAnagrafici::~CTipiAnagrafici()
{
    delete ui;
}

void CTipiAnagrafici::on_pushButton_2_clicked()
{
    close();
}

void CTipiAnagrafici::on_lineEdit_textChanged(const QString &arg1)
{
    mod->setFilter("descrizione LIKE '"+arg1+"%'");
}
