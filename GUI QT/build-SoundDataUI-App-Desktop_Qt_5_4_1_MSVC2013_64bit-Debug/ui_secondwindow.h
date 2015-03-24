/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondWindow
{
public:
    QAction *actionLogout;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuSettings;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SecondWindow)
    {
        if (SecondWindow->objectName().isEmpty())
            SecondWindow->setObjectName(QStringLiteral("SecondWindow"));
        SecondWindow->resize(800, 600);
        SecondWindow->setStyleSheet(QLatin1String("#SecondWindow\n"
"{\n"
"	background-image: url(:/images/images/ios_7_galaxy-1920x1080.jpg); \n"
"	background-size: 80px 60px; \n"
"	min-width: 700px !important; \n"
"	min-height: 200px !important; \n"
"}\n"
""));
        actionLogout = new QAction(SecondWindow);
        actionLogout->setObjectName(QStringLiteral("actionLogout"));
        centralwidget = new QWidget(SecondWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        SecondWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SecondWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        SecondWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SecondWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SecondWindow->setStatusBar(statusbar);

        menubar->addAction(menuSettings->menuAction());
        menuSettings->addAction(actionLogout);

        retranslateUi(SecondWindow);

        QMetaObject::connectSlotsByName(SecondWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SecondWindow)
    {
        SecondWindow->setWindowTitle(QApplication::translate("SecondWindow", "MainWindow", 0));
        actionLogout->setText(QApplication::translate("SecondWindow", "Logout", 0));
        menuSettings->setTitle(QApplication::translate("SecondWindow", "Settings", 0));
    } // retranslateUi

};

namespace Ui {
    class SecondWindow: public Ui_SecondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
