#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "emailSender.h"
#include "dialog.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void reset();


private slots:
    //void on_btn_AddRcp_clicked();

    void on_pushButton_login_clicked();

    bool verify_email();

    void on_comboBox_urls_activated(int index);

    void on_lineEdit_customURL_textChanged(const QString &arg1);


private:
    Ui::MainWindow *ui;
    //Email m_email;
    EmailSender m_eSender;
    Email m_email;
    Dialog *m_dialog;

};
#endif // MAINWINDOW_H
