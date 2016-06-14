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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CBuoni
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *cbPrintNumber;
    QGridLayout *gridLayout;
    QLabel *label;
    QDateEdit *deDal;
    QDateEdit *deAL;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QWidget *CBuoni)
    {
        if (CBuoni->objectName().isEmpty())
            CBuoni->setObjectName(QStringLiteral("CBuoni"));
        CBuoni->resize(445, 138);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Notepad.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        CBuoni->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(CBuoni);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        cbPrintNumber = new QComboBox(CBuoni);
        cbPrintNumber->setObjectName(QStringLiteral("cbPrintNumber"));

        verticalLayout->addWidget(cbPrintNumber);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(CBuoni);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        deDal = new QDateEdit(CBuoni);
        deDal->setObjectName(QStringLiteral("deDal"));

        gridLayout->addWidget(deDal, 0, 1, 1, 1);

        deAL = new QDateEdit(CBuoni);
        deAL->setObjectName(QStringLiteral("deAL"));

        gridLayout->addWidget(deAL, 0, 3, 1, 1);

        label_2 = new QLabel(CBuoni);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        pushButton = new QPushButton(CBuoni);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Sheet-Of-Paper.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(pushButton);


        retranslateUi(CBuoni);

        QMetaObject::connectSlotsByName(CBuoni);
    } // setupUi

    void retranslateUi(QWidget *CBuoni)
    {
        CBuoni->setWindowTitle(QApplication::translate("CBuoni", "Stampa Buoni", 0));
        cbPrintNumber->clear();
        cbPrintNumber->insertItems(0, QStringList()
         << QApplication::translate("CBuoni", "Stampa Continua", 0)
         << QApplication::translate("CBuoni", "Uno per pagina", 0)
         << QApplication::translate("CBuoni", "Due par pagina", 0)
         << QApplication::translate("CBuoni", "Quattro per pagina", 0)
        );
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
