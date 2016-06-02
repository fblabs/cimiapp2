#ifndef CREGISTRAZIONI_H
#define CREGISTRAZIONI_H

#include <QWidget>
#include "CSqlRelationalTableModel.h"
#include <QSqlDatabase>

namespace Ui {
class CRegistrazioni;
}

class CRegistrazioni : public QWidget
{
    Q_OBJECT

public:
    explicit CRegistrazioni(QWidget *parent = 0,QSqlDatabase pdb=QSqlDatabase());
    ~CRegistrazioni();

private:
    Ui::CRegistrazioni *ui;
    QSqlDatabase db;
    CSqlRelationalTableModel *mod;
private slots:
    void setDateFilter();
    void on_deDal_dateChanged(const QDate &date);
    void on_deAl_dateChanged(const QDate &date);
    void on_pbChiudi_clicked();
    void on_pbNuovaRegistrazione_clicked();
};

#endif // CREGISTRAZIONI_H
