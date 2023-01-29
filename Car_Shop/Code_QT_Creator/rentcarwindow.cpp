#include "rentcarwindow.h"
#include "ui_rentcarwindow.h"
#include <iostream>
#include "secondwindow.h"
#include "showcarswindow.h"
#include "math.h"
#include <QMessageBox>
#include <mainwindow.h>


using namespace std;

rentCarWindow::rentCarWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rentCarWindow)
{
    ui->setupUi(this);
    ui->label_selected->setText(QString::number(((ShowCarsWindow*)((QWidget*)this->parent()))->priceRent));
}

rentCarWindow::~rentCarWindow()
{
    delete ui;
}

void rentCarWindow::on_dateEdit_dateChanged(const QDate &date1)
{
    beginDate=date1; //Guarda a data de inicio escolhida pelo utilizador

}

void rentCarWindow::on_dateEdit_2_dateChanged(const QDate &date2)
{
    endDate = date2;//Guarda a data de fim escolhida pelo utilizador
}

void rentCarWindow::on_buttonRent_released() //Funcao para saber se o cliente pretende proceder ao pagamento/aluguer
{
     QWidget *grandfather =((QWidget*)this->parent());//Cast para a secondWindow
     QWidget *ggrandfather= ((QWidget*)grandfather->parent());//Cast para a Mainwindow
     string password = ((MainWindow*)((QWidget*)ggrandfather->parent()))->password;
     string matricula = ((ShowCarsWindow*)((QWidget*)this->parent()))->matricula;

    //Mensagem Pop-Up
    QMessageBox msgBox;
    msgBox.setWindowTitle("Pagamento");
    msgBox.setText("Tem a Certeza que Pretende Efetuar o Pagamento?");
    msgBox.setStandardButtons(QMessageBox::Yes);
    msgBox.addButton(QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);

    if(msgBox.exec() == QMessageBox::Yes){ //Se responder que sim

        auto it = ((secondWindow*)((QWidget*)grandfather->parent()))->MapaCarros.find(matricula);
        it->second.alugado = 1; //Estado do carro passa a alugado
        //Buscar o carro que foi alugado para poder atribuir um cliente ao carro
        it->second.rentedTo = password;//Atribuicao do cliente ao caro
        QMessageBox::information(this,"Alugar","Pagamento Confirmado!");
        this->close();//Fecha a janela e mostra todos os carros

    } else {
        QMessageBox::warning(this,"Alugar", "Pagamento Cancelado!");//Caso cancele
    }

}

void rentCarWindow::on_buttonPrice_released()//Funcao para Calcular o Preco para o tempo estimado
{

    days = beginDate.daysTo(endDate);//Dias de aluguer
    priceToPay = float(((ShowCarsWindow*)((QWidget*)this->parent()))->priceRent * days); //Calculo do preco
    ui->label_price->setText(QString::number(priceToPay));//Mostra na label o preco do aluguer para os dias selecionados

}

