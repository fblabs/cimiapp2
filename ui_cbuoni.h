/********************************************************************************
** Form generated from reading UI file 'cbuoni.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CBUONI_H
#define UI_CBUONI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CBuoni
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_3;
    QFormLayout *formLayout;
    QLabel *label;
    QDateEdit *deDal;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QDateEdit *deAL;
    QPushButton *pushButton;

    void setupUi(QWidget *CBuoni)
    {
        if (CBuoni->objectName().isEmpty())
            CBuoni->setObjectName(QStringLiteral("CBuoni"));
        CBuoni->resize(445, 269);
        verticalLayout_2 = new QVBoxLayout(CBuoni);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(CBuoni);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        deDal = new QDateEdit(CBuoni);
        deDal->setObjectName(QStringLiteral("deDal"));

        formLayout->setWidget(0, QFormLayout::FieldRole, deDal);


        formLayout_3->setLayout(0, QFormLayout::LabelRole, formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_2 = new QLabel(CBuoni);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        deAL = new QDateEdit(CBuoni);
        deAL->setObjectName(QStringLiteral("deAL"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, deAL);


        formLayout_3->setLayout(0, QFormLayout::FieldRole, formLayout_2);


        verticalLayout->addLayout(formLayout_3);

        pushButton = new QPushButton(CBuoni);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Sheet-Of-Paper.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(CBuoni);

        QMetaObject::connectSlotsByName(CBuoni);
    } // setupUi

    void retranslateUi(QWidget *CBuoni)
    {
        CBuoni->setWindowTitle(QApplication::translate("CBuoni", "Form", 0));
        label->setText(QApplication::translate("CBuoni", "Dal:", 0));
        label_2->setText(QApplication::translate("CBuoni", "Al:", 0));
        pushButton->setText(QApplication::translate("CBuoni", "Genera Report", 0));
    } // retranslateUi

};

namespace Ui {
    class CBuoni: public Ui_CBuoni {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CBUONI_H
