#ifndef MAIN_SCREEN_H
#define MAIN_SCREEN_H

#include <QMainWindow>

namespace Ui {
class Main_screen;
}

class Main_screen : public QMainWindow
{
    Q_OBJECT

public:
    explicit Main_screen(QWidget *parent = 0);
    ~Main_screen();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Main_screen *ui;
};


#endif // MAIN_SCREEN_H
