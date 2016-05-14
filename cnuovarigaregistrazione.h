#ifndef CNUOVARIGAREGISTRAZIONE_H
#define CNUOVARIGAREGISTRAZIONE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>

namespace Ui {
class CNuovaRigaRegistrazione;
}

class CNuovaRigaRegistrazione : public QWidget
{
    Q_OBJECT

public:
    explicit CNuovaRigaRegistrazione(QWidget *parent = 0);
    ~CNuovaRigaRegistrazione();
    void init(QSqlDatabase pdb, int pidRegistrazione, QSqlTableModel *pRows);


private slots:
    void on_rbE_toggled(bool checked);

    void on_pbCalc_clicked();

    void setupUI();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();



private:
    Ui::CNuovaRigaRegistrazione *ui;
    QSqlTableModel *modtipiope;
    QSqlTableModel *modrighe;
    QSqlDatabase db;
    int idRegistrazione;
    double calculate();
    void resetForm();
signals:
    void nrdone();
};

#endif // CNUOVARIGAREGISTRAZIONE_H
