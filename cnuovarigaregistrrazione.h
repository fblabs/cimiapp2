#ifndef CNUOVARIGAREGISTRRAZIONE_H
#define CNUOVARIGAREGISTRRAZIONE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>

namespace Ui {
class CNuovaRigaRegistrrazione;
}

class CNuovaRigaRegistrrazione : public QWidget
{
    Q_OBJECT

public:
    explicit CNuovaRigaRegistrrazione(QWidget *parent = 0);
    ~CNuovaRigaRegistrrazione();
    void init(QSqlDatabase pdb);


private slots:
    void on_rbE_toggled(bool checked);

    void on_pbCalc_clicked();

    void setupUI();

    void on_pushButton_2_clicked();

private:
    Ui::CNuovaRigaRegistrrazione *ui;
    QSqlTableModel *modtipiope;
    QSqlDatabase db;
    double calculate();
};

#endif // CNUOVARIGAREGISTRRAZIONE_H
