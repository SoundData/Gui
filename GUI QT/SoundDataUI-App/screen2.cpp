#include "screen2.h"
#include "ui_screen2.h"

Screen2::Screen2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Screen2)
{
    ui->setupUi(this);
}

Screen2::~Screen2()
{
    delete ui;
}
