/********************************************************************************
** Form generated from reading UI file 'cmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMAINWINDOW_H
#define UI_CMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CMainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_4;
    QGridLayout *gridLayout_2;
    QPushButton *pBOperazioni;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_9;
    QPushButton *pushButton_3;
    QPushButton *pbConti;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QPushButton *pushButton_8;
    QPushButton *pbBuoni;
    QLabel *label_5;

    void setupUi(QMainWindow *CMainWindow)
    {
        if (CMainWindow->objectName().isEmpty())
            CMainWindow->setObjectName(QStringLiteral("CMainWindow"));
        CMainWindow->resize(1106, 703);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(135, 135, 203, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(219, 219, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(177, 177, 229, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(67, 67, 101, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(90, 90, 135, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(195, 195, 229, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        CMainWindow->setPalette(palette);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Stardock DesktopX.png"), QSize(), QIcon::Normal, QIcon::Off);
        CMainWindow->setWindowIcon(icon);
        CMainWindow->setAutoFillBackground(false);
        CMainWindow->setIconSize(QSize(32, 32));
        CMainWindow->setDockOptions(QMainWindow::AnimatedDocks);
        centralWidget = new QWidget(CMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(312, 312));
        label_2->setMaximumSize(QSize(312, 312));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Stardock DesktopX.png")));
        label_2->setScaledContents(true);
        label_2->setMargin(20);

        horizontalLayout->addWidget(label_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Arial Black"));
        font.setPointSize(48);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(60, 60, 255);"));
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout->addWidget(label);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_6->setOpenExternalLinks(true);

        verticalLayout->addWidget(label_6);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pBOperazioni = new QPushButton(centralWidget);
        pBOperazioni->setObjectName(QStringLiteral("pBOperazioni"));
        pBOperazioni->setMinimumSize(QSize(225, 0));
        pBOperazioni->setMaximumSize(QSize(225, 16777215));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        pBOperazioni->setFont(font2);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/registrazioni.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBOperazioni->setIcon(icon1);
        pBOperazioni->setIconSize(QSize(64, 64));
        pBOperazioni->setFlat(true);

        gridLayout_2->addWidget(pBOperazioni, 3, 2, 1, 1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font2);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Actions-configure-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(64, 64));
        pushButton_2->setFlat(true);

        gridLayout_2->addWidget(pushButton_2, 3, 0, 1, 1);

        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setFont(font2);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/hamlet.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon3);
        pushButton_5->setIconSize(QSize(64, 64));
        pushButton_5->setFlat(true);

        gridLayout_2->addWidget(pushButton_5, 5, 1, 1, 1);

        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/Book.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon4);
        pushButton_9->setIconSize(QSize(64, 64));
        pushButton_9->setFlat(true);

        gridLayout_2->addWidget(pushButton_9, 8, 2, 1, 1);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setFont(font2);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Resources/mastri.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon5);
        pushButton_3->setIconSize(QSize(64, 64));
        pushButton_3->setFlat(true);

        gridLayout_2->addWidget(pushButton_3, 3, 4, 1, 1);

        pbConti = new QPushButton(centralWidget);
        pbConti->setObjectName(QStringLiteral("pbConti"));
        pbConti->setFont(font2);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Resources/user-group-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbConti->setIcon(icon6);
        pbConti->setIconSize(QSize(64, 64));
        pbConti->setFlat(true);

        gridLayout_2->addWidget(pbConti, 3, 1, 1, 1);

        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Resources/aggiorna.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon7);
        pushButton_6->setIconSize(QSize(64, 64));
        pushButton_6->setFlat(true);

        gridLayout_2->addWidget(pushButton_6, 5, 0, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font2);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon8);
        pushButton->setIconSize(QSize(64, 64));
        pushButton->setFlat(true);

        gridLayout_2->addWidget(pushButton, 3, 5, 1, 1);

        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/Resources/mandati.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon9);
        pushButton_7->setIconSize(QSize(64, 64));
        pushButton_7->setFlat(true);

        gridLayout_2->addWidget(pushButton_7, 3, 3, 1, 1);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(225, 0));
        pushButton_4->setMaximumSize(QSize(225, 16777215));
        pushButton_4->setFont(font2);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/Resources/nuovareegistrazione.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon10);
        pushButton_4->setIconSize(QSize(64, 64));
        pushButton_4->setFlat(true);

        gridLayout_2->addWidget(pushButton_4, 2, 2, 1, 1);

        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/Resources/nuovomandato.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon11);
        pushButton_8->setIconSize(QSize(64, 64));
        pushButton_8->setFlat(true);

        gridLayout_2->addWidget(pushButton_8, 2, 3, 1, 1);

        pbBuoni = new QPushButton(centralWidget);
        pbBuoni->setObjectName(QStringLiteral("pbBuoni"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/Resources/Notepad.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbBuoni->setIcon(icon12);
        pbBuoni->setIconSize(QSize(64, 64));
        pbBuoni->setFlat(true);

        gridLayout_2->addWidget(pbBuoni, 5, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(16777215, 30));

        verticalLayout_2->addWidget(label_5);

        CMainWindow->setCentralWidget(centralWidget);

        retranslateUi(CMainWindow);

        QMetaObject::connectSlotsByName(CMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CMainWindow)
    {
        CMainWindow->setWindowTitle(QApplication::translate("CMainWindow", "CimiApp2 1.0.7", 0));
        label_3->setText(QString());
        label->setText(QApplication::translate("CMainWindow", "CimiApp 2", 0));
        label_6->setText(QApplication::translate("CMainWindow", "<html><head/><body><p>Vers: 1.0.7 </p><p><br/><span style=\" font-style:italic;\">developed with:</span> Qt 5.5.1 libs</p><p><span style=\" font-style:italic;\">built with:</span> mingw 4.9.2 </p><p><br/></p><p>[C][P] fblabs 2016</p><p><a href=\"www.github.com/fblabs/cimiapp2\"><span style=\" text-decoration: underline; color:#0000ff;\">Sources</span></a></p><p><br/></p><p><br/></p><p><br/></p><p><br/></p></body></html>", 0));
        label_4->setText(QString());
        pBOperazioni->setText(QApplication::translate("CMainWindow", "Registrazioni           ", 0));
        pushButton_2->setText(QApplication::translate("CMainWindow", "Impostazioni", 0));
        pushButton_5->setText(QApplication::translate("CMainWindow", "Tipi Anagrafici", 0));
        pushButton_9->setText(QApplication::translate("CMainWindow", "Certificazioni            ", 0));
        pushButton_3->setText(QApplication::translate("CMainWindow", "Mastri", 0));
        pbConti->setText(QApplication::translate("CMainWindow", "Anagrafica", 0));
        pushButton_6->setText(QApplication::translate("CMainWindow", "Aggiorna", 0));
        pushButton->setText(QApplication::translate("CMainWindow", "Chiudi", 0));
        pushButton_7->setText(QApplication::translate("CMainWindow", "Mandati", 0));
        pushButton_4->setText(QApplication::translate("CMainWindow", "Nuova registrazione", 0));
        pushButton_8->setText(QApplication::translate("CMainWindow", "Nuovo Mandato", 0));
        pbBuoni->setText(QApplication::translate("CMainWindow", "Buoni                           ", 0));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CMainWindow: public Ui_CMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMAINWINDOW_H
