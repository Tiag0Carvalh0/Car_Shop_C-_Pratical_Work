/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QLineEdit *passinput;
    QPushButton *pushButton;
    QLineEdit *userinput;
    QLabel *passwordlabe;
    QLabel *usernamelabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(295, 250);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        passinput = new QLineEdit(centralwidget);
        passinput->setObjectName(QString::fromUtf8("passinput"));
        passinput->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(passinput, 4, 0, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 5, 0, 1, 1);

        userinput = new QLineEdit(centralwidget);
        userinput->setObjectName(QString::fromUtf8("userinput"));

        gridLayout_2->addWidget(userinput, 1, 0, 1, 1);

        passwordlabe = new QLabel(centralwidget);
        passwordlabe->setObjectName(QString::fromUtf8("passwordlabe"));
        QFont font;
        font.setPointSize(16);
        passwordlabe->setFont(font);
        passwordlabe->setLayoutDirection(Qt::LeftToRight);
        passwordlabe->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(passwordlabe, 3, 0, 1, 1);

        usernamelabel = new QLabel(centralwidget);
        usernamelabel->setObjectName(QString::fromUtf8("usernamelabel"));
        usernamelabel->setFont(font);
        usernamelabel->setLayoutDirection(Qt::LeftToRight);
        usernamelabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(usernamelabel, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 295, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        passinput->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>EXEMPLO</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
#if QT_CONFIG(tooltip)
        userinput->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>EXEMPLO</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        passwordlabe->setText(QCoreApplication::translate("MainWindow", "Palavra-Passe", nullptr));
        usernamelabel->setText(QCoreApplication::translate("MainWindow", "Utilizador", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
