/********************************************************************************
** Form generated from reading UI file 'cmandati.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMANDATI_H
#define UI_CMANDATI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CMandati
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *sbYear;
    QTableView *tvMaster;
    QTableView *tvDetails;

    void setupUi(QWidget *CMandati)
    {
        if (CMandati->objectName().isEmpty())
            CMandati->setObjectName(QStringLiteral("CMandati"));
        CMandati->resize(1153, 622);
        verticalLayout_2 = new QVBoxLayout(CMandati);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(CMandati);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        sbYear = new QSpinBox(CMandati);
        sbYear->setObjectName(QStringLiteral("sbYear"));
        sbYear->setMinimum(2010);
        sbYear->setMaximum(2100);
        sbYear->setValue(2010);

        formLayout->setWidget(0, QFormLayout::FieldRole, sbYear);


        verticalLayout->addLayout(formLayout);

        tvMaster = new QTableView(CMandati);
        tvMaster->setObjectName(QStringLiteral("tvMaster"));
        tvMaster->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvMaster->setAlternatingRowColors(true);
        tvMaster->setSelectionMode(QAbstractItemView::SingleSelection);
        tvMaster->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvMaster->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tvMaster);


        horizontalLayout->addLayout(verticalLayout);

        tvDetails = new QTableView(CMandati);
        tvDetails->setObjectName(QStringLiteral("tvDetails"));

        horizontalLayout->addWidget(tvDetails);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(CMandati);

        QMetaObject::connectSlotsByName(CMandati);
    } // setupUi

    void retranslateUi(QWidget *CMandati)
    {
        CMandati->setWindowTitle(QApplication::translate("CMandati", "Form", 0));
        label->setText(QApplication::translate("CMandati", "Anno:", 0));
        sbYear->setSpecialValueText(QString());
    } // retranslateUi

};

namespace Ui {
    class CMandati: public Ui_CMandati {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMANDATI_H
