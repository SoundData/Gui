#include "main_screen.h"
#include "ui_main_screen.h"
#include "login_window.h"

Main_screen::Main_screen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Main_screen)
{
    ui->setupUi(this);
}


Main_screen::~Main_screen()
{
    delete ui;
}

void Main_screen::changeText(QString &text, QString &text2)
{
    ui->server_ip->setText(text);
    ui->steam_id->setText(text2);
}

void Main_screen::on_pushButton_clicked()
{
    //send information to the music algorithm
}

void Main_screen::on_actionLogout_triggered()
{
    qApp->exit();
}
