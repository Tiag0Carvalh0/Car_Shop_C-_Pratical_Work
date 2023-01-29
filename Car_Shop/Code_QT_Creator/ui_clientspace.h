/********************************************************************************
** Form generated from reading UI file 'clientspace.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTSPACE_H
#define UI_CLIENTSPACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ClientSpace
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_name;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *label_card;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *label_address;
    QPushButton *bot_menu;
    QTableWidget *tableWidget;

    void setupUi(QDialog *ClientSpace)
    {
        if (ClientSpace->objectName().isEmpty())
            ClientSpace->setObjectName(QString::fromUtf8("ClientSpace"));
        ClientSpace->resize(985, 326);
        ClientSpace->setMinimumSize(QSize(985, 0));
        gridLayout_2 = new QGridLayout(ClientSpace);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(ClientSpace);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(16);
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        label_name = new QLabel(ClientSpace);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setFont(font);

        horizontalLayout_2->addWidget(label_name);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(ClientSpace);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        horizontalLayout_4->addWidget(label_5);

        label_card = new QLabel(ClientSpace);
        label_card->setObjectName(QString::fromUtf8("label_card"));
        label_card->setFont(font);

        horizontalLayout_4->addWidget(label_card);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(ClientSpace);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        label_address = new QLabel(ClientSpace);
        label_address->setObjectName(QString::fromUtf8("label_address"));
        label_address->setFont(font);

        horizontalLayout_3->addWidget(label_address);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        bot_menu = new QPushButton(ClientSpace);
        bot_menu->setObjectName(QString::fromUtf8("bot_menu"));

        verticalLayout_2->addWidget(bot_menu);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        tableWidget = new QTableWidget(ClientSpace);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(ClientSpace);

        QMetaObject::connectSlotsByName(ClientSpace);
    } // setupUi

    void retranslateUi(QDialog *ClientSpace)
    {
        ClientSpace->setWindowTitle(QCoreApplication::translate("ClientSpace", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("ClientSpace", "Nome :", nullptr));
        label_name->setText(QCoreApplication::translate("ClientSpace", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("ClientSpace", "Cart\303\243o : ", nullptr));
        label_card->setText(QCoreApplication::translate("ClientSpace", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("ClientSpace", "Morada : ", nullptr));
        label_address->setText(QCoreApplication::translate("ClientSpace", "TextLabel", nullptr));
        bot_menu->setText(QCoreApplication::translate("ClientSpace", "Menu", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ClientSpace", "Cliente", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ClientSpace", "Marca", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ClientSpace", "Modelo", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ClientSpace", "Ano", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ClientSpace", "Cilindrada", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ClientSpace", "Potencia", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("ClientSpace", "Matricula", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientSpace: public Ui_ClientSpace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTSPACE_H
