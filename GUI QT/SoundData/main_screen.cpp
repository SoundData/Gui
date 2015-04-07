#include "main_screen.h"
#include "ui_main_screen.h"
#include "login_window.h"

#include <QString>
#include <QDebug>
#include <QStringBuilder>

Main_screen::Main_screen(QWidget *parent, QString evProcLoc, QString servAddr) :
    QMainWindow(parent),
    ui(new Ui::Main_screen),
    m_sEvProcessorLoc(evProcLoc),
    m_sServerAddr(servAddr)
{
    ui->setupUi(this);

    // Set up the process and tell it to write all outputs to a single channel
    m_qpEventProcessorProc = new QProcess(this);
    m_qpEventProcessorProc->setProcessChannelMode(QProcess::MergedChannels);

    // Connect the process's readyReadStandardOutput signal to our processOutput() slot
    // I got the idea from here:
    // http://www.qtcentre.org/threads/47538-QProcess-read-from-stdout-lively
    connect(m_qpEventProcessorProc, SIGNAL(readyReadStandardOutput()), this, SLOT(processOutput()));


    // Start process and report any errors that occur
    m_qpEventProcessorProc->start(m_sEvProcessorLoc, QStringList() << servAddr);
    if (!m_qpEventProcessorProc->waitForStarted(5000))
    {
        QString logMsg = "Unable to launch program " % m_sEvProcessorLoc % " with args " % m_sServerAddr;
        logMsg = logMsg % "\nThe process error was:\n\t" % m_qpEventProcessorProc->errorString();
        ui->plainTextEdit_EvProcOutput->appendPlainText(logMsg);

        // delete and set the pointer to NULL so we don't try to free it again later
        delete m_qpEventProcessorProc;
        m_qpEventProcessorProc = NULL;
    }
}


Main_screen::~Main_screen()
{
    qDebug() << "Main_screen dtor called";
    delete ui;

    // Kill the EventProcessor and free the memory
    if (m_qpEventProcessorProc != NULL)
    {
        m_qpEventProcessorProc->kill();
        delete m_qpEventProcessorProc;
    }
}

// Slot function called whenever the m_qpEventProcessorProc process
// has data available on its standard output stream
void Main_screen::processOutput()
{
    // Grab the message from the EventProcessor
    QString msg(m_qpEventProcessorProc->readAllStandardOutput());

    // Write it to the log viewer
    ui->plainTextEdit_EvProcOutput->appendPlainText(msg);
}

void Main_screen::changeText(QString &text, QString &text2)
{
    ui->label_server_ip->setText(text);
    ui->label_steam_id->setText(text2);
}

void Main_screen::on_pushButton_clicked()
{
    //send information to the music algorithm
}

void Main_screen::on_actionLogout_triggered()
{
    // Call deleteLater() since we should be the only window
    // This ensures that the Main_screen destructor is called, which ends the EventProcessor process.
    // Without calling the destructor, the EventProcessor process keeps running after application shut down
    deleteLater();
}
