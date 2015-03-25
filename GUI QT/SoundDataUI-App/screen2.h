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
    explicit Screen2(QWidget *parent = 0, QString serverIP = "");
    ~Screen2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Screen2 *ui;
    QString m_serverAddr;
};

#endif // SCREEN2_H
