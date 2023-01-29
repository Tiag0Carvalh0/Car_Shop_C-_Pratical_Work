#ifndef SHOWCARWINDOW_H
#define SHOWCARWINDOW_H

#include <QDialog>

namespace Ui {
class showCarWindow;
}

class showCarWindow : public QDialog
{
    Q_OBJECT

public:
    explicit showCarWindow(QWidget *parent = nullptr);
    ~showCarWindow();

private slots:
    void print_tableWidget();
    void on_goBack_released();


private:
    Ui::showCarWindow *ui;
};

#endif // SHOWCARWINDOW_H
