/********************************************************************************
** Form generated from reading UI file 'rentcarwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENTCARWINDOW_H
#define UI_RENTCARWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_rentCarWindow
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *label_selected;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_info;
    QLabel *label_price;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QDateEdit *dateEdit_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QDateEdit *dateEdit;
    QPushButton *buttonPrice;
    QPushButton *buttonRent;

    void setupUi(QDialog *rentCarWindow)
    {
        if (rentCarWindow->objectName().isEmpty())
            rentCarWindow->setObjectName(QString::fromUtf8("rentCarWindow"));
        rentCarWindow->resize(444, 197);
        gridLayout = new QGridLayout(rentCarWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(rentCarWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setPointSize(12);
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);

        label_selected = new QLabel(rentCarWindow);
        label_selected->setObjectName(QString::fromUtf8("label_selected"));
        label_selected->setFont(font);

        horizontalLayout->addWidget(label_selected);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_info = new QLabel(rentCarWindow);
        label_info->setObjectName(QString::fromUtf8("label_info"));
        label_info->setFont(font);

        horizontalLayout_2->addWidget(label_info);

        label_price = new QLabel(rentCarWindow);
        label_price->setObjectName(QString::fromUtf8("label_price"));
        label_price->setFont(font);

        horizontalLayout_2->addWidget(label_price);


        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout_2, 4, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(rentCarWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        dateEdit_2 = new QDateEdit(rentCarWindow);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setMaximumDate(QDate(2030, 12, 31));
        dateEdit_2->setMinimumDate(QDate(2022, 1, 1));
        dateEdit_2->setCalendarPopup(true);

        horizontalLayout_3->addWidget(dateEdit_2);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(rentCarWindow);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        dateEdit = new QDateEdit(rentCarWindow);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setMaximumDate(QDate(2030, 12, 31));
        dateEdit->setMinimumDate(QDate(2022, 1, 1));
        dateEdit->setCalendarPopup(true);

        horizontalLayout_4->addWidget(dateEdit);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        buttonPrice = new QPushButton(rentCarWindow);
        buttonPrice->setObjectName(QString::fromUtf8("buttonPrice"));

        gridLayout->addWidget(buttonPrice, 0, 1, 1, 1);

        buttonRent = new QPushButton(rentCarWindow);
        buttonRent->setObjectName(QString::fromUtf8("buttonRent"));

        gridLayout->addWidget(buttonRent, 1, 1, 1, 1);


        retranslateUi(rentCarWindow);

        QMetaObject::connectSlotsByName(rentCarWindow);
    } // setupUi

    void retranslateUi(QDialog *rentCarWindow)
    {
        rentCarWindow->setWindowTitle(QCoreApplication::translate("rentCarWindow", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("rentCarWindow", "Pre\303\247o Por Dia Do Veiculo Selecionado ->", nullptr));
        label_selected->setText(QCoreApplication::translate("rentCarWindow", "0\342\202\254", nullptr));
        label_info->setText(QCoreApplication::translate("rentCarWindow", "Pagamento Total a Efetuar pelo Aluguer ->", nullptr));
        label_price->setText(QCoreApplication::translate("rentCarWindow", "0\342\202\254", nullptr));
        label_2->setText(QCoreApplication::translate("rentCarWindow", "Data Fim", nullptr));
        label->setText(QCoreApplication::translate("rentCarWindow", "Data Inicio", nullptr));
        buttonPrice->setText(QCoreApplication::translate("rentCarWindow", "Calc Pre\303\247o", nullptr));
        buttonRent->setText(QCoreApplication::translate("rentCarWindow", "Alugar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rentCarWindow: public Ui_rentCarWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENTCARWINDOW_H
