#ifndef CNUOVAREGISTRAZIONE_H
#define CNUOVAREGISTRAZIONE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>

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

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void reload();

    void on_pushButton_6_clicked();

 //   void on_cbTipoRegistrazione_currentIndexChanged(int index);

    void on_cbxRimborso_toggled(bool checked);

private:
    Ui::CNuovaRegistrazione *ui;
    QSqlDatabase db;
    void filterConto();
    void filterContropartita();
    bool saveNewRegistration();
    QSqlTableModel *registrazionimod;
    QSqlRelationalTableModel *righemod;
    int nReg;
    bool createNewRegistrazione();

signals:

    void recordAdded();



};

#endif // CNUOVAREGISTRAZIONE_H
