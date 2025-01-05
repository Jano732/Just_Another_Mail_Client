#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "emailSender.h"
#include "qlistwidget.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(EmailSender, QWidget *parent = nullptr);
    ~Dialog();
    void formingRecipientList();

private slots:
    void on_pushButton_addRecipient_clicked();


    void on_listWidget_recipients_itemPressed([[maybe_unused]]QListWidgetItem *item);

    void on_pushButton_sendEmail_clicked();

private:
    Ui::Dialog *ui;
    EmailSender m_eSender;
    QString m_recievers;
};

#endif // DIALOG_H
