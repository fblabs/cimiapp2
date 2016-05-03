#ifndef CTABLEMODEL_H
#define CTABLEMODEL_H

#include <QSqlRelationalTablemodel>

class CTableModel : public QSqlRelationalTableModel
{
    Q_OBJECT
public:
    explicit CTableModel(QObject *parent = 0);

signals:

public slots:

};

#endif // CTABLEMODEL_H
