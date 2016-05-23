#ifndef CNEWMANDATO_H
#define CNEWMANDATO_H

#include <QWidget>
#include <QSqlDatabase>

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
  //  void getImporto();

private:
    Ui::CNewMandato *ui;
    QSqlDatabase db;
};

#endif // CNEWMANDATO_H
