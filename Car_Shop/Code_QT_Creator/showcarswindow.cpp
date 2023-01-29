#include "showcarswindow.h"
#include "ui_showcarswindow.h"
#include "secondwindow.h"
#include <string>
#include <iostream>
#include <QMessageBox>
#include "mainwindow.h"
#include "rentcarwindow.h"
#include <QTableWidgetItem>
#include <QTableWidget>
#include <QKeyEvent>


using namespace std;

ShowCarsWindow::ShowCarsWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowCarsWindow)
{
    ui->setupUi(this);
    //Connect dos botoes
    connect(ui->bot_menu, SIGNAL(released()), this, SLOT(on_menu_released()));
    connect(ui->bot_marca, SIGNAL(released()), this, SLOT(on_filtroMarca_released()));
    connect(ui->bot_modelo, SIGNAL(released()), this, SLOT(on_filtroModelo_released()));
    connect(ui->bot_ano, SIGNAL(released()), this, SLOT(on_filtroAno_released()));
    connect(ui->bot_allcars, SIGNAL(released()), this, SLOT(showTable()));
    connect(ui->bot_avai, SIGNAL(released()), this, SLOT(on_available_released()));

    if(((secondWindow*)((QWidget*)this->parent()))->status == "client"){ //Verifica se o login foi feito como cliente ou administrador
        ui->show_table->setEditTriggers(QAbstractItemView::NoEditTriggers); //Para nao deixar o cliente escrever
    }
    showTable();//Funcao para mostrar todos os carros
}

ShowCarsWindow::~ShowCarsWindow()
{
    delete ui;
}

void ShowCarsWindow::on_menu_released(){//Funcao para regressar ao Menu

    ((QWidget*)this->parent())->show();//Regressa a secondwindow
    this->close();//Fecha esta janela

}

void ShowCarsWindow::on_filtroAno_released(){//Funcao para mostrar apenas os carros pelo ano selecionado pelo cliente

    ui->show_table->blockSignals(true);//Bloqueia o sinal para nao ativar o cellChange quando dá upload dos dados

    QString ano_ = ui->input_ano->text();
    int ano = ano_.toInt();//variavel que contem o ano selecionado pelo cliente
    int a=0;//Variavel auxiliar para construir a tabela

    ui->show_table->clear(); //Apaga a tabela para meter o filtro, senao ficam os carros onde ele nao escreve por cima

    //Se nao ouver carros ele imprime vazio
    this->ui->show_table->setRowCount(0); // começar em 0.

    const QStringList columnNames{"Marca","Modelo","Ano", "Cilindrada", "Ptencia", "Preco", "Matricula", "Disponibilidade"};//Coloca os nomes nas colunas, para identificar os dados
    this->ui->show_table->setHorizontalHeaderLabels(columnNames);

    //Percorre o mapa carros e mostra todos os carros em que o ano seja igual ao introduzido pelo cliente
    for(auto itr=((secondWindow*)((QWidget*)this->parent()))->MapaCarros.begin();itr!=((secondWindow*)((QWidget*)this->parent()))->MapaCarros.end();itr++){
        if(itr->second.ano == ano)//Verifica se o ano e igual
        {
            //Construcao da tabela
            ui->show_table->insertRow(a);
            ui->show_table->setItem(a, 0, new QTableWidgetItem(QString::fromStdString(itr->second.marca)));
            ui->show_table->setItem(a, 1, new QTableWidgetItem(QString::fromStdString(itr->second.modelo)));
            ui->show_table->setItem(a, 2, new QTableWidgetItem(QString::number(itr->second.ano)));
            ui->show_table->setItem(a, 3, new QTableWidgetItem(QString::number(itr->second.cc)));
            ui->show_table->setItem(a, 4, new QTableWidgetItem(QString::number(itr->second.hp)));
            ui->show_table->setItem(a, 5, new QTableWidgetItem(QString::number(itr->second.preco)));
            ui->show_table->setItem(a, 6, new QTableWidgetItem(QString::fromStdString(itr->second.matricula)));
            if(itr->second.alugado!=0){
                ui->show_table->setItem(a, 7, new QTableWidgetItem(QString::fromStdString("Indisponível")));
            }else{
                ui->show_table->setItem(a, 7, new QTableWidgetItem(QString::fromStdString("Disponível")));
            }
            a++; //adicionar mais uma linha
        }

    }
    ui->show_table->sortItems(Qt::AscendingOrder);//Mostar a tabela por ordem alfabetica crescente
    ui->show_table->blockSignals(false); //Desbloqueia os sinais
}

void ShowCarsWindow::on_filtroModelo_released(){

    ui->show_table->blockSignals(true);//Bloqueia o sinal para nao ativar o cellChange quando dá upload dos dados

    QString modelo_ = ui->input_modelo->text();
    string modelo = modelo_.toStdString();
    int a=0;

    ui->show_table->clear(); //Apaga a tabela para meter o filtro, senao ficam os carros onde ele nao escreve por cima
    //Se nao ouver carros ele imprime vazio, ver como  voltar a tabela original
    this->ui->show_table->setRowCount(0); // começar em 0.

    const QStringList columnNames{"Marca","Modelo","Ano", "Cilindrada", "Ptencia", "Preco", "Matricula", "Disponibilidade"};
    this->ui->show_table->setHorizontalHeaderLabels(columnNames);

    for(auto itr=((secondWindow*)((QWidget*)this->parent()))->MapaCarros.begin();itr!=((secondWindow*)((QWidget*)this->parent()))->MapaCarros.end();itr++){
        if(itr->second.modelo == modelo)
        {
            ui->show_table->insertRow(a);
            ui->show_table->setItem(a, 0, new QTableWidgetItem(QString::fromStdString(itr->second.marca)));
            ui->show_table->setItem(a, 1, new QTableWidgetItem(QString::fromStdString(itr->second.modelo)));
            ui->show_table->setItem(a, 2, new QTableWidgetItem(QString::number(itr->second.ano)));
            ui->show_table->setItem(a, 3, new QTableWidgetItem(QString::number(itr->second.cc)));
            ui->show_table->setItem(a, 4, new QTableWidgetItem(QString::number(itr->second.hp)));
            ui->show_table->setItem(a, 5, new QTableWidgetItem(QString::number(itr->second.preco)));
            ui->show_table->setItem(a, 6, new QTableWidgetItem(QString::fromStdString(itr->second.matricula)));
            if(itr->second.alugado!=0){
                ui->show_table->setItem(a, 7, new QTableWidgetItem(QString::fromStdString("Indisponível")));
            }
            else{
                ui->show_table->setItem(a, 7, new QTableWidgetItem(QString::fromStdString("Disponível")));
            }
            a++;
        }

    }
    ui->show_table->sortItems(Qt::AscendingOrder);
    ui->show_table->blockSignals(false); //Desbloqueia os sinais

}

void ShowCarsWindow::on_filtroMarca_released(){ //Podemos colocar o numero de resultados obtidos quando mostramos a tabela

    ui->show_table->blockSignals(true);//Bloqueia o sinal para nao ativar o cellChange quando dá upload dos dados

    QString marca_ = ui->input_marca->text();
    string marca = marca_.toStdString();
    int a=0;
    ui->show_table->clear(); //Apaga a tabela para meter o filtro, senao ficam os carros onde ele nao escreve por cima
    //Se nao ouver carros ele imprime vazio, ver como  voltar a tabela original
    this->ui->show_table->setRowCount(0); // começar em 0.

    const QStringList columnNames{"Marca","Modelo","Ano", "Cilindrada", "Ptencia", "Preco", "Matricula", "Disponibilidade"};
    this->ui->show_table->setHorizontalHeaderLabels(columnNames);

    for(auto itr=((secondWindow*)((QWidget*)this->parent()))->MapaCarros.begin();itr!=((secondWindow*)((QWidget*)this->parent()))->MapaCarros.end();itr++){
        if(itr->second.marca == marca)
        {
            ui->show_table->insertRow(a);
            ui->show_table->setItem(a, 0, new QTableWidgetItem(QString::fromStdString(itr->second.marca)));
            ui->show_table->setItem(a, 1, new QTableWidgetItem(QString::fromStdString(itr->second.modelo)));
            ui->show_table->setItem(a, 2, new QTableWidgetItem(QString::number(itr->second.ano)));
            ui->show_table->setItem(a, 3, new QTableWidgetItem(QString::number(itr->second.cc)));
            ui->show_table->setItem(a, 4, new QTableWidgetItem(QString::number(itr->second.hp)));
            ui->show_table->setItem(a, 5, new QTableWidgetItem(QString::number(itr->second.preco)));
            ui->show_table->setItem(a, 6, new QTableWidgetItem(QString::fromStdString(itr->second.matricula)));
            if(itr->second.alugado!=0){
                ui->show_table->setItem(a, 7, new QTableWidgetItem(QString::fromStdString("Indisponível")));
            }
            else{
                ui->show_table->setItem(a, 7, new QTableWidgetItem(QString::fromStdString("Disponível")));
            }
            a++;
        }

    }
    ui->show_table->sortItems(Qt::AscendingOrder);
    ui->show_table->blockSignals(false); //Desbloqueia os sinais
}

void ShowCarsWindow::showTable(){

    ui->show_table->blockSignals(true);//Bloqueia o sinal para nao ativar o cellChange quando dá upload dos dados

    ui->show_table->clear(); //Apaga TUDO Da tabela  para meter o filtro, senao ficam os carros onde ele nao escreve por cima

    int a = 0;

    this->ui->show_table->setRowCount(0); // começar em 0.

    const QStringList columnNames{"Marca","Modelo","Ano", "Cilindrada", "Ptencia", "Preco", "Matricula", "Disponibilidade"};
    this->ui->show_table->setHorizontalHeaderLabels(columnNames);

    for(auto itr=((secondWindow*)((QWidget*)this->parent()))->MapaCarros.begin();itr!=((secondWindow*)((QWidget*)this->parent()))->MapaCarros.end();itr++){
        ui->show_table->insertRow(a);
        ui->show_table->setItem(a, 0, new QTableWidgetItem(QString::fromStdString(itr->second.marca)));
        ui->show_table->setItem(a, 1, new QTableWidgetItem(QString::fromStdString(itr->second.modelo)));
        ui->show_table->setItem(a, 2, new QTableWidgetItem(QString::number(itr->second.ano)));
        ui->show_table->setItem(a, 3, new QTableWidgetItem(QString::number(itr->second.cc)));
        ui->show_table->setItem(a, 4, new QTableWidgetItem(QString::number(itr->second.hp)));
        ui->show_table->setItem(a, 5, new QTableWidgetItem(QString::number(itr->second.preco)));
        ui->show_table->setItem(a, 6, new QTableWidgetItem(QString::fromStdString(itr->second.matricula)));
        if(itr->second.alugado!=0){
            ui->show_table->setItem(a, 7, new QTableWidgetItem(QString::fromStdString("Indisponível")));
        }
        else{
            ui->show_table->setItem(a, 7, new QTableWidgetItem(QString::fromStdString("Disponível")));
        }
        a++;
    }
    ui->show_table->sortItems(Qt::AscendingOrder);
    ui->show_table->blockSignals(false); //Desbloqueia os sinais
}

void ShowCarsWindow::on_show_table_cellDoubleClicked(int row, int column){//Funcao para alugar carros

    if(((secondWindow*)((QWidget*)this->parent()))->status == "client"){
        int reference = column;
        //Localizar a matricula daquele carro independentemente onde click naquela linha
        while(reference!=6){
            if(reference == 7){
                reference--;
            } else {
                reference++;
            }
        }
        //Quando ja estiver na matricula
        if(reference == 6){

            QString matricula_ = ui->show_table->item(row, reference)->text();
            matricula = matricula_.toStdString(); //Guarda a matricula
            //Percorre para encontar a matricula e os dados referentes
            auto it = ((secondWindow*)((QWidget*)this->parent()))->MapaCarros.find(matricula);
            priceRent = it->second.preco; //Guarda o preco para aquele carro
               if (alugar == 1){ //Caso esteja alugado nao pode alugar
                   QMessageBox::information(this,"Alugar", "Carro Indisponivel para aluguer!");
               }
               else{
                   //Procede para o aluguer
                    rentCarWindow* new_window = new rentCarWindow(this);
                    new_window->show(); // como é apontador tenho de usar a seta
               }
        }
    }
}

void ShowCarsWindow::on_show_table_cellChanged(int row, int column){//Funcao para editar dados dos carros

    if(((secondWindow*)((QWidget*)this->parent()))->status != "client"){
        int reference = column;
        //Localizar a matricula daquele carro independentemente onde click naquela linha
        while(reference!=6){
            if(reference == 7){
                reference--;
            } else {
                reference++;
            }

            if(reference == 6){//Quando ja estiver na matricula
                QString matricula_ = ui->show_table->item(row, reference)->text();
                matricula = matricula_.toStdString();//Guarda a matricula
                //Percorre para encontar a matricula e os dados referentes
                multimap<string,Carros>::iterator it = ((secondWindow*)((QWidget*)this->parent()))->MapaCarros.find(matricula);
            //Verifica em que coluna foi feita a edicao e associa a varivel correspondente
                if(column == 0 || column == 1 || column == 6 ){//Colunas de strings
                    QString toEdit_ = ui->show_table->item(row, column)->text();
                    switch(column){
                    case 0:
                        it->second.marca = toEdit_.toStdString(); //Marca
                        break;
                    case 1:
                        it->second.modelo = toEdit_.toStdString(); //Modelo
                        break;
                    case 6:
                        it->second.matricula = toEdit_.toStdString(); //Matricula
                        break;
                    }

                }
                else if(column == 2 || column == 3 || column == 4 || column == 7){//Colunas de Inteiros
                    QString toEdit2_ = ui->show_table->item(row, column)->text();
                    switch(column){
                    case 2:
                        it->second.ano = toEdit2_.toInt(); //Ano
                        break;
                    case 3:
                        it->second.cc = toEdit2_.toInt(); //Cilindrada
                        break;
                    case 4:
                        it->second.hp = toEdit2_.toInt(); //Potencia
                        break;
                    case 7:
                        it->second.alugado = toEdit2_.toInt(); //Disponibilidade
                        it->second.rentedTo = "none";//Desassocia o carro ao cliente
                        break;
                    }
                }  else {
                    QString toEdit3_ = ui->show_table->item(row, column)->text(); //Coluna do preco
                    it->second.preco = toEdit3_.toFloat();
                }
            }

        }
    }
}

void ShowCarsWindow::on_available_released(){

    ui->show_table->blockSignals(true);//Bloqueia o sinal para nao ativar o cellChange quando dá upload dos dados

    int a=0;
    ui->show_table->clear(); //Apaga a tabela para meter o filtro, senao ficam os carros onde ele nao escreve por cima

    //Se nao ouver carros ele imprime vazio, ver como  voltar a tabela original
    this->ui->show_table->setRowCount(0); // começar em 0.

    const QStringList columnNames{"Marca","Modelo","Ano", "Cilindrada", "Ptencia", "Preco", "Matricula", "Disponibilidade"};
    this->ui->show_table->setHorizontalHeaderLabels(columnNames);

    for(auto itr=((secondWindow*)((QWidget*)this->parent()))->MapaCarros.begin();itr!=((secondWindow*)((QWidget*)this->parent()))->MapaCarros.end();itr++){
        if(itr->second.alugado == 0)
        {
            ui->show_table->insertRow(a);
            ui->show_table->setItem(a, 0, new QTableWidgetItem(QString::fromStdString(itr->second.marca)));
            ui->show_table->setItem(a, 1, new QTableWidgetItem(QString::fromStdString(itr->second.modelo)));
            ui->show_table->setItem(a, 2, new QTableWidgetItem(QString::number(itr->second.ano)));
            ui->show_table->setItem(a, 3, new QTableWidgetItem(QString::number(itr->second.cc)));
            ui->show_table->setItem(a, 4, new QTableWidgetItem(QString::number(itr->second.hp)));
            ui->show_table->setItem(a, 5, new QTableWidgetItem(QString::number(itr->second.preco)));
            ui->show_table->setItem(a, 6, new QTableWidgetItem(QString::fromStdString(itr->second.matricula)));
            if(itr->second.alugado!=0){
                ui->show_table->setItem(a, 7, new QTableWidgetItem(QString::fromStdString("Indisponível")));
            }
            else{
                ui->show_table->setItem(a, 7, new QTableWidgetItem(QString::fromStdString("Disponível")));
            }
            a++;
        }

    }
    ui->show_table->sortItems(Qt::AscendingOrder);
    ui->show_table->blockSignals(false); //Desbloqueia os sinais

}
