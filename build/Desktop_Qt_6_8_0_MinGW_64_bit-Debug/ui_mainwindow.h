/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btn_sndEmail;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *le_recipient;
    QPushButton *btn_AddRcp;
    QListWidget *lstWid_listOfRecipients;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_email;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_pasword;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_title;
    QWidget *widget4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QTextEdit *textEdit_body;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 451);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        btn_sndEmail = new QPushButton(centralwidget);
        btn_sndEmail->setObjectName("btn_sndEmail");
        btn_sndEmail->setGeometry(QRect(20, 340, 201, 61));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 150, 201, 81));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        le_recipient = new QLineEdit(widget);
        le_recipient->setObjectName("le_recipient");

        verticalLayout_2->addWidget(le_recipient);

        btn_AddRcp = new QPushButton(widget);
        btn_AddRcp->setObjectName("btn_AddRcp");

        verticalLayout_2->addWidget(btn_AddRcp);

        lstWid_listOfRecipients = new QListWidget(centralwidget);
        lstWid_listOfRecipients->setObjectName("lstWid_listOfRecipients");
        lstWid_listOfRecipients->setGeometry(QRect(20, 240, 201, 91));
        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(20, 20, 201, 51));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName("label");
        label->setFrameShape(QFrame::Shape::NoFrame);

        verticalLayout->addWidget(label);

        lineEdit_email = new QLineEdit(widget1);
        lineEdit_email->setObjectName("lineEdit_email");

        verticalLayout->addWidget(lineEdit_email);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(20, 80, 201, 51));
        verticalLayout_3 = new QVBoxLayout(widget2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget2);
        label_2->setObjectName("label_2");

        verticalLayout_3->addWidget(label_2);

        lineEdit_pasword = new QLineEdit(widget2);
        lineEdit_pasword->setObjectName("lineEdit_pasword");
        lineEdit_pasword->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_3->addWidget(lineEdit_pasword);

        widget3 = new QWidget(centralwidget);
        widget3->setObjectName("widget3");
        widget3->setGeometry(QRect(240, 20, 541, 51));
        verticalLayout_5 = new QVBoxLayout(widget3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget3);
        label_5->setObjectName("label_5");

        verticalLayout_5->addWidget(label_5);

        lineEdit_title = new QLineEdit(widget3);
        lineEdit_title->setObjectName("lineEdit_title");

        verticalLayout_5->addWidget(lineEdit_title);

        widget4 = new QWidget(centralwidget);
        widget4->setObjectName("widget4");
        widget4->setGeometry(QRect(240, 80, 541, 321));
        verticalLayout_4 = new QVBoxLayout(widget4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget4);
        label_4->setObjectName("label_4");

        verticalLayout_4->addWidget(label_4);

        textEdit_body = new QTextEdit(widget4);
        textEdit_body->setObjectName("textEdit_body");

        verticalLayout_4->addWidget(textEdit_body);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_sndEmail->setText(QCoreApplication::translate("MainWindow", "SEND EMAIL", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Recipient:", nullptr));
        btn_AddRcp->setText(QCoreApplication::translate("MainWindow", "Add Recipient", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "your e-mail:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Title:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Body:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
