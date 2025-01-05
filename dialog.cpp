#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(EmailSender e, QWidget *parent)
    :QDialog(parent)
    ,ui(new Ui::Dialog)
    ,m_eSender(e)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_addRecipient_clicked()
{
    QString newRecipient = ui->lineEdit_recipient->text();
    ui->listWidget_recipients->addItem(newRecipient);
    //m_eSender.addingRecipiens(newRecipient);

    ui->lineEdit_recipient->clear();
}


void Dialog::on_listWidget_recipients_itemPressed([[maybe_unused]]QListWidgetItem *item)
{
    int row = ui->listWidget_recipients->currentRow();
    ui->listWidget_recipients->takeItem(row);
}



void Dialog::on_pushButton_sendEmail_clicked()
{

    QString newTitle = ui->lineEdit_title->text();
    QString newBody = ui->textEdit_body->toPlainText();

    Email email(newTitle, newBody);
    email.setSender(m_eSender.getLogin());

    formingRecipientList();
    qDebug() << m_recievers;
}

void Dialog::formingRecipientList()
{
    m_recievers = "<";
    int count = ui->listWidget_recipients->count();
    for(int i = 0; i < count; i++)
    {
        m_recievers += ui->listWidget_recipients->item(i)->text();
        m_recievers += ", ";
    }
    m_recievers += ">";
}

