#ifndef CNUOVARIGA_H
#define CNUOVARIGA_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>

namespace Ui {
class CNuovaRiga;
}

class CNuovaRiga : public QWidget
{
    Q_OBJECT

public:
    explicit CNuovaRiga(QWidget *parent = 0);
    ~CNuovaRiga();
    void init(QSqlDatabase pdb, int pidRegistrazione, QSqlRelationalTableModel *pRows, QString dest);


private slots:
    void on_rbE_toggled(bool checked);

    void on_pbCalc_clicked();

    void setupUI();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();



private:
    Ui::CNuovaRiga *ui;
    QSqlTableModel *modtipiope;
    QSqlRelationalTableModel *modrighe;
    QSqlDatabase db;
    int idRegistrazione;
    double calculate();
    double calculateDays();
    double calculateNoDays();
    void resetForm();
signals:
    void rowAdded();
    void rowDeleted();
};

#endif // CNUOVARIGA_H
