#include "main_screen.h"
#include "ui_main_screen.h"
#include "login_window.h"

#include <QString>
#include <QDebug>
#include <QStringBuilder>

Main_screen::Main_screen(QWidget *parent, QString evProcLoc, QString servAddr, QString steamID) :
    QMainWindow(parent),
    ui(new Ui::Main_screen),
    m_sEvProcessorLoc(evProcLoc),
    m_sServerAddr(servAddr),
    m_sName(steamID)

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

    int randomValue = qrand() % 10;
    // Grab the message from the EventProcessor
    QString msg(m_qpEventProcessorProc->readAllStandardOutput());
    if(randomValue == 1)
    {
        QString msg2 = "gm.info[\"MapName--QTGUI\"]: de_dust2\ngm.info[\"Holygene--class--QTGUI\"]: Scout\ngm.info[\"OtherPlayerName--QTGUI\"]: Heavy\ngm.info[\"Holygene--team--QTGUI\"]: Red\ngm.info[\"christmas ham--team--QTGUI\"]: Blue";
        msg.append(msg2);
    }
    /*
     * DON'T FORGET TO CHANGE msg2 to msg !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
     */
    if(msg.contains("--QTGUI"))
    {
        QString player_class = getDataBetween("class--QTGUI\"]: ","\n",msg);
        QString player_team = getDataBetween("team--QTGUI\"]: ","\n",msg);
        //Matt check what needs to be changed for team recognition if anything
        QString player_map = getDataBetween("MapName--QTGUI\"]: ","\n",msg);
        //ui->plainTextEdit_EvProcOutput->appendPlainText(player_class);
        //ui->plainTextEdit_EvProcOutput->appendPlainText(player_team);
        //ui->plainTextEdit_EvProcOutput->appendPlainText(player_map);
        changeText(m_sServerAddr, m_sName, player_class, player_map, player_team);
    }
    ui->plainTextEdit_EvProcOutput->appendPlainText(msg);
}

QString Main_screen::getDataBetween(QString begin,QString end, QString &source)
{
    int startIndex = source.indexOf(begin)+begin.length();
    //gets the index after the QTGUI"]: as the start index of new string
    if(startIndex <= 0)return QString();
    //error checking on the string
    int endIndex = source.indexOf(end,startIndex);
    //gets the string index at the end(specified as \n when passed in) relative to the start of wanted string
    if(endIndex <= 0)return QString();
    //error checking on the string
    return source.mid(startIndex,endIndex - startIndex);
    //using midpoint of the wanted string and its start and end locations return it

}

void Main_screen::changeText(QString &server_ip, QString &steam_id, QString player_class, QString player_map, QString player_team)
{
    ui->label_server_ip->setText(server_ip);
    ui->label_steam_id->setText(steam_id);
    ui->label_class->setText(player_class);
    ui->label_team->setText(player_map);
    ui->label_map->setText(player_team);
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
