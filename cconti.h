#ifndef CCONTI_H
#define CCONTI_H

#include <QWidget>

#include <QSqlDatabase>

#include <QSqlTableModel>
#include <QDataWidgetMapper>

namespace Ui {
class CConti;
}

class CConti : public QWidget
{
    Q_OBJECT

public:
    explicit CConti(QWidget *parent = 0,QSqlDatabase pdb=QSqlDatabase());
    ~CConti();

private slots:
    void on_pbClose_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_pbSave_clicked();

    void on_pushButton_clicked();

    void on_pbAnnulla_clicked();

private:
    Ui::CConti *ui;
    QSqlDatabase db;
    QSqlTableModel *mod;
    QDataWidgetMapper *map;

};

#endif // CCONTI_H
