#ifndef CARROS_H
#define CARROS_H
#include <istream>
#include <string>
#include <map>
#include <fstream>

using namespace std;

class Carros
{
public:
    Carros(string,string,string,int,int,int,float,int,string); // interação com o mapa
    Carros();         //Construtor

    //variaveis
    int cc;           //Cilindrada
    int hp;           //Potencia
    int ano;          //Ano do Carro
    int alugado;      //0--> Nao Alugado 1-->Alugado
    float preco;      //Preço do Aluguer por dia
    string marca;     //Marca do Carro
    string matricula; //Matricula do Carro
    string modelo;    //Modelo do Carro
    string rentedTo;  //A quem esta alugado o carro
};

#endif // CARROS_H
