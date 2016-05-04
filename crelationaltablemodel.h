#ifndef CRELATIONALTABLEMODEL_H
#define CRELATIONALTABLEMODEL_H

#include <QSqlRelationalTableModel>

class CRelationalTableModel : public QSqlRelationalTableModel
{
    Q_OBJECT
public:
    explicit CRelationalTableModel(QObject *parent = 0);

signals:

public slots:

};

#endif // CRELATIONALTABLEMODEL_H
