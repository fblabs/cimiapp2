#ifndef CBUONI_H
#define CBUONI_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlRelationalTableModel>
#include <QSqlRelation>
#include <QSqlTableModel>
#include "hprint.h"

#include <QSqlError>
#include <QDebug>

namespace Ui {
class CBuoni;
}

class CBuoni : public QWidget
{
    Q_OBJECT

public:
    explicit CBuoni(QWidget *parent = 0, QSqlDatabase pdb=QSqlDatabase());
    ~CBuoni();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::CBuoni *ui;

    QSqlRelationalTableModel *modregs;
    QSqlRelationalTableModel *modrighe;
    QSqlDatabase db;
    void generateReport();
    void stampaBuono(int row, HPrint *f);
    QVector<QAbstractTableModel*> *models;
    double calcImporti(int row);





};

#endif // CBUONI_H
