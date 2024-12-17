/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextBrowser *textoContenidoEstructurado;
    QTextBrowser *textoContenidoRaw;
    QPushButton *botonIniciar;
    QPushButton *botonDetener;
    QTextBrowser *textoContenidoRawASCII;
    QTableView *tablaPaquetes;
    QPushButton *botonExportar;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1319, 704);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(181, 176, 176)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        textoContenidoEstructurado = new QTextBrowser(centralwidget);
        textoContenidoEstructurado->setObjectName("textoContenidoEstructurado");
        textoContenidoEstructurado->setGeometry(QRect(10, 430, 381, 221));
        textoContenidoEstructurado->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 221, 218);"));
        textoContenidoRaw = new QTextBrowser(centralwidget);
        textoContenidoRaw->setObjectName("textoContenidoRaw");
        textoContenidoRaw->setGeometry(QRect(420, 430, 421, 221));
        textoContenidoRaw->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 221, 218);"));
        botonIniciar = new QPushButton(centralwidget);
        botonIniciar->setObjectName("botonIniciar");
        botonIniciar->setGeometry(QRect(20, 30, 89, 25));
        QFont font;
        font.setStrikeOut(false);
        botonIniciar->setFont(font);
        botonIniciar->setCursor(QCursor(Qt::PointingHandCursor));
        botonIniciar->setStyleSheet(QString::fromUtf8("background-color: white;"));
        botonDetener = new QPushButton(centralwidget);
        botonDetener->setObjectName("botonDetener");
        botonDetener->setGeometry(QRect(120, 30, 89, 25));
        botonDetener->setCursor(QCursor(Qt::PointingHandCursor));
        botonDetener->setStyleSheet(QString::fromUtf8("background-color: white;"));
        textoContenidoRawASCII = new QTextBrowser(centralwidget);
        textoContenidoRawASCII->setObjectName("textoContenidoRawASCII");
        textoContenidoRawASCII->setGeometry(QRect(870, 430, 401, 221));
        textoContenidoRawASCII->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 221, 218);"));
        tablaPaquetes = new QTableView(centralwidget);
        tablaPaquetes->setObjectName("tablaPaquetes");
        tablaPaquetes->setGeometry(QRect(0, 80, 1281, 281));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(10);
        sizePolicy1.setVerticalStretch(10);
        sizePolicy1.setHeightForWidth(tablaPaquetes->sizePolicy().hasHeightForWidth());
        tablaPaquetes->setSizePolicy(sizePolicy1);
        tablaPaquetes->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 221, 218);"));
        tablaPaquetes->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tablaPaquetes->setAutoScroll(true);
        tablaPaquetes->setSelectionBehavior(QAbstractItemView::SelectRows);
        tablaPaquetes->setSortingEnabled(false);
        tablaPaquetes->horizontalHeader()->setStretchLastSection(true);
        tablaPaquetes->verticalHeader()->setVisible(false);
        botonExportar = new QPushButton(centralwidget);
        botonExportar->setObjectName("botonExportar");
        botonExportar->setGeometry(QRect(1180, 30, 89, 25));
        botonExportar->setCursor(QCursor(Qt::PointingHandCursor));
        botonExportar->setStyleSheet(QString::fromUtf8("background-color: white;"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 390, 231, 17));
        QFont font1;
        font1.setPointSize(16);
        label->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(490, 390, 301, 17));
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(970, 390, 251, 17));
        label_3->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Packet Detective", nullptr));
        textoContenidoEstructurado->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textoContenidoRaw->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        botonIniciar->setText(QCoreApplication::translate("MainWindow", "Iniciar", nullptr));
        botonDetener->setText(QCoreApplication::translate("MainWindow", "Detener", nullptr));
        textoContenidoRawASCII->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        botonExportar->setText(QCoreApplication::translate("MainWindow", "Exportar", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Contenido estructurado", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Contenido RAW (Hexadecimal)", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Contenido RAW (ASCII)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
