#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "email.h"
#include "emailSender.h"

MainWindow::MainWindow(QWidget *parent)
    :QMainWindow(parent)
    ,ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_eSender = EmailSender();

    ui->lineEdit_customURL->setDisabled(true);

    ui->comboBox_urls->addItem("onet.pl");
    ui->comboBox_urls->addItem("gmail");
    ui->comboBox_urls->addItem("Wp.pl");
    ui->comboBox_urls->addItem("Interia.pl");
    ui->comboBox_urls->addItem("O2.pl");
    ui->comboBox_urls->addItem("Gazeta.pl");
    ui->comboBox_urls->addItem("Other");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_login_clicked()
{
    QString newLogin = ui->lineEdit_login->text();
    QString newPassword = ui->lineEdit_password->text();

    m_eSender.setLogin(newLogin);
    m_eSender.setPassword(newPassword);

    //bool r = true;
    bool r = verify_email();
    if(r)
    {
        this->hide();
        m_dialog = new Dialog(m_eSender, this);
        m_dialog->setModal(true);
        m_dialog->exec();
        this->show();
    }
}

bool MainWindow::verify_email()
{
    try{
    Email e("TITLE", "BODY", "TEST ADDRESS");
    m_eSender.addingRecipiens("TEST ADDRESS");
    m_eSender.setNewMailData(e);
    m_eSender.fillingPayloadMessage();
    bool res = m_eSender.sendEmail();
    return res;
    }
    catch (std::exception &ex)
    {
        ui->label_errorInfo->setText(ex.what());
        return false;
    }
    catch (std::invalid_argument &ex)
    {
        ui->label_errorInfo->setText(ex.what());
        return false;
    }
}

void MainWindow::on_comboBox_urls_activated(int index)
{
    switch(index) {
    case 0: m_eSender.setUrl("smtps://smtp.poczta.onet.pl:465");
        break;
    case 1: m_eSender.setUrl("smtps://smtp.gmail.com:465");
        break;
    case 2: m_eSender.setUrl("smtps://smtp.wp.pl:465");
        break;
    case 3: m_eSender.setUrl("smtps://poczta.interia.pl:465");
        break;
    case 4: m_eSender.setUrl("smtps://poczta.o2.pl:465");
        break;
    case 5: m_eSender.setUrl("smtps://smtp.gazeta.pl:465");
        break;
    case 6: ui->lineEdit_customURL->setDisabled(false);
        break;
    }
}

void MainWindow::on_lineEdit_customURL_textChanged(const QString &arg1)
{
    m_eSender.setUrl(arg1);
}










