/********************************************************************************
** Form generated from reading UI file 'cbuoni.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CBUONI_H
#define UI_CBUONI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CBuoni
{
public:

    void setupUi(QWidget *CBuoni)
    {
        if (CBuoni->objectName().isEmpty())
            CBuoni->setObjectName(QStringLiteral("CBuoni"));
        CBuoni->resize(936, 526);

        retranslateUi(CBuoni);

        QMetaObject::connectSlotsByName(CBuoni);
    } // setupUi

    void retranslateUi(QWidget *CBuoni)
    {
        CBuoni->setWindowTitle(QApplication::translate("CBuoni", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class CBuoni: public Ui_CBuoni {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CBUONI_H
