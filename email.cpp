#include "email.h"

Email::Email()
{
    m_recievers = " ";
    m_title = " ";
    m_body = " ";
}

Email::Email(QString title, QString body, QString recievers)
{
    m_title = title;
    m_body = body;
    m_recievers = recievers;
}

void Email::setReciever(QString reciever) { m_recievers = reciever; }
void Email::setTitle(QString title) { m_title = title; }
void Email::setBody(QString body) { m_body = body; }

QString Email::getRecievers() const { return m_recievers; }
QString Email::getTitle() const { return m_title; }
QString Email::getBody() const { return m_body; }

