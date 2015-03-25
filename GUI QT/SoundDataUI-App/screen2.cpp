#include "screen2.h"
#include "ui_screen2.h"
#include <QtDebug>
#include <QProcess>
#include <QLineEdit>

Screen2::Screen2(QWidget *parent, QString serverIP) :
    QDialog(parent),
    ui(new Ui::Screen2),
    m_serverAddr(serverIP)
{
    ui->setupUi(this);
}

Screen2::~Screen2()
{
    delete ui;
}

void Screen2::on_pushButton_clicked()
{
    // the QProcess must be dynamically allocated using the new operator
    // If we create it on the stack then it is destroyed after the end of the function, which we don't want
    QProcess *qp = new QProcess(this);

    // Get the address of the EventProcessor executable from the QLineEdit control
    QString qs(ui->lineEdit->text());

    // Form an argument list consisting only of the serverAddr
    // Default is "tcp://104.236.52.206:7633"
    QStringList args(m_serverAddr);

    // Print what we are connecting to
    qDebug() << "Addr: " << args.at(0) << "Command: " << qs;

    // Launch the process
    qp->startDetached(qs, args);
}
