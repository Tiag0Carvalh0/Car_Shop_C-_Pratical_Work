#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
#include <iostream>
#include "client.h"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    //Construtor
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //Variaveis
    string username;
    string password;
    string verifyLogin;
    int logOut = 0;

    //Objetos do Tipo Clientes
    Client Log1; //Iniciar o construtor

private:
    Ui::MainWindow *ui;

private slots:
   void on_pushbutton_released(); //Botao para fazer login

};
#endif // MAINWINDOW_H
