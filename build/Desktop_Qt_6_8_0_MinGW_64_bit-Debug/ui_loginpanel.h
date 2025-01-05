/********************************************************************************
** Form generated from reading UI file 'loginpanel.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPANEL_H
#define UI_LOGINPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginpanel
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *lineEdit_email;
    QLabel *label_2;
    QLineEdit *lineEdit_pasword;
    QLabel *label_3;
    QComboBox *comboBox;
    QPushButton *pushButton_login;
    QLabel *label_returnedInfo;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *loginpanel)
    {
        if (loginpanel->objectName().isEmpty())
            loginpanel->setObjectName("loginpanel");
        loginpanel->resize(312, 291);
        centralwidget = new QWidget(loginpanel);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 281, 16));
        lineEdit_email = new QLineEdit(centralwidget);
        lineEdit_email->setObjectName("lineEdit_email");
        lineEdit_email->setGeometry(QRect(10, 30, 281, 24));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 60, 281, 16));
        lineEdit_pasword = new QLineEdit(centralwidget);
        lineEdit_pasword->setObjectName("lineEdit_pasword");
        lineEdit_pasword->setGeometry(QRect(10, 80, 281, 24));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 110, 281, 16));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(10, 130, 281, 24));
        pushButton_login = new QPushButton(centralwidget);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setGeometry(QRect(10, 170, 281, 51));
        label_returnedInfo = new QLabel(centralwidget);
        label_returnedInfo->setObjectName("label_returnedInfo");
        label_returnedInfo->setGeometry(QRect(10, 230, 281, 21));
        loginpanel->setCentralWidget(centralwidget);
        menubar = new QMenuBar(loginpanel);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 312, 21));
        loginpanel->setMenuBar(menubar);
        statusbar = new QStatusBar(loginpanel);
        statusbar->setObjectName("statusbar");
        loginpanel->setStatusBar(statusbar);

        retranslateUi(loginpanel);

        QMetaObject::connectSlotsByName(loginpanel);
    } // setupUi

    void retranslateUi(QMainWindow *loginpanel)
    {
        loginpanel->setWindowTitle(QCoreApplication::translate("loginpanel", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("loginpanel", "Login:", nullptr));
        label_2->setText(QCoreApplication::translate("loginpanel", "Password:", nullptr));
        label_3->setText(QCoreApplication::translate("loginpanel", "Select yout smtp server:", nullptr));
        pushButton_login->setText(QCoreApplication::translate("loginpanel", "LOGIN", nullptr));
        label_returnedInfo->setText(QCoreApplication::translate("loginpanel", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginpanel: public Ui_loginpanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPANEL_H
