#ifndef CTIPIANAGRAFICI_H
#define CTIPIANAGRAFICI_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include "csqltipianagraficimodel.h"

namespace Ui {
class CTipiAnagrafici;
}

class CTipiAnagrafici : public QWidget
{
    Q_OBJECT

public:
    explicit CTipiAnagrafici(QWidget *parent = 0,QSqlDatabase pdb=QSqlDatabase());
    ~CTipiAnagrafici();

private slots:
    void on_pushButton_2_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

private:
    Ui::CTipiAnagrafici *ui;
    QSqlDatabase db;
    CSqlTipiAnagraficiModel *mod;
};

#endif // CTIPIANAGRAFICI_H
