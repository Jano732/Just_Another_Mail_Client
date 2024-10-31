#pragma once
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

bool toBool(std::string);

struct uploadStatus
{
	int counter = 0;
};

class emailSender
{
	email& newMailData_;
	const char* password_;
	const char* formatedDateTime_;
	struct curl_slist* recipients_ = NULL;
	static std::vector<std::string> payloadMessage_;
public:
	
	emailSender(email&, const char*);
	static const char* payload_message[];

	static size_t read_callback(char*, size_t, size_t, void*);
	void sendEmail();
	void fillingPayloadMessage();
	void currentDateTime();
	void addingRecipiens(const char*);

	void setFormatedDateTime(const char*);
	
	const char* getFormatedDateTime();
	const char* getPassword();
	
};

