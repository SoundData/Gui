#include "login_window.h"
#include "ui_login_window.h"
#include "main_screen.h"
#include <QProcess>
#include <QtDebug>
#include <QLineEdit>

Login_window::Login_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login_window)
{
    ui->setupUi(this);
}

Login_window::~Login_window()
{
    delete ui;
}


void Login_window::on_pushButton_clicked()
{
    //include the header file for the main_screen
    //before you can connect the two
    //main_window is declared(not initialized) inside
    //login_window.h
    QString temp = ui->lineEdit_2->text();
    serverIP = "tcp://104.236.52.206:7633";
    steamID = ui->lineEdit->text();
    qs = ui->lineEdit_3->text();

    if(steamID.isEmpty() || temp.isEmpty() || qs.isEmpty())
    {
        //should not go to next screen
    }
    else
    {

        main_window = new Main_screen(NULL, qs, serverIP);// creates an instance of main screen
        main_window->changeText(temp, steamID);
        main_window->setAttribute(Qt::WA_DeleteOnClose);

        main_window->show(); //shows the main screen
        deleteLater(); //deletes original login_window
    }

}
