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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Main_screen
{
public:
    QAction *actionOpen;
    QAction *actionSave_File;
    QAction *actionLog_Out;
    QAction *actionExit;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QFrame *logInFrame;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Main_screen)
    {
        if (Main_screen->objectName().isEmpty())
            Main_screen->setObjectName(QStringLiteral("Main_screen"));
        Main_screen->resize(679, 442);
        Main_screen->setMinimumSize(QSize(480, 270));
        Main_screen->setMaximumSize(QSize(1200, 674));
        Main_screen->setStyleSheet(QLatin1String("/*QWidget{\n"
"	background-image: url(:/images/images/background.png);\n"
"}*/\n"
"#Main_screen {\n"
"	/*background-image: url(:/images/images/background-small.png);*/\n"
"	background-image: url(:/images/images/background-music-1200-750.png);\n"
"\n"
"	width: 450px;\n"
"    height: 720px;\n"
"}\n"
"\n"
"#logInFrame {\n"
"background-color: white;\n"
"border: 3px solid gray;\n"
"border-radius: 10px;\n"
"	width: 450px;\n"
"    height: 720px;\n"
"}\n"
"\n"
"QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}\n"
"\n"
"QPushButton {\n"
"color: white;\n"
"background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #88d, stop: 0.1 #99e, stop: 0.49 #77c, stop: 0.5 #66b, stop: 1 #77c);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"min-width: 50px;\n"
"max-width: 50px;\n"
"min-height: 13px;\n"
"max-height: 13px;\n"
""
                        "}\n"
"\n"
"QLabel {\n"
"font-weight: bold;\n"
"font-color: white;\n"
"font-size: 15px;\n"
"}"));
        actionOpen = new QAction(Main_screen);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave_File = new QAction(Main_screen);
        actionSave_File->setObjectName(QStringLiteral("actionSave_File"));
        actionLog_Out = new QAction(Main_screen);
        actionLog_Out->setObjectName(QStringLiteral("actionLog_Out"));
        actionExit = new QAction(Main_screen);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(Main_screen);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        logInFrame = new QFrame(centralWidget);
        logInFrame->setObjectName(QStringLiteral("logInFrame"));
        logInFrame->setMinimumSize(QSize(200, 100));
        logInFrame->setMaximumSize(QSize(640, 360));
        logInFrame->setStyleSheet(QStringLiteral(""));
        logInFrame->setFrameShape(QFrame::StyledPanel);
        logInFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(logInFrame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(logInFrame);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(logInFrame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(logInFrame);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(logInFrame);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        pushButton = new QPushButton(logInFrame);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        formLayout->setWidget(2, QFormLayout::FieldRole, pushButton);


        horizontalLayout->addLayout(formLayout);


        gridLayout_2->addWidget(logInFrame, 0, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        Main_screen->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Main_screen);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Main_screen->setStatusBar(statusBar);
        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, pushButton);

        retranslateUi(Main_screen);

        QMetaObject::connectSlotsByName(Main_screen);
    } // setupUi

    void retranslateUi(QMainWindow *Main_screen)
    {
        Main_screen->setWindowTitle(QApplication::translate("Main_screen", "Main_screen", 0));
        actionOpen->setText(QApplication::translate("Main_screen", "Open", 0));
        actionSave_File->setText(QApplication::translate("Main_screen", "Save File", 0));
        actionLog_Out->setText(QApplication::translate("Main_screen", "Log Out", 0));
        actionExit->setText(QApplication::translate("Main_screen", "Exit", 0));
        label->setText(QApplication::translate("Main_screen", "Steam ID", 0));
        label_2->setText(QApplication::translate("Main_screen", "Server IP", 0));
        pushButton->setText(QApplication::translate("Main_screen", "Connect", 0));
    } // retranslateUi

};

namespace Ui {
    class Main_screen: public Ui_Main_screen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_SCREEN_H
