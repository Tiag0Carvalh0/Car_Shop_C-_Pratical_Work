#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secondwindow.h"
#include "client.h"
#include <string>
#include <iostream>
#include <QMessageBox>
#include <QFile>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Botões
    connect(ui->pushButton, SIGNAL(released()), this, SLOT(on_pushbutton_released()));


};
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushbutton_released(){

    QString name = ui->userinput->text(); //Pegar o que foi escrito na box
    username = name.toStdString();        //Converter o que foi escrito na box, conversao de QString para String
    QString pass = ui->passinput->text(); //Pegar o que foi escrito na box
    password = pass.toStdString();        //Converter o que foi escrito na box, conversao de QString para String

    verifyLogin = Log1.Verify(username,password); //Verificar se as credenciais estao corretas

    if (verifyLogin == "none"){ //Caso nao se escreva nada nas caixas
        QMessageBox::warning(this,"Login", "Não é Possivel Fazer Login! Tente Novamente!");
    }else{
        QMessageBox::information(this,"Login", "Login Feito com Sucesso!");
        secondWindow* new_window = new secondWindow(this); // apontador para ser memória dinâmica. Envia como parent a mainWindow.
        new_window->show(); // como é apontador tenho de usar a seta
        this->hide(); // Esconder a main window.
    }
}

