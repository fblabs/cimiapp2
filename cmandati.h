#ifndef CMANDATI_H
#define CMANDATI_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlRelationalTableModel>

namespace Ui {
class CMandati;
}

class CMandati : public QWidget
{
    Q_OBJECT

public:
    explicit CMandati(QWidget *parent = 0,QSqlDatabase db=QSqlDatabase());
    ~CMandati();

private slots:
    void on_sbYear_valueChanged(int arg1);
    void loadMandato();
  //  void loadMandatoDetails();
    void editRegistrazione();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void getImporto();

private:
    Ui::CMandati *ui;
    QSqlDatabase db;
    QSqlRelationalTableModel *mod;
};

#endif // CMANDATI_H
