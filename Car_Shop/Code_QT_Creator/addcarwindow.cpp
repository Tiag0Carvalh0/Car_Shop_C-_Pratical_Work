#include "addcarwindow.h"
#include "ui_addcarwindow.h"
#include "secondwindow.h"
#include <fstream>
#include <carros.h>
#include <iostream>
#include <QString>
#include <map>
#include <QMessageBox>


using namespace std;


addCarWindow::addCarWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addCarWindow)
{
    ui->setupUi(this);

}

addCarWindow::~addCarWindow()
{
    delete ui;
}

void addCarWindow::on_goBack_released()//Voltar a janela do Menu
{
    ((QWidget*)this->parent())->show();
    this->close();
}

void addCarWindow::on_gravarCarro_released()//Funcao para Adicionar Carros
{
    // de Qstring para string
    QString marca_ = ui->inputMarca->text();
    marca = marca_.toStdString();
    QString modelo_ = ui->inputModelo->text();
    modelo = modelo_.toStdString();
    QString matricula_ = ui->inputMatricula->text();
    matricula = matricula_.toStdString();
    // de QString para int
    QString ano_ = ui->inputAno->text();
    ano = ano_.toInt();
    QString hp_ = ui->inputCV->text();
    hp = hp_.toInt();
    QString cc_ = ui->inputCC->text();
    cc = cc_.toInt();
    alugado = 0;
    rentedTo = "none";
    // de QString para float
    QString preco_ = ui->inputPreco->text();
    preco = preco_.toFloat();

    // Cast e Colocar os dados no Mapa
    ((secondWindow*)((QWidget*)this->parent()))->MapaCarros.insert(make_pair(matricula,Carros(matricula,marca,modelo, ano, cc,hp,preco,alugado,rentedTo)));

    //Voltar ao Menu
    ((QWidget*)this->parent())->show();
    this->close();
}

