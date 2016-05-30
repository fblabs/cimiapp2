#ifndef CREGISTRAZIONE_H
#define CREGISTRAZIONE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>

namespace Ui {
class CRegistrazione;
}

class CRegistrazione : public QWidget
{
    Q_OBJECT

public:
    explicit CRegistrazione(QWidget *parent = 0);
    ~CRegistrazione();
    void init(int pid, int tipomov,QString conto, QSqlDatabase pdb);

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();
    void recordTotals();

    void on_cbLiquidato_toggled(bool checked);
    void reload();
    void on_pushButton_5_clicked();

private:
    Ui::CRegistrazione *ui;
    QSqlDatabase db;
   // void setFilter(QString fil="");
    int ID;
    QSqlRelationalTableModel *modRegistrazione;
    QSqlRelationalTableModel *modRighe;
signals:
  //  void closing();
    void done();
};

#endif // CREGISTRAZIONE_H
