/********************************************************************************
** Form generated from reading UI file 'cnuovariga.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CNUOVARIGA_H
#define UI_CNUOVARIGA_H

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

class Ui_CNuovaRiga
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *leConto;
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

    void setupUi(QWidget *CNuovaRiga)
    {
        if (CNuovaRiga->objectName().isEmpty())
            CNuovaRiga->setObjectName(QStringLiteral("CNuovaRiga"));
        CNuovaRiga->setWindowModality(Qt::ApplicationModal);
        CNuovaRiga->resize(1028, 481);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        CNuovaRiga->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(CNuovaRiga);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(CNuovaRiga);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        leConto = new QLineEdit(CNuovaRiga);
        leConto->setObjectName(QStringLiteral("leConto"));
        leConto->setReadOnly(true);

        horizontalLayout_3->addWidget(leConto);


        verticalLayout->addLayout(horizontalLayout_3);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(CNuovaRiga);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        cbTipoOpe = new QComboBox(CNuovaRiga);
        cbTipoOpe->setObjectName(QStringLiteral("cbTipoOpe"));
        cbTipoOpe->setEditable(true);
        cbTipoOpe->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout->addWidget(cbTipoOpe);

        rbE = new QRadioButton(CNuovaRiga);
        rbE->setObjectName(QStringLiteral("rbE"));

        horizontalLayout->addWidget(rbE);

        rbU = new QRadioButton(CNuovaRiga);
        rbU->setObjectName(QStringLiteral("rbU"));
        rbU->setChecked(true);

        horizontalLayout->addWidget(rbU);


        formLayout_3->setLayout(0, QFormLayout::LabelRole, horizontalLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_2 = new QLabel(CNuovaRiga);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        leMassimale = new QLineEdit(CNuovaRiga);
        leMassimale->setObjectName(QStringLiteral("leMassimale"));
        leMassimale->setMaximumSize(QSize(50, 16777215));
        leMassimale->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        leMassimale->setReadOnly(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, leMassimale);


        formLayout_3->setLayout(0, QFormLayout::FieldRole, formLayout_2);


        verticalLayout->addLayout(formLayout_3);

        line = new QFrame(CNuovaRiga);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lbrichiesta = new QLabel(CNuovaRiga);
        lbrichiesta->setObjectName(QStringLiteral("lbrichiesta"));

        horizontalLayout_2->addWidget(lbrichiesta);

        leRichiesta = new QLineEdit(CNuovaRiga);
        leRichiesta->setObjectName(QStringLiteral("leRichiesta"));

        horizontalLayout_2->addWidget(leRichiesta);

        lbElementi = new QLabel(CNuovaRiga);
        lbElementi->setObjectName(QStringLiteral("lbElementi"));

        horizontalLayout_2->addWidget(lbElementi);

        leElementi = new QLineEdit(CNuovaRiga);
        leElementi->setObjectName(QStringLiteral("leElementi"));

        horizontalLayout_2->addWidget(leElementi);

        pbCalc = new QPushButton(CNuovaRiga);
        pbCalc->setObjectName(QStringLiteral("pbCalc"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Arrow-Right.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbCalc->setIcon(icon1);

        horizontalLayout_2->addWidget(pbCalc);


        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lbEntrate = new QLabel(CNuovaRiga);
        lbEntrate->setObjectName(QStringLiteral("lbEntrate"));

        gridLayout->addWidget(lbEntrate, 0, 0, 1, 1);

        leEntrate = new QLineEdit(CNuovaRiga);
        leEntrate->setObjectName(QStringLiteral("leEntrate"));

        gridLayout->addWidget(leEntrate, 0, 1, 1, 1);

        lbUscite = new QLabel(CNuovaRiga);
        lbUscite->setObjectName(QStringLiteral("lbUscite"));

        gridLayout->addWidget(lbUscite, 1, 0, 1, 1);

        leUscite = new QLineEdit(CNuovaRiga);
        leUscite->setObjectName(QStringLiteral("leUscite"));

        gridLayout->addWidget(leUscite, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_5 = new QLabel(CNuovaRiga);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        ptNote = new QPlainTextEdit(CNuovaRiga);
        ptNote->setObjectName(QStringLiteral("ptNote"));
        ptNote->setMaximumSize(QSize(16777215, 100));

        formLayout->setWidget(0, QFormLayout::FieldRole, ptNote);


        verticalLayout->addLayout(formLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton = new QPushButton(CNuovaRiga);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(CNuovaRiga);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon3);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(CNuovaRiga);

        QMetaObject::connectSlotsByName(CNuovaRiga);
    } // setupUi

    void retranslateUi(QWidget *CNuovaRiga)
    {
        CNuovaRiga->setWindowTitle(QApplication::translate("CNuovaRiga", "Inserimento righe della registrazione", 0));
        label_3->setText(QApplication::translate("CNuovaRiga", "Conto:", 0));
        label->setText(QApplication::translate("CNuovaRiga", "Tipo Operazione:", 0));
        rbE->setText(QApplication::translate("CNuovaRiga", "Entrata", 0));
        rbU->setText(QApplication::translate("CNuovaRiga", "Uscita", 0));
        label_2->setText(QApplication::translate("CNuovaRiga", "Massimale:", 0));
        lbrichiesta->setText(QApplication::translate("CNuovaRiga", "Richiesta:", 0));
        lbElementi->setText(QApplication::translate("CNuovaRiga", "Elementi/Giorni:", 0));
        leElementi->setText(QApplication::translate("CNuovaRiga", "1", 0));
        pbCalc->setText(QApplication::translate("CNuovaRiga", "Calcola liquidazione", 0));
        lbEntrate->setText(QApplication::translate("CNuovaRiga", "Entrate:", 0));
        lbUscite->setText(QApplication::translate("CNuovaRiga", "Uscite:", 0));
        label_5->setText(QApplication::translate("CNuovaRiga", "Note:", 0));
        pushButton->setText(QApplication::translate("CNuovaRiga", "Salva Riga", 0));
        pushButton_2->setText(QApplication::translate("CNuovaRiga", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class CNuovaRiga: public Ui_CNuovaRiga {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CNUOVARIGA_H
