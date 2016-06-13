/********************************************************************************
** Form generated from reading UI file 'fprint.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FPRINT_H
#define UI_FPRINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FPrint
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbStampa;
    QPushButton *pbAnteprima;
    QPushButton *pushButton_3;

    void setupUi(QWidget *FPrint)
    {
        if (FPrint->objectName().isEmpty())
            FPrint->setObjectName(QStringLiteral("FPrint"));
        FPrint->resize(965, 556);
        verticalLayout = new QVBoxLayout(FPrint);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(FPrint);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pbStampa = new QPushButton(FPrint);
        pbStampa->setObjectName(QStringLiteral("pbStampa"));

        horizontalLayout->addWidget(pbStampa);

        pbAnteprima = new QPushButton(FPrint);
        pbAnteprima->setObjectName(QStringLiteral("pbAnteprima"));

        horizontalLayout->addWidget(pbAnteprima);

        pushButton_3 = new QPushButton(FPrint);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(FPrint);

        QMetaObject::connectSlotsByName(FPrint);
    } // setupUi

    void retranslateUi(QWidget *FPrint)
    {
        FPrint->setWindowTitle(QApplication::translate("FPrint", "Form", 0));
        pbStampa->setText(QApplication::translate("FPrint", "Stampa", 0));
        pbAnteprima->setText(QApplication::translate("FPrint", "Anteprima di stampa", 0));
        pushButton_3->setText(QApplication::translate("FPrint", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class FPrint: public Ui_FPrint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FPRINT_H
