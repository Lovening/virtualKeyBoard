/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Apr 29 13:49:26 2019
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTextEdit *Text_numEdit;
    QLineEdit *line_numEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *Text_EnglishEdit;
    QLineEdit *line_EnglishEdit;
    QLabel *label_5;
    QLineEdit *line_pinyinEdit;
    QTextEdit *Text_pinyinEdit;
    QLabel *label_6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(448, 400);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Text_numEdit = new QTextEdit(centralWidget);
        Text_numEdit->setObjectName(QString::fromUtf8("Text_numEdit"));
        Text_numEdit->setGeometry(QRect(170, 10, 121, 31));
        line_numEdit = new QLineEdit(centralWidget);
        line_numEdit->setObjectName(QString::fromUtf8("line_numEdit"));
        line_numEdit->setGeometry(QRect(170, 70, 121, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 20, 66, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 80, 66, 21));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 130, 66, 17));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 170, 66, 17));
        Text_EnglishEdit = new QTextEdit(centralWidget);
        Text_EnglishEdit->setObjectName(QString::fromUtf8("Text_EnglishEdit"));
        Text_EnglishEdit->setGeometry(QRect(170, 120, 121, 31));
        line_EnglishEdit = new QLineEdit(centralWidget);
        line_EnglishEdit->setObjectName(QString::fromUtf8("line_EnglishEdit"));
        line_EnglishEdit->setGeometry(QRect(170, 160, 121, 31));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 270, 66, 17));
        line_pinyinEdit = new QLineEdit(centralWidget);
        line_pinyinEdit->setObjectName(QString::fromUtf8("line_pinyinEdit"));
        line_pinyinEdit->setGeometry(QRect(170, 260, 121, 31));
        Text_pinyinEdit = new QTextEdit(centralWidget);
        Text_pinyinEdit->setObjectName(QString::fromUtf8("Text_pinyinEdit"));
        Text_pinyinEdit->setGeometry(QRect(170, 220, 121, 31));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 230, 66, 17));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 448, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(Text_numEdit, line_pinyinEdit);
        QWidget::setTabOrder(line_pinyinEdit, Text_pinyinEdit);
        QWidget::setTabOrder(Text_pinyinEdit, line_numEdit);
        QWidget::setTabOrder(line_numEdit, Text_EnglishEdit);
        QWidget::setTabOrder(Text_EnglishEdit, line_EnglishEdit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\346\225\260\345\255\227text", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\346\225\260\345\255\227line", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\350\213\261\346\226\207text", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\350\213\261\346\226\207line", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "\346\213\274\351\237\263line", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "\346\213\274\351\237\263text", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
