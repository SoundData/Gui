#include "login_window.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Instantiating the forms
    //This dynamically allocates the window on the heap
    Login_window *login;
    login = new Login_window;
    login->setAttribute( Qt::WA_DeleteOnClose );
    login->show();

    //  original code
    /*
    Login_window w;
    w.show();
    */
    return a.exec();
}
