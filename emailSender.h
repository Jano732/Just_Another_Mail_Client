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
    UploadStatus m_uploadStatus;

public:

    std::vector<QString> m_payloadMessage;
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
    //QString errorDirect(const char*);
    const char* convertingData(QString) const;

    void setPassword(QString);
    void setLogin(QString);
    void setUrl(QString);
    void setNewMailData(Email);

    QString getUrl();
    QString getLogin();
    QString getP();

};

