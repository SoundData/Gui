#ifndef LOGIN_WINDOW_H
#define LOGIN_WINDOW_H

#include <QMainWindow>
#include "main_screen.h"

namespace Ui {
class Login_window;
}

class Login_window : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login_window(QWidget *parent = 0);
    Main_screen *main_window;//Main_screen instance on heap
    //This allows for the window to stay open after it first
    ~Login_window();
    QString serverIP, steamID, qs;

private slots:
    void on_pushButton_clicked();

private:
    Ui::Login_window *ui;
};

#endif // LOGIN_WINDOW_H
