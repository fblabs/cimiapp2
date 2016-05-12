#ifndef CSETTINGS_H
#define CSETTINGS_H

#include <QWidget>
#include <QSettings>

namespace Ui {
class CSettings;
}

class CSettings : public QWidget
{
    Q_OBJECT

public:
    explicit CSettings(QWidget *parent = 0);
    ~CSettings();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::CSettings *ui;

};

#endif // CSETTINGS_H
