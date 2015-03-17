#include "main_screen.h"
#include "ui_main_screen.h"
#include "screen2.h"
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

void Main_screen::on_pushButton_clicked()
{
    //include the header file for the second dialog
    //before you can connect the two
    Screen2 second;
    second.setModal(true);//modal approach
    //there is also a modalless approach
    second.exec();//will show the dialog
    //^
    //|
    /*do build-clean all; then build- run qmake otherwise u get errors*/
    //modal approach will no allow you to go to the first window after
    //you started your second window.

}
