#include "carros.h"
#include <string>
#include <iostream>

using namespace std;

//Construtor de Carros para atribuir valores as variaveies
Carros::Carros(string matricula , string marca,string modelo,int ano,int cc , int hp,float preco,int alugado,string rentedTo)
{
    this -> cc = cc;
    this -> hp = hp;
    this -> ano = ano;
    this -> alugado = alugado;
    this -> marca = marca;
    this -> modelo = modelo;
    this -> matricula = matricula;
    this -> preco = preco;
    this -> rentedTo = rentedTo;
}
Carros::Carros(){
//Construtor vazio
}
