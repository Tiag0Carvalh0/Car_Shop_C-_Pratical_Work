#include "client.h"
#include "string.h"
#include <iostream>
#include <map>
#include <QMessageBox>
#include <QTextStream>
#include <string>
#include <QDebug>

using namespace std;

//Diretoria dos Ficheiros
string pathLog = "D:/EEC/POO/QT/POO_UPDATE_20-01-2022/Projeto_Poo/LoginData.txt";
string pathLog2 = "D:/EEC/POO/QT/POO_UPDATE_20-01-2022/Projeto_Poo/RentData.txt";


Client::Client() //Construtor
{
    // Sistema de login
    ifstream LoginRead(pathLog);//Abrir o Ficheiro para Leitura
    if (LoginRead.is_open()){
        while(LoginRead >> username >> password >> isAdmin) //Passar o que esta no Ficheiro para var auxiliares
        {
            loginMap.insert(make_pair(username, Client(username, password, isAdmin)));//Insere os dados no mapa do tipo cliente para login
        }
    }
    LoginRead.close();//Fechar o Ficheiro

    // Informações do cliente
    ifstream RentRead(pathLog2);//Abrir o Ficheiro para Leitura
    if (RentRead.is_open()){
        while(RentRead >> name >> address >> card) //Passar o que esta no Ficheiro para var auxiliares
        {
            RentMap.insert(make_pair(name, Client(name, address, card)));//Insere os dados no mapa do tipo cliente para informacoes
        }
    }
    RentRead.close();//Fechar o Ficheiro

}

Client::Client(string username, string password, string isAdmin){//Construtor LogIn
    this -> username = username;
    this -> password = password;
    this -> isAdmin = isAdmin;
}

Client::Client(string name, string address, int card){//Construtor Info Cliente
    this -> name = name;
    this -> address = address;
    this -> card = card;
}

string Client::Verify(string username, string password){ //Funcao para verificar se é cliente ou administrador
    // Se não colocar nada nas caixas
    if(username == "" || password == ""){
        QMessageBox::information(0,"Login", "Preencha os Campos Primeiro!");
    } else {
        auto it = loginMap.find(username); //Procurar o Nome que o Utilizador colocou
        if (it->second.password == password){ //Verificar se para aquele nome a palavra passe é igual á inserida
            if(it->second.isAdmin == "true"){ //Verifica se é admin(true)
                return "admin";
            }
            else{
                return "client"; // Se for false trata-se de um client
            }
        }
    }
    return "none";//Se nao for válido o username
}
