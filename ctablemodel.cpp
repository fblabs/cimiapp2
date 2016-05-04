#include "ctablemodel.h"


CTableModel::CTableModel(QObject *parent) :
    QSqlRelationalTableModel(parent,db)
{

}

