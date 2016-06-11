/********************************************************************************
** Form generated from reading UI file 'cmastri.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMASTRI_H
#define UI_CMASTRI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CMastri
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *cbConti;
    QTableView *tvMastro;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *CMastri)
    {
        if (CMastri->objectName().isEmpty())
            CMastri->setObjectName(QStringLiteral("CMastri"));
        CMastri->resize(1048, 584);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/mastri.png"), QSize(), QIcon::Normal, QIcon::Off);
        CMastri->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(CMastri);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(CMastri);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(50, 16777215));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        cbConti = new QComboBox(CMastri);
        cbConti->setObjectName(QStringLiteral("cbConti"));
        cbConti->setEditable(true);
        cbConti->setModelColumn(2);

        formLayout->setWidget(0, QFormLayout::FieldRole, cbConti);


        verticalLayout->addLayout(formLayout);

        tvMastro = new QTableView(CMastri);
        tvMastro->setObjectName(QStringLiteral("tvMastro"));
        tvMastro->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvMastro->setAlternatingRowColors(true);
        tvMastro->setSelectionMode(QAbstractItemView::SingleSelection);
        tvMastro->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvMastro->setSortingEnabled(true);

        verticalLayout->addWidget(tvMastro);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_2 = new QPushButton(CMastri);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/InvoiceSearch.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(CMastri);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(CMastri);

        QMetaObject::connectSlotsByName(CMastri);
    } // setupUi

    void retranslateUi(QWidget *CMastri)
    {
        CMastri->setWindowTitle(QApplication::translate("CMastri", "Mastri", 0));
        label->setText(QApplication::translate("CMastri", "Conto:", 0));
        pushButton_2->setText(QApplication::translate("CMastri", "Dettagli", 0));
        pushButton->setText(QApplication::translate("CMastri", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class CMastri: public Ui_CMastri {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMASTRI_H
