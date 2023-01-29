#ifndef CLIENTSPACE_H
#define CLIENTSPACE_H

#include <QDialog>
#include <string>
#include <iostream>
#include <carros.h>
#include <map>
#include "clientdata.h"
#include <client.h>

using namespace std;

namespace Ui {
class ClientSpace;
}

class ClientSpace : public QDialog
{
    Q_OBJECT

public:
    //Construtores
    explicit ClientSpace(QWidget *parent = nullptr);
     ClientSpace(string,string,int);//Construtor para carregar info cliente
    ~ClientSpace();

    //Funcoes
    void ShowData(); //Mostra os Carros associados ao cliente
    void ShowDataAdmin();//Mostra todos os carros alugados e os clientes que os alugaram

private slots:
   void on_Menu_Released(); //Volta ao menu

private:
    Ui::ClientSpace *ui;
};

#endif // CLIENTSPACE_H
