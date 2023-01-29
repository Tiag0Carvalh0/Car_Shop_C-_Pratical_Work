#ifndef LOGIN_H
#define LOGIN_H
#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <QMainWindow>


using namespace std;

class Client
{
public:
    //Construtores
    Client();
    Client(string, string, string);//Construtor do Login
    Client(string, string, int);//Construto de Info Clientes

    //Mapas
     multimap<string,Client>loginMap; //Mapa de LogIns
     multimap<string,Client>RentMap; //Mapa de LogIns

    //Funcoes
     string Verify(string,string); //Verifica se o login foi feito como admin ou cliente

     //Variaveis
     string isAdmin = "true";
     string username, password;
     string name,address;
     string matricula;
     int card;

};

#endif // LOGIN_H
