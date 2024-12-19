#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "email.h"
#include "emailSender.h"

MainWindow::MainWindow(email& e, emailSender& es, QWidget *parent)
    :QMainWindow(parent)
    ,ui(new Ui::MainWindow)
    ,_email(e)
    , _eSender(es)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_AddRcp_clicked()
{
    QString newRecipient = ui->le_recipient->text();
    ui->le_recipient->clear();
    ui->lstWid_listOfRecipients->addItem(newRecipient);
    const char* convertedData = newRecipient.toUtf8();
    _eSender.addingRecipiens(convertedData);
}


void MainWindow::on_btn_sndEmail_clicked()
{
    if(!ui->lineEdit_email->text().isEmpty() && !ui->lineEdit_pasword->text().isEmpty())
    {
        QString newSender = ui->lineEdit_email->text();
        const char* convertedData = newSender.toUtf8();
        _email.setSender(convertedData);

        QString newPasswd = ui->lineEdit_email->text();
        convertedData = newPasswd.toUtf8();
        _eSender.setPassword(convertedData);

        QString newTitle = ui->lineEdit_title->text();
        convertedData = newTitle.toUtf8();
        _email.setTitle(convertedData);

        QString newBody = ui->textEdit_body->toPlainText();
        convertedData = newBody.toUtf8();
        _email.setBody(convertedData);

        _eSender.sendEmail();
    }
    else qDebug() << "PUSTE HASLO BADZ LOGIN";
}

