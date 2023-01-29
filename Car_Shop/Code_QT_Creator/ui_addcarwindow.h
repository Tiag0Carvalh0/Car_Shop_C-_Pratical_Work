/********************************************************************************
** Form generated from reading UI file 'addcarwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCARWINDOW_H
#define UI_ADDCARWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addCarWindow
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QLineEdit *inputMarca;
    QLabel *label_2;
    QLineEdit *inputModelo;
    QLabel *label;
    QLineEdit *inputAno;
    QLabel *label_6;
    QLineEdit *inputCC;
    QLabel *label_3;
    QLineEdit *inputCV;
    QLabel *label_4;
    QLineEdit *inputMatricula;
    QLabel *label_7;
    QLineEdit *inputPreco;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *goBack;
    QSpacerItem *verticalSpacer;
    QPushButton *gravarCarro;

    void setupUi(QDialog *addCarWindow)
    {
        if (addCarWindow->objectName().isEmpty())
            addCarWindow->setObjectName(QString::fromUtf8("addCarWindow"));
        addCarWindow->resize(523, 412);
        layoutWidget = new QWidget(addCarWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 361, 373));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        inputMarca = new QLineEdit(layoutWidget);
        inputMarca->setObjectName(QString::fromUtf8("inputMarca"));

        verticalLayout->addWidget(inputMarca);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        inputModelo = new QLineEdit(layoutWidget);
        inputModelo->setObjectName(QString::fromUtf8("inputModelo"));

        verticalLayout->addWidget(inputModelo);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        inputAno = new QLineEdit(layoutWidget);
        inputAno->setObjectName(QString::fromUtf8("inputAno"));

        verticalLayout->addWidget(inputAno);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        inputCC = new QLineEdit(layoutWidget);
        inputCC->setObjectName(QString::fromUtf8("inputCC"));

        verticalLayout->addWidget(inputCC);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        inputCV = new QLineEdit(layoutWidget);
        inputCV->setObjectName(QString::fromUtf8("inputCV"));

        verticalLayout->addWidget(inputCV);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        inputMatricula = new QLineEdit(layoutWidget);
        inputMatricula->setObjectName(QString::fromUtf8("inputMatricula"));

        verticalLayout->addWidget(inputMatricula);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        inputPreco = new QLineEdit(layoutWidget);
        inputPreco->setObjectName(QString::fromUtf8("inputPreco"));

        verticalLayout->addWidget(inputPreco);

        widget = new QWidget(addCarWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(410, 20, 85, 371));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        goBack = new QPushButton(widget);
        goBack->setObjectName(QString::fromUtf8("goBack"));

        verticalLayout_2->addWidget(goBack);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        gravarCarro = new QPushButton(widget);
        gravarCarro->setObjectName(QString::fromUtf8("gravarCarro"));

        verticalLayout_2->addWidget(gravarCarro);


        retranslateUi(addCarWindow);

        QMetaObject::connectSlotsByName(addCarWindow);
    } // setupUi

    void retranslateUi(QDialog *addCarWindow)
    {
        addCarWindow->setWindowTitle(QCoreApplication::translate("addCarWindow", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("addCarWindow", "Marca", nullptr));
        label_2->setText(QCoreApplication::translate("addCarWindow", "Modelo", nullptr));
        label->setText(QCoreApplication::translate("addCarWindow", "Ano", nullptr));
        label_6->setText(QCoreApplication::translate("addCarWindow", "Cilindrada", nullptr));
        label_3->setText(QCoreApplication::translate("addCarWindow", "Pot\303\252ncia", nullptr));
        label_4->setText(QCoreApplication::translate("addCarWindow", "Matricula", nullptr));
        label_7->setText(QCoreApplication::translate("addCarWindow", "Pre\303\247o de Aluguer", nullptr));
        goBack->setText(QCoreApplication::translate("addCarWindow", "Menu", nullptr));
        gravarCarro->setText(QCoreApplication::translate("addCarWindow", "Gravar Carro", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addCarWindow: public Ui_addCarWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCARWINDOW_H
