#ifndef SCREEN2_H
#define SCREEN2_H

#include <QDialog>

namespace Ui {
class Screen2;
}

class Screen2 : public QDialog
{
    Q_OBJECT

public:
    explicit Screen2(QWidget *parent = 0);
    ~Screen2();

private:
    Ui::Screen2 *ui;
};

#endif // SCREEN2_H
