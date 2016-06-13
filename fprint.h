#ifndef FPRINT_H
#define FPRINT_H

#include <QWidget>

namespace Ui {
class FPrint;
}

class FPrint : public QWidget
{
    Q_OBJECT

public:
    explicit FPrint(QWidget *parent = 0);
    ~FPrint();
//    addSqlTable();
//    addText();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::FPrint *ui;
};

#endif // FPRINT_H
