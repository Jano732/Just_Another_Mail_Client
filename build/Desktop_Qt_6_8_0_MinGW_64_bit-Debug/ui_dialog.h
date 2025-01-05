/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLineEdit *lineEdit_recipient;
    QPushButton *pushButton_addRecipient;
    QListWidget *listWidget_recipients;
    QLineEdit *lineEdit_title;
    QTextEdit *textEdit_body;
    QPushButton *pushButton_sendEmail;
    QPushButton *pushButton_Logout;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(610, 338);
        lineEdit_recipient = new QLineEdit(Dialog);
        lineEdit_recipient->setObjectName("lineEdit_recipient");
        lineEdit_recipient->setGeometry(QRect(10, 10, 181, 21));
        pushButton_addRecipient = new QPushButton(Dialog);
        pushButton_addRecipient->setObjectName("pushButton_addRecipient");
        pushButton_addRecipient->setGeometry(QRect(10, 40, 181, 24));
        listWidget_recipients = new QListWidget(Dialog);
        listWidget_recipients->setObjectName("listWidget_recipients");
        listWidget_recipients->setGeometry(QRect(10, 70, 181, 191));
        lineEdit_title = new QLineEdit(Dialog);
        lineEdit_title->setObjectName("lineEdit_title");
        lineEdit_title->setGeometry(QRect(200, 10, 401, 24));
        textEdit_body = new QTextEdit(Dialog);
        textEdit_body->setObjectName("textEdit_body");
        textEdit_body->setGeometry(QRect(200, 40, 401, 221));
        pushButton_sendEmail = new QPushButton(Dialog);
        pushButton_sendEmail->setObjectName("pushButton_sendEmail");
        pushButton_sendEmail->setGeometry(QRect(200, 270, 401, 61));
        pushButton_Logout = new QPushButton(Dialog);
        pushButton_Logout->setObjectName("pushButton_Logout");
        pushButton_Logout->setGeometry(QRect(10, 270, 181, 61));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        lineEdit_recipient->setPlaceholderText(QCoreApplication::translate("Dialog", "Enter recipient", nullptr));
        pushButton_addRecipient->setText(QCoreApplication::translate("Dialog", "Add recipient", nullptr));
        lineEdit_title->setPlaceholderText(QCoreApplication::translate("Dialog", "Title", nullptr));
        textEdit_body->setPlaceholderText(QCoreApplication::translate("Dialog", "Body", nullptr));
        pushButton_sendEmail->setText(QCoreApplication::translate("Dialog", "SEND EMAIL", nullptr));
        pushButton_Logout->setText(QCoreApplication::translate("Dialog", "LOGOUT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
