#pragma once
#include "qobject.h"

class Email
{
    QString m_reciever = "";
    QString m_sender = "";
    QString m_title = "";
    QString m_body = "";
public:

    Email();
    Email(QString, QString);

    void setSender(QString);
    void setReciever(QString);
    void setTitle(QString);
    void setBody(QString);

    QString getReciever() const;
    QString getSender()  const;
    QString getTitle()  const;
    QString getBody() const;

};
