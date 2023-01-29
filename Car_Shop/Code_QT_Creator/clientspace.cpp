#include "clientspace.h"
#include "ui_clientspace.h"
#include <string>
#include <carros.h>
#include <secondwindow.h>
#include <iostream>
#include <map>
#include "client.h"
#include "mainwindow.h"
#include "clientspace.h"
#include "QWidget"
#include <QTableWidgetItem>
#include <QTableWidget>

using namespace std;

ClientSpace::ClientSpace(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClientSpace)
{
    ui->setupUi(this);
    connect(ui->bot_menu,SIGNAL(released()), this,SLOT(on_Menu_Released()));//Botao Retornar ao Menu
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers); //Para nao deixar o cliente escrever

    if(((secondWindow*)((QWidget*)this->parent()))->status == "client"){ //Verifica se o login foi feito como cliente ou administrador
        ShowData(); //Mostra informacoes do cliente
    } else {
        ShowDataAdmin();//Mostra informacoes dos clientes todos
        //Esconder as labels que sao usadas para info do cliente
        ui->label_2->hide();
        ui->label_5->hide();
        ui->label_3->hide();
        ui->label_address->hide();
        ui->label_card->hide();
        ui->label_name->hide();
    }
 }

ClientSpace::~ClientSpace()
{
    delete ui;
}

void ClientSpace::on_Menu_Released(){
    ((QWidget*)this->parent())->show();
    this->close();
}

void ClientSpace::ShowData(){

    int a=0;//Var auxiliar para colocar linhas

      //Busca a password para verificar quem e o cliente
   QWidget *parent =((QWidget*)this->parent());
    string password = ((MainWindow*)((QWidget*)parent->parent()))->password;

    for (auto it2 = ((MainWindow*)((QWidget*)parent->parent()))->Log1.RentMap.begin(); it2 != ((MainWindow*)((QWidget*)parent->parent()))->Log1.RentMap.end(); it2++){
       if(password == it2->first){
           //Mostra a info do cliente em questao
           ui->label_name->setText( QString::fromStdString(it2->second.name));
           ui->label_address->setText(QString::fromStdString(it2->second.address));
           ui->label_card->setText(QString::number(it2->second.card));

       }
    }

    //Configura a tablea para mostrar os carros alugados
    this->ui->tableWidget->setRowCount(0); // começar em 0.
    const QStringList columnNames{"Cliente","Marca","Modelo","Ano", "Cilindrada", "Potencia", "Matricula",};//Coloca os nomes nas colunas, para identificar os dados
    this->ui->tableWidget->setHorizontalHeaderLabels(columnNames);

    //Mostra a tabela
    for(auto it3=((secondWindow*)((QWidget*)this->parent()))->MapaCarros.begin();it3!=((secondWindow*)((QWidget*)this->parent()))->MapaCarros.end();it3++){
        if(it3->second.rentedTo == password)
        {
            //Construcao da tabela
            ui->tableWidget->insertRow(a);
            ui->tableWidget->setItem(a, 0, new QTableWidgetItem(QString::fromStdString(it3->second.rentedTo)));
            ui->tableWidget->setItem(a, 1, new QTableWidgetItem(QString::fromStdString(it3->second.marca)));
            ui->tableWidget->setItem(a, 2, new QTableWidgetItem(QString::fromStdString(it3->second.modelo)));
            ui->tableWidget->setItem(a, 3, new QTableWidgetItem(QString::number(it3->second.ano)));
            ui->tableWidget->setItem(a, 4, new QTableWidgetItem(QString::number(it3->second.cc)));
            ui->tableWidget->setItem(a, 5, new QTableWidgetItem(QString::number(it3->second.hp)));
            ui->tableWidget->setItem(a, 6, new QTableWidgetItem(QString::fromStdString(it3->second.matricula)));
            a++; //adicionar mais uma linha
        }

    }
    ui->tableWidget->sortItems(Qt::AscendingOrder);//Mostar a tabela por ordem alfabetica crescente

}

void ClientSpace::ShowDataAdmin(){

    int a=0;//Var auxiliar para colocar linhas

    //Configura a tablea para mostrar os carros alugados e os clientes
    this->ui->tableWidget->setRowCount(0); // começar em 0.
    const QStringList columnNames{"Cliente","Marca","Modelo","Ano", "Cilindrada", "Potencia", "Matricula",};//Coloca os nomes nas colunas, para identificar os dados
    this->ui->tableWidget->setHorizontalHeaderLabels(columnNames);

    //Mostra a tabela de todos os carros alugados e os clientes
    for(auto it3=((secondWindow*)((QWidget*)this->parent()))->MapaCarros.begin();it3!=((secondWindow*)((QWidget*)this->parent()))->MapaCarros.end();it3++){
        if(it3->second.rentedTo != "none"){
            //Construcao da tabela
            ui->tableWidget->insertRow(a);
            ui->tableWidget->setItem(a, 0, new QTableWidgetItem(QString::fromStdString(it3->second.rentedTo)));
            ui->tableWidget->setItem(a, 1, new QTableWidgetItem(QString::fromStdString(it3->second.marca)));
            ui->tableWidget->setItem(a, 2, new QTableWidgetItem(QString::fromStdString(it3->second.modelo)));
            ui->tableWidget->setItem(a, 3, new QTableWidgetItem(QString::number(it3->second.ano)));
            ui->tableWidget->setItem(a, 4, new QTableWidgetItem(QString::number(it3->second.cc)));
            ui->tableWidget->setItem(a, 5, new QTableWidgetItem(QString::number(it3->second.hp)));
            ui->tableWidget->setItem(a, 6, new QTableWidgetItem(QString::fromStdString(it3->second.matricula)));
            a++; //adicionar mais uma linha
        }

    }

}
