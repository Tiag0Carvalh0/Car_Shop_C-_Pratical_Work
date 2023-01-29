#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QDialog>
#include <string>
#include <iostream>
#include <carros.h>
#include <client.h>


using namespace std;

namespace Ui {
class secondWindow;
}

class secondWindow : public QDialog
{
    Q_OBJECT

public:
    //Construtor
    explicit secondWindow(QWidget *parent = nullptr);
    ~secondWindow();

    //Variaveis
    string status; //Variavel para saber se e cliente ou admin

    //Mapa que contem todos os dados dos carros
    multimap<string,Carros>MapaCarros; //Criacao do mapa

    //Funcoes para escrever e ler do ficheiro de texto
    void writeFile();//Escrever no ficheiro
    void readFile();//Ler no ficheiro

private:
    Ui::secondWindow *ui;

private slots:
    void on_pushbutton_released();//Botao para fazer logOut
    void on_bot_addCars_released();//Botao para Menu adicionar carros
    void on_showCars_released();//Botao para Menu mostrar todos os carros
    void on_RemoveCars_released();//Botao para Menu remover os carro
    void on_ClientSpace_released();//Botao para Menu Info Cliente
};

#endif // SECONDWINDOW_H
