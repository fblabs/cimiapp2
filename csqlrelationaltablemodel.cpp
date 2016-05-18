#include "csqlrelationaltablemodel.h"
#include <QSqlRelationalTableModel>
#include <QSqlDatabase>



CSqlRelationalTableModel::CSqlRelationalTableModel(QObject *parent,QSqlDatabase db): QSqlRelationalTableModel(parent,db)
{

}

Qt::ItemFlags CSqlRelationalTableModel::flags(const QModelIndex & item ) const
{

    Qt::ItemFlags flags=QSqlRelationalTableModel::flags(item);

    if (item.column()==5)
   {

       flags |= Qt::ItemIsUserCheckable;
       flags |= Qt::ItemIsEditable;
       flags |= Qt::ItemIsEnabled;

       return flags;
   }

 return QSqlRelationalTableModel::flags(item) ;

}

QVariant CSqlRelationalTableModel::data( const QModelIndex & item, int role /*= Qt::DisplayRole*/ ) const
{

   if (item.column()==5)
   {


       if (role==Qt::CheckStateRole)
         return (QSqlRelationalTableModel::data(item).toInt() != 0) ? Qt::Checked :Qt::Unchecked;
       else
          return QVariant();


   }

  return QSqlRelationalTableModel::data(item,role);
}

bool CSqlRelationalTableModel::setData(const QModelIndex &index, const QVariant &value, int role)
{

    return QSqlRelationalTableModel::setData(index,value,role);
}

