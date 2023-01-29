#ifndef RENTCARWINDOW_H
#define RENTCARWINDOW_H

#include <QDialog>
#include <QDate>

namespace Ui {
class rentCarWindow;
}

class rentCarWindow : public QDialog
{
    Q_OBJECT

public:
    //Construtor
    explicit rentCarWindow(QWidget *parent = nullptr);
    ~rentCarWindow();

private slots:
    void on_dateEdit_dateChanged(const QDate &date); //Funcao que recolhe a data de inicio de aluguer
    void on_dateEdit_2_dateChanged(const QDate &date);//Funcao que recolhe a data de fim de aluguer
    void on_buttonRent_released();//Botao para alugar
    void on_buttonPrice_released();//Botao para calcular o preco para os dias escolhidos

private:
    //Variaveis
    QDate beginDate, endDate; //Guarda as datas
    int days; //Dias de aluguer
    float priceToPay=0; //Preco que vai ficar o aluguer
    Ui::rentCarWindow *ui;

};

#endif // RENTCARWINDOW_H
