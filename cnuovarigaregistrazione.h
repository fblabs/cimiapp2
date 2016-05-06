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
    void init(QSqlDatabase pdb,int pidRegistrazione);


private slots:
    void on_rbE_toggled(bool checked);

    void on_pbCalc_clicked();

    void setupUI();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::CNuovaRigaRegistrazione *ui;
    QSqlTableModel *modtipiope;
    QSqlDatabase db;
    int idRegistrazione;
    double calculate();
};

#endif // CNUOVARIGAREGISTRAZIONE_H
