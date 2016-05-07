#ifndef CREGISTRAZIONE_H
#define CREGISTRAZIONE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlTableModel>

namespace Ui {
class CRegistrazione;
}

class CRegistrazione : public QWidget
{
    Q_OBJECT

public:
    explicit CRegistrazione(QWidget *parent = 0);
    ~CRegistrazione();
    void init(int pid, int tipomov, QSqlDatabase pdb);

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::CRegistrazione *ui;
    QSqlDatabase db;
   // void setFilter(QString fil="");
    int ID;
    QSqlTableModel *modRegistrazione;
    QSqlTableModel *modRighe;
};

#endif // CREGISTRAZIONE_H
