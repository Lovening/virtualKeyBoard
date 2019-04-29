#include "mainwindow.h"
#include "ui_mainwindow.h"

//调取键盘属性key
static const char* keyboardKye= "Keyboard";

//数字键盘
//正则表达式表示
//"(\\d)(\\.\\d{1,4})?"   一位整数，四位小数
//"([1-9]?\\d)(\\.\\d{1,3})?"  两位整数  三位小数
//"([1-9]?\\d?\\d)(\\.\\d{1,3})?"  三位整数  三位小数
static const QString& numKeyboardValue = "DigitalBoard";
static const QString& letterKeyboardValue = "letterKeyBoard";
static const QString& PINYIN = "pingyin";
static const char*    setRegExp ="setRegExp";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init()
{
    //调用数字键盘
    ui->Text_numEdit->setProperty(keyboardKye,numKeyboardValue);

    ui->line_numEdit->setProperty (keyboardKye,numKeyboardValue);
    //设置正则表达式，控制具体使用
    ui->line_numEdit->setProperty (setRegExp,"(\\d)(\\.\\d{1,4})?");
    //调用中文输入键盘
    ui->Text_pinyinEdit->setProperty (keyboardKye,PINYIN);
}
