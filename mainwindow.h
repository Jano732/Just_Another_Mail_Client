#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "email.h"
#include "emailSender.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(email&, emailSender&, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_AddRcp_clicked();

    void on_btn_sndEmail_clicked();

private:
    Ui::MainWindow *ui;
    email& _email;
    emailSender& _eSender;

};
#endif // MAINWINDOW_H
