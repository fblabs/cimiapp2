/********************************************************************************
** Form generated from reading UI file 'cnuovaregistrazione.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CNUOVAREGISTRAZIONE_H
#define UI_CNUOVAREGISTRAZIONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CNuovaRegistrazione
{
public:
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QDateEdit *deDataReg;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *cbTipoRegistrazione;
    QFrame *line;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QComboBox *cbConto;
    QLabel *label_4;
    QComboBox *cbSottogruppo;
    QCheckBox *cbxRimborso;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QComboBox *cbCpSottogruppo;
    QComboBox *cbContropartita;
    QFrame *line_2;
    QPushButton *pushButton_5;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QTableView *tvDetails;
    QCheckBox *checkBox;
    QLabel *label_6;
    QPlainTextEdit *ptNote;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;

    void setupUi(QWidget *CNuovaRegistrazione)
    {
        if (CNuovaRegistrazione->objectName().isEmpty())
            CNuovaRegistrazione->setObjectName(QStringLiteral("CNuovaRegistrazione"));
        CNuovaRegistrazione->setWindowModality(Qt::ApplicationModal);
        CNuovaRegistrazione->resize(1011, 608);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/nuovareegistrazione.png"), QSize(), QIcon::Normal, QIcon::Off);
        CNuovaRegistrazione->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(CNuovaRegistrazione);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_2 = new QLabel(CNuovaRegistrazione);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        deDataReg = new QDateEdit(CNuovaRegistrazione);
        deDataReg->setObjectName(QStringLiteral("deDataReg"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, deDataReg);


        verticalLayout_3->addLayout(formLayout_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(CNuovaRegistrazione);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        cbTipoRegistrazione = new QComboBox(CNuovaRegistrazione);
        cbTipoRegistrazione->setObjectName(QStringLiteral("cbTipoRegistrazione"));

        formLayout->setWidget(0, QFormLayout::FieldRole, cbTipoRegistrazione);


        verticalLayout_3->addLayout(formLayout);

        line = new QFrame(CNuovaRegistrazione);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        cbConto = new QComboBox(CNuovaRegistrazione);
        cbConto->setObjectName(QStringLiteral("cbConto"));
        cbConto->setEditable(true);
        cbConto->setInsertPolicy(QComboBox::NoInsert);

        gridLayout_2->addWidget(cbConto, 1, 3, 1, 1);

        label_4 = new QLabel(CNuovaRegistrazione);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(160, 16777215));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        cbSottogruppo = new QComboBox(CNuovaRegistrazione);
        cbSottogruppo->setObjectName(QStringLiteral("cbSottogruppo"));
        cbSottogruppo->setMaximumSize(QSize(50, 16777215));

        gridLayout_2->addWidget(cbSottogruppo, 1, 2, 1, 1);

        cbxRimborso = new QCheckBox(CNuovaRegistrazione);
        cbxRimborso->setObjectName(QStringLiteral("cbxRimborso"));
        cbxRimborso->setChecked(true);

        gridLayout_2->addWidget(cbxRimborso, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_5 = new QLabel(CNuovaRegistrazione);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(160, 16777215));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        cbCpSottogruppo = new QComboBox(CNuovaRegistrazione);
        cbCpSottogruppo->setObjectName(QStringLiteral("cbCpSottogruppo"));
        cbCpSottogruppo->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(cbCpSottogruppo, 0, 1, 1, 1);

        cbContropartita = new QComboBox(CNuovaRegistrazione);
        cbContropartita->setObjectName(QStringLiteral("cbContropartita"));
        cbContropartita->setEditable(true);
        cbContropartita->setInsertPolicy(QComboBox::NoInsert);

        gridLayout->addWidget(cbContropartita, 0, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        line_2 = new QFrame(CNuovaRegistrazione);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        pushButton_5 = new QPushButton(CNuovaRegistrazione);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Database.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon1);
        pushButton_5->setIconSize(QSize(32, 32));

        verticalLayout_3->addWidget(pushButton_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(CNuovaRegistrazione);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        tvDetails = new QTableView(CNuovaRegistrazione);
        tvDetails->setObjectName(QStringLiteral("tvDetails"));
        tvDetails->setAlternatingRowColors(true);

        verticalLayout->addWidget(tvDetails);

        checkBox = new QCheckBox(CNuovaRegistrazione);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout->addWidget(checkBox);

        label_6 = new QLabel(CNuovaRegistrazione);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        ptNote = new QPlainTextEdit(CNuovaRegistrazione);
        ptNote->setObjectName(QStringLiteral("ptNote"));
        ptNote->setMaximumSize(QSize(16777215, 80));
        ptNote->setBaseSize(QSize(0, 0));

        verticalLayout->addWidget(ptNote);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(CNuovaRegistrazione);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(CNuovaRegistrazione);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon3);

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout);

        line_3 = new QFrame(CNuovaRegistrazione);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_3 = new QPushButton(CNuovaRegistrazione);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setEnabled(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon4);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_6 = new QPushButton(CNuovaRegistrazione);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Resources/Arrow-Left.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon5);
        pushButton_6->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_6);

        pushButton_4 = new QPushButton(CNuovaRegistrazione);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon6);
        pushButton_4->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_4);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(CNuovaRegistrazione);

        QMetaObject::connectSlotsByName(CNuovaRegistrazione);
    } // setupUi

    void retranslateUi(QWidget *CNuovaRegistrazione)
    {
        CNuovaRegistrazione->setWindowTitle(QApplication::translate("CNuovaRegistrazione", "Nuova registrazione", 0));
        label_2->setText(QApplication::translate("CNuovaRegistrazione", "Data Registrazione:", 0));
        label->setText(QApplication::translate("CNuovaRegistrazione", "Tipo:", 0));
        label_4->setText(QApplication::translate("CNuovaRegistrazione", "Conto:", 0));
        cbxRimborso->setText(QApplication::translate("CNuovaRegistrazione", "Rimborso Spese Dipendenti", 0));
        label_5->setText(QApplication::translate("CNuovaRegistrazione", "Contropartita:", 0));
        pushButton_5->setText(QApplication::translate("CNuovaRegistrazione", "Crea Registrazione", 0));
        label_3->setText(QApplication::translate("CNuovaRegistrazione", "Dettagli:", 0));
        checkBox->setText(QApplication::translate("CNuovaRegistrazione", "Liquidato", 0));
        label_6->setText(QApplication::translate("CNuovaRegistrazione", "Note:", 0));
        pushButton->setText(QApplication::translate("CNuovaRegistrazione", "Nuova Riga", 0));
        pushButton_2->setText(QApplication::translate("CNuovaRegistrazione", "Elimina Riga", 0));
        pushButton_3->setText(QApplication::translate("CNuovaRegistrazione", "Salva", 0));
        pushButton_6->setText(QApplication::translate("CNuovaRegistrazione", "Annulla", 0));
        pushButton_4->setText(QApplication::translate("CNuovaRegistrazione", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class CNuovaRegistrazione: public Ui_CNuovaRegistrazione {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CNUOVAREGISTRAZIONE_H
