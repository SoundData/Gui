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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Main_screen
{
public:
    QAction *actionLogout;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QWidget *widget_2;
    QPlainTextEdit *plainTextEdit_EvProcOutput;
    QWidget *widget;
    QWidget *widget_4;
    QWidget *widget_3;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_3;
    QLabel *label_15;
    QLabel *label_class;
    QLabel *label_server_ip;
    QLabel *label;
    QLabel *label_team;
    QLabel *label_13;
    QLabel *label_11;
    QLabel *label_map;
    QLabel *label_steam_id;
    QLabel *label_10;
    QWidget *widget_5;
    QLabel *label_6;
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
"#label_6\n"
"{\n"
"	font-weight: bold; \n"
"	padding: 10px 0 !important; \n"
"	text-align: center; \n"
"	margin: 2em auto !important; \n"
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
"	border-top-left-radius: 20px;\n"
"	border-top-right-radius:20px;\n"
"	b"
                        "order-radius: 20px; \n"
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
"	border-top-right-radius: 4px;\n"
"   color:#2A2A2A;\n"
"}"));
        actionLogout = new QAction(Main_screen);
        actionLogout->setObjectName(QStringLiteral("actionLogout"));
        centralwidget = new QWidget(Main_screen);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(375, 400));
        plainTextEdit_EvProcOutput = new QPlainTextEdit(widget_2);
        plainTextEdit_EvProcOutput->setObjectName(QStringLiteral("plainTextEdit_EvProcOutput"));
        plainTextEdit_EvProcOutput->setGeometry(QRect(10, 10, 351, 381));
        plainTextEdit_EvProcOutput->setAutoFillBackground(false);
        plainTextEdit_EvProcOutput->setStyleSheet(QLatin1String("background-color: transparent;\n"
"color: white;\n"
"border: 0px;"));
        plainTextEdit_EvProcOutput->setReadOnly(true);
        plainTextEdit_EvProcOutput->setPlainText(QStringLiteral(""));

        gridLayout->addWidget(widget_2, 0, 0, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));

        gridLayout->addWidget(widget, 1, 1, 1, 1);

        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setStyleSheet(QLatin1String("border-top-left-radius: 20px;\n"
"border-top-right-radius:20px;\n"
"border-radius: 20px; \n"
"color: white; \n"
"background-color:  #455774;\n"
"max-height: 290px; \n"
"max-width: 300px; "));
        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(20, 10, 221, 261));
        widget_3->setMouseTracking(false);
        widget_3->setAutoFillBackground(false);
        widget_3->setStyleSheet(QStringLiteral("background-color:transparent; "));
        gridLayoutWidget = new QWidget(widget_3);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(6, 40, 209, 221));
        gridLayout_3 = new QGridLayout(gridLayoutWidget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(gridLayoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setStyleSheet(QStringLiteral("background-color: transparent; "));
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_15, 6, 1, 1, 1);

        label_class = new QLabel(gridLayoutWidget);
        label_class->setObjectName(QStringLiteral("label_class"));
        label_class->setStyleSheet(QStringLiteral("background-color:transparent;"));
        label_class->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_class, 6, 2, 1, 1);

        label_server_ip = new QLabel(gridLayoutWidget);
        label_server_ip->setObjectName(QStringLiteral("label_server_ip"));
        label_server_ip->setStyleSheet(QStringLiteral("background-color:transparent;"));
        label_server_ip->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_server_ip, 2, 2, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("background-color: transparent;"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 2, 1, 1, 1);

        label_team = new QLabel(gridLayoutWidget);
        label_team->setObjectName(QStringLiteral("label_team"));
        label_team->setStyleSheet(QStringLiteral("background-color:transparent;"));
        label_team->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_team, 5, 2, 1, 1);

        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QStringLiteral("background-color: transparent !important; "));
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_13, 5, 1, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QStringLiteral("background-color: transparent; "));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_11, 3, 1, 1, 1);

        label_map = new QLabel(gridLayoutWidget);
        label_map->setObjectName(QStringLiteral("label_map"));
        label_map->setStyleSheet(QStringLiteral("background-color:transparent;"));
        label_map->setScaledContents(false);
        label_map->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_map, 4, 2, 1, 1);

        label_steam_id = new QLabel(gridLayoutWidget);
        label_steam_id->setObjectName(QStringLiteral("label_steam_id"));
        label_steam_id->setStyleSheet(QStringLiteral("background-color:transparent;"));
        label_steam_id->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_steam_id, 3, 2, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QStringLiteral("background-color: transparent; "));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_10, 4, 1, 1, 1);

        widget_5 = new QWidget(widget_3);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setGeometry(QRect(-3, 0, 221, 261));
        widget_5->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 0.5);"));
        label_6 = new QLabel(widget_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, -10, 211, 61));
        label_6->setStyleSheet(QLatin1String("background:transparent;\n"
""));
        widget_5->raise();
        gridLayoutWidget->raise();

        gridLayout->addWidget(widget_4, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

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

        QMetaObject::connectSlotsByName(Main_screen);
    } // setupUi

    void retranslateUi(QMainWindow *Main_screen)
    {
        Main_screen->setWindowTitle(QApplication::translate("Main_screen", "MainWindow", 0));
        actionLogout->setText(QApplication::translate("Main_screen", "Logout", 0));
        label_15->setText(QApplication::translate("Main_screen", "Class", 0));
        label_class->setText(QApplication::translate("Main_screen", "[Disconnected]", 0));
        label_server_ip->setText(QApplication::translate("Main_screen", "TextLabel", 0));
        label->setText(QApplication::translate("Main_screen", "Server IP", 0));
        label_team->setText(QApplication::translate("Main_screen", "[Disconnected]", 0));
        label_13->setText(QApplication::translate("Main_screen", "Team", 0));
        label_11->setText(QApplication::translate("Main_screen", "Steam ID", 0));
        label_map->setText(QApplication::translate("Main_screen", "[Disconnected]", 0));
        label_steam_id->setText(QApplication::translate("Main_screen", "TextLabel", 0));
        label_10->setText(QApplication::translate("Main_screen", "Map", 0));
        label_6->setText(QApplication::translate("Main_screen", "Game Information", 0));
        menuLogout->setTitle(QApplication::translate("Main_screen", "Settings", 0));
    } // retranslateUi

};

namespace Ui {
    class Main_screen: public Ui_Main_screen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_SCREEN_H
