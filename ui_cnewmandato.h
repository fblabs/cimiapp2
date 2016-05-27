/********************************************************************************
** Form generated from reading UI file 'cnewmandato.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CNEWMANDATO_H
#define UI_CNEWMANDATO_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CNewMandato
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *leNumero;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLineEdit *leAnno;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QDateEdit *deDataMandato;
    QFormLayout *formLayout_8;
    QLabel *label_8;
    QComboBox *cbBanche;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_7;
    QFormLayout *formLayout_5;
    QLabel *label_6;
    QDateEdit *deDal;
    QFormLayout *formLayout_6;
    QLabel *label_7;
    QDateEdit *deAl;
    QTableView *tvRigheMandato;
    QFormLayout *formLayout_4;
    QLabel *label_4;
    QLineEdit *leImporto;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *CNewMandato)
    {
        if (CNewMandato->objectName().isEmpty())
            CNewMandato->setObjectName(QStringLiteral("CNewMandato"));
        CNewMandato->setWindowModality(Qt::ApplicationModal);
        CNewMandato->resize(1087, 583);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/nuovomandato.png"), QSize(), QIcon::Normal, QIcon::Off);
        CNewMandato->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(CNewMandato);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(CNewMandato);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        leNumero = new QLineEdit(CNewMandato);
        leNumero->setObjectName(QStringLiteral("leNumero"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leNumero);


        horizontalLayout->addLayout(formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_2 = new QLabel(CNewMandato);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        leAnno = new QLineEdit(CNewMandato);
        leAnno->setObjectName(QStringLiteral("leAnno"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, leAnno);


        horizontalLayout->addLayout(formLayout_2);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_3 = new QLabel(CNewMandato);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        deDataMandato = new QDateEdit(CNewMandato);
        deDataMandato->setObjectName(QStringLiteral("deDataMandato"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, deDataMandato);


        horizontalLayout->addLayout(formLayout_3);


        verticalLayout_3->addLayout(horizontalLayout);

        formLayout_8 = new QFormLayout();
        formLayout_8->setObjectName(QStringLiteral("formLayout_8"));
        label_8 = new QLabel(CNewMandato);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_8->setWidget(0, QFormLayout::LabelRole, label_8);

        cbBanche = new QComboBox(CNewMandato);
        cbBanche->setObjectName(QStringLiteral("cbBanche"));

        formLayout_8->setWidget(0, QFormLayout::FieldRole, cbBanche);


        verticalLayout_3->addLayout(formLayout_8);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_5 = new QLabel(CNewMandato);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout_7 = new QFormLayout();
        formLayout_7->setObjectName(QStringLiteral("formLayout_7"));
        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        label_6 = new QLabel(CNewMandato);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_6);

        deDal = new QDateEdit(CNewMandato);
        deDal->setObjectName(QStringLiteral("deDal"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, deDal);


        formLayout_7->setLayout(0, QFormLayout::LabelRole, formLayout_5);

        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName(QStringLiteral("formLayout_6"));
        label_7 = new QLabel(CNewMandato);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_7);

        deAl = new QDateEdit(CNewMandato);
        deAl->setObjectName(QStringLiteral("deAl"));

        formLayout_6->setWidget(0, QFormLayout::FieldRole, deAl);


        formLayout_7->setLayout(0, QFormLayout::FieldRole, formLayout_6);


        verticalLayout->addLayout(formLayout_7);

        tvRigheMandato = new QTableView(CNewMandato);
        tvRigheMandato->setObjectName(QStringLiteral("tvRigheMandato"));
        tvRigheMandato->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvRigheMandato->setAlternatingRowColors(true);
        tvRigheMandato->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvRigheMandato->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tvRigheMandato);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_4 = new QLabel(CNewMandato);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_4);

        leImporto = new QLineEdit(CNewMandato);
        leImporto->setObjectName(QStringLiteral("leImporto"));
        leImporto->setReadOnly(true);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, leImporto);


        verticalLayout->addLayout(formLayout_4);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_2 = new QPushButton(CNewMandato);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(CNewMandato);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(CNewMandato);

        QMetaObject::connectSlotsByName(CNewMandato);
    } // setupUi

    void retranslateUi(QWidget *CNewMandato)
    {
        CNewMandato->setWindowTitle(QApplication::translate("CNewMandato", "Nuovo Mandato", 0));
        label->setText(QApplication::translate("CNewMandato", "Numero:", 0));
        label_2->setText(QApplication::translate("CNewMandato", "Anno:", 0));
        label_3->setText(QApplication::translate("CNewMandato", "Data:", 0));
        label_8->setText(QApplication::translate("CNewMandato", "Banca:", 0));
        label_5->setText(QApplication::translate("CNewMandato", "Registrazioni:", 0));
        label_6->setText(QApplication::translate("CNewMandato", "Dal:", 0));
        label_7->setText(QApplication::translate("CNewMandato", "Al:", 0));
        label_4->setText(QApplication::translate("CNewMandato", "Importo:", 0));
        pushButton_2->setText(QApplication::translate("CNewMandato", "Salva:", 0));
        pushButton->setText(QApplication::translate("CNewMandato", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class CNewMandato: public Ui_CNewMandato {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CNEWMANDATO_H
