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

    void reload();

    void on_tvMain_doubleClicked(const QModelIndex &index);

    void on_lineEdit_textChanged(const QString &arg1);

private:
    Ui::COperations *ui;
    QSqlDatabase db;
    QSqlRelationalTableModel *mod;
    void setFilter(QString fil="");
};

#endif // COPERATIONS_H
