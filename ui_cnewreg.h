/********************************************************************************
** Form generated from reading UI file 'cnewreg.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CNEWREG_H
#define UI_CNEWREG_H

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

class Ui_CNewReg
{
public:
    QVBoxLayout *verticalLayout_3;
    QTableView *tableView;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_5;
    QLabel *label_2;
    QComboBox *cbConto;
    QFormLayout *formLayout_4;
    QLabel *label_3;
    QComboBox *cbTipo;
    QFormLayout *formLayout;
    QLabel *label_4;
    QComboBox *cbContropartita;
    QFormLayout *formLayout_2;
    QLabel *label;
    QDateEdit *deDataReg;
    QFormLayout *formLayout_3;
    QLabel *label_5;
    QLineEdit *leNote;
    QPushButton *pushButton_6;
    QTableView *tvDetails;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_5;

    void setupUi(QWidget *CNewReg)
    {
        if (CNewReg->objectName().isEmpty())
            CNewReg->setObjectName(QStringLiteral("CNewReg"));
        CNewReg->resize(836, 532);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/nuovareegistrazione.png"), QSize(), QIcon::Normal, QIcon::Off);
        CNewReg->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(CNewReg);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tableView = new QTableView(CNewReg);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_3->addWidget(tableView);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        label_2 = new QLabel(CNewReg);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_2);

        cbConto = new QComboBox(CNewReg);
        cbConto->setObjectName(QStringLiteral("cbConto"));
        cbConto->setEnabled(false);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, cbConto);


        verticalLayout->addLayout(formLayout_5);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_3 = new QLabel(CNewReg);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_3);

        cbTipo = new QComboBox(CNewReg);
        cbTipo->setObjectName(QStringLiteral("cbTipo"));
        cbTipo->setEnabled(false);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, cbTipo);


        verticalLayout->addLayout(formLayout_4);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_4 = new QLabel(CNewReg);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        cbContropartita = new QComboBox(CNewReg);
        cbContropartita->setObjectName(QStringLiteral("cbContropartita"));
        cbContropartita->setEnabled(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, cbContropartita);


        verticalLayout->addLayout(formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label = new QLabel(CNewReg);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        deDataReg = new QDateEdit(CNewReg);
        deDataReg->setObjectName(QStringLiteral("deDataReg"));
        deDataReg->setEnabled(false);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, deDataReg);


        verticalLayout->addLayout(formLayout_2);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_5 = new QLabel(CNewReg);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_5);

        leNote = new QLineEdit(CNewReg);
        leNote->setObjectName(QStringLiteral("leNote"));
        leNote->setEnabled(false);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, leNote);


        verticalLayout->addLayout(formLayout_3);

        pushButton_6 = new QPushButton(CNewReg);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon1);
        pushButton_6->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(pushButton_6);


        verticalLayout_2->addLayout(verticalLayout);

        tvDetails = new QTableView(CNewReg);
        tvDetails->setObjectName(QStringLiteral("tvDetails"));
        tvDetails->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvDetails->setSelectionMode(QAbstractItemView::SingleSelection);
        tvDetails->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvDetails->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(tvDetails);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton = new QPushButton(CNewReg);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(16, 16));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(CNewReg);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Pencil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(16, 16));

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(CNewReg);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);
        pushButton_3->setIconSize(QSize(16, 16));

        horizontalLayout_3->addWidget(pushButton_3);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_4 = new QPushButton(CNewReg);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon4);
        pushButton_4->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_7 = new QPushButton(CNewReg);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Resources/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon5);
        pushButton_7->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_7);

        pushButton_5 = new QPushButton(CNewReg);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon6);
        pushButton_5->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_5);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(CNewReg);

        QMetaObject::connectSlotsByName(CNewReg);
    } // setupUi

    void retranslateUi(QWidget *CNewReg)
    {
        CNewReg->setWindowTitle(QApplication::translate("CNewReg", "Nuova registrazione", 0));
        label_2->setText(QApplication::translate("CNewReg", "Conto:", 0));
        label_3->setText(QApplication::translate("CNewReg", "Tipo:", 0));
        label_4->setText(QApplication::translate("CNewReg", "Contropartita:", 0));
        label->setText(QApplication::translate("CNewReg", "Data:", 0));
        label_5->setText(QApplication::translate("CNewReg", "Note:", 0));
        pushButton_6->setText(QApplication::translate("CNewReg", "Nuova", 0));
        pushButton->setText(QApplication::translate("CNewReg", "Nuova riga", 0));
        pushButton_2->setText(QApplication::translate("CNewReg", "Modifica riga", 0));
        pushButton_3->setText(QApplication::translate("CNewReg", "Eimina riga", 0));
        pushButton_4->setText(QApplication::translate("CNewReg", "Salva", 0));
        pushButton_7->setText(QApplication::translate("CNewReg", "Annulla", 0));
        pushButton_5->setText(QApplication::translate("CNewReg", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class CNewReg: public Ui_CNewReg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CNEWREG_H
