#include "email.h"
#include "emailSender.h"
#include <iostream>
#include <stdio.h>
#include <curl/curl.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <time.h>
#define CRT_SECURE_NO_WARNINGS

using namespace std;



int main()
{
    email NowaWiadomosc(/*SOMEONES EMAIL*/, /*YOUR EMAIL*/, "Dobry Wieczor ę", "Nie wierzę że to działa!!!!");
    emailSender es(NowaWiadomosc, /*PASSWORD*/);
    //std::cout << NowaWiadomosc.getSender();
    es.sendEmail();
    //const char* lol = es.fillingPayloadMessage(NowaWiadomosc);
    //es.ReadFilledMessage(lol);
}
