#define NOMINMAX
#define CRT_SECURE_NO_WARNINGS

#include "email.h"
#include "emailSender.h"
#include <iostream>
#include <stdio.h>
#include <curl/curl.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
//#include <windows.h>


email::email()
{
    m_reciever = " ";
    m_sender = " ";
    m_title = " ";
    m_body = " ";
}

email::email(const char* to, const char* from, const char* title, const char* body)
{
	m_reciever = to;
	m_sender = from;
	m_title = title;
	m_body = body;
}

void email::setSender(const char* sender) { m_sender = sender; }
void email::setReciever(const char* reciever) { m_reciever = reciever; }
void email::setTitle(const char* title) { m_title = title; }
void email::setBody(const char* body) { m_body = body; }

const char* email::getReciever() { return m_reciever; }
const char* email::getSender() { return m_sender; }
const char* email::getTitle() { return m_title; }
const char* email::getBody() { return m_body; }

