/********************************************************************************
** Form generated from reading UI file 'menuprincipal.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUPRINCIPAL_H
#define UI_MENUPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuPrincipal
{
public:
    QWidget *centralwidget;
    QPushButton *botonContinuar;
    QListWidget *widgetListaDispositivos;
    QLabel *label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MenuPrincipal)
    {
        if (MenuPrincipal->objectName().isEmpty())
            MenuPrincipal->setObjectName("MenuPrincipal");
        MenuPrincipal->resize(800, 600);
        MenuPrincipal->setStyleSheet(QString::fromUtf8("background-color: rgb(181, 176, 176)"));
        centralwidget = new QWidget(MenuPrincipal);
        centralwidget->setObjectName("centralwidget");
        botonContinuar = new QPushButton(centralwidget);
        botonContinuar->setObjectName("botonContinuar");
        botonContinuar->setGeometry(QRect(360, 490, 89, 25));
        botonContinuar->setStyleSheet(QString::fromUtf8("color: gray; background-color: white;\n"
""));
        widgetListaDispositivos = new QListWidget(centralwidget);
        widgetListaDispositivos->setObjectName("widgetListaDispositivos");
        widgetListaDispositivos->setGeometry(QRect(40, 120, 721, 321));
        QFont font;
        font.setPointSize(15);
        widgetListaDispositivos->setFont(font);
        widgetListaDispositivos->setStyleSheet(QString::fromUtf8("background-color: white;"));
        widgetListaDispositivos->setResizeMode(QListView::Adjust);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 60, 521, 31));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: black;\n"
""));
        MenuPrincipal->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MenuPrincipal);
        statusbar->setObjectName("statusbar");
        MenuPrincipal->setStatusBar(statusbar);

        retranslateUi(MenuPrincipal);

        QMetaObject::connectSlotsByName(MenuPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *MenuPrincipal)
    {
        MenuPrincipal->setWindowTitle(QCoreApplication::translate("MenuPrincipal", "Seleccionar dispositivo de red", nullptr));
        botonContinuar->setText(QCoreApplication::translate("MenuPrincipal", "Continuar", nullptr));
        label->setText(QCoreApplication::translate("MenuPrincipal", "Por favor, seleccione un dispositivo de red:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuPrincipal: public Ui_MenuPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUPRINCIPAL_H
