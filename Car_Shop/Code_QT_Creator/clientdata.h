#ifndef CLIENTDATA_H
#define CLIENTDATA_H
#include <string>
#include <iostream>
#include <carros.h>
#include <map>
#include "client.h"
 using namespace std;
class ClientData
{
public:
    ClientData();
     ClientData(string,string,int);
    multimap<int,ClientData>RentMap;
    string name,address;
    int card;
    Client c1;
};

#endif // CLIENTDATA_H
