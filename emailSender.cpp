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
#include <windows.h>
#include <vector>


std::vector<std::string> emailSender::payloadMessage_;

bool toBool(std::string s)
{
    if (s.empty()) return false;
    else return true;
}

emailSender::emailSender(email& e, const char* paswd) : newMailData_(e), password_(paswd)
{
    currentDateTime();
    fillingPayloadMessage();
}

size_t emailSender::read_callback(char* buffer, size_t size, size_t numOfbytes, void* userdata)
{
    uploadStatus* upload_message = (uploadStatus*)userdata;
    std::string data;

    if ((size == 0) || (numOfbytes == 0) || ((size * numOfbytes) < 1)) { return 0; }

    if (upload_message->counter >= payloadMessage_.size()) { return 0; }
  
    data = payloadMessage_[upload_message->counter];

    bool isEmpty = toBool(data);
    if (isEmpty) {
        size_t len = data.size();
        memcpy(buffer, data.c_str(), len);
        upload_message->counter++;

        return len;
    }
    return 0;
}


void emailSender::sendEmail()
{
    CURL* handle;
    CURLcode result = CURLE_OK;
    struct uploadStatus upload_ctx;
    upload_ctx.counter = 0;

    handle = curl_easy_init();

    if (handle) {

        curl_easy_setopt(handle, CURLOPT_USERNAME, newMailData_.getSender());
        curl_easy_setopt(handle, CURLOPT_PASSWORD, getPassword());
        curl_easy_setopt(handle, CURLOPT_URL, "smtps://smtp.poczta.onet.pl:465");
        curl_easy_setopt(handle, CURLOPT_USE_SSL, (long)CURLUSESSL_ALL);
        curl_easy_setopt(handle, CURLOPT_MAIL_FROM, newMailData_.getSender());
        recipients_ = curl_slist_append(recipients_, "<k.poniatowska@autograf.pl>");
        curl_easy_setopt(handle, CURLOPT_MAIL_RCPT, recipients_);
        curl_easy_setopt(handle, CURLOPT_READFUNCTION, read_callback);
        curl_easy_setopt(handle, CURLOPT_READDATA, &upload_ctx);
        curl_easy_setopt(handle, CURLOPT_UPLOAD, 1L);

        result = curl_easy_perform(handle);

        if (result != CURLE_OK) std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(result);

        curl_slist_free_all(recipients_);
        curl_easy_cleanup(handle);
    }
}

void emailSender::fillingPayloadMessage()
{
    std::vector<std::string> filledTemplate = {
        "MIME-Version: 1.0"
        "Date: " + (std::string)getFormatedDateTime() + "\r\n",
        "To: <" + (std::string)newMailData_.getReciever() + ">\r\n",
        "From: " + (std::string)newMailData_.getSender() + "\r\n",
        "Content-Type: text/plain; charset=utf-8\r\n",
        "Message-ID: <dcd7cb36-11db-487a-9f3a-e652a9458efd@rfcpedant.example.org>\r\n",
        "Subject: " + (std::string)newMailData_.getTitle() + "\r\n",
        "\r\n" + (std::string)newMailData_.getBody() + "\r\n"
    };

    payloadMessage_ = filledTemplate;
}

void emailSender::currentDateTime()
{
    char formattedDateTime[50];
    time_t now = time(nullptr);
    struct tm timeInfo;
    localtime_s(&timeInfo, &now);
    strftime(formattedDateTime, sizeof(formattedDateTime), "%a, %d %b %Y %H:%M:%S %z", &timeInfo);

    setFormatedDateTime(formattedDateTime);
}

void emailSender::addingRecipiens(const char* recipient)
{
    curl_slist_append(recipients_, recipient);
}

void emailSender::setFormatedDateTime(const char* fDateTime) 
{
    emailSender::formatedDateTime_ = fDateTime;
}

const char* emailSender::getFormatedDateTime()
{
    return formatedDateTime_;
}

const char* emailSender::getPassword()
{
    return password_;
}
