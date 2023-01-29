#ifndef ADDCARWINDOW_H
#define ADDCARWINDOW_H

#include <QDialog>
#include <string>
#include "secondwindow.h"

using namespace std;

namespace Ui {
class addCarWindow;
}

class addCarWindow : public QDialog
{
    Q_OBJECT

public:
    explicit addCarWindow(QWidget *parent = nullptr);
    ~addCarWindow();

    //Variaveis
    string marca, modelo,matricula,rentedTo;
    int cc, hp, ano, alugado;
    float preco;

private slots:
    void on_goBack_released();//Voltar ao Menu
    void on_gravarCarro_released(); //Gravar carro

private:
    Ui::addCarWindow *ui;
};

#endif // ADDCARWINDOW_H
