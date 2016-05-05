#ifndef CNUOVAREGISTRAZIONE_H
#define CNUOVAREGISTRAZIONE_H

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class CNuovaRegistrazione;
}

class CNuovaRegistrazione : public QWidget
{
    Q_OBJECT

public:
    explicit CNuovaRegistrazione(QWidget *parent = 0);
    ~CNuovaRegistrazione();
    void init(QSqlDatabase pdb);

private slots:
    void on_cbCpSottogruppo_currentIndexChanged(int index);

    void on_cbSottogruppo_currentIndexChanged(int index);

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

private:
    Ui::CNuovaRegistrazione *ui;
    QSqlDatabase db;
    void filterConto();
    void filterContropartita();

};

#endif // CNUOVAREGISTRAZIONE_H