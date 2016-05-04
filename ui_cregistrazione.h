/********************************************************************************
** Form generated from reading UI file 'cregistrazione.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREGISTRAZIONE_H
#define UI_CREGISTRAZIONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CRegistrazione
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *comboBox;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QTableView *tvDetails;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *CRegistrazione)
    {
        if (CRegistrazione->objectName().isEmpty())
            CRegistrazione->setObjectName(QStringLiteral("CRegistrazione"));
        CRegistrazione->resize(698, 435);
        verticalLayout_3 = new QVBoxLayout(CRegistrazione);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(CRegistrazione);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        comboBox = new QComboBox(CRegistrazione);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox);


        verticalLayout->addLayout(formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_2 = new QLabel(CRegistrazione);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        dateEdit = new QDateEdit(CRegistrazione);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, dateEdit);


        verticalLayout->addLayout(formLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        tvDetails = new QTableView(CRegistrazione);
        tvDetails->setObjectName(QStringLiteral("tvDetails"));
        tvDetails->setAlternatingRowColors(true);
        tvDetails->setSelectionMode(QAbstractItemView::SingleSelection);

        verticalLayout_2->addWidget(tvDetails);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(CRegistrazione);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(CRegistrazione);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(CRegistrazione);

        QMetaObject::connectSlotsByName(CRegistrazione);
    } // setupUi

    void retranslateUi(QWidget *CRegistrazione)
    {
        CRegistrazione->setWindowTitle(QApplication::translate("CRegistrazione", "Modifica Registrazione", 0));
        label->setText(QApplication::translate("CRegistrazione", "Tipo:", 0));
        label_2->setText(QApplication::translate("CRegistrazione", "Data Registrazione:", 0));
        pushButton->setText(QApplication::translate("CRegistrazione", "Salva", 0));
        pushButton_2->setText(QApplication::translate("CRegistrazione", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class CRegistrazione: public Ui_CRegistrazione {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREGISTRAZIONE_H
