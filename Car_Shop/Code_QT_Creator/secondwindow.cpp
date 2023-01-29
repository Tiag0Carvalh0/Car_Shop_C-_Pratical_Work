#include "secondwindow.h"
#include "ui_secondwindow.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QApplication>
#include <QDebug>
#include <fstream>
#include <carros.h>
#include <iostream>
#include <map>
#include <QTextStream>
#include <QDebug>
#include "addcarwindow.h"
#include "showcarwindow.h"
#include "removecarwindow.h"
#include "showcarswindow.h"
#include "clientspace.h"
#include "client.h"

using namespace std;

//Diretoria dos ficheiros
string pathCars = "D:/EEC/POO/QT/POO_UPDATE_20-01-2022/Projeto_Poo/CarrosData.txt";

secondWindow::secondWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secondWindow)

{
    ui->setupUi(this);

    //Connects dos botoes
    connect(ui->pushButton, SIGNAL(released()), this, SLOT(on_pushbutton_released()));      //Botao LogOut
    connect(ui->bot_showCars, SIGNAL(released()), this, SLOT(on_showCars_released()));      //Botao mostrar
    connect(ui->bot_addCars,SIGNAL(released()), this,SLOT(AddCars()));                      //Botao de Adicionar Carros
    connect(ui->bot_removeCars,SIGNAL(released()), this,SLOT(on_RemoveCars_released()));    //Botao de Remover Carros
    connect(ui->bot_clientSpace,SIGNAL(released()), this,SLOT(on_ClientSpace_released()));  //Botao de Editar Carros


    readFile();//Carregar os dados do  ficheiro .txt

    //Verifica de o acesso é de cliente ou admin
    if(((MainWindow*)((QWidget*)this->parent()))->verifyLogin == "client"){
        //caso seja cliente as janleas de adicionar e remover nao sao mostradas ao cliente
        status = "client";//Variavel auxiliar para ser usada em outra janela
        ui->bot_addCars->hide(); //Esconder o botao para adicionar carros
        ui->bot_removeCars->hide();//Esconder o botao para remover carros
    }

}

secondWindow::~secondWindow()
{
    delete ui;
}
void secondWindow::on_RemoveCars_released(){

    RemoveCarWindow* new_window = new RemoveCarWindow(this); // envia a secondWindow como parent
    new_window->show(); // como é apontador tenho de usar a seta
    this->hide(); // Esconder a secondwindow.

}
void secondWindow::on_pushbutton_released(){ //Botao de LogOut
    //Mensagem de Pop-Up
    QMessageBox msgBox;
    msgBox.setWindowTitle("LogOut");
    msgBox.setText("Tem a Certeza que Pretende Encerrar o Programa?");
    msgBox.setStandardButtons(QMessageBox::Yes);
    msgBox.addButton(QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    if(msgBox.exec() == QMessageBox::Yes){//Caso prenteda mesmo encerra o programa

        writeFile();//Atualiza o ficheiro txt
        qApp->exit(); //Fecha o QT

    }else {
        QMessageBox::warning(this,"LogOut", "Encerramento Cancelado!"); //Mensagem LogOut Cancelado
    }

}

void secondWindow::on_bot_addCars_released()//Funcao para dar display a janela de adicionar carros
{
    addCarWindow* new_window = new addCarWindow(this);
    new_window->show(); // como é apontador tenho de usar a seta
    this->hide(); // Esconder a secondwindow.
}

void secondWindow::on_showCars_released(){//Funcao para dar display a janela de mostrar carros
    ShowCarsWindow* new_window = new ShowCarsWindow(this);
    new_window->show(); // como é apontador tenho de usar a seta
    this->hide(); // Esconder a secondwindow.
}

void secondWindow::writeFile(){//Funcao colocar no ficheiro de texto os dados que foram alterados/adicionados ou removidos

    ofstream WriteMap (pathCars); // abre o ficheiro para escrever
    if (WriteMap.is_open())
    {
        //Percorre o mapa e vai colocando todos os dados no ficheiro de texto de acordo com a formatacao que pretendemos
        for (auto it = MapaCarros.begin(); it != MapaCarros.end(); it++){
            WriteMap << it->second.matricula << " " << it->second.marca << " " << it->second.modelo << " " << it->second.ano << " " << it->second.cc << " " << it->second.hp << " "<< it->second.preco << endl;
            WriteMap << it->second.alugado << " " << it->second.rentedTo << endl;
        }
        WriteMap.close();//Fecha o mapa depois da conclusao
        QMessageBox::information(this,"LogOut", "Base de Dados Atualizada!");//Caso a escrita seja vbem sucedida
    }
    else
    {
        QMessageBox::warning(this,"LogOut", "Nao e Possivel Aceder a Base de Dados");//Caso a escrita mal sucedida
    }

}

void secondWindow::readFile(){//Funcao para ler do ficheiro de texto os dados dos carros

    int ccAux; //Cilindrada
    int hpAux; //Potencia
    int anoAux; //Ano do Carro
    int alugadoAux; //0--> Nao Alugado 1-->Alugado
    float precoAux; //Preco do aluguer por dia
    string marcaAux; //Marca do Carro
    string modeloAux; //Modelo do Carro
    string matriculaAux; //Matricula do Carro
    string rentedTo; //Associacao do carro

    //Carrega no inicio o que está no Ficheiro "CarrosData.txt"
    ifstream FicheiroCarros(pathCars);//Abrir Ficheiro para Leitura
    if(FicheiroCarros.is_open()){
        //Enquanto houver dados no ficheiro ele passa para o mapa
        while(FicheiroCarros >> matriculaAux >> marcaAux >> modeloAux >> anoAux >> ccAux >> hpAux >> precoAux >> alugadoAux >> rentedTo )
        {
            MapaCarros.insert(make_pair(matriculaAux,Carros(matriculaAux,marcaAux,modeloAux, anoAux, ccAux,hpAux,precoAux,alugadoAux,rentedTo)));//Coloca no Mapa o que está no Ficheiro
        }

        QMessageBox::information(this,"Carregamento de Ficheiros","Sucesso a Carregar os Ficheiros");//Mensagem caso os dados tenham sido carregados com sucesso
        FicheiroCarros.close();//Fecha o Ficheiro

    }
    else
    {
        QMessageBox::warning(this,"Carregamento de Ficheiros","Nao e Possivel Abrir a Base de Dados!");//Mensagem caso nao seja possivel aceder ao ficheiro
    }
}

void secondWindow::on_ClientSpace_released(){//Funcao para dar display a janela da info do cliente

    ClientSpace* new_window = new ClientSpace(this);
    new_window->show(); // como é apontador tenho de usar a seta
    this->hide(); // Esconder a secondwindow.

}
