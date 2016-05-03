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
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateEdit *deDal;
    QLabel *label_2;
    QDateEdit *deAl;
    QTableView *tvMain;
    QPushButton *pushButton;

    void setupUi(QWidget *COperations)
    {
        if (COperations->objectName().isEmpty())
            COperations->setObjectName(QStringLiteral("COperations"));
        COperations->resize(1088, 511);
        verticalLayout_2 = new QVBoxLayout(COperations);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
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

        pushButton = new QPushButton(COperations);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Pencil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout);


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
    } // retranslateUi

};

namespace Ui {
    class COperations: public Ui_COperations {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COPERATIONS_H
