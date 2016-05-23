/********************************************************************************
** Form generated from reading UI file 'cmandati.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMANDATI_H
#define UI_CMANDATI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CMandati
{
public:
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *sbYear;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTableView *tvMaster;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QTableView *tvDetails;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *leImporto;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QWidget *CMandati)
    {
        if (CMandati->objectName().isEmpty())
            CMandati->setObjectName(QStringLiteral("CMandati"));
        CMandati->setWindowModality(Qt::ApplicationModal);
        CMandati->resize(1153, 622);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Accounting.png"), QSize(), QIcon::Normal, QIcon::Off);
        CMandati->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(CMandati);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(CMandati);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        sbYear = new QSpinBox(CMandati);
        sbYear->setObjectName(QStringLiteral("sbYear"));
        sbYear->setMaximumSize(QSize(50, 16777215));
        sbYear->setMinimum(2010);
        sbYear->setMaximum(2100);
        sbYear->setValue(2010);

        formLayout->setWidget(0, QFormLayout::FieldRole, sbYear);


        verticalLayout_3->addLayout(formLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(CMandati);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        tvMaster = new QTableView(CMandati);
        tvMaster->setObjectName(QStringLiteral("tvMaster"));
        tvMaster->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvMaster->setAlternatingRowColors(true);
        tvMaster->setSelectionMode(QAbstractItemView::SingleSelection);
        tvMaster->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvMaster->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(tvMaster);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(CMandati);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        tvDetails = new QTableView(CMandati);
        tvDetails->setObjectName(QStringLiteral("tvDetails"));
        tvDetails->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvDetails->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvDetails->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tvDetails);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(CMandati);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        leImporto = new QLineEdit(CMandati);
        leImporto->setObjectName(QStringLiteral("leImporto"));
        leImporto->setReadOnly(true);

        horizontalLayout->addWidget(leImporto);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(CMandati);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Pencil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(pushButton);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_3 = new QPushButton(CMandati);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Case.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(CMandati);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon3);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(CMandati);

        QMetaObject::connectSlotsByName(CMandati);
    } // setupUi

    void retranslateUi(QWidget *CMandati)
    {
        CMandati->setWindowTitle(QApplication::translate("CMandati", "Mandati", 0));
        label->setText(QApplication::translate("CMandati", "Anno:", 0));
        sbYear->setSpecialValueText(QString());
        label_2->setText(QApplication::translate("CMandati", "Mandato", 0));
        label_3->setText(QApplication::translate("CMandati", "Dettagli", 0));
        label_4->setText(QApplication::translate("CMandati", "Importo:", 0));
        pushButton->setText(QApplication::translate("CMandati", "Modifica registrazione", 0));
        pushButton_3->setText(QApplication::translate("CMandati", "Nuovo Mandato", 0));
        pushButton_2->setText(QApplication::translate("CMandati", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class CMandati: public Ui_CMandati {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMANDATI_H
