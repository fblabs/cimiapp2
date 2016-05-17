/********************************************************************************
** Form generated from reading UI file 'cregistrazione.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREGISTRAZIONE_H
#define UI_CREGISTRAZIONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
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
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *comboBox;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QTableView *tvDetails;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *cbLiquidato;
    QLabel *label_6;
    QDateEdit *dataliq;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_5;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QLabel *lbTotaleDare;
    QFormLayout *formLayout_4;
    QLabel *label_4;
    QLabel *lbTotaleAvere;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLabel *lbTotaleRegistrazione;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *CRegistrazione)
    {
        if (CRegistrazione->objectName().isEmpty())
            CRegistrazione->setObjectName(QStringLiteral("CRegistrazione"));
        CRegistrazione->resize(869, 506);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Pencil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        CRegistrazione->setWindowIcon(icon);
        verticalLayout_4 = new QVBoxLayout(CRegistrazione);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
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


        verticalLayout_3->addLayout(verticalLayout);

        tvDetails = new QTableView(CRegistrazione);
        tvDetails->setObjectName(QStringLiteral("tvDetails"));
        tvDetails->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvDetails->setAlternatingRowColors(true);
        tvDetails->setSelectionMode(QAbstractItemView::SingleSelection);
        tvDetails->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvDetails->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(tvDetails);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        cbLiquidato = new QCheckBox(CRegistrazione);
        cbLiquidato->setObjectName(QStringLiteral("cbLiquidato"));

        horizontalLayout_4->addWidget(cbLiquidato);

        label_6 = new QLabel(CRegistrazione);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        dataliq = new QDateEdit(CRegistrazione);
        dataliq->setObjectName(QStringLiteral("dataliq"));

        horizontalLayout_4->addWidget(dataliq);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_3 = new QLabel(CRegistrazione);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        lbTotaleDare = new QLabel(CRegistrazione);
        lbTotaleDare->setObjectName(QStringLiteral("lbTotaleDare"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lbTotaleDare);


        formLayout_5->setLayout(0, QFormLayout::LabelRole, formLayout_3);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_4 = new QLabel(CRegistrazione);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_4);

        lbTotaleAvere = new QLabel(CRegistrazione);
        lbTotaleAvere->setObjectName(QStringLiteral("lbTotaleAvere"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, lbTotaleAvere);


        formLayout_5->setLayout(0, QFormLayout::FieldRole, formLayout_4);


        verticalLayout_2->addLayout(formLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(CRegistrazione);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(134, 16777215));
        label_5->setFont(font);

        horizontalLayout_2->addWidget(label_5);

        lbTotaleRegistrazione = new QLabel(CRegistrazione);
        lbTotaleRegistrazione->setObjectName(QStringLiteral("lbTotaleRegistrazione"));

        horizontalLayout_2->addWidget(lbTotaleRegistrazione);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_3 = new QPushButton(CRegistrazione);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(CRegistrazione);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon2);

        horizontalLayout_3->addWidget(pushButton_4);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(CRegistrazione);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(CRegistrazione);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon4);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(CRegistrazione);

        QMetaObject::connectSlotsByName(CRegistrazione);
    } // setupUi

    void retranslateUi(QWidget *CRegistrazione)
    {
        CRegistrazione->setWindowTitle(QApplication::translate("CRegistrazione", "Modifica Registrazione", 0));
        label->setText(QApplication::translate("CRegistrazione", "Tipo:", 0));
        label_2->setText(QApplication::translate("CRegistrazione", "Data Registrazione:", 0));
        cbLiquidato->setText(QApplication::translate("CRegistrazione", "Liquidato", 0));
        label_6->setText(QApplication::translate("CRegistrazione", "Data liquidazione:", 0));
        label_3->setText(QApplication::translate("CRegistrazione", "Totale Dare:", 0));
        lbTotaleDare->setText(QApplication::translate("CRegistrazione", "0.0", 0));
        label_4->setText(QApplication::translate("CRegistrazione", "Totale Avere:", 0));
        lbTotaleAvere->setText(QApplication::translate("CRegistrazione", "0.0", 0));
        label_5->setText(QApplication::translate("CRegistrazione", "Importo registrazione:", 0));
        lbTotaleRegistrazione->setText(QApplication::translate("CRegistrazione", "0.0", 0));
        pushButton_3->setText(QApplication::translate("CRegistrazione", "Nuova riga", 0));
        pushButton_4->setText(QApplication::translate("CRegistrazione", "Rimuovi riga", 0));
        pushButton->setText(QApplication::translate("CRegistrazione", "Salva", 0));
        pushButton_2->setText(QApplication::translate("CRegistrazione", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class CRegistrazione: public Ui_CRegistrazione {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREGISTRAZIONE_H
