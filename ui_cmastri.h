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
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cbConti;
    QTableView *tvMastro;
    QPushButton *pushButton;

    void setupUi(QWidget *CMastri)
    {
        if (CMastri->objectName().isEmpty())
            CMastri->setObjectName(QStringLiteral("CMastri"));
        CMastri->resize(1048, 584);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/SearchStatistics.png"), QSize(), QIcon::Normal, QIcon::Off);
        CMastri->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(CMastri);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(CMastri);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        cbConti = new QComboBox(CMastri);
        cbConti->setObjectName(QStringLiteral("cbConti"));
        cbConti->setEditable(true);
        cbConti->setModelColumn(2);

        horizontalLayout->addWidget(cbConti);


        verticalLayout->addLayout(horizontalLayout);

        tvMastro = new QTableView(CMastri);
        tvMastro->setObjectName(QStringLiteral("tvMastro"));
        tvMastro->setAlternatingRowColors(true);

        verticalLayout->addWidget(tvMastro);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton = new QPushButton(CMastri);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));

        verticalLayout_2->addWidget(pushButton);


        retranslateUi(CMastri);

        QMetaObject::connectSlotsByName(CMastri);
    } // setupUi

    void retranslateUi(QWidget *CMastri)
    {
        CMastri->setWindowTitle(QApplication::translate("CMastri", "Mastri", 0));
        label->setText(QApplication::translate("CMastri", "Conto:", 0));
        pushButton->setText(QApplication::translate("CMastri", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class CMastri: public Ui_CMastri {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMASTRI_H
