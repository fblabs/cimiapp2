#ifndef CPRINTINGJOB_H
#define CPRINTINGJOB_H

#include <QWidget>
#include <QTextCursor>
#include <QTextDocument>

#include <QSqlRelationalTableModel>
#include <QSqlTableModel>
#include <QPrinter>

namespace Ui {
class CPrintingJob;
}

class CPrintingJob : public QWidget
{
    Q_OBJECT

public:
    explicit CPrintingJob(QWidget *parent = 0,QVector<QSqlRelationalTableModel*>*mod=0);
    ~CPrintingJob();
//    QTextTable* addTable(int rows, int cols, QStringList headers);
    QTextTable* addSqlTable(int modat, bool newpage);



private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
    void printPreview(QPrinter *printer);
    void buildDocument();

private:
    Ui::CPrintingJob *ui;
    QTextCursor cur;
    QTextDocument *doc;
    QVector<QSqlRelationalTableModel *> *tables;
    QPrinter printer;
};

#endif // CPRINTINGJOB_H
