#ifndef MAIN_SCREEN_H
#define MAIN_SCREEN_H

#include <QMainWindow>
#include <QString>
#include <QProcess>

namespace Ui {
class Main_screen;
}

class Main_screen : public QMainWindow
{
    Q_OBJECT

public:
    explicit Main_screen(QWidget *parent = 0, QString evProcLoc = "EventProcessor.exe", QString servAddr = "tcp://104.236.52.206:7633");
    ~Main_screen();

public slots:
    void changeText(QString &text, QString &text2);

private slots:
    void on_pushButton_clicked();
    void on_actionLogout_triggered();
    void processOutput();

private:
    Ui::Main_screen *ui;

    QString m_sEvProcessorLoc;
    QString m_sServerAddr;
    QProcess* m_qpEventProcessorProc;
};


#endif // MAIN_SCREEN_H
