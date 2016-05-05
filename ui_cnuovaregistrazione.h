/********************************************************************************
** Form generated from reading UI file 'cnuovaregistrazione.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
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
    QLabel *label_4;
    QComboBox *cbSottogruppo;
    QComboBox *cbConto;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QComboBox *cbCpSottogruppo;
    QComboBox *cbContropartita;
    QFrame *line_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QTableView *tableView;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *CNuovaRegistrazione)
    {
        if (CNuovaRegistrazione->objectName().isEmpty())
            CNuovaRegistrazione->setObjectName(QStringLiteral("CNuovaRegistrazione"));
        CNuovaRegistrazione->setWindowModality(Qt::ApplicationModal);
        CNuovaRegistrazione->resize(1011, 608);
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
        label_4 = new QLabel(CNuovaRegistrazione);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(160, 16777215));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        cbSottogruppo = new QComboBox(CNuovaRegistrazione);
        cbSottogruppo->setObjectName(QStringLiteral("cbSottogruppo"));
        cbSottogruppo->setMaximumSize(QSize(50, 16777215));

        gridLayout_2->addWidget(cbSottogruppo, 0, 1, 1, 1);

        cbConto = new QComboBox(CNuovaRegistrazione);
        cbConto->setObjectName(QStringLiteral("cbConto"));

        gridLayout_2->addWidget(cbConto, 0, 2, 1, 1);


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

        gridLayout->addWidget(cbContropartita, 0, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        line_2 = new QFrame(CNuovaRegistrazione);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(CNuovaRegistrazione);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        tableView = new QTableView(CNuovaRegistrazione);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        checkBox = new QCheckBox(CNuovaRegistrazione);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout->addWidget(checkBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(CNuovaRegistrazione);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(CNuovaRegistrazione);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);

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
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(CNuovaRegistrazione);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_4);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(CNuovaRegistrazione);

        QMetaObject::connectSlotsByName(CNuovaRegistrazione);
    } // setupUi

    void retranslateUi(QWidget *CNuovaRegistrazione)
    {
        CNuovaRegistrazione->setWindowTitle(QApplication::translate("CNuovaRegistrazione", "Form", 0));
        label_2->setText(QApplication::translate("CNuovaRegistrazione", "Data Registrazione:", 0));
        label->setText(QApplication::translate("CNuovaRegistrazione", "Tipo:", 0));
        label_4->setText(QApplication::translate("CNuovaRegistrazione", "Conto:", 0));
        label_5->setText(QApplication::translate("CNuovaRegistrazione", "Contropartita:", 0));
        label_3->setText(QApplication::translate("CNuovaRegistrazione", "Dettagli:", 0));
        checkBox->setText(QApplication::translate("CNuovaRegistrazione", "Liquidato", 0));
        pushButton->setText(QApplication::translate("CNuovaRegistrazione", "Nuova Riga", 0));
        pushButton_2->setText(QApplication::translate("CNuovaRegistrazione", "Elimina Riga", 0));
        pushButton_3->setText(QApplication::translate("CNuovaRegistrazione", "Salva", 0));
        pushButton_4->setText(QApplication::translate("CNuovaRegistrazione", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class CNuovaRegistrazione: public Ui_CNuovaRegistrazione {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CNUOVAREGISTRAZIONE_H
