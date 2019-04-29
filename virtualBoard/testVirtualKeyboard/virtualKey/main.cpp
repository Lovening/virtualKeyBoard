#include <QtGui/QApplication>
#include "mainwindow.h"
#include "KeyboardFactory.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTextCodec::setCodecForTr(QTextCodec::codecForName("GB2312"));
    Nut::KeyboardFactory key;

    MainWindow w;
    w.show();

    //Nut::KeyboardFactory key;


    return a.exec();
}
