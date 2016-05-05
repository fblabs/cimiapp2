/********************************************************************************
** Form generated from reading UI file 'cnuovarigaregistrrazione.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CNUOVARIGAREGISTRRAZIONE_H
#define UI_CNUOVARIGAREGISTRRAZIONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CNuovaRigaRegistrrazione
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cbTipoOpe;
    QRadioButton *rbE;
    QRadioButton *rbU;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbrichiesta;
    QLineEdit *leRichiesta;
    QLabel *lbElementi;
    QLineEdit *leElementi;
    QPushButton *pbCalc;
    QGridLayout *gridLayout;
    QLabel *lbEntrate;
    QLineEdit *leEntrate;
    QLabel *lbUscite;
    QLineEdit *leUscite;
    QFormLayout *formLayout;
    QLabel *label_5;
    QPlainTextEdit *ptNote;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *CNuovaRigaRegistrrazione)
    {
        if (CNuovaRigaRegistrrazione->objectName().isEmpty())
            CNuovaRigaRegistrrazione->setObjectName(QStringLiteral("CNuovaRigaRegistrrazione"));
        CNuovaRigaRegistrrazione->setWindowModality(Qt::ApplicationModal);
        CNuovaRigaRegistrrazione->resize(754, 432);
        verticalLayout = new QVBoxLayout(CNuovaRigaRegistrrazione);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(CNuovaRigaRegistrrazione);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        cbTipoOpe = new QComboBox(CNuovaRigaRegistrrazione);
        cbTipoOpe->setObjectName(QStringLiteral("cbTipoOpe"));
        cbTipoOpe->setEditable(true);
        cbTipoOpe->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout->addWidget(cbTipoOpe);

        rbE = new QRadioButton(CNuovaRigaRegistrrazione);
        rbE->setObjectName(QStringLiteral("rbE"));

        horizontalLayout->addWidget(rbE);

        rbU = new QRadioButton(CNuovaRigaRegistrrazione);
        rbU->setObjectName(QStringLiteral("rbU"));
        rbU->setChecked(true);

        horizontalLayout->addWidget(rbU);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lbrichiesta = new QLabel(CNuovaRigaRegistrrazione);
        lbrichiesta->setObjectName(QStringLiteral("lbrichiesta"));

        horizontalLayout_2->addWidget(lbrichiesta);

        leRichiesta = new QLineEdit(CNuovaRigaRegistrrazione);
        leRichiesta->setObjectName(QStringLiteral("leRichiesta"));

        horizontalLayout_2->addWidget(leRichiesta);

        lbElementi = new QLabel(CNuovaRigaRegistrrazione);
        lbElementi->setObjectName(QStringLiteral("lbElementi"));

        horizontalLayout_2->addWidget(lbElementi);

        leElementi = new QLineEdit(CNuovaRigaRegistrrazione);
        leElementi->setObjectName(QStringLiteral("leElementi"));

        horizontalLayout_2->addWidget(leElementi);

        pbCalc = new QPushButton(CNuovaRigaRegistrrazione);
        pbCalc->setObjectName(QStringLiteral("pbCalc"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Arrow-Right.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbCalc->setIcon(icon);

        horizontalLayout_2->addWidget(pbCalc);


        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lbEntrate = new QLabel(CNuovaRigaRegistrrazione);
        lbEntrate->setObjectName(QStringLiteral("lbEntrate"));

        gridLayout->addWidget(lbEntrate, 0, 0, 1, 1);

        leEntrate = new QLineEdit(CNuovaRigaRegistrrazione);
        leEntrate->setObjectName(QStringLiteral("leEntrate"));

        gridLayout->addWidget(leEntrate, 0, 1, 1, 1);

        lbUscite = new QLabel(CNuovaRigaRegistrrazione);
        lbUscite->setObjectName(QStringLiteral("lbUscite"));

        gridLayout->addWidget(lbUscite, 1, 0, 1, 1);

        leUscite = new QLineEdit(CNuovaRigaRegistrrazione);
        leUscite->setObjectName(QStringLiteral("leUscite"));

        gridLayout->addWidget(leUscite, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_5 = new QLabel(CNuovaRigaRegistrrazione);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        ptNote = new QPlainTextEdit(CNuovaRigaRegistrrazione);
        ptNote->setObjectName(QStringLiteral("ptNote"));

        formLayout->setWidget(0, QFormLayout::FieldRole, ptNote);


        verticalLayout->addLayout(formLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton = new QPushButton(CNuovaRigaRegistrrazione);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(CNuovaRigaRegistrrazione);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(CNuovaRigaRegistrrazione);

        QMetaObject::connectSlotsByName(CNuovaRigaRegistrrazione);
    } // setupUi

    void retranslateUi(QWidget *CNuovaRigaRegistrrazione)
    {
        CNuovaRigaRegistrrazione->setWindowTitle(QApplication::translate("CNuovaRigaRegistrrazione", "Form", 0));
        label->setText(QApplication::translate("CNuovaRigaRegistrrazione", "Tipo Operazione:", 0));
        rbE->setText(QApplication::translate("CNuovaRigaRegistrrazione", "Entrata", 0));
        rbU->setText(QApplication::translate("CNuovaRigaRegistrrazione", "Uscita", 0));
        lbrichiesta->setText(QApplication::translate("CNuovaRigaRegistrrazione", "Richiesta:", 0));
        lbElementi->setText(QApplication::translate("CNuovaRigaRegistrrazione", "Elementi/Giorni:", 0));
        pbCalc->setText(QApplication::translate("CNuovaRigaRegistrrazione", "Calcola liquidazione", 0));
        lbEntrate->setText(QApplication::translate("CNuovaRigaRegistrrazione", "Entrate:", 0));
        lbUscite->setText(QApplication::translate("CNuovaRigaRegistrrazione", "Uscite:", 0));
        label_5->setText(QApplication::translate("CNuovaRigaRegistrrazione", "Note:", 0));
        pushButton->setText(QApplication::translate("CNuovaRigaRegistrrazione", "Salva", 0));
        pushButton_2->setText(QApplication::translate("CNuovaRigaRegistrrazione", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class CNuovaRigaRegistrrazione: public Ui_CNuovaRigaRegistrrazione {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CNUOVARIGAREGISTRRAZIONE_H
