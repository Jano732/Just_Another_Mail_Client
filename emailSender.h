#pragma once
#include "email.h"
#include <stdio.h>
#include <curl/curl.h>
#include <stdlib.h>
#include <string>
#include <vector>

bool toBool(const std::string&);

struct UploadStatus
{
	int counter = 0;
};


class EmailSender
{
    Email m_newMailData;
    QString m_password;
    QString m_login;
    QString m_url;
    std::vector<QString> m_payloadMessage;
    UploadStatus m_uploadStatus;

public:

    struct curl_slist* m_recipients = nullptr;
    EmailSender();
    EmailSender(Email);
    EmailSender(Email, const char*);
    const char* payload_message;

    static size_t read_callback_instance(char*, size_t, size_t, void*);
    size_t read_callback(char*, size_t, size_t);
    bool sendEmail();
	void fillingPayloadMessage();
    void addingRecipiens(QString);
    void removeAllRecipiens();
    const char* convertingData(QString) const;

    void setPassword(QString);
    void setLogin(QString);
    void setUrl(QString);

    QString getP();
    QString getUrl();
    QString getLogin();

};

