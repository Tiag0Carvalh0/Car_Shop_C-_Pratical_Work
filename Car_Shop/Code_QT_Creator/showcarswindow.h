#ifndef SHOWCARSWINDOW_H
#define SHOWCARSWINDOW_H

#include <QDialog>
#include <string.h>
#include <iostream>
#include <QTableWidget>
#include <QKeyEvent>




using namespace std;

namespace Ui {
class ShowCarsWindow;
}

class ShowCarsWindow : public QDialog
{
    Q_OBJECT

public:
    //Construtor
    explicit ShowCarsWindow(QWidget *parent = nullptr);
    ~ShowCarsWindow();

    //Variaveis
    string matricula;
    float priceRent = 0;
    int alugar;

private:
    Ui::ShowCarsWindow *ui;


private slots:

    void on_menu_released();//Botao para voltar ao menu
    void showTable();//Mostar a tabla
    void on_filtroModelo_released();//Botao para filtrar por modelo
    void on_filtroAno_released();//Botao para filtrar por ano
    void on_filtroMarca_released();//Botao para filtrar por marca
    void on_available_released();//Botao para filtrar por disponibilidade
    void on_show_table_cellDoubleClicked(int row, int column);//Alugar Veiculo quando clica na celula
    void on_show_table_cellChanged(int row, int column);//Editar informacoes quando se muda o texto da celula
};

#endif // SHOWCARSWINDOW_H
