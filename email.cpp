#include "email.h"

Email::Email()
{
    m_reciever = " ";
    m_sender = " ";
    m_title = " ";
    m_body = " ";
}

Email::Email(QString title, QString body)
{
    m_reciever = "";
    m_sender = "";
	m_title = title;
	m_body = body;
}

void Email::setSender(QString sender) { m_sender = sender; }
void Email::setReciever(QString reciever) { m_reciever = reciever; }
void Email::setTitle(QString title) { m_title = title; }
void Email::setBody(QString body) { m_body = body; }

QString Email::getReciever() const { return m_reciever; }
QString Email::getSender() const { return m_sender; }
QString Email::getTitle() const { return m_title; }
QString Email::getBody() const { return m_body; }

