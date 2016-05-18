/********************************************************************************
** Form generated from reading UI file 'cnuovarigaregistrazione.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CNUOVARIGAREGISTRAZIONE_H
#define UI_CNUOVARIGAREGISTRAZIONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
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

class Ui_CNuovaRigaRegistrazione
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cbTipoOpe;
    QRadioButton *rbE;
    QRadioButton *rbU;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLineEdit *leMassimale;
    QFrame *line;
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

    void setupUi(QWidget *CNuovaRigaRegistrazione)
    {
        if (CNuovaRigaRegistrazione->objectName().isEmpty())
            CNuovaRigaRegistrazione->setObjectName(QStringLiteral("CNuovaRigaRegistrazione"));
        CNuovaRigaRegistrazione->setWindowModality(Qt::ApplicationModal);
        CNuovaRigaRegistrazione->resize(1028, 455);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        CNuovaRigaRegistrazione->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(CNuovaRigaRegistrazione);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(CNuovaRigaRegistrazione);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        cbTipoOpe = new QComboBox(CNuovaRigaRegistrazione);
        cbTipoOpe->setObjectName(QStringLiteral("cbTipoOpe"));
        cbTipoOpe->setEditable(true);
        cbTipoOpe->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout->addWidget(cbTipoOpe);

        rbE = new QRadioButton(CNuovaRigaRegistrazione);
        rbE->setObjectName(QStringLiteral("rbE"));

        horizontalLayout->addWidget(rbE);

        rbU = new QRadioButton(CNuovaRigaRegistrazione);
        rbU->setObjectName(QStringLiteral("rbU"));
        rbU->setChecked(true);

        horizontalLayout->addWidget(rbU);


        formLayout_3->setLayout(0, QFormLayout::LabelRole, horizontalLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_2 = new QLabel(CNuovaRigaRegistrazione);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        leMassimale = new QLineEdit(CNuovaRigaRegistrazione);
        leMassimale->setObjectName(QStringLiteral("leMassimale"));
        leMassimale->setMaximumSize(QSize(50, 16777215));
        leMassimale->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        leMassimale->setReadOnly(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, leMassimale);


        formLayout_3->setLayout(0, QFormLayout::FieldRole, formLayout_2);


        verticalLayout->addLayout(formLayout_3);

        line = new QFrame(CNuovaRigaRegistrazione);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lbrichiesta = new QLabel(CNuovaRigaRegistrazione);
        lbrichiesta->setObjectName(QStringLiteral("lbrichiesta"));

        horizontalLayout_2->addWidget(lbrichiesta);

        leRichiesta = new QLineEdit(CNuovaRigaRegistrazione);
        leRichiesta->setObjectName(QStringLiteral("leRichiesta"));

        horizontalLayout_2->addWidget(leRichiesta);

        lbElementi = new QLabel(CNuovaRigaRegistrazione);
        lbElementi->setObjectName(QStringLiteral("lbElementi"));

        horizontalLayout_2->addWidget(lbElementi);

        leElementi = new QLineEdit(CNuovaRigaRegistrazione);
        leElementi->setObjectName(QStringLiteral("leElementi"));

        horizontalLayout_2->addWidget(leElementi);

        pbCalc = new QPushButton(CNuovaRigaRegistrazione);
        pbCalc->setObjectName(QStringLiteral("pbCalc"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Arrow-Right.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbCalc->setIcon(icon1);

        horizontalLayout_2->addWidget(pbCalc);


        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lbEntrate = new QLabel(CNuovaRigaRegistrazione);
        lbEntrate->setObjectName(QStringLiteral("lbEntrate"));

        gridLayout->addWidget(lbEntrate, 0, 0, 1, 1);

        leEntrate = new QLineEdit(CNuovaRigaRegistrazione);
        leEntrate->setObjectName(QStringLiteral("leEntrate"));

        gridLayout->addWidget(leEntrate, 0, 1, 1, 1);

        lbUscite = new QLabel(CNuovaRigaRegistrazione);
        lbUscite->setObjectName(QStringLiteral("lbUscite"));

        gridLayout->addWidget(lbUscite, 1, 0, 1, 1);

        leUscite = new QLineEdit(CNuovaRigaRegistrazione);
        leUscite->setObjectName(QStringLiteral("leUscite"));

        gridLayout->addWidget(leUscite, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_5 = new QLabel(CNuovaRigaRegistrazione);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        ptNote = new QPlainTextEdit(CNuovaRigaRegistrazione);
        ptNote->setObjectName(QStringLiteral("ptNote"));
        ptNote->setMaximumSize(QSize(16777215, 100));

        formLayout->setWidget(0, QFormLayout::FieldRole, ptNote);


        verticalLayout->addLayout(formLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton = new QPushButton(CNuovaRigaRegistrazione);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(CNuovaRigaRegistrazione);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon3);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(CNuovaRigaRegistrazione);

        QMetaObject::connectSlotsByName(CNuovaRigaRegistrazione);
    } // setupUi

    void retranslateUi(QWidget *CNuovaRigaRegistrazione)
    {
        CNuovaRigaRegistrazione->setWindowTitle(QApplication::translate("CNuovaRigaRegistrazione", "Inserimento righe della registrazione", 0));
        label->setText(QApplication::translate("CNuovaRigaRegistrazione", "Tipo Operazione:", 0));
        rbE->setText(QApplication::translate("CNuovaRigaRegistrazione", "Entrata", 0));
        rbU->setText(QApplication::translate("CNuovaRigaRegistrazione", "Uscita", 0));
        label_2->setText(QApplication::translate("CNuovaRigaRegistrazione", "Massimale:", 0));
        lbrichiesta->setText(QApplication::translate("CNuovaRigaRegistrazione", "Richiesta:", 0));
        lbElementi->setText(QApplication::translate("CNuovaRigaRegistrazione", "Elementi/Giorni:", 0));
        leElementi->setText(QApplication::translate("CNuovaRigaRegistrazione", "1", 0));
        pbCalc->setText(QApplication::translate("CNuovaRigaRegistrazione", "Calcola liquidazione", 0));
        lbEntrate->setText(QApplication::translate("CNuovaRigaRegistrazione", "Entrate:", 0));
        lbUscite->setText(QApplication::translate("CNuovaRigaRegistrazione", "Uscite:", 0));
        label_5->setText(QApplication::translate("CNuovaRigaRegistrazione", "Note:", 0));
        pushButton->setText(QApplication::translate("CNuovaRigaRegistrazione", "Salva Riga", 0));
        pushButton_2->setText(QApplication::translate("CNuovaRigaRegistrazione", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class CNuovaRigaRegistrazione: public Ui_CNuovaRigaRegistrazione {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CNUOVARIGAREGISTRAZIONE_H
