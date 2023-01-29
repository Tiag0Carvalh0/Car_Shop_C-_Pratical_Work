#include "showcarwindow.h"
#include "ui_showcarwindow.h"
#include "secondwindow.h"

showCarWindow::showCarWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::showCarWindow)
{
    ui->setupUi(this);
    print_tableWidget();


}

showCarWindow::~showCarWindow()
{
    delete ui;
}


void showCarWindow::on_goBack_released()
{
    ((QWidget*)this->parent())->show();
    this->close();
}

void showCarWindow :: print_tableWidget(){

    int a = 0;

    for(auto itr=((secondWindow*)((QWidget*)this->parent()))->c1.MapaCarros.begin();itr!=((secondWindow*)((QWidget*)this->parent()))->c1.MapaCarros.end();itr++){
        ui->tableWidget->insertRow(a);
        ui->tableWidget->setItem(a, 0, new QTableWidgetItem(QString::fromStdString(itr->second.marca)));
        ui->tableWidget->setItem(a, 1, new QTableWidgetItem(QString::fromStdString(itr->second.modelo)));
        ui->tableWidget->setItem(a, 2, new QTableWidgetItem(QString::number(itr->second.ano)));
        ui->tableWidget->setItem(a, 3, new QTableWidgetItem(QString::number(itr->second.cc)));
        ui->tableWidget->setItem(a, 4, new QTableWidgetItem(QString::number(itr->second.hp)));
        ui->tableWidget->setItem(a, 5, new QTableWidgetItem(QString::number(itr->second.preco)));
        ui->tableWidget->setItem(a, 6, new QTableWidgetItem(QString::fromStdString(itr->second.matricula)));
        if(itr->second.alugado!=0){
            ui->tableWidget->setItem(a, 7, new QTableWidgetItem(QString::fromStdString("Indisponível")));
        }
        else{
            ui->tableWidget->setItem(a, 7, new QTableWidgetItem(QString::fromStdString("Disponível")));
        }
        a++;
        }
    ui->tableWidget->sortItems(Qt::AscendingOrder);
}
