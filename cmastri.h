#ifndef CMASTRI_H
#define CMASTRI_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQueryModel>



namespace Ui {
class CMastri;
}

class CMastri : public QWidget
{
    Q_OBJECT

public:
    explicit CMastri(QWidget *parent = 0, QSqlDatabase pdb=QSqlDatabase());
    ~CMastri();

private slots:
    void getMastro();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_tvMastro_doubleClicked(const QModelIndex &index);

private:
    Ui::CMastri *ui;
    QSqlDatabase db;
    QSqlQueryModel *mod;
    QSqlTableModel *contimod;
};

#endif // CMASTRI_H
