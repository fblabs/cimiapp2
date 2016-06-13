#include "fprint.h"
#include "ui_fprint.h"

FPrint::FPrint(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FPrint)
{
    ui->setupUi(this);
}

FPrint::~FPrint()
{
    delete ui;
}

void FPrint::on_pushButton_3_clicked()
{
    close();
}
