/********************************************************************************
** Form generated from reading UI file 'screen2.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREEN2_H
#define UI_SCREEN2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Screen2
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QLabel *label_2;
    QWidget *tab_2;
    QWidget *widget;

    void setupUi(QDialog *Screen2)
    {
        if (Screen2->objectName().isEmpty())
            Screen2->setObjectName(QStringLiteral("Screen2"));
        Screen2->resize(1000, 700);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Screen2->sizePolicy().hasHeightForWidth());
        Screen2->setSizePolicy(sizePolicy);
        Screen2->setStyleSheet(QLatin1String("#Screen2\n"
"{\n"
"	background-image: url(:/images/images/ios_7_galaxy-1920x1080.jpg); \n"
"	min-width: 1000px; \n"
"	min-height: 700px; \n"
"}\n"
"\n"
"#widget\n"
"{\n"
"	image: url(:/images/images/title_game.png);\n"
"	max-width: 300px;\n"
"    max-height: 80px;\n"
"	min-width: 300px; \n"
"	min-height: 80px; \n"
"}\n"
"\n"
"QTabWidget::tab-bar \n"
"{          \n"
"	left: 10px; /* move to the right by 5px */\n"
"    bottom: 0px; \n"
"	border-radius: 10px;\n"
" } \n"
"\n"
"QTabBar::tab \n"
"{   \n"
"   background: rgba(255, 255, 255, 0);\n"
"   padding: 10px;\n"
"	font-size: 11px; \n"
"	color: white;\n"
"	border-top-left-radius: 10px;\n"
"	border-top-right-radius: 10px;\n"
" }\n"
"       \n"
"QTabBar::tab:hover \n"
"{\n"
"  background:rgba(11, 173, 254, 0.7);\n"
"	border-top-left-radius: 8px;\n"
"	border-top-right-radius: 8px;\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"    background: rgba(11, 71, 142, 0.7); \n"
"	border-top-left-radius: 10px;\n"
"	border-top-right-radius: 10px;\n"
"   color: white;\n"
""
                        "}\n"
"\n"
"QLabel\n"
"{\n"
"	font-weight: bold;\n"
"	background-image: none; \n"
"	background-color: white; \n"
"	font-size:19px;\n"
"	color:white; \n"
"}"));
        tabWidget = new QTabWidget(Screen2);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(100, 310, 781, 221));
        tabWidget->setStyleSheet(QLatin1String("background-color: rgba(0, 0, 0, 0.7);\n"
"border-radius: 10px;\n"
"border-color: rgba(11, 173, 254, 0);\n"
""));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 101, 41));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 90, 101, 41));
        label_2->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        widget = new QWidget(Screen2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(600, 560, 300, 80));

        retranslateUi(Screen2);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Screen2);
    } // setupUi

    void retranslateUi(QDialog *Screen2)
    {
        Screen2->setWindowTitle(QApplication::translate("Screen2", "Dialog", 0));
        label->setText(QApplication::translate("Screen2", "Server IP", 0));
        label_2->setText(QApplication::translate("Screen2", "Steam ID", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Screen2", "Game Info", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Screen2", "Customization", 0));
    } // retranslateUi

};

namespace Ui {
    class Screen2: public Ui_Screen2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREEN2_H
