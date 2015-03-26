/********************************************************************************
** Form generated from reading UI file 'login_window.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_WINDOW_H
#define UI_LOGIN_WINDOW_H

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

class Ui_Login_window
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QFrame *logInFrame;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Login_window)
    {
        if (Login_window->objectName().isEmpty())
            Login_window->setObjectName(QStringLiteral("Login_window"));
        Login_window->resize(667, 451);
        Login_window->setMinimumSize(QSize(550, 400));
        Login_window->setMaximumSize(QSize(1200, 674));
        Login_window->setStyleSheet(QLatin1String("#Login_window \n"
"{\n"
"	background-image: url(:/images/images/background-music-1200-750.png);\n"
"	width: 450px;\n"
"    height: 720px;\n"
"	min-width: 550px; \n"
"}\n"
"\n"
"\n"
"#logInFrame \n"
"{\n"
"	background-color: rgba(0, 0, 0, 0.5);\n"
"	border-radius: 10px;\n"
"	min-width: 450px;\n"
"	max-width: 450px; \n"
"  	min-height: 200px; \n"
"	max-height: 200px; \n"
"}\n"
"\n"
"QLineEdit\n"
" {\n"
"	padding: 3px; \n"
"	margin-top: 20px;\n"
"	margin-right: 10px; \n"
"	border-style: solid;\n"
"	border: 2px solid gray;\n"
"	border-radius: 8px;\n"
"}\n"
"\n"
"QPushButton \n"
"{\n"
"	color: white;\n"
"	background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #88d, 	stop: 0.1 #99e, stop: 0.49 #77c, stop: 0.5 #66b, stop: 1 #77c);\n"
"	border-width: 1px;\n"
"	border-color: #339;\n"
"	border-style: solid;\n"
"	border-radius: 7;\n"
"	padding: 5px;\n"
"	font-size: 15px;\n"
"	padding-left: 5px;\n"
"	padding-right: 5px;\n"
"	min-width: 72px;\n"
"	max-width: 72px; \n"
"	min-height: 17px;\n"
"	max-height: 17"
                        "px;\n"
"}\n"
"\n"
"QLabel \n"
"{\n"
"	font-weight: bold;\n"
"	padding: 15px 15px;\n"
"	font-size:15px;\n"
"	color:white; \n"
"}\n"
"\n"
"#label_3\n"
"{\n"
"	font-size:14px; \n"
"}\n"
"#widget\n"
"{\n"
"	image: url(:/images/images/title_game.png);\n"
"	max-width: 550px;\n"
"    max-height: 150px;\n"
"	min-width: 550px; \n"
"	min-height: 150px; \n"
"}"));
        centralWidget = new QWidget(Login_window);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(widget, 0, 0, 1, 1);

        logInFrame = new QFrame(centralWidget);
        logInFrame->setObjectName(QStringLiteral("logInFrame"));
        logInFrame->setMinimumSize(QSize(450, 220));
        logInFrame->setMaximumSize(QSize(450, 225));
        logInFrame->setLayoutDirection(Qt::LeftToRight);
        logInFrame->setStyleSheet(QStringLiteral(""));
        logInFrame->setFrameShape(QFrame::StyledPanel);
        logInFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(logInFrame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
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

        label_3 = new QLabel(logInFrame);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(logInFrame);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        pushButton = new QPushButton(logInFrame);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        formLayout->setWidget(3, QFormLayout::FieldRole, pushButton);


        horizontalLayout->addLayout(formLayout);


        gridLayout->addWidget(logInFrame, 2, 0, 1, 1, Qt::AlignHCenter);

        Login_window->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Login_window);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Login_window->setStatusBar(statusBar);

        retranslateUi(Login_window);

        QMetaObject::connectSlotsByName(Login_window);
    } // setupUi

    void retranslateUi(QMainWindow *Login_window)
    {
        Login_window->setWindowTitle(QApplication::translate("Login_window", "Login_window", 0));
        label->setText(QApplication::translate("Login_window", "Steam ID", 0));
        label_2->setText(QApplication::translate("Login_window", "Server IP", 0));
        label_3->setText(QApplication::translate("Login_window", "EventProcessor Executable", 0));
        pushButton->setText(QApplication::translate("Login_window", "Connect", 0));
    } // retranslateUi

};

namespace Ui {
    class Login_window: public Ui_Login_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_WINDOW_H
