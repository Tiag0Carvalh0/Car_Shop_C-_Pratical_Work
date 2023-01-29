#include "clientdata.h"
#include "clientspace.h"
#include "ui_clientspace.h"
#include <string>
#include <carros.h>
#include <login.h>
#include <secondwindow.h>
#include <iostream>
#include <map>

string pathLog2 = "C:/Users/Tiago Carvalho/Downloads/POO_UPDATE_15-01-2022/Projeto_Poo/RentData.txt";

ClientData::ClientData()
{
    ifstream RentRead(pathLog2);//Abrir o Ficheiro para Leitura
    if (RentRead.is_open()){
        while(RentRead >> name >> address >> card) //Passar o que esta no Ficheiro para var auxiliares
        {
            RentMap.insert(make_pair(card, ClientData(name, address,card)));
        }
    }
    RentRead.close();
}

ClientData::ClientData(string name, string address, int card){

    this -> name = c1.username;
    this -> address = address;
    this -> card = card;

}
