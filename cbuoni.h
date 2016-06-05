#ifndef CBUONI_H
#define CBUONI_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlRelationalTableModel>
#include <QSqlTableModel>

#include <QSqlError>
#include <QDebug>

namespace Ui {
class CBuoni;
}

class CBuoni : public QWidget
{
    Q_OBJECT

public:
    explicit CBuoni(QWidget *parent = 0,QSqlDatabase pdb=QSqlDatabase());
    ~CBuoni();

private:
    Ui::CBuoni *ui;

    QSqlRelationalTableModel *modregs;
    QSqlRelationalTableModel *modrighe;
    QSqlDatabase db;
};

#endif // CBUONI_H
