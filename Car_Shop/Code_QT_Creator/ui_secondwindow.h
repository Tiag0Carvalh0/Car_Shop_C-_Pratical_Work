/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_secondWindow
{
public:
    QGridLayout *gridLayout;
    QLabel *lab_menu;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *bot_removeCars;
    QPushButton *bot_addCars;
    QPushButton *bot_clientSpace;
    QPushButton *bot_showCars;

    void setupUi(QDialog *secondWindow)
    {
        if (secondWindow->objectName().isEmpty())
            secondWindow->setObjectName(QString::fromUtf8("secondWindow"));
        secondWindow->resize(403, 263);
        gridLayout = new QGridLayout(secondWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lab_menu = new QLabel(secondWindow);
        lab_menu->setObjectName(QString::fromUtf8("lab_menu"));
        QFont font;
        font.setPointSize(18);
        lab_menu->setFont(font);
        lab_menu->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lab_menu, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 208, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 6, 1);

        horizontalSpacer = new QSpacerItem(248, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButton = new QPushButton(secondWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        bot_removeCars = new QPushButton(secondWindow);
        bot_removeCars->setObjectName(QString::fromUtf8("bot_removeCars"));

        gridLayout->addWidget(bot_removeCars, 6, 0, 1, 1);

        bot_addCars = new QPushButton(secondWindow);
        bot_addCars->setObjectName(QString::fromUtf8("bot_addCars"));

        gridLayout->addWidget(bot_addCars, 5, 0, 1, 1);

        bot_clientSpace = new QPushButton(secondWindow);
        bot_clientSpace->setObjectName(QString::fromUtf8("bot_clientSpace"));

        gridLayout->addWidget(bot_clientSpace, 4, 0, 1, 1);

        bot_showCars = new QPushButton(secondWindow);
        bot_showCars->setObjectName(QString::fromUtf8("bot_showCars"));

        gridLayout->addWidget(bot_showCars, 3, 0, 1, 1);


        retranslateUi(secondWindow);

        QMetaObject::connectSlotsByName(secondWindow);
    } // setupUi

    void retranslateUi(QDialog *secondWindow)
    {
        secondWindow->setWindowTitle(QCoreApplication::translate("secondWindow", "Dialog", nullptr));
        lab_menu->setText(QCoreApplication::translate("secondWindow", "Menu Principal", nullptr));
        pushButton->setText(QCoreApplication::translate("secondWindow", "LogOut", nullptr));
        bot_removeCars->setText(QCoreApplication::translate("secondWindow", "Remover Veiculos", nullptr));
        bot_addCars->setText(QCoreApplication::translate("secondWindow", "Adicionar Veiculos", nullptr));
        bot_clientSpace->setText(QCoreApplication::translate("secondWindow", "Espa\303\247o Cliente", nullptr));
        bot_showCars->setText(QCoreApplication::translate("secondWindow", "Mostrar Veiculos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secondWindow: public Ui_secondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
