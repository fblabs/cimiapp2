#ifndef COPERATIONS_H
#define COPERATIONS_H

#include <QWidget>
#include <QSqlDatabase>
#include "crelationaltablemodel.h"

namespace Ui {
class COperations;
}

class COperations : public QWidget
{
    Q_OBJECT

    CRelationalTableModel *mod;

public:
    explicit COperations(QWidget *parent = 0);
    ~COperations();
    void init(QSqlDatabase pdb);


private slots:
    void on_deDal_dateChanged(const QDate &date);

    void on_deAl_dateChanged(const QDate &date);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::COperations *ui;
    QSqlDatabase db;
    void setFilter(QString fil="");
};

#endif // COPERATIONS_H
