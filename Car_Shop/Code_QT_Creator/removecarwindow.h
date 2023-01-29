#ifndef REMOVECARWINDOW_H
#define REMOVECARWINDOW_H

#include <QDialog>

namespace Ui {
class RemoveCarWindow;
}

class RemoveCarWindow : public QDialog
{
    Q_OBJECT

public:
    //Construtor
    explicit RemoveCarWindow(QWidget *parent = nullptr);
    ~RemoveCarWindow();

    //Funcoes
    void ShowAvailable();//Mostra todos os carros disponiveis

private slots:
    void on_menu_released();//Voltar ao Menu
    void on_remove_released();//Botao para remover o carro

private:
    Ui::RemoveCarWindow *ui;
};

#endif // REMOVECARWINDOW_H
