#include "login_window.h"
#include "ui_login_window.h"
#include "main_screen.h"
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
    deleteLater(); //deletes original login_window

    /*
     * This is a post about opening a new window and closing the other one.
     * Will work for now, may have to change later when arguments have to be
     * passed from the connect button to the other window/code.

You need to:

    Instantiate the new window and show it.

    Delete the current window once the control returns to the event loop.

    void MainWindow::on_button_clicked() {
      auto win = new MainWindow();
      win->setAttribute( Qt::WA_DeleteOnClose );
      win->show();
      deleteLater();
    }

    Make sure that the initial instance of the window is created on the heap:

    int main(int argc, char** argv) {
      QApplication app(argc, argv);
      auto win = new MainWindow;
      win->setAttribute( Qt::WA_DeleteOnClose );
      win->show();
      return app.exec();
    }


     * */
}
