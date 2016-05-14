/********************************************************************************
** Form generated from reading UI file 'ctipianagrafici.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTIPIANAGRAFICI_H
#define UI_CTIPIANAGRAFICI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CTipiAnagrafici
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QWidget *CTipiAnagrafici)
    {
        if (CTipiAnagrafici->objectName().isEmpty())
            CTipiAnagrafici->setObjectName(QStringLiteral("CTipiAnagrafici"));
        CTipiAnagrafici->setWindowModality(Qt::ApplicationModal);
        CTipiAnagrafici->resize(751, 371);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Users.png"), QSize(), QIcon::Normal, QIcon::Off);
        CTipiAnagrafici->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(CTipiAnagrafici);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableView = new QTableView(CTipiAnagrafici);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tableView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(CTipiAnagrafici);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(CTipiAnagrafici);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_3 = new QPushButton(CTipiAnagrafici);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/ManageUsers.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(CTipiAnagrafici);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CTipiAnagrafici);

        QMetaObject::connectSlotsByName(CTipiAnagrafici);
    } // setupUi

    void retranslateUi(QWidget *CTipiAnagrafici)
    {
        CTipiAnagrafici->setWindowTitle(QApplication::translate("CTipiAnagrafici", "Tipi Anagrafici", 0));
        label->setText(QApplication::translate("CTipiAnagrafici", "Cerca:", 0));
        pushButton_3->setText(QApplication::translate("CTipiAnagrafici", "Nuovo", 0));
        pushButton_2->setText(QApplication::translate("CTipiAnagrafici", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class CTipiAnagrafici: public Ui_CTipiAnagrafici {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTIPIANAGRAFICI_H
