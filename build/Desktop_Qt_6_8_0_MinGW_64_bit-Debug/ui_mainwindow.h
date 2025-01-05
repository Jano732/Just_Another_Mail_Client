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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QCheckBox *checkBox_test;
    QPushButton *pushButton_login;
    QLabel *label_errorInfo;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_login;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_password;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QComboBox *comboBox_urls;
    QLineEdit *lineEdit_customURL;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(282, 345);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        checkBox_test = new QCheckBox(centralwidget);
        checkBox_test->setObjectName("checkBox_test");
        checkBox_test->setEnabled(true);
        checkBox_test->setGeometry(QRect(780, 0, 78, 22));
        pushButton_login = new QPushButton(centralwidget);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setGeometry(QRect(10, 200, 261, 51));
        label_errorInfo = new QLabel(centralwidget);
        label_errorInfo->setObjectName("label_errorInfo");
        label_errorInfo->setGeometry(QRect(10, 260, 261, 41));
        label_errorInfo->setFrameShape(QFrame::Shape::Box);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 261, 48));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        lineEdit_login = new QLineEdit(layoutWidget);
        lineEdit_login->setObjectName("lineEdit_login");

        verticalLayout->addWidget(lineEdit_login);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 60, 261, 48));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        lineEdit_password = new QLineEdit(layoutWidget1);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setEnabled(true);
        lineEdit_password->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_2->addWidget(lineEdit_password);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 110, 261, 78));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName("label_3");

        verticalLayout_3->addWidget(label_3);

        comboBox_urls = new QComboBox(layoutWidget2);
        comboBox_urls->setObjectName("comboBox_urls");

        verticalLayout_3->addWidget(comboBox_urls);

        lineEdit_customURL = new QLineEdit(layoutWidget2);
        lineEdit_customURL->setObjectName("lineEdit_customURL");

        verticalLayout_3->addWidget(lineEdit_customURL);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 282, 21));
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
        checkBox_test->setText(QString());
        pushButton_login->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        label_errorInfo->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Login:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Smtp server URL:", nullptr));
        lineEdit_customURL->setPlaceholderText(QCoreApplication::translate("MainWindow", "Input custom URL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
