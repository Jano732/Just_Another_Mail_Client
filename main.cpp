#include "QtWidgets/qapplication.h"
#include "mainwindow.h"
#include "email.h"
#include "emailSender.h"
#include <QDateTime>
#include <iostream>
#include <stdio.h>
#include <curl/curl.h>
#include <string.h>
#include <stdlib.h>
//#include <windows.h>
#include <vector>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.show();
    return a.exec();
}
