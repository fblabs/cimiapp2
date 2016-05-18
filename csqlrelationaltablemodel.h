#ifndef CSQLRELATIONALTABLEMODEL_H
#define CSQLRELATIONALTABLEMODEL_H

#include <QObject>
#include <QSqlRelationalTableModel>
#include <QSqlDatabase>

class CSqlRelationalTableModel : public QSqlRelationalTableModel
{
    Q_OBJECT
public:
    explicit CSqlRelationalTableModel(QObject *parent=0, QSqlDatabase db = QSqlDatabase());

    QVariant data( const QModelIndex & item, int role /*= Qt::DisplayRole */ ) const;
    bool setData( const QModelIndex &index, const QVariant &value, int role = Qt::EditRole );
    Qt::ItemFlags flags(const QModelIndex &item) const;
};

#endif // CSQLRELATIONALTABLEMODEL_H
