/********************************************************************************
** Form generated from reading UI file 'cconti.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CCONTI_H
#define UI_CCONTI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CConti
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_11;
    QListView *lvAnagrafica;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label;
    QLineEdit *leId;
    QFormLayout *formLayout;
    QLabel *label_2;
    QComboBox *cbTipo;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *leDescrizione;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *leCategoria;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QPlainTextEdit *ptIndirizzo;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_10;
    QPlainTextEdit *ptRecapito;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_11;
    QLineEdit *leCodiceFiscale;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *leCitta;
    QFormLayout *formLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *leCap;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLineEdit *leProv;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QLineEdit *letel;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_12;
    QComboBox *cbSex;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_13;
    QLineEdit *leIban;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_14;
    QPlainTextEdit *ptNote;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_15;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButton;
    QPushButton *pbAnnulla;
    QPushButton *pbSave;
    QPushButton *pbClose;

    void setupUi(QWidget *CConti)
    {
        if (CConti->objectName().isEmpty())
            CConti->setObjectName(QStringLiteral("CConti"));
        CConti->setWindowModality(Qt::ApplicationModal);
        CConti->resize(962, 790);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/user-group-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        CConti->setWindowIcon(icon);
        verticalLayout_5 = new QVBoxLayout(CConti);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        lvAnagrafica = new QListView(CConti);
        lvAnagrafica->setObjectName(QStringLiteral("lvAnagrafica"));
        lvAnagrafica->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lvAnagrafica->setSelectionBehavior(QAbstractItemView::SelectRows);
        lvAnagrafica->setSelectionRectVisible(false);

        horizontalLayout_11->addWidget(lvAnagrafica);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label = new QLabel(CConti);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_10->addWidget(label);

        leId = new QLineEdit(CConti);
        leId->setObjectName(QStringLiteral("leId"));
        leId->setReadOnly(true);

        horizontalLayout_10->addWidget(leId);


        verticalLayout_4->addLayout(horizontalLayout_10);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(CConti);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        cbTipo = new QComboBox(CConti);
        cbTipo->setObjectName(QStringLiteral("cbTipo"));

        formLayout->setWidget(0, QFormLayout::FieldRole, cbTipo);


        verticalLayout_4->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(CConti);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        leDescrizione = new QLineEdit(CConti);
        leDescrizione->setObjectName(QStringLiteral("leDescrizione"));

        horizontalLayout->addWidget(leDescrizione);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(CConti);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        leCategoria = new QLineEdit(CConti);
        leCategoria->setObjectName(QStringLiteral("leCategoria"));
        leCategoria->setReadOnly(false);

        horizontalLayout_2->addWidget(leCategoria);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_5 = new QLabel(CConti);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        ptIndirizzo = new QPlainTextEdit(CConti);
        ptIndirizzo->setObjectName(QStringLiteral("ptIndirizzo"));
        ptIndirizzo->setMaximumSize(QSize(16777215, 100));

        verticalLayout->addWidget(ptIndirizzo);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_10 = new QLabel(CConti);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_2->addWidget(label_10);

        ptRecapito = new QPlainTextEdit(CConti);
        ptRecapito->setObjectName(QStringLiteral("ptRecapito"));

        verticalLayout_2->addWidget(ptRecapito);


        verticalLayout_4->addLayout(verticalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_11 = new QLabel(CConti);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_7->addWidget(label_11);

        leCodiceFiscale = new QLineEdit(CConti);
        leCodiceFiscale->setObjectName(QStringLiteral("leCodiceFiscale"));

        horizontalLayout_7->addWidget(leCodiceFiscale);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_6 = new QLabel(CConti);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        leCitta = new QLineEdit(CConti);
        leCitta->setObjectName(QStringLiteral("leCitta"));

        horizontalLayout_3->addWidget(leCitta);


        verticalLayout_4->addLayout(horizontalLayout_3);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_7 = new QLabel(CConti);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_4->addWidget(label_7);

        leCap = new QLineEdit(CConti);
        leCap->setObjectName(QStringLiteral("leCap"));

        horizontalLayout_4->addWidget(leCap);


        formLayout_2->setLayout(0, QFormLayout::LabelRole, horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_8 = new QLabel(CConti);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_5->addWidget(label_8);

        leProv = new QLineEdit(CConti);
        leProv->setObjectName(QStringLiteral("leProv"));

        horizontalLayout_5->addWidget(leProv);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, horizontalLayout_5);


        verticalLayout_4->addLayout(formLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_9 = new QLabel(CConti);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_6->addWidget(label_9);

        letel = new QLineEdit(CConti);
        letel->setObjectName(QStringLiteral("letel"));

        horizontalLayout_6->addWidget(letel);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_12 = new QLabel(CConti);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_8->addWidget(label_12);

        cbSex = new QComboBox(CConti);
        cbSex->setObjectName(QStringLiteral("cbSex"));

        horizontalLayout_8->addWidget(cbSex);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_13 = new QLabel(CConti);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_9->addWidget(label_13);

        leIban = new QLineEdit(CConti);
        leIban->setObjectName(QStringLiteral("leIban"));

        horizontalLayout_9->addWidget(leIban);


        verticalLayout_4->addLayout(horizontalLayout_9);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_14 = new QLabel(CConti);
        label_14->setObjectName(QStringLiteral("label_14"));

        verticalLayout_3->addWidget(label_14);

        ptNote = new QPlainTextEdit(CConti);
        ptNote->setObjectName(QStringLiteral("ptNote"));

        verticalLayout_3->addWidget(ptNote);


        verticalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout_11->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_11);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_15 = new QLabel(CConti);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_13->addWidget(label_15);

        lineEdit = new QLineEdit(CConti);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_13->addWidget(lineEdit);


        verticalLayout_5->addLayout(horizontalLayout_13);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        pushButton = new QPushButton(CConti);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Users.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_12->addWidget(pushButton);

        pbAnnulla = new QPushButton(CConti);
        pbAnnulla->setObjectName(QStringLiteral("pbAnnulla"));
        pbAnnulla->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbAnnulla->setIcon(icon2);
        pbAnnulla->setIconSize(QSize(32, 32));

        horizontalLayout_12->addWidget(pbAnnulla);

        pbSave = new QPushButton(CConti);
        pbSave->setObjectName(QStringLiteral("pbSave"));
        pbSave->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSave->setIcon(icon3);
        pbSave->setIconSize(QSize(32, 32));

        horizontalLayout_12->addWidget(pbSave);

        pbClose = new QPushButton(CConti);
        pbClose->setObjectName(QStringLiteral("pbClose"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon4);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout_12->addWidget(pbClose);


        verticalLayout_5->addLayout(horizontalLayout_12);


        retranslateUi(CConti);

        QMetaObject::connectSlotsByName(CConti);
    } // setupUi

    void retranslateUi(QWidget *CConti)
    {
        CConti->setWindowTitle(QApplication::translate("CConti", "Anagrafica", 0));
        label->setText(QApplication::translate("CConti", "ID:", 0));
        label_2->setText(QApplication::translate("CConti", "Categoria:", 0));
        label_3->setText(QApplication::translate("CConti", "Descrizione:", 0));
        label_4->setText(QApplication::translate("CConti", "tipo (C/D/F):", 0));
        label_5->setText(QApplication::translate("CConti", "Indirizzo:", 0));
        label_10->setText(QApplication::translate("CConti", "Recapito:", 0));
        label_11->setText(QApplication::translate("CConti", "Codice Fiscale:", 0));
        label_6->setText(QApplication::translate("CConti", "Citt\303\240:", 0));
        label_7->setText(QApplication::translate("CConti", "CAP:", 0));
        label_8->setText(QApplication::translate("CConti", "Prov.:", 0));
        label_9->setText(QApplication::translate("CConti", "Telefono:", 0));
        label_12->setText(QApplication::translate("CConti", "Sesso:", 0));
        cbSex->clear();
        cbSex->insertItems(0, QStringList()
         << QApplication::translate("CConti", "M", 0)
         << QApplication::translate("CConti", "F", 0)
        );
        label_13->setText(QApplication::translate("CConti", "IBAN:", 0));
        label_14->setText(QApplication::translate("CConti", "Note:", 0));
        label_15->setText(QApplication::translate("CConti", "Cerca:", 0));
        pushButton->setText(QApplication::translate("CConti", "Nuovo", 0));
        pbAnnulla->setText(QApplication::translate("CConti", "Annulla", 0));
        pbSave->setText(QApplication::translate("CConti", "Salva", 0));
        pbClose->setText(QApplication::translate("CConti", "Chudi", 0));
    } // retranslateUi

};

namespace Ui {
    class CConti: public Ui_CConti {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCONTI_H
