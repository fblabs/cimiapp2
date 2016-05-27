#ifndef CNEWMANDATO_H
#define CNEWMANDATO_H

#include <QWidget>
#include <QSqlDatabase>
#include "csqlrelationaltablemodel.h"

namespace Ui {
class CNewMandato;
}

class CNewMandato : public QWidget
{
    Q_OBJECT

public:
    explicit CNewMandato(QWidget *parent = 0,QSqlDatabase pdb=QSqlDatabase());
    ~CNewMandato();

private slots:
    void on_pushButton_clicked();
    void getImporto();


    void setRegsDateRange();
    bool saveMandato();

    void on_pushButton_2_clicked();
    int getBancaID();

private:
    Ui::CNewMandato *ui;
    QSqlDatabase db;
    CSqlRelationalTableModel *regs;
};

#endif // CNEWMANDATO_H
