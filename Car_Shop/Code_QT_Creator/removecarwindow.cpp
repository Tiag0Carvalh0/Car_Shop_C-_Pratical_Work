#include "removecarwindow.h"
#include "ui_removecarwindow.h"
#include "secondwindow.h"
#include <QMessageBox>

RemoveCarWindow::RemoveCarWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoveCarWindow)
{
    ui->setupUi(this);
    connect(ui->bot_menu, SIGNAL(released()), this, SLOT(on_menu_released()));
    connect(ui->bot_remover, SIGNAL(released()), this, SLOT(on_remove_released()));
    ui->show_disp->setEditTriggers(QAbstractItemView::NoEditTriggers); //Para nao deixar o cliente escrever
    ShowAvailable();//Mostar os carros que nao estao alugados

}

RemoveCarWindow::~RemoveCarWindow()
{
    delete ui;
}

void RemoveCarWindow::ShowAvailable(){//Funcao para mostar apenas os carros disponiveis

    int a = 0;//Variavel auxiliar para construir a tabela

    //Percorrer o mapa e verificar se o carro esta disponivel
    for(auto itr=((secondWindow*)((QWidget*)this->parent()))->MapaCarros.begin();itr!=((secondWindow*)((QWidget*)this->parent()))->MapaCarros.end();itr++){
        if(itr->second.alugado == 0){ //Verifica se esta disponivel
            //Coloca os carros na tabela
            ui->show_disp->insertRow(a);
            ui->show_disp->setItem(a, 0, new QTableWidgetItem(QString::fromStdString("Disponível")));
            ui->show_disp->setItem(a, 1, new QTableWidgetItem(QString::fromStdString(itr->second.matricula)));
            ui->show_disp->setItem(a, 2, new QTableWidgetItem(QString::fromStdString(itr->second.marca)));
            ui->show_disp->setItem(a, 3, new QTableWidgetItem(QString::fromStdString(itr->second.modelo)));
            ui->show_disp->setItem(a, 4, new QTableWidgetItem(QString::number(itr->second.ano)));
            ui->show_disp->setItem(a, 5, new QTableWidgetItem(QString::number(itr->second.cc)));
            ui->show_disp->setItem(a, 6, new QTableWidgetItem(QString::number(itr->second.hp)));
            a++;
        }
    }
    ui->show_disp->sortItems(Qt::AscendingOrder);
}

void RemoveCarWindow::on_remove_released(){
    //Converter de Qstring para String
    string remover;
    QString remover_ = ui->input_remove->text();
    remover = remover_.toStdString(); //Varivavel que contem a matricula que queremos eliminar

    auto it = ((secondWindow*)((QWidget*)this->parent()))->MapaCarros.find(remover);//Procura pela matricula no mapa
    ((secondWindow*)((QWidget*)this->parent()))->MapaCarros.erase(it);//Apaga todos os dados referentes a essa matricula

    QMessageBox::information(this,"Remover", "Removido com Sucesso! A Voltar ao Menu");

    //Voltar ao Menu
    ((QWidget*)this->parent())->show();
    this->close();

}

void RemoveCarWindow::on_menu_released(){

    //Voltar ao Menu
    ((QWidget*)this->parent())->show();
    this->close();

}
