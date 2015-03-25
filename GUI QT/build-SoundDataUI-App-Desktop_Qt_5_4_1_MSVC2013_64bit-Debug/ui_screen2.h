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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Screen2
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Screen2)
    {
        if (Screen2->objectName().isEmpty())
            Screen2->setObjectName(QStringLiteral("Screen2"));
        Screen2->resize(803, 476);
        tabWidget = new QTabWidget(Screen2);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 30, 781, 451));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 110, 75, 23));
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 60, 291, 16));
        lineEdit = new QLineEdit(tab_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(30, 80, 191, 20));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(Screen2);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Screen2);
    } // setupUi

    void retranslateUi(QDialog *Screen2)
    {
        Screen2->setWindowTitle(QApplication::translate("Screen2", "Dialog", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Screen2", "Tab 1", 0));
        pushButton->setText(QApplication::translate("Screen2", "Start Listen", 0));
        label->setText(QApplication::translate("Screen2", "Location of EventProcessor executable:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Screen2", "Tab 2", 0));
    } // retranslateUi

};

namespace Ui {
    class Screen2: public Ui_Screen2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREEN2_H
