/********************************************************************************
** Form generated from reading UI file 'cregistrazioni.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREGISTRAZIONI_H
#define UI_CREGISTRAZIONI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_CRegistrazioni
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_3;
    QFormLayout *formLayout;
    QLabel *label;
    QDateEdit *deDal;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QDateEdit *deAl;
    QTableView *tvMain;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pbNuovaRegistrazione;
    QPushButton *pbChiudi;

    void setupUi(QWidget *CRegistrazioni)
    {
        if (CRegistrazioni->objectName().isEmpty())
            CRegistrazioni->setObjectName(QStringLiteral("CRegistrazioni"));
        CRegistrazioni->resize(1297, 550);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/registrazioni.png"), QSize(), QIcon::Normal, QIcon::Off);
        CRegistrazioni->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(CRegistrazioni);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(CRegistrazioni);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        deDal = new QDateEdit(CRegistrazioni);
        deDal->setObjectName(QStringLiteral("deDal"));
        deDal->setMinimumSize(QSize(100, 0));
        deDal->setMaximumSize(QSize(100, 16777215));

        formLayout->setWidget(0, QFormLayout::FieldRole, deDal);


        formLayout_3->setLayout(0, QFormLayout::LabelRole, formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_2 = new QLabel(CRegistrazioni);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        deAl = new QDateEdit(CRegistrazioni);
        deAl->setObjectName(QStringLiteral("deAl"));
        deAl->setMinimumSize(QSize(100, 0));
        deAl->setMaximumSize(QSize(100, 16777215));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, deAl);


        formLayout_3->setLayout(0, QFormLayout::FieldRole, formLayout_2);


        verticalLayout->addLayout(formLayout_3);

        tvMain = new QTableView(CRegistrazioni);
        tvMain->setObjectName(QStringLiteral("tvMain"));
        tvMain->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvMain->setSelectionMode(QAbstractItemView::SingleSelection);
        tvMain->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvMain->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tvMain);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(CRegistrazioni);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Pencil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton);

        pbNuovaRegistrazione = new QPushButton(CRegistrazioni);
        pbNuovaRegistrazione->setObjectName(QStringLiteral("pbNuovaRegistrazione"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/nuovareegistrazione.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbNuovaRegistrazione->setIcon(icon2);
        pbNuovaRegistrazione->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbNuovaRegistrazione);

        pbChiudi = new QPushButton(CRegistrazioni);
        pbChiudi->setObjectName(QStringLiteral("pbChiudi"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbChiudi->setIcon(icon3);
        pbChiudi->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbChiudi);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CRegistrazioni);

        QMetaObject::connectSlotsByName(CRegistrazioni);
    } // setupUi

    void retranslateUi(QWidget *CRegistrazioni)
    {
        CRegistrazioni->setWindowTitle(QApplication::translate("CRegistrazioni", "Registrazioni", 0));
        label->setText(QApplication::translate("CRegistrazioni", "Dal:", 0));
        label_2->setText(QApplication::translate("CRegistrazioni", "Al:", 0));
        pushButton->setText(QApplication::translate("CRegistrazioni", "Modifica", 0));
        pbNuovaRegistrazione->setText(QApplication::translate("CRegistrazioni", "Nuova Registrazione", 0));
        pbChiudi->setText(QApplication::translate("CRegistrazioni", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class CRegistrazioni: public Ui_CRegistrazioni {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREGISTRAZIONI_H
