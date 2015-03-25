/********************************************************************************
** Form generated from reading UI file 'main_screen.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_SCREEN_H
#define UI_MAIN_SCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Main_screen
{
public:
    QAction *actionLogout;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *widget_3;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_6;
    QWidget *tab_2;
    QWidget *widget_4;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_7;
    QComboBox *comboBox_3;
    QComboBox *comboBox_2;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QWidget *widget;
    QWidget *widget_2;
    QMenuBar *menubar;
    QMenu *menuLogout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Main_screen)
    {
        if (Main_screen->objectName().isEmpty())
            Main_screen->setObjectName(QStringLiteral("Main_screen"));
        Main_screen->resize(800, 527);
        Main_screen->setStyleSheet(QLatin1String("#Main_screen\n"
"{\n"
"	background-image: url(:/images/images/splash.jpg);\n"
"	min-height: 527px; \n"
"	max-height: 600px; \n"
"	min-width: 800px; \n"
"	max-width: 900px; \n"
"}\n"
"#widget\n"
"{\n"
"	image: url(:/images/images/title_game.png);\n"
"}\n"
"\n"
"QFormLayout\n"
"{\n"
"	background-color: transparent; \n"
"}\n"
"#widget_3\n"
"{\n"
"	background-color: rgba(0, 0, 0, 0.5);\n"
"}\n"
"\n"
"#widget_4\n"
"{\n"
"	background-color: rgba(0, 0, 0, 0.5);\n"
"}\n"
"\n"
"#label_6\n"
"{\n"
"	font-weight: bold; \n"
"	padding: 10px 0; \n"
"	text-align: center; \n"
"	margin: 0 auto; \n"
"}\n"
"\n"
"#label_9\n"
"{\n"
"	font-weight: bold; \n"
"}\n"
"\n"
"QComboBox\n"
"{\n"
"	padding: 3px; \n"
"}\n"
"\n"
"#label_5\n"
"{\n"
"	font-weight: bold; \n"
"}\n"
"\n"
"#widget_2\n"
"{\n"
"	border-style: solid;\n"
"	border: 2px solid white;\n"
"	border-radius: 8px;\n"
"	background-color: #39475F; \n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	font-size: 15px; \n"
"	padding: 10px; \n"
"}\n"
" QTabWidget QWidget\n"
"{\n"
"	border-top-left-radiu"
                        "s: 20px;\n"
"	border-top-right-radius:20px;\n"
"	border-radius: 20px; \n"
"	color: white; \n"
"    background-color:  #455774;\n"
"}\n"
"\n"
"\n"
"QTabWidget::pane \n"
"{\n"
"	border-radius: 4px;\n"
"}\n"
"\n"
"\n"
"  QTabWidget::tab-bar \n"
"{          \n"
"	left: 15px; /* move to the right by 5px */\n"
"   bottom: 0px; \n"
"   background-color: red; /* nothing happens*/\n"
" } \n"
"\n"
"QTabBar::tab \n"
"{ \n"
"   background: rgba(255, 255, 255, 0);\n"
"   padding: 3px;\n"
"   color:#FEFEFE;\n"
"  font-size: 13px;\n"
"width: 95px; \n"
"\n"
" }\n"
"       \n"
"QTabBar::tab:hover {\n"
"  background: #D1D5DC; \n"
"	color: #455774; \n"
"	border-top-left-radius: 4px;\n"
"	border-top-right-radius: 4px;\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:selected{\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,                                      stop: 0 #fafafa, stop: 0.4 #f4f4f4,                                      stop: 0.5 #e7e7e7, stop: 1.0 #fafafa); \n"
"	border-top-left-radius: 4px;\n"
"	border-top-right-radi"
                        "us: 4px;\n"
"   color:#2A2A2A;\n"
"}"));
        actionLogout = new QAction(Main_screen);
        actionLogout->setObjectName(QStringLiteral("actionLogout"));
        centralwidget = new QWidget(Main_screen);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(460, 60, 311, 331));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        widget_3 = new QWidget(tab);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(20, 20, 271, 261));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 150, 56, 38));
        label_3->setStyleSheet(QStringLiteral("background-color: transparent; "));
        label = new QLabel(widget_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 106, 91, 38));
        label->setAutoFillBackground(false);
        label->setStyleSheet(QStringLiteral("background-color: transparent; "));
        label->setTextFormat(Qt::AutoText);
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 62, 89, 38));
        label_2->setStyleSheet(QStringLiteral("background-color: transparent; "));
        label_6 = new QLabel(widget_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 18, 249, 38));
        label_6->setStyleSheet(QStringLiteral("background-color: transparent; "));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        widget_4 = new QWidget(tab_2);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(20, 20, 271, 261));
        label_5 = new QLabel(widget_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 20, 124, 38));
        label_5->setStyleSheet(QStringLiteral("background-color: transparent; "));
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(25, 108, 72, 38));
        label_4->setStyleSheet(QStringLiteral("background-color: transparent; "));
        label_8 = new QLabel(widget_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(25, 64, 67, 38));
        label_8->setStyleSheet(QStringLiteral("background-color: transparent; "));
        label_9 = new QLabel(widget_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(25, 20, 79, 38));
        label_9->setStyleSheet(QStringLiteral("background-color: transparent; "));
        label_7 = new QLabel(widget_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(25, 152, 43, 38));
        label_7->setStyleSheet(QStringLiteral("background-color: transparent; "));
        comboBox_3 = new QComboBox(widget_4);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(110, 152, 124, 24));
        comboBox_3->setStyleSheet(QStringLiteral("border-radius: 8px; "));
        comboBox_2 = new QComboBox(widget_4);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(110, 108, 124, 24));
        comboBox_2->setStyleSheet(QStringLiteral("border-radius: 8px; "));
        comboBox = new QComboBox(widget_4);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(110, 64, 124, 24));
        comboBox->setStyleSheet(QStringLiteral("border-radius: 8px; "));
        pushButton = new QPushButton(widget_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 196, 84, 29));
        pushButton->setStyleSheet(QLatin1String("	color: gray;\n"
"background-color: qlineargradient(spread:repeat, x1:1, y1:1, x2:1, y2:0, stop:0.551136 rgba(217, 224, 234, 255), stop:1 rgba(255, 255, 255, 255));\n"
"	border-width: 1px;\n"
"	border-color: #d9e0ea;\n"
"	border-style: solid;\n"
"	border-radius: 7px;\n"
"	padding: 5px;\n"
"	font-size: 15px;\n"
"	padding-left: 5px;\n"
"	padding-right: 5px;\n"
"	min-width: 72px;\n"
"	max-width: 72px; \n"
"	min-height: 17px;\n"
"	max-height: 17px;"));
        tabWidget->addTab(tab_2, QString());
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(550, 420, 221, 61));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(40, 30, 391, 371));
        Main_screen->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Main_screen);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuLogout = new QMenu(menubar);
        menuLogout->setObjectName(QStringLiteral("menuLogout"));
        Main_screen->setMenuBar(menubar);
        statusbar = new QStatusBar(Main_screen);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Main_screen->setStatusBar(statusbar);

        menubar->addAction(menuLogout->menuAction());
        menuLogout->addAction(actionLogout);

        retranslateUi(Main_screen);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Main_screen);
    } // setupUi

    void retranslateUi(QMainWindow *Main_screen)
    {
        Main_screen->setWindowTitle(QApplication::translate("Main_screen", "MainWindow", 0));
        actionLogout->setText(QApplication::translate("Main_screen", "Logout", 0));
        label_3->setText(QApplication::translate("Main_screen", "Map", 0));
        label->setText(QApplication::translate("Main_screen", "Steam ID", 0));
        label_2->setText(QApplication::translate("Main_screen", "Server IP", 0));
        label_6->setText(QApplication::translate("Main_screen", "Game Information", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Main_screen", "General Settings", 0));
        label_5->setText(QApplication::translate("Main_screen", "Sounds", 0));
        label_4->setText(QApplication::translate("Main_screen", "Events", 0));
        label_8->setText(QApplication::translate("Main_screen", "Death", 0));
        label_9->setText(QApplication::translate("Main_screen", "Events", 0));
        label_7->setText(QApplication::translate("Main_screen", "Kill", 0));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("Main_screen", "Sound 1", 0)
         << QApplication::translate("Main_screen", "Sound 2", 0)
         << QApplication::translate("Main_screen", "Sound 3", 0)
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Main_screen", "Sound 1", 0)
         << QApplication::translate("Main_screen", "Sound 2", 0)
         << QApplication::translate("Main_screen", "Sound 3", 0)
        );
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Main_screen", "Sound 1", 0)
         << QApplication::translate("Main_screen", "Sound 2", 0)
        );
        pushButton->setText(QApplication::translate("Main_screen", "Submit", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Main_screen", "Customization", 0));
        menuLogout->setTitle(QApplication::translate("Main_screen", "Settings", 0));
    } // retranslateUi

};

namespace Ui {
    class Main_screen: public Ui_Main_screen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_SCREEN_H
