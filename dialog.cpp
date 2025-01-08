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
    formingRecipientList();

    ui->listWidget_recipients->clear();
    ui->lineEdit_title->clear();
    ui->textEdit_body->clear();
\
    Email e(newTitle, newBody, m_recipients);
    m_eSender.setNewMailData(e);

    m_eSender.fillingPayloadMessage();
    m_eSender.sendEmail();
}

void Dialog::formingRecipientList()
{
    m_recipients = nullptr;
    int count = ui->listWidget_recipients->count();
    for(int i = 0; i < count; i++)
    {
        m_eSender.addingRecipiens(ui->listWidget_recipients->item(i)->text());
        m_recipients += ui->listWidget_recipients->item(i)->text();
        if(i != count - 1) m_recipients += ", ";
    }
}

