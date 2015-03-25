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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Main_screen
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Main_screen)
    {
        if (Main_screen->objectName().isEmpty())
            Main_screen->setObjectName(QStringLiteral("Main_screen"));
        Main_screen->resize(800, 600);
        menubar = new QMenuBar(Main_screen);
        menubar->setObjectName(QStringLiteral("menubar"));
        Main_screen->setMenuBar(menubar);
        centralwidget = new QWidget(Main_screen);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Main_screen->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Main_screen);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Main_screen->setStatusBar(statusbar);

        retranslateUi(Main_screen);

        QMetaObject::connectSlotsByName(Main_screen);
    } // setupUi

    void retranslateUi(QMainWindow *Main_screen)
    {
        Main_screen->setWindowTitle(QApplication::translate("Main_screen", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class Main_screen: public Ui_Main_screen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_SCREEN_H
