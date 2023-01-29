/********************************************************************************
** Form generated from reading UI file 'showcarswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWCARSWINDOW_H
#define UI_SHOWCARSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ShowCarsWindow
{
public:
    QGridLayout *gridLayout;
    QTableWidget *show_table;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *input_marca;
    QPushButton *bot_marca;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *input_modelo;
    QPushButton *bot_modelo;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *input_ano;
    QPushButton *bot_ano;
    QHBoxLayout *horizontalLayout;
    QPushButton *bot_avai;
    QVBoxLayout *verticalLayout_2;
    QPushButton *bot_allcars;
    QPushButton *bot_menu;
    QLabel *label;

    void setupUi(QDialog *ShowCarsWindow)
    {
        if (ShowCarsWindow->objectName().isEmpty())
            ShowCarsWindow->setObjectName(QString::fromUtf8("ShowCarsWindow"));
        ShowCarsWindow->resize(1148, 410);
        gridLayout = new QGridLayout(ShowCarsWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        show_table = new QTableWidget(ShowCarsWindow);
        if (show_table->columnCount() < 8)
            show_table->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        show_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        show_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        show_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        show_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        show_table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        show_table->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        show_table->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        show_table->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        show_table->setObjectName(QString::fromUtf8("show_table"));
        show_table->setMinimumSize(QSize(850, 300));

        gridLayout->addWidget(show_table, 1, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        input_marca = new QLineEdit(ShowCarsWindow);
        input_marca->setObjectName(QString::fromUtf8("input_marca"));
        input_marca->setInputMethodHints(Qt::ImhNone);
        input_marca->setFrame(true);
        input_marca->setEchoMode(QLineEdit::Normal);
        input_marca->setAlignment(Qt::AlignCenter);
        input_marca->setReadOnly(false);
        input_marca->setCursorMoveStyle(Qt::LogicalMoveStyle);
        input_marca->setClearButtonEnabled(false);

        horizontalLayout_2->addWidget(input_marca);

        bot_marca = new QPushButton(ShowCarsWindow);
        bot_marca->setObjectName(QString::fromUtf8("bot_marca"));
        bot_marca->setEnabled(true);
        bot_marca->setIconSize(QSize(0, 0));
        bot_marca->setFlat(false);

        horizontalLayout_2->addWidget(bot_marca);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        input_modelo = new QLineEdit(ShowCarsWindow);
        input_modelo->setObjectName(QString::fromUtf8("input_modelo"));

        horizontalLayout_4->addWidget(input_modelo);

        bot_modelo = new QPushButton(ShowCarsWindow);
        bot_modelo->setObjectName(QString::fromUtf8("bot_modelo"));

        horizontalLayout_4->addWidget(bot_modelo);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        input_ano = new QLineEdit(ShowCarsWindow);
        input_ano->setObjectName(QString::fromUtf8("input_ano"));

        horizontalLayout_3->addWidget(input_ano);

        bot_ano = new QPushButton(ShowCarsWindow);
        bot_ano->setObjectName(QString::fromUtf8("bot_ano"));

        horizontalLayout_3->addWidget(bot_ano);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        bot_avai = new QPushButton(ShowCarsWindow);
        bot_avai->setObjectName(QString::fromUtf8("bot_avai"));

        horizontalLayout->addWidget(bot_avai);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        bot_allcars = new QPushButton(ShowCarsWindow);
        bot_allcars->setObjectName(QString::fromUtf8("bot_allcars"));

        verticalLayout_2->addWidget(bot_allcars);

        bot_menu = new QPushButton(ShowCarsWindow);
        bot_menu->setObjectName(QString::fromUtf8("bot_menu"));

        verticalLayout_2->addWidget(bot_menu);


        verticalLayout_3->addLayout(verticalLayout_2);


        gridLayout->addLayout(verticalLayout_3, 1, 1, 1, 1);

        label = new QLabel(ShowCarsWindow);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);


        retranslateUi(ShowCarsWindow);

        QMetaObject::connectSlotsByName(ShowCarsWindow);
    } // setupUi

    void retranslateUi(QDialog *ShowCarsWindow)
    {
        ShowCarsWindow->setWindowTitle(QCoreApplication::translate("ShowCarsWindow", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = show_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ShowCarsWindow", "Marca", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = show_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ShowCarsWindow", "Modelo", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = show_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ShowCarsWindow", "Ano", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = show_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ShowCarsWindow", "Cilindrada", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = show_table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ShowCarsWindow", "Potencia", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = show_table->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ShowCarsWindow", "Pre\303\247o p/ Dia", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = show_table->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("ShowCarsWindow", "Matricula", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = show_table->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("ShowCarsWindow", "Disponibilidade", nullptr));
#if QT_CONFIG(tooltip)
        input_marca->setToolTip(QCoreApplication::translate("ShowCarsWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Digite a Marca do Veiculo</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        input_marca->setInputMask(QString());
        input_marca->setText(QString());
        bot_marca->setText(QCoreApplication::translate("ShowCarsWindow", "Filtrar p/ Marca", nullptr));
#if QT_CONFIG(tooltip)
        input_modelo->setToolTip(QCoreApplication::translate("ShowCarsWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Digite o Modelo do Veiculo</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        bot_modelo->setText(QCoreApplication::translate("ShowCarsWindow", "Filtrar p/Modelo", nullptr));
#if QT_CONFIG(tooltip)
        input_ano->setToolTip(QCoreApplication::translate("ShowCarsWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Digite o Ano do Veiculo</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        bot_ano->setText(QCoreApplication::translate("ShowCarsWindow", "Filtrar p/Ano", nullptr));
        bot_avai->setText(QCoreApplication::translate("ShowCarsWindow", "Filtrar p/ Disponibilidade", nullptr));
        bot_allcars->setText(QCoreApplication::translate("ShowCarsWindow", "Mostrar Todos", nullptr));
        bot_menu->setText(QCoreApplication::translate("ShowCarsWindow", "Menu", nullptr));
        label->setText(QCoreApplication::translate("ShowCarsWindow", "*Para Alugar Clicar Duas Vezes em Qualquer Spec do Veiculo//Para Editar Apenas Mudar o Texto Desejado(Disponibilidade 0->Disponivel: 1->Alugado)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowCarsWindow: public Ui_ShowCarsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWCARSWINDOW_H
