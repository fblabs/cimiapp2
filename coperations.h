#ifndef COPERATIONS_H
#define COPERATIONS_H

#include <QWidget>
#include <QSqlDatabase>
#include <ctablemodel.h>

namespace Ui {
class COperations;
}

class COperations : public QWidget
{
    Q_OBJECT

    CTableModel *mod;

public:
    explicit COperations(QWidget *parent = 0);
    ~COperations();
    void setDatabase(QSqlDatabase pdb);


private slots:
    void on_deDal_dateChanged(const QDate &date);

    void on_deAl_dateChanged(const QDate &date);

private:
    Ui::COperations *ui;
    QSqlDatabase db;
    void setFilter(QString fil="");
};

#endif // COPERATIONS_H
