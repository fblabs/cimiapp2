/********************************************************************************
** Form generated from reading UI file 'cprintingjob.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CPRINTINGJOB_H
#define UI_CPRINTINGJOB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CPrintingJob
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *CPrintingJob)
    {
        if (CPrintingJob->objectName().isEmpty())
            CPrintingJob->setObjectName(QStringLiteral("CPrintingJob"));
        CPrintingJob->resize(930, 538);
        verticalLayout_2 = new QVBoxLayout(CPrintingJob);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(CPrintingJob);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(CPrintingJob);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(CPrintingJob);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(CPrintingJob);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(CPrintingJob);

        QMetaObject::connectSlotsByName(CPrintingJob);
    } // setupUi

    void retranslateUi(QWidget *CPrintingJob)
    {
        CPrintingJob->setWindowTitle(QApplication::translate("CPrintingJob", "Stampe", 0));
        pushButton->setText(QApplication::translate("CPrintingJob", "Stampa", 0));
        pushButton_2->setText(QApplication::translate("CPrintingJob", "Anteprima di stampa", 0));
        pushButton_3->setText(QApplication::translate("CPrintingJob", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class CPrintingJob: public Ui_CPrintingJob {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CPRINTINGJOB_H
