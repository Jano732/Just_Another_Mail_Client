#pragma once
#include "qobject.h"

class Email
{
    QString m_recievers = "";
    QString m_title = "";
    QString m_body = "";
public:

    Email();
    Email(QString, QString, QString);

    void setReciever(QString);
    void setTitle(QString);
    void setBody(QString);

    QString getRecievers() const;
    QString getTitle()  const;
    QString getBody() const;

};
