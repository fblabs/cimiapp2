/********************************************************************************
** Form generated from reading UI file 'csettings.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSETTINGS_H
#define UI_CSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CSettings
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *leServer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lePort;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *leDatabase;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *leUsername;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lePassword;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *CSettings)
    {
        if (CSettings->objectName().isEmpty())
            CSettings->setObjectName(QStringLiteral("CSettings"));
        CSettings->resize(393, 204);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Actions-configure-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        CSettings->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(CSettings);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(CSettings);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(80, 0));

        horizontalLayout->addWidget(label);

        leServer = new QLineEdit(CSettings);
        leServer->setObjectName(QStringLiteral("leServer"));

        horizontalLayout->addWidget(leServer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(CSettings);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(80, 0));
        label_3->setMaximumSize(QSize(80, 16777215));
        label_3->setBaseSize(QSize(0, 0));

        horizontalLayout_2->addWidget(label_3);

        lePort = new QLineEdit(CSettings);
        lePort->setObjectName(QStringLiteral("lePort"));
        lePort->setInputMethodHints(Qt::ImhDigitsOnly);

        horizontalLayout_2->addWidget(lePort);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(CSettings);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(80, 0));
        label_5->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_6->addWidget(label_5);

        leDatabase = new QLineEdit(CSettings);
        leDatabase->setObjectName(QStringLiteral("leDatabase"));

        horizontalLayout_6->addWidget(leDatabase);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(CSettings);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(80, 0));
        label_2->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_3->addWidget(label_2);

        leUsername = new QLineEdit(CSettings);
        leUsername->setObjectName(QStringLiteral("leUsername"));

        horizontalLayout_3->addWidget(leUsername);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(CSettings);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(80, 0));

        horizontalLayout_4->addWidget(label_4);

        lePassword = new QLineEdit(CSettings);
        lePassword->setObjectName(QStringLiteral("lePassword"));
        lePassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(lePassword);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton = new QPushButton(CSettings);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_5->addWidget(pushButton);

        pushButton_2 = new QPushButton(CSettings);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_5->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(CSettings);

        QMetaObject::connectSlotsByName(CSettings);
    } // setupUi

    void retranslateUi(QWidget *CSettings)
    {
        CSettings->setWindowTitle(QApplication::translate("CSettings", "Impostazioni", 0));
        label->setText(QApplication::translate("CSettings", "Server:", 0));
        label_3->setText(QApplication::translate("CSettings", "Port:", 0));
        label_5->setText(QApplication::translate("CSettings", "Database:", 0));
        label_2->setText(QApplication::translate("CSettings", "Username:", 0));
        label_4->setText(QApplication::translate("CSettings", "Password:", 0));
        pushButton->setText(QApplication::translate("CSettings", "Salva", 0));
        pushButton_2->setText(QApplication::translate("CSettings", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class CSettings: public Ui_CSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSETTINGS_H
