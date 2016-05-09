#ifndef CMAINWINDOW_H
#define CMAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>

namespace Ui {
class CMainWindow;
}

class CMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CMainWindow(QWidget *parent = 0);
    ~CMainWindow();

private slots:
    void on_pBOperazioni_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pbConti_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::CMainWindow *ui;
    QSqlDatabase db;
};

#endif // CMAINWINDOW_H
