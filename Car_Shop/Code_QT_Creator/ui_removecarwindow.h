/********************************************************************************
** Form generated from reading UI file 'removecarwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVECARWINDOW_H
#define UI_REMOVECARWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RemoveCarWindow
{
public:
    QGridLayout *gridLayout;
    QTableWidget *show_disp;
    QHBoxLayout *horizontalLayout;
    QPushButton *bot_menu;
    QVBoxLayout *verticalLayout;
    QLineEdit *input_remove;
    QPushButton *bot_remover;

    void setupUi(QDialog *RemoveCarWindow)
    {
        if (RemoveCarWindow->objectName().isEmpty())
            RemoveCarWindow->setObjectName(QString::fromUtf8("RemoveCarWindow"));
        RemoveCarWindow->resize(813, 316);
        RemoveCarWindow->setMinimumSize(QSize(500, 0));
        RemoveCarWindow->setBaseSize(QSize(1500, 0));
        gridLayout = new QGridLayout(RemoveCarWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        show_disp = new QTableWidget(RemoveCarWindow);
        if (show_disp->columnCount() < 7)
            show_disp->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        show_disp->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        show_disp->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        show_disp->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        show_disp->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        show_disp->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        show_disp->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        show_disp->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        show_disp->setObjectName(QString::fromUtf8("show_disp"));
        show_disp->setEnabled(true);
        show_disp->setMinimumSize(QSize(0, 0));
        show_disp->setMaximumSize(QSize(851, 16777215));
        show_disp->setBaseSize(QSize(1700, 500));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(9);
        font.setStyleStrategy(QFont::NoAntialias);
        show_disp->setFont(font);
        show_disp->setContextMenuPolicy(Qt::NoContextMenu);

        gridLayout->addWidget(show_disp, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        bot_menu = new QPushButton(RemoveCarWindow);
        bot_menu->setObjectName(QString::fromUtf8("bot_menu"));

        horizontalLayout->addWidget(bot_menu);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        input_remove = new QLineEdit(RemoveCarWindow);
        input_remove->setObjectName(QString::fromUtf8("input_remove"));

        verticalLayout->addWidget(input_remove);

        bot_remover = new QPushButton(RemoveCarWindow);
        bot_remover->setObjectName(QString::fromUtf8("bot_remover"));

        verticalLayout->addWidget(bot_remover);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(RemoveCarWindow);

        QMetaObject::connectSlotsByName(RemoveCarWindow);
    } // setupUi

    void retranslateUi(QDialog *RemoveCarWindow)
    {
        RemoveCarWindow->setWindowTitle(QCoreApplication::translate("RemoveCarWindow", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = show_disp->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("RemoveCarWindow", "Disponibilidade", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = show_disp->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("RemoveCarWindow", "Matricula", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = show_disp->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("RemoveCarWindow", "Marca", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = show_disp->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("RemoveCarWindow", "Modelo", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = show_disp->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("RemoveCarWindow", "Ano", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = show_disp->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("RemoveCarWindow", "Cilindrada", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = show_disp->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("RemoveCarWindow", "Potencia", nullptr));
        bot_menu->setText(QCoreApplication::translate("RemoveCarWindow", "Menu", nullptr));
#if QT_CONFIG(tooltip)
        input_remove->setToolTip(QCoreApplication::translate("RemoveCarWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Inserir Matricula para Remover</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        bot_remover->setText(QCoreApplication::translate("RemoveCarWindow", "Remover", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoveCarWindow: public Ui_RemoveCarWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVECARWINDOW_H
