#include "login_window.h"
#include "ui_login_window.h"
#include "main_screen.h"
#include <QProcess>
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
    main_window = new Main_screen;// creates an instance of main screen
    main_window->show(); //shows the main screen

    serverIP = "tcp://" + ui->lineEdit->text() + ":7633";
    steamID = ui->lineEdit_2->text();

    QStringList arguments;
    arguments << serverIP;

    QString program = "C:\\Users\\Stacy\\Documents\\GitHub\\EventProcessor\\Debug\\EventProcessor.exe";

    QProcess *myProcess = new QProcess(this);
    myProcess->start(program, arguments);

    deleteLater(); //deletes original login_window

}
