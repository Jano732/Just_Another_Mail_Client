#include "mainwindow.h"
#include <QApplication>
#include "email.h"
#include "emailSender.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    email e;
    emailSender es(e);
    MainWindow w(e, es);
    w.show();
    return a.exec();
}
