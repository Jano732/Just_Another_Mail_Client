#include "QtCore/qmetatype.h"
#include "qdebug.h"
#define NOMINMAX
#define CRT_SECURE_NO_WARNINGS

#include "email.h"
#include "emailSender.h"
#include <iostream>
#include <curl/curl.h>
#include <string.h>
#include <stdlib.h>
#include <vector>


//std::vector<std::string> EmailSender::payloadMessage_;

bool toBool(const std::string& s)
{
    return !s.empty();
}

EmailSender::EmailSender() {}

EmailSender::EmailSender(Email e) : m_newMailData(e)
{
    //fillingPayloadMessage();
}

EmailSender::EmailSender(Email e, const char* paswd) : m_newMailData(e), m_password(paswd)
{
    fillingPayloadMessage();
}

size_t EmailSender::read_callback_instance(char* buffer, size_t size, size_t numOfbytes, void* userdata)
{
    EmailSender *self = static_cast<EmailSender*>(userdata);
    return self->read_callback(buffer, size, numOfbytes);
}

size_t EmailSender::read_callback(char* buffer, size_t size, size_t numOfbytes)
{
    if ((size == 0) || (numOfbytes == 0) || ((size * numOfbytes) < 1)) { return 0; }

    //UploadStatus* upload_message = static_cast<UploadStatus*>(userdata);

    if (m_uploadStatus.counter >= m_payloadMessage.size()) { return 0; }

    auto data = m_payloadMessage[m_uploadStatus.counter];

    size_t len = data.size();
    memcpy(buffer, convertingData(data), len); // ZNALEŹĆ ZAMIENNIK DLA MEMCPY
    m_uploadStatus.counter++;
    return len;
}

bool EmailSender::sendEmail()
{
    CURL* handle;
    CURLcode result = CURLE_OK;
    struct UploadStatus upload_ctx;
    upload_ctx.counter = 0;
    handle = curl_easy_init();

    if (handle) {

        curl_easy_setopt(handle, CURLOPT_VERBOSE, 1L);
        curl_easy_setopt(handle, CURLOPT_CAINFO, "D:\\Projekty\\JAMC_QMAKE\\build\\Desktop_Qt_6_8_0_MinGW_64_bit-Debug\\cacert-2024-11-26 (1).pem");
        curl_easy_setopt(handle, CURLOPT_URL, "smtps://smtp.poczta.onet.pl:465");
        curl_easy_setopt(handle, CURLOPT_LOGIN_OPTIONS, "AUTH=LOGIN");
        curl_easy_setopt(handle, CURLOPT_USERNAME, convertingData(m_login));
        curl_easy_setopt(handle, CURLOPT_PASSWORD, convertingData(m_password));
        curl_easy_setopt(handle, CURLOPT_MAIL_FROM, convertingData(m_newMailData.getSender()));
        curl_easy_setopt(handle, CURLOPT_HTTPHEADER, "Content-Type: text/html; charset=UTF-8");
        curl_easy_setopt(handle, CURLOPT_MAIL_RCPT, m_recipients);
        curl_easy_setopt(handle, CURLOPT_USE_SSL, (long)CURLUSESSL_ALL);
        curl_easy_setopt(handle, CURLOPT_READFUNCTION, &EmailSender::read_callback_instance);
        curl_easy_setopt(handle, CURLOPT_READDATA, this);
        curl_easy_setopt(handle, CURLOPT_UPLOAD, 1L);

        result = curl_easy_perform(handle);

        //curl_slist_free_all(m_recipients);
        removeAllRecipiens();

        curl_easy_cleanup(handle);

        m_newMailData.setSender("");
        m_newMailData.setReciever("");
        m_newMailData.setTitle("");
        m_newMailData.setBody("");

        if (result != CURLE_OK)
        {
            std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(result) << "\n";
            return false;
        }
        else return true;
    }
    //obsluga bledu
}

void EmailSender::fillingPayloadMessage()
{
    std::vector<QString> filledTemplate = {
        "To: <" + m_newMailData.getReciever() + ">\r\n",
        "From: <" + m_newMailData.getSender() + ">\r\n",
        "Subject: " + m_newMailData.getTitle() + "\r\n",
        "Content-Type: text/plain; charset=utf-8\r\n",
        "Message-ID: <dcd7cb36-11db-487a-9f3a-e652a9458efd@rfcpedant.example.org>\r\n",
        "MIME-Version: 1.0\r\n",
        "\r\n",
        m_newMailData.getBody() + "\r\n",
        "\r\n"
    };

    for (const auto& line :filledTemplate) {
        qDebug() << line << "\n";
    }

    m_payloadMessage = filledTemplate;
}



const char* EmailSender::convertingData(QString s) const
{
    return s.toUtf8();
}

void EmailSender::addingRecipiens(QString recipient)
{
    m_recipients = curl_slist_append(m_recipients, convertingData(recipient));
}

void EmailSender::removeAllRecipiens()
{
     if(m_recipients != nullptr) curl_slist_free_all(m_recipients);
}

void EmailSender::setPassword(QString pswd)
{
   m_password = pswd;
}

void EmailSender::setUrl(QString u)
{
    m_url = u;
}

QString EmailSender::getP()
{
    return m_password;
}

QString EmailSender::getUrl()
{
    return m_url;
}

QString EmailSender::getLogin()
{
    return m_login;
}

void EmailSender::setLogin(QString s)
{
    m_login = s;
}






