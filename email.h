#pragma once
#include <iostream>
#include <stdio.h>
#include <curl/curl.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#define CRT_SECURE_NO_WARNINGS

class email
{
private:
	const char* m_reciever;
	const char* m_sender;
	const char* m_title;
	const char* m_body;
public:

	email(const char*, const char*, const char*, const char*);

	void setSender(const char*);
	void setReciever(const char*);
	void setTitle(const char*);
	void setBody(const char*);

	const char* getReciever();
	const char* getSender();
	const char* getTitle();
	const char* getBody();

};
