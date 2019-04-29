#include <QtGui>
#include "hzKB.h"
#include <QDebug>
#include "IKeyboard.h"

namespace Nut
{
QString syszux_lower_letter[52]={"1","2","3","4","5","6","7","8","9","0","-","=","backspace",
                                 "q","w","e","r","t","y","u","i","o","p","[","]","\\",
                                 "a","s","d","f","g","h","j","k","l",";","\'","enter",
                                 "z","x","c","v","b","n","m",",",".","/",""," "};

QString syszux_upper_letter[52]={"!","@","#","$","%","^","&&","*","(",")","_","+","backspace",
                                 "Q","W","E","R","T","Y","U","I","O","P","{","}","|",
                                 "A","S","D","F","G","H","J","K","L",":","\"","enter",
                                 "Z","X","C","V","B","N","M","<",">","?",""," "};

hzKB::hzKB(QWidget *parent) :
    IKeyboard(parent, Qt::Popup | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint)
{
    int ret=0;

    button_group	= new QButtonGroup(this);
    input_method	= 1;
    lower_upper	= 0;
    page_count	= 0;


    m_ui.setupUi(this);

    m_ui.pushButton_is_hanzi->setFlat(true);
    m_ui.pushButton_shift->setFlat(true);

    initGb();

    pinyin_file.setFileName(":/rsc/fontlib");
    if( !pinyin_file.open(QIODevice::ReadOnly) )
    {
        QMessageBox::warning(0,tr("fontlib"),tr("can't load"));
    }

    regExp.setCaseSensitivity(Qt::CaseSensitive);
    regExp.setPattern(QString("([a-z]+)"));

    while(!pinyin_file.atEnd())
    {
        QByteArray data = pinyin_file.readLine();
        ret = regExp.indexIn(QString(data.data()),0,QRegExp::CaretAtZero);
        pinyin_map.insert(regExp.cap(1),data.left(ret));
    }

    setModelCN();
}

hzKB::~hzKB()
{
}

void hzKB::initGb()
{
    registerButton( 1, m_ui.pushButton_hanzi_left);
    registerButton( 2, m_ui.pushButton_hanzi_1);
    registerButton( 3, m_ui.pushButton_hanzi_2);
    registerButton( 4, m_ui.pushButton_hanzi_3);
    registerButton( 5, m_ui.pushButton_hanzi_4);
    registerButton( 6, m_ui.pushButton_hanzi_5);
    registerButton( 7, m_ui.pushButton_hanzi_6);
    registerButton( 8, m_ui.pushButton_hanzi_7);
    registerButton( 9, m_ui.pushButton_hanzi_8);
    registerButton(10, m_ui.pushButton_hanzi_right);

    registerButton(11, m_ui.pushButton_n1);
    registerButton(12, m_ui.pushButton_n2);
    registerButton(13, m_ui.pushButton_n3);
    registerButton(14, m_ui.pushButton_n4);
    registerButton(15, m_ui.pushButton_n5);
    registerButton(16, m_ui.pushButton_n6);
    registerButton(17, m_ui.pushButton_n7);
    registerButton(18, m_ui.pushButton_n8);
    registerButton(19, m_ui.pushButton_n9);
    registerButton(20, m_ui.pushButton_n0);
    registerButton(21, m_ui.pushButton_gang);
    registerButton(22, m_ui.pushButton_deng);
    registerButton(23, m_ui.pushButton_backspace);

    registerButton(24, m_ui.pushButton_q);
    registerButton(25, m_ui.pushButton_w);
    registerButton(26, m_ui.pushButton_e);
    registerButton(27, m_ui.pushButton_r);
    registerButton(28, m_ui.pushButton_t);
    registerButton(29, m_ui.pushButton_y);
    registerButton(30, m_ui.pushButton_u);
    registerButton(31, m_ui.pushButton_i);
    registerButton(32, m_ui.pushButton_o);
    registerButton(33, m_ui.pushButton_p);
    registerButton(34, m_ui.pushButton_zuokuo);
    registerButton(35, m_ui.pushButton_youkuo);
    registerButton(36, m_ui.pushButton_backsplash);

    registerButton(37, m_ui.pushButton_a);
    registerButton(38, m_ui.pushButton_s);
    registerButton(39, m_ui.pushButton_d);
    registerButton(40, m_ui.pushButton_f);
    registerButton(41, m_ui.pushButton_g);
    registerButton(42, m_ui.pushButton_h);
    registerButton(43, m_ui.pushButton_j);
    registerButton(44, m_ui.pushButton_k);
    registerButton(45, m_ui.pushButton_l);
    registerButton(46, m_ui.pushButton_semicolon);
    registerButton(47, m_ui.pushButton_quote);
    registerButton(48, m_ui.pushButton_enter);

    registerButton(49, m_ui.pushButton_z);
    registerButton(50, m_ui.pushButton_x);
    registerButton(51, m_ui.pushButton_c);
    registerButton(52, m_ui.pushButton_v);
    registerButton(53, m_ui.pushButton_b);
    registerButton(54, m_ui.pushButton_n);
    registerButton(55, m_ui.pushButton_m);
    registerButton(56, m_ui.pushButton_comma);
    registerButton(57, m_ui.pushButton_period);
    registerButton(58, m_ui.pushButton_splash);

    registerButton(59, m_ui.pushButton_shift);
    registerButton(60, m_ui.pushButton_whitespace);
    registerButton(61, m_ui.pushButton_is_hanzi);
    registerButton(62, m_ui.pushButton_CONFIRM);
    registerButton(63, m_ui.pushButton_CANCEL);

    connect(button_group,SIGNAL(buttonClicked(int)),SLOT(buttonClickResponse(int)));
}
void hzKB::buttonClickResponse(int buttonID)
{
    if(buttonID==1)		/* prev */
    {
        selectHanziPre();
        return;
    }
    else if(2<=buttonID && buttonID<=9)	/* 待选汉字 */
    {
        m_ui.lineEdit_window->insert(button_vector.at(buttonID-1)->text());
        m_ui.lineEdit_pinyin->clear();
        clearString();
        return;
    }
    else if(buttonID==10)	/* next */
    {
        selectHanziNext();
        return;
    }
    else if(buttonID==23)	/* backspace */
    {
        deleteString();
        return;
    }
    else if(buttonID==48)	/* enter, the same as "确认" */
    {
        affirmString();
        return;
    }
    else if(buttonID==59)	/* shift */
    {
        changeLowerUpper();
        return;
    }
    else if(buttonID>=11 && buttonID<=60)
    {
        if(lower_upper)
            event=new QKeyEvent(QEvent::KeyPress, 0, Qt::NoModifier,syszux_upper_letter[buttonID-11]);
        else
            event=new QKeyEvent(QEvent::KeyPress, 0, Qt::NoModifier,syszux_lower_letter[buttonID-11]);

        if(input_method)
        {
            m_ui.lineEdit_pinyin->setFocus();
            QApplication::sendEvent(focusWidget(),event);
            matching(m_ui.lineEdit_pinyin->text());
        }
        else
        {
            m_ui.lineEdit_window->setFocus();
            QApplication::sendEvent(focusWidget(),event);
        }
    }
    else if(buttonID==61)	/* Eglish/中文 */
    {
        changeInputMethod();
        return;
    }
    else if(buttonID==62)	/* confirm */
    {
        affirmString();
        return;
    }
    else if(buttonID==63)	/* cancel */
    {
        this->hide();
    }

}
void hzKB::matching(QString pinyin)
{
    pinyin_list = pinyin_map.values(pinyin);
    changePage(0);
    page_count=0;
}

void hzKB::changePage(int index)
{
    int count = pinyin_list.size();
    int i=index*8,j=0;
    while(++j != 9 )
        button_vector.at(j)->setText(tr(pinyin_list.value(count-(++i)).toAscii()));
    if(index==0)
        m_ui.pushButton_hanzi_left->setEnabled(false);
    else
        m_ui.pushButton_hanzi_left->setEnabled(true);
    if(pinyin_list.size()>(index*8+8))
        m_ui.pushButton_hanzi_right->setEnabled(true);
    else
        m_ui.pushButton_hanzi_right->setEnabled(false);
}

void hzKB::selectHanziPre()
{
    changePage(--page_count);
}

void hzKB::selectHanziNext()
{
    changePage(++page_count);
}
void hzKB::clearString()
{
    int i=0;
    while(++i!=9)
        button_vector.at(i)->setText("");
}
void hzKB::changeInputMethod()
{
    if(input_method==0)	/* 当前模式为英文，切换至中文模式 */
    {
        setModelCN();
    }
    else	/* 当前模式为中文，切换至英文模式 */
    {
        setModelEN();
    }
}
void hzKB::changeLowerUpper()
{
    if(lower_upper==0)	/* 小写模式，切换到大写模式 */
    {
        setChrUp();
    }
    else
    {
        setChrLow();
    }
}
void hzKB::deleteString()
{
    if(input_method)	/* cn inputmethod */
    {
        if( m_ui.lineEdit_pinyin->text().isEmpty() )
        {
            QString currText = m_ui.lineEdit_window->text();
            if(!currText.isEmpty())
            {
                currText.remove( (currText.length()-1), 1 );	/* remove the tail */
            }
            m_ui.lineEdit_window->setText(currText);
        }
        else
        {
            QString currText = m_ui.lineEdit_pinyin->text();
            currText.remove( (currText.length()-1), 1 );	/* remove the tail */
            m_ui.lineEdit_pinyin->setText(currText);
        }

        matching(m_ui.lineEdit_pinyin->text());

    }
    else	/* en inputmethod */
    {
        QString currText = m_ui.lineEdit_window->text();
        if(!currText.isEmpty())
        {
            currText.remove( (currText.length()-1), 1 );	/* remove the tail */
        }
        m_ui.lineEdit_window->setText(currText);
    }
}
void hzKB::affirmString()
{
    outputText	= m_ui.lineEdit_window->text();
    updateFocusText(outputText);
    outputText	="";
    m_ui.lineEdit_window	->setText(outputText);

    this->hide();
}

void hzKB::setLineEdit(QLineEdit * line)
{
    outputLineEdit	= line;
    outputText	= outputLineEdit->text();

    m_ui.lineEdit_window	->setText(outputText);
    m_ui.lineEdit_pinyin	->setText("");

    setModelCN();
}

void hzKB::focusChanged()
{
    if (m_currentFocus != NULL && !this->isAncestorOf(m_currentFocus))
    {
        QString currentDigitalText;
        QString className = m_currentFocus->metaObject()->className();
        if (className == "QLineEdit")
        {
            QPointer<QLineEdit> edit = dynamic_cast<QLineEdit *>(m_currentFocus);

            if (edit.isNull()) return;

            currentDigitalText = edit->text();
        }
        else if (className == "QTextEdit")
        {
            QPointer<QTextEdit> edit = dynamic_cast<QTextEdit *>(m_currentFocus);
            if (edit.isNull()) return;
            currentDigitalText = edit->toPlainText();
        }
        m_ui.lineEdit_window->setText(currentDigitalText);
        m_currentFocus->clearFocus ();
    }

}

void hzKB::showBoard()
{
    show ();
}

void hzKB::hideBoard()
{
    hide ();
}

void hzKB::updateFocusText(const QString &string)
{
    if (m_currentFocus == NULL) return;
    QString className = m_currentFocus->metaObject()->className();
    if (className == "QLineEdit")
    {
        QLineEdit *edit = dynamic_cast<QLineEdit *>(m_currentFocus);
        if (edit == NULL) return;
        edit->setText(string);
    }
    else if (className == "QTextEdit")
    {
        QTextEdit *edit = dynamic_cast<QTextEdit *>(m_currentFocus);
        if (edit == NULL) return;
        edit->setPlainText(string);
    }

}

void hzKB::setModelCN(void)
{
    m_ui.pushButton_shift->setEnabled(false);	/* 禁止大小写切换 */
    m_ui.pushButton_shift->hide();

    m_ui.pushButton_is_hanzi->setProperty ("case","CN");
    m_ui.pushButton_is_hanzi->setStyleSheet (QString(""));


    m_ui.pushButton_CANCEL->setText(QString::fromUtf8("取消"));
    m_ui.pushButton_CONFIRM->setText(QString::fromUtf8("确认"));

    setChrLow();

    input_method	= 1;
}

void hzKB::setModelEN(void)
{
    m_ui.pushButton_shift->setEnabled(true);	/* 允许大小写切换 */
    m_ui.pushButton_shift->show();


    m_ui.pushButton_is_hanzi->setProperty ("case","EN");
    m_ui.pushButton_is_hanzi->setStyleSheet (QString(""));

    m_ui.pushButton_CANCEL->setText("cancel");
    m_ui.pushButton_CONFIRM->setText("ok");

    setChrLow();

    input_method	= 0;
}
//转化成大写
void hzKB::setChrUp(void)
{


    int i=9;
    while(++i!=59)
    {
        button_vector.at(i)->setProperty ("case",QString("true"));
        button_vector.at(i)->setStyleSheet(QString(""));

    }
    lower_upper=1;

    m_ui.pushButton_shift->setProperty ("case",QString("BIG"));
    m_ui.pushButton_shift->setStyleSheet (QString(""));
}


//转化成小写
void hzKB::setChrLow(void)
{

    int i=9;
    while(++i!=59)
    {
        button_vector.at(i)->setProperty ("case",QString("false"));
        button_vector.at(i)->setStyleSheet(QString(""));
    }
    lower_upper=0;
    m_ui.pushButton_shift->setProperty ("case",QString("SMALL"));
    m_ui.pushButton_shift->setStyleSheet (QString(""));
}

void hzKB::registerButton(int idx, QPushButton *pbt)
{
    button_vector.push_back(pbt);
    button_group->addButton(pbt,idx);
}
}
