/********************************************************************************
** Form generated from reading UI file 'coperations.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COPERATIONS_H
#define UI_COPERATIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_COperations
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateEdit *deDal;
    QLabel *label_2;
    QDateEdit *deAl;
    QTableView *tvMain;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QWidget *COperations)
    {
        if (COperations->objectName().isEmpty())
            COperations->setObjectName(QStringLiteral("COperations"));
        COperations->resize(1088, 511);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/palet-03-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        COperations->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(COperations);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(COperations);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        deDal = new QDateEdit(COperations);
        deDal->setObjectName(QStringLiteral("deDal"));

        horizontalLayout->addWidget(deDal);

        label_2 = new QLabel(COperations);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        deAl = new QDateEdit(COperations);
        deAl->setObjectName(QStringLiteral("deAl"));

        horizontalLayout->addWidget(deAl);


        verticalLayout->addLayout(horizontalLayout);

        tvMain = new QTableView(COperations);
        tvMain->setObjectName(QStringLiteral("tvMain"));
        tvMain->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvMain->setAlternatingRowColors(true);
        tvMain->setSelectionMode(QAbstractItemView::SingleSelection);
        tvMain->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvMain->setSortingEnabled(true);
        tvMain->horizontalHeader()->setStretchLastSection(true);
        tvMain->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tvMain);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(COperations);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Pencil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_3 = new QPushButton(COperations);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Visa.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(COperations);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon3);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(COperations);

        QMetaObject::connectSlotsByName(COperations);
    } // setupUi

    void retranslateUi(QWidget *COperations)
    {
        COperations->setWindowTitle(QApplication::translate("COperations", "Form", 0));
        label->setText(QApplication::translate("COperations", "Dal:", 0));
        label_2->setText(QApplication::translate("COperations", "Al:", 0));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("COperations", "modifica registrazione selezionata", 0));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("COperations", "Modifica", 0));
        pushButton_3->setText(QApplication::translate("COperations", "Nuova Registrazione", 0));
        pushButton_2->setText(QApplication::translate("COperations", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class COperations: public Ui_COperations {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COPERATIONS_H
