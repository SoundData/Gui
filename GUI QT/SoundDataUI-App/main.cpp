#include "main_screen.h"
#include <QApplication>

//void CustomWidget::paintEvent(QPaintEvent *);
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Main_screen w;
    //setStyleSheet("background-image: url(./images/images/background.png)");
    w.show();

    return a.exec();
}
/*
void CustomWidget::paintEvent(QPaintEvent *)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &o, this);
}*/
