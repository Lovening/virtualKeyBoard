#include "DigitalInputPanel.h"
#include <QPointer>
#include <QTextEdit>
#include <QLineEdit>
#include <QDesktopWidget>
#include <QDebug>
#include <QPainter>
#include <QPainterPath>
#include <QColor>
#include <qmath.h>
#include <QMouseEvent>
#include <QTimer>
using namespace Nut;

#define MAX_DIGITAL_TEXT_LENGTH 10

DigitalInputPanel::DigitalInputPanel(QWidget *parent) :
    IKeyboard(parent, Qt::Popup | Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint)
{
    m_bNumFlag = true;
    m_bCapsFlag = true;
    isFirst = true;
    m_ui.setupUi(this);
    this->showMaximized ();

    setAttribute(Qt::WA_TranslucentBackground, true);

    //move to screen center
    QDesktopWidget *desktopWidget = qApp->desktop();
    if (desktopWidget != NULL)
    {
        move((desktopWidget->width()-this->width())/2, \
             (desktopWidget->height()-this->height())/2);
    }

    currentEditType = "";
    //        if (desktopWidget != NULL)
    //        {
    //            move((desktopWidget->width()), \
    //                 (desktopWidget->height()));
    //        }
//    connect(qApp, SIGNAL(focusChanged(QWidget*,QWidget*)),
//            this, SLOT(onFocusWidgetChanged(QWidget*,QWidget*)));

    qApp->installEventFilter(this);


    m_signalMapper.setMapping(m_ui.panelButton_1, m_ui.panelButton_1);
    m_signalMapper.setMapping(m_ui.panelButton_2, m_ui.panelButton_2);
    m_signalMapper.setMapping(m_ui.panelButton_3, m_ui.panelButton_3);
    m_signalMapper.setMapping(m_ui.panelButton_4, m_ui.panelButton_4);
    m_signalMapper.setMapping(m_ui.panelButton_5, m_ui.panelButton_5);
    m_signalMapper.setMapping(m_ui.panelButton_6, m_ui.panelButton_6);
    m_signalMapper.setMapping(m_ui.panelButton_7, m_ui.panelButton_7);
    m_signalMapper.setMapping(m_ui.panelButton_8, m_ui.panelButton_8);
    m_signalMapper.setMapping(m_ui.panelButton_9, m_ui.panelButton_9);
    m_signalMapper.setMapping(m_ui.panelButton_0, m_ui.panelButton_0);
    m_signalMapper.setMapping(m_ui.panelButton_minus, m_ui.panelButton_minus);
    m_signalMapper.setMapping(m_ui.panelButton_plus, m_ui.panelButton_plus);
    m_signalMapper.setMapping(m_ui.panelButton_dot, m_ui.panelButton_dot);

    m_signalMapper.setMapping(m_ui.panelButton_A, m_ui.panelButton_A);
    m_signalMapper.setMapping(m_ui.panelButton_B, m_ui.panelButton_B);
    m_signalMapper.setMapping(m_ui.panelButton_C, m_ui.panelButton_C);
    m_signalMapper.setMapping(m_ui.panelButton_D, m_ui.panelButton_D);
    m_signalMapper.setMapping(m_ui.panelButton_E, m_ui.panelButton_E);
    m_signalMapper.setMapping(m_ui.panelButton_F, m_ui.panelButton_F);
    m_signalMapper.setMapping(m_ui.panelButton_G, m_ui.panelButton_G);
    m_signalMapper.setMapping(m_ui.panelButton_H, m_ui.panelButton_H);
    m_signalMapper.setMapping(m_ui.panelButton_I, m_ui.panelButton_I);
    m_signalMapper.setMapping(m_ui.panelButton_J, m_ui.panelButton_J);
    m_signalMapper.setMapping(m_ui.panelButton_K, m_ui.panelButton_K);
    m_signalMapper.setMapping(m_ui.panelButton_L, m_ui.panelButton_L);
    m_signalMapper.setMapping(m_ui.panelButton_M, m_ui.panelButton_M);
    m_signalMapper.setMapping(m_ui.panelButton_N, m_ui.panelButton_N);
    m_signalMapper.setMapping(m_ui.panelButton_O, m_ui.panelButton_O);
    m_signalMapper.setMapping(m_ui.panelButton_P, m_ui.panelButton_P);
    m_signalMapper.setMapping(m_ui.panelButton_Q, m_ui.panelButton_Q);
    m_signalMapper.setMapping(m_ui.panelButton_R, m_ui.panelButton_R);
    m_signalMapper.setMapping(m_ui.panelButton_S, m_ui.panelButton_S);
    m_signalMapper.setMapping(m_ui.panelButton_T, m_ui.panelButton_T);
    m_signalMapper.setMapping(m_ui.panelButton_U, m_ui.panelButton_U);
    m_signalMapper.setMapping(m_ui.panelButton_V, m_ui.panelButton_V);
    m_signalMapper.setMapping(m_ui.panelButton_W, m_ui.panelButton_W);
    m_signalMapper.setMapping(m_ui.panelButton_X, m_ui.panelButton_X);
    m_signalMapper.setMapping(m_ui.panelButton_Y, m_ui.panelButton_Y);
    m_signalMapper.setMapping(m_ui.panelButton_Z, m_ui.panelButton_Z);

    m_signalMapper.setMapping(m_ui.panelButton_space, m_ui.panelButton_space);
    m_signalMapper.setMapping(m_ui.panelButton_symbol, m_ui.panelButton_symbol);
    m_signalMapper.setMapping(m_ui.panelButton_caps, m_ui.panelButton_caps);


    connect(m_ui.panelButton_1, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_2, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_3, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_4, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_5, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_6, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_7, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_8, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_9, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_0, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_minus, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_plus, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_dot, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));

    connect(m_ui.panelButton_A, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_B, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_C, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_D, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_E, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_F, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_G, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_H, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_I, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_J, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_K, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_L, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_M, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_N, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_O, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_P, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_Q, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_R, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_S, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_T, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_U, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_V, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_W, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_X, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_Y, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_Z, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));

    connect(m_ui.panelButton_space, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_symbol, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_caps, SIGNAL(clicked()), &m_signalMapper, SLOT(map()));

    connect(&m_signalMapper, SIGNAL(mapped(QWidget*)),
            this, SLOT(onDigitalButtonClicked(QWidget*)));

    connect(m_ui.panelButton_enter, SIGNAL(clicked()), this, SLOT(onPanelButtonEnterClicked()));
    connect(m_ui.panelButton_del, SIGNAL(clicked()), this, SLOT(onPanelButtonDelClicked()));
    connect(m_ui.panelButton_cancel, SIGNAL(clicked()), this, SLOT(hide()));

    connect(m_ui.panelButton_space, SIGNAL(clicked()), this, SLOT(onPanelButtonSpaceClicked()));
    connect(m_ui.panelButton_symbol, SIGNAL(clicked()), this, SLOT(onPanelButtonSymbolClicked()));
    connect(m_ui.panelButton_caps, SIGNAL(clicked()), this, SLOT(onPanelButtonCapsClicked()));


    m_ui.panelButton_0->installEventFilter(this);
    m_ui.panelButton_1->installEventFilter(this);
    m_ui.panelButton_2->installEventFilter(this);
    m_ui.panelButton_3->installEventFilter(this);
    m_ui.panelButton_4->installEventFilter(this);
    m_ui.panelButton_5->installEventFilter(this);
    m_ui.panelButton_6->installEventFilter(this);
    m_ui.panelButton_7 ->installEventFilter(this);
    m_ui.panelButton_8->installEventFilter(this);
    m_ui.panelButton_9->installEventFilter(this);
    m_ui.panelButton_minus->installEventFilter(this);
    m_ui.panelButton_plus->installEventFilter(this);
    m_ui.panelButton_dot->installEventFilter(this);
    m_ui.panelButton_del->installEventFilter(this);
    m_ui.panelButton_enter->installEventFilter(this);
    m_ui.panelButton_cancel->installEventFilter(this);

    m_ui.panelButton_A->installEventFilter(this);
    m_ui.panelButton_B->installEventFilter(this);
    m_ui.panelButton_C->installEventFilter(this);
    m_ui.panelButton_D->installEventFilter(this);
    m_ui.panelButton_E->installEventFilter(this);
    m_ui.panelButton_F->installEventFilter(this);
    m_ui.panelButton_G->installEventFilter(this);
    m_ui.panelButton_H->installEventFilter(this);
    m_ui.panelButton_I->installEventFilter(this);
    m_ui.panelButton_J->installEventFilter(this);
    m_ui.panelButton_K->installEventFilter(this);
    m_ui.panelButton_L->installEventFilter(this);
    m_ui.panelButton_M->installEventFilter(this);
    m_ui.panelButton_N->installEventFilter(this);
    m_ui.panelButton_O->installEventFilter(this);
    m_ui.panelButton_P->installEventFilter(this);
    m_ui.panelButton_Q->installEventFilter(this);
    m_ui.panelButton_R->installEventFilter(this);
    m_ui.panelButton_S->installEventFilter(this);
    m_ui.panelButton_T->installEventFilter(this);
    m_ui.panelButton_U->installEventFilter(this);
    m_ui.panelButton_V->installEventFilter(this);
    m_ui.panelButton_W->installEventFilter(this);
    m_ui.panelButton_X->installEventFilter(this);
    m_ui.panelButton_Y->installEventFilter(this);
    m_ui.panelButton_Z->installEventFilter(this);

    m_ui.panelButton_space->installEventFilter(this);
    m_ui.panelButton_symbol->installEventFilter(this);
    m_ui.panelButton_caps->installEventFilter(this);

}

QWidget *DigitalInputPanel::lastFocusedWidget() const
{
    return m_currentFocus;
}

void DigitalInputPanel::updateFocusText()
{
    if (m_currentFocus == NULL) return;
    QString text = m_ui.label_digital_text->text();
    QString className = m_currentFocus->metaObject()->className();
    if (className == "QLineEdit")
    {
        QLineEdit *edit = dynamic_cast<QLineEdit *>(m_currentFocus);
        if (edit == NULL) return;
        edit->setText(text);
    }
    else if (className == "QTextEdit")
    {
        QTextEdit *edit = dynamic_cast<QTextEdit *>(m_currentFocus);
        if (edit == NULL) return;
        edit->setPlainText(text);
    }

}

bool DigitalInputPanel::event(QEvent *e)
{
    switch (e->type())
    {
    case QEvent::WindowActivate:
    {
        if (m_currentFocus != NULL)
        {
            m_currentFocus->activateWindow();
        }
        break;
    }
    default:
        break;
    }

    return QWidget::event(e);
}

void DigitalInputPanel::paintEvent(QPaintEvent *e)
{
    QPainterPath path;
    path.setFillRule(Qt::WindingFill);
    path.addRect(6, 6, this->width()-20, this->height()-20);

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.fillPath(path, QBrush(Qt::white));

    QColor color(5, 60, 66, 0);
    for(int i=0; i<6; i++)
    {
        QPainterPath path;
        path.setFillRule(Qt::WindingFill);
        path.addRect(6-i, 6-i, this->width()-(6-i)*2, this->height()-(6-i)*2);
        color.setAlpha(150 - qSqrt(i)*50);
        painter.setPen(color);
        painter.drawPath(path);
    }
    QWidget::paintEvent(e);
}

void DigitalInputPanel::mousePressEvent(QMouseEvent *e)
{
    if (e->button() == Qt::LeftButton)
    {
        //m_currentPosition = e->globalPos() - frameGeometry().topLeft();
        m_currentPosition = e->globalPos() - this->pos();
        e->accept();
    }
}

void DigitalInputPanel::mouseReleaseEvent(QMouseEvent *e)
{

}

void DigitalInputPanel::mouseMoveEvent(QMouseEvent *e)
{
    if (e->buttons() & Qt::LeftButton)
    {
        if(rect().contains (m_currentPosition))
        {
            //move(e->globalPos() - m_currentPosition);
        }
    }
    e->accept();
}

bool DigitalInputPanel::eventFilter(QObject * o, QEvent * e)
{
    if (e->type() == QEvent::MouseMove)
    {
        if (o == m_ui.panelButton_0 || o == m_ui.panelButton_1 || o == m_ui.panelButton_2 || \
                o == m_ui.panelButton_3 || o == m_ui.panelButton_4 || o == m_ui.panelButton_5 || \
                o == m_ui.panelButton_6 || o == m_ui.panelButton_7 || o == m_ui.panelButton_8 || \
                o == m_ui.panelButton_9 || o == m_ui.panelButton_0 || o == m_ui.panelButton_minus || \
                o == m_ui.panelButton_plus || o == m_ui.panelButton_dot || o == m_ui.panelButton_del || \
                o == m_ui.panelButton_enter || o == m_ui.panelButton_cancel || \
                o == m_ui.panelButton_A || o == m_ui.panelButton_B || o == m_ui.panelButton_C || \
                o == m_ui.panelButton_D || o == m_ui.panelButton_E || o == m_ui.panelButton_F || \
                o == m_ui.panelButton_G || o == m_ui.panelButton_H || o == m_ui.panelButton_I || \
                o == m_ui.panelButton_J || o == m_ui.panelButton_K || o == m_ui.panelButton_L || \
                o == m_ui.panelButton_M || o == m_ui.panelButton_N || o == m_ui.panelButton_O || \
                o == m_ui.panelButton_P || o == m_ui.panelButton_Q || o == m_ui.panelButton_R || \
                o == m_ui.panelButton_S || o == m_ui.panelButton_T || o == m_ui.panelButton_U || \
                o == m_ui.panelButton_V || o == m_ui.panelButton_W || o == m_ui.panelButton_X || \
                o == m_ui.panelButton_Y || o == m_ui.panelButton_Z || \
                o == m_ui.panelButton_space || o == m_ui.panelButton_symbol || o == m_ui.panelButton_caps)
        {
            return true;
        }
    }
    return QWidget::eventFilter(o, e);
}

void DigitalInputPanel::focusChanged()
{
    if (m_currentFocus != NULL && !this->isAncestorOf(m_currentFocus))
    {

        //m_currentFocus = m_currentFocus;
        QString currentDigitalText;
        currentEditType = m_currentFocus->metaObject()->className();
        if (currentEditType == ("QLineEdit"))
        {
            QPointer<QLineEdit> edit = dynamic_cast<QLineEdit *>(m_currentFocus);
            if (edit.isNull()) return;
            currentDigitalText = trim(edit->text());

            this->setVisible(true);

        }
        else if (currentEditType== "QTextEdit")
        {
            QPointer<QTextEdit> edit = dynamic_cast<QTextEdit *>(m_currentFocus);
            if (edit.isNull()) return;
            currentDigitalText = trim(edit->toPlainText());

        }

        m_ui.label_digital_text->setText(currentDigitalText);
        m_currentFocus->clearFocus ();

    }

}

void DigitalInputPanel::onDigitalButtonClicked(QWidget *w)
{
    QPushButton *pBtn = dynamic_cast<QPushButton*>(w);
    if (m_ui.panelButton_space == pBtn ||
            m_ui.panelButton_symbol == pBtn ||
            m_ui.panelButton_caps == pBtn)
    {
        //不执行此函数,直接return
        return;
    }
    else
    {
        QChar chr = qvariant_cast<QChar>(w->property("ButtonValue"));
        if (!m_bNumFlag)
        {
            //转换符号
            if (chr.isDigit())
            {
                switch(chr.digitValue())
                {
                case 1:
                    chr = '=';
                    break;
                case 2:
                    chr = '!';
                    break;
                case 3:
                    chr = '@';
                    break;
                case 4:
                    chr = '#';
                    break;
                case 5:
                    chr = '%';
                    break;
                case 6:
                    chr = '?';
                    break;
                case 7:
                    chr = '(';
                    break;
                case 8:
                    chr = ')';
                    break;
                case 9:
                    chr = '-';
                    break;
                case 0:
                    chr = '$';
                    break;
                default:
                    break;
                }
            }

        }
        if (!m_bCapsFlag)
        {
            //转换小写字母
            if (chr.isUpper())
            {
                chr = chr.toLower();
            }
        }
        QString digitalText = trim(m_ui.label_digital_text->text() + chr);
        m_ui.label_digital_text->setText(digitalText);
    }
}

void DigitalInputPanel::onPanelButtonDelClicked()
{
    QString digitalText = m_ui.label_digital_text->text();
    digitalText = digitalText.left(digitalText.length() - 1);
    m_ui.label_digital_text->setText(digitalText);
}

void DigitalInputPanel::onPanelButtonEnterClicked()
{
    this->hide();
    //QString currentDigitalText = m_ui.label_digital_text->text();
    updateFocusText();
    //emit sigInputDigitalText(currentDigitalText);
}

//空格键按钮槽函数
void DigitalInputPanel::onPanelButtonSpaceClicked()
{
    QString chr = " ";
    QString digitalText = trim(m_ui.label_digital_text->text() + chr);
    m_ui.label_digital_text->setText(digitalText);
}

//符号键按钮槽函数
void DigitalInputPanel::onPanelButtonSymbolClicked()
{
    if (m_bNumFlag)
    {
        //切换成符号
        m_ui.panelButton_symbol->setStyleSheet(
                    "QPushButton#panelButton_symbol{ border-image: url(:/images/digital_normal_num.png); }"
                    "QPushButton:hover#panelButton_symbol{ border-image: url(:/images/digital_hover_num.png); }");

        m_ui.panelButton_1->setStyleSheet(
                    "QPushButton#panelButton_1{ border-image: url(:/images/digital_normal_1sym.png); }"
                    "QPushButton:hover#panelButton_1{ border-image: url(:/images/digital_hover_1sym.png); }");
        m_ui.panelButton_2->setStyleSheet(
                    "QPushButton#panelButton_2{ border-image: url(:/images/digital_normal_2sym.png); }"
                    "QPushButton:hover#panelButton_2{ border-image: url(:/images/digital_hover_2sym.png); }");
        m_ui.panelButton_3->setStyleSheet(
                    "QPushButton#panelButton_3{ border-image: url(:/images/digital_normal_3sym.png); }"
                    "QPushButton:hover#panelButton_3{ border-image: url(:/images/digital_hover_3sym.png); }");
        m_ui.panelButton_4->setStyleSheet(
                    "QPushButton#panelButton_4{ border-image: url(:/images/digital_normal_4sym.png); }"
                    "QPushButton:hover#panelButton_4{ border-image: url(:/images/digital_hover_4sym.png); }");
        m_ui.panelButton_5->setStyleSheet(
                    "QPushButton#panelButton_5{ border-image: url(:/images/digital_normal_5sym.png); }"
                    "QPushButton:hover#panelButton_5{ border-image: url(:/images/digital_hover_5sym.png); }");
        m_ui.panelButton_6->setStyleSheet(
                    "QPushButton#panelButton_6{ border-image: url(:/images/digital_normal_6sym.png); }"
                    "QPushButton:hover#panelButton_6{ border-image: url(:/images/digital_hover_6sym.png); }");
        m_ui.panelButton_7->setStyleSheet(
                    "QPushButton#panelButton_7{ border-image: url(:/images/digital_normal_7sym.png); }"
                    "QPushButton:hover#panelButton_7{ border-image: url(:/images/digital_hover_7sym.png); }");
        m_ui.panelButton_8->setStyleSheet(
                    "QPushButton#panelButton_8{ border-image: url(:/images/digital_normal_8sym.png); }"
                    "QPushButton:hover#panelButton_8{ border-image: url(:/images/digital_hover_8sym.png); }");
        m_ui.panelButton_9->setStyleSheet(
                    "QPushButton#panelButton_9{ border-image: url(:/images/digital_normal_9sym.png); }"
                    "QPushButton:hover#panelButton_9{ border-image: url(:/images/digital_hover_9sym.png); }");
        m_ui.panelButton_0->setStyleSheet(
                    "QPushButton#panelButton_0{ border-image: url(:/images/digital_normal_0sym.png); }"
                    "QPushButton:hover#panelButton_0{ border-image: url(:/images/digital_hover_0sym.png); }");

        m_bNumFlag = false;
    }
    else
    {
        //切换成数字
        m_ui.panelButton_symbol->setStyleSheet(
                    "QPushButton#panelButton_symbol{ border-image: url(:/images/digital_normal_symbol.png); }"
                    "QPushButton:hover#panelButton_symbol{ border-image: url(:/images/digital_hover_symbol.png); }");

        m_ui.panelButton_1->setStyleSheet(
                    "QPushButton#panelButton_1{ border-image: url(:/images/digital_normal_1.png); }"
                    "QPushButton:hover#panelButton_1{ border-image: url(:/images/digital_hover_1.png); }");
        m_ui.panelButton_2->setStyleSheet(
                    "QPushButton#panelButton_2{ border-image: url(:/images/digital_normal_2.png); }"
                    "QPushButton:hover#panelButton_2{ border-image: url(:/images/digital_hover_2.png); }");
        m_ui.panelButton_3->setStyleSheet(
                    "QPushButton#panelButton_3{ border-image: url(:/images/digital_normal_3.png); }"
                    "QPushButton:hover#panelButton_3{ border-image: url(:/images/digital_hover_3.png); }");
        m_ui.panelButton_4->setStyleSheet(
                    "QPushButton#panelButton_4{ border-image: url(:/images/digital_normal_4.png); }"
                    "QPushButton:hover#panelButton_4{ border-image: url(:/images/digital_hover_4.png); }");
        m_ui.panelButton_5->setStyleSheet(
                    "QPushButton#panelButton_5{ border-image: url(:/images/digital_normal_5.png); }"
                    "QPushButton:hover#panelButton_5{ border-image: url(:/images/digital_hover_5.png); }");
        m_ui.panelButton_6->setStyleSheet(
                    "QPushButton#panelButton_6{ border-image: url(:/images/digital_normal_6.png); }"
                    "QPushButton:hover#panelButton_6{ border-image: url(:/images/digital_hover_6.png); }");
        m_ui.panelButton_7->setStyleSheet(
                    "QPushButton#panelButton_7{ border-image: url(:/images/digital_normal_7.png); }"
                    "QPushButton:hover#panelButton_7{ border-image: url(:/images/digital_hover_7.png); }");
        m_ui.panelButton_8->setStyleSheet(
                    "QPushButton#panelButton_8{ border-image: url(:/images/digital_normal_8.png); }"
                    "QPushButton:hover#panelButton_8{ border-image: url(:/images/digital_hover_8.png); }");
        m_ui.panelButton_9->setStyleSheet(
                    "QPushButton#panelButton_9{ border-image: url(:/images/digital_normal_9.png); }"
                    "QPushButton:hover#panelButton_9{ border-image: url(:/images/digital_hover_9.png); }");
        m_ui.panelButton_0->setStyleSheet(
                    "QPushButton#panelButton_0{ border-image: url(:/images/digital_normal_0.png); }"
                    "QPushButton:hover#panelButton_0{ border-image: url(:/images/digital_hover_0.png); }");
        m_bNumFlag = true;
    }
}

//大写锁定键按钮槽函数
void DigitalInputPanel::onPanelButtonCapsClicked()
{
    if (m_bCapsFlag)
    {
        //切换成小写
        m_ui.panelButton_caps->setStyleSheet(
                    "QPushButton#panelButton_caps{ border-image: url(:/images/digital_normal_lcaps.png); }"
                    "QPushButton:hover#panelButton_caps{ border-image: url(:/images/digital_hover_lcaps.png); }");

        m_ui.panelButton_A->setStyleSheet(
                    "QPushButton#panelButton_A{ border-image: url(:/images/digital_normal_la.png); }"
                    "QPushButton:hover#panelButton_A{ border-image: url(:/images/digital_hover_la.png); }");
        m_ui.panelButton_B->setStyleSheet(
                    "QPushButton#panelButton_B{ border-image: url(:/images/digital_normal_lb.png); }"
                    "QPushButton:hover#panelButton_B{ border-image: url(:/images/digital_hover_lb.png); }");
        m_ui.panelButton_C->setStyleSheet(
                    "QPushButton#panelButton_C{ border-image: url(:/images/digital_normal_lc.png); }"
                    "QPushButton:hover#panelButton_C{ border-image: url(:/images/digital_hover_lc.png); }");
        m_ui.panelButton_D->setStyleSheet(
                    "QPushButton#panelButton_D{ border-image: url(:/images/digital_normal_ld.png); }"
                    "QPushButton:hover#panelButton_D{ border-image: url(:/images/digital_hover_ld.png); }");
        m_ui.panelButton_E->setStyleSheet(
                    "QPushButton#panelButton_E{ border-image: url(:/images/digital_normal_le.png); }"
                    "QPushButton:hover#panelButton_E{ border-image: url(:/images/digital_hover_le.png); }");
        m_ui.panelButton_F->setStyleSheet(
                    "QPushButton#panelButton_F{ border-image: url(:/images/digital_normal_lf.png); }"
                    "QPushButton:hover#panelButton_F{ border-image: url(:/images/digital_hover_lf.png); }");
        m_ui.panelButton_G->setStyleSheet(
                    "QPushButton#panelButton_G{ border-image: url(:/images/digital_normal_lg.png); }"
                    "QPushButton:hover#panelButton_G{ border-image: url(:/images/digital_hover_lg.png); }");
        m_ui.panelButton_H->setStyleSheet(
                    "QPushButton#panelButton_H{ border-image: url(:/images/digital_normal_lh.png); }"
                    "QPushButton:hover#panelButton_H{ border-image: url(:/images/digital_hover_lh.png); }");
        m_ui.panelButton_I->setStyleSheet(
                    "QPushButton#panelButton_I{ border-image: url(:/images/digital_normal_li.png); }"
                    "QPushButton:hover#panelButton_I{ border-image: url(:/images/digital_hover_li.png); }");
        m_ui.panelButton_J->setStyleSheet(
                    "QPushButton#panelButton_J{ border-image: url(:/images/digital_normal_lj.png); }"
                    "QPushButton:hover#panelButton_J{ border-image: url(:/images/digital_hover_lj.png); }");
        m_ui.panelButton_K->setStyleSheet(
                    "QPushButton#panelButton_K{ border-image: url(:/images/digital_normal_lk.png); }"
                    "QPushButton:hover#panelButton_L{ border-image: url(:/images/digital_hover_lk.png); }");
        m_ui.panelButton_L->setStyleSheet(
                    "QPushButton#panelButton_L{ border-image: url(:/images/digital_normal_ll.png); }"
                    "QPushButton:hover#panelButton_L{ border-image: url(:/images/digital_hover_ll.png); }");
        m_ui.panelButton_M->setStyleSheet(
                    "QPushButton#panelButton_M{ border-image: url(:/images/digital_normal_lm.png); }"
                    "QPushButton:hover#panelButton_M{ border-image: url(:/images/digital_hover_lm.png); }");
        m_ui.panelButton_N->setStyleSheet(
                    "QPushButton#panelButton_N{ border-image: url(:/images/digital_normal_ln.png); }"
                    "QPushButton:hover#panelButton_N{ border-image: url(:/images/digital_hover_ln.png); }");
        m_ui.panelButton_O->setStyleSheet(
                    "QPushButton#panelButton_O{ border-image: url(:/images/digital_normal_lo.png); }"
                    "QPushButton:hover#panelButton_O{ border-image: url(:/images/digital_hover_lo.png); }");
        m_ui.panelButton_P->setStyleSheet(
                    "QPushButton#panelButton_P{ border-image: url(:/images/digital_normal_lp.png); }"
                    "QPushButton:hover#panelButton_P{ border-image: url(:/images/digital_hover_lp.png); }");
        m_ui.panelButton_Q->setStyleSheet(
                    "QPushButton#panelButton_Q{ border-image: url(:/images/digital_normal_lq.png); }"
                    "QPushButton:hover#panelButton_Q{ border-image: url(:/images/digital_hover_lq.png); }");
        m_ui.panelButton_R->setStyleSheet(
                    "QPushButton#panelButton_R{ border-image: url(:/images/digital_normal_lr.png); }"
                    "QPushButton:hover#panelButton_R{ border-image: url(:/images/digital_hover_lr.png); }");
        m_ui.panelButton_S->setStyleSheet(
                    "QPushButton#panelButton_S{ border-image: url(:/images/digital_normal_ls.png); }"
                    "QPushButton:hover#panelButton_S{ border-image: url(:/images/digital_hover_ls.png); }");
        m_ui.panelButton_T->setStyleSheet(
                    "QPushButton#panelButton_T{ border-image: url(:/images/digital_normal_lt.png); }"
                    "QPushButton:hover#panelButton_T{ border-image: url(:/images/digital_hover_lt.png); }");
        m_ui.panelButton_U->setStyleSheet(
                    "QPushButton#panelButton_U{ border-image: url(:/images/digital_normal_lu.png); }"
                    "QPushButton:hover#panelButton_U{ border-image: url(:/images/digital_hover_lu.png); }");
        m_ui.panelButton_V->setStyleSheet(
                    "QPushButton#panelButton_V{ border-image: url(:/images/digital_normal_lv.png); }"
                    "QPushButton:hover#panelButton_V{ border-image: url(:/images/digital_hover_lv.png); }");
        m_ui.panelButton_W->setStyleSheet(
                    "QPushButton#panelButton_W{ border-image: url(:/images/digital_normal_lw.png); }"
                    "QPushButton:hover#panelButton_W{ border-image: url(:/images/digital_hover_lw.png); }");
        m_ui.panelButton_X->setStyleSheet(
                    "QPushButton#panelButton_X{ border-image: url(:/images/digital_normal_lx.png); }"
                    "QPushButton:hover#panelButton_X{ border-image: url(:/images/digital_hover_lx.png); }");
        m_ui.panelButton_Y->setStyleSheet(
                    "QPushButton#panelButton_Y{ border-image: url(:/images/digital_normal_ly.png); }"
                    "QPushButton:hover#panelButton_Y{ border-image: url(:/images/digital_hover_ly.png); }");
        m_ui.panelButton_Z->setStyleSheet(
                    "QPushButton#panelButton_Z{ border-image: url(:/images/digital_normal_lz.png); }"
                    "QPushButton:hover#panelButton_Z{ border-image: url(:/images/digital_hover_lz.png); }");

        m_bCapsFlag = false;
    }
    else
    {
        //切换成大写
        m_ui.panelButton_caps->setStyleSheet(
                    "QPushButton#panelButton_caps{ border-image: url(:/images/digital_normal_caps.png); }"
                    "QPushButton:hover#panelButton_caps{ border-image: url(:/images/digital_hover_caps.png); }");

        m_ui.panelButton_A->setStyleSheet(
                    "QPushButton#panelButton_A{ border-image: url(:/images/digital_normal_A.png); }"
                    "QPushButton:hover#panelButton_A{ border-image: url(:/images/digital_hover_A.png); }");
        m_ui.panelButton_B->setStyleSheet(
                    "QPushButton#panelButton_B{ border-image: url(:/images/digital_normal_B.png); }"
                    "QPushButton:hover#panelButton_B{ border-image: url(:/images/digital_hover_B.png); }");
        m_ui.panelButton_C->setStyleSheet(
                    "QPushButton#panelButton_C{ border-image: url(:/images/digital_normal_C.png); }"
                    "QPushButton:hover#panelButton_C{ border-image: url(:/images/digital_hover_C.png); }");
        m_ui.panelButton_D->setStyleSheet(
                    "QPushButton#panelButton_D{ border-image: url(:/images/digital_normal_D.png); }"
                    "QPushButton:hover#panelButton_D{ border-image: url(:/images/digital_hover_D.png); }");
        m_ui.panelButton_E->setStyleSheet(
                    "QPushButton#panelButton_E{ border-image: url(:/images/digital_normal_E.png); }"
                    "QPushButton:hover#panelButton_E{ border-image: url(:/images/digital_hover_E.png); }");
        m_ui.panelButton_F->setStyleSheet(
                    "QPushButton#panelButton_F{ border-image: url(:/images/digital_normal_F.png); }"
                    "QPushButton:hover#panelButton_F{ border-image: url(:/images/digital_hover_F.png); }");
        m_ui.panelButton_G->setStyleSheet(
                    "QPushButton#panelButton_G{ border-image: url(:/images/digital_normal_G.png); }"
                    "QPushButton:hover#panelButton_G{ border-image: url(:/images/digital_hover_G.png); }");
        m_ui.panelButton_H->setStyleSheet(
                    "QPushButton#panelButton_H{ border-image: url(:/images/digital_normal_H.png); }"
                    "QPushButton:hover#panelButton_H{ border-image: url(:/images/digital_hover_H.png); }");
        m_ui.panelButton_I->setStyleSheet(
                    "QPushButton#panelButton_I{ border-image: url(:/images/digital_normal_I.png); }"
                    "QPushButton:hover#panelButton_I{ border-image: url(:/images/digital_hover_I.png); }");
        m_ui.panelButton_J->setStyleSheet(
                    "QPushButton#panelButton_J{ border-image: url(:/images/digital_normal_J.png); }"
                    "QPushButton:hover#panelButton_J{ border-image: url(:/images/digital_hover_J.png); }");
        m_ui.panelButton_K->setStyleSheet(
                    "QPushButton#panelButton_K{ border-image: url(:/images/digital_normal_K.png); }"
                    "QPushButton:hover#panelButton_L{ border-image: url(:/images/digital_hover_K.png); }");
        m_ui.panelButton_L->setStyleSheet(
                    "QPushButton#panelButton_L{ border-image: url(:/images/digital_normal_L.png); }"
                    "QPushButton:hover#panelButton_L{ border-image: url(:/images/digital_hover_L.png); }");
        m_ui.panelButton_M->setStyleSheet(
                    "QPushButton#panelButton_M{ border-image: url(:/images/digital_normal_M.png); }"
                    "QPushButton:hover#panelButton_M{ border-image: url(:/images/digital_hover_M.png); }");
        m_ui.panelButton_N->setStyleSheet(
                    "QPushButton#panelButton_N{ border-image: url(:/images/digital_normal_N.png); }"
                    "QPushButton:hover#panelButton_N{ border-image: url(:/images/digital_hover_N.png); }");
        m_ui.panelButton_O->setStyleSheet(
                    "QPushButton#panelButton_O{ border-image: url(:/images/digital_normal_O.png); }"
                    "QPushButton:hover#panelButton_O{ border-image: url(:/images/digital_hover_O.png); }");
        m_ui.panelButton_P->setStyleSheet(
                    "QPushButton#panelButton_P{ border-image: url(:/images/digital_normal_P.png); }"
                    "QPushButton:hover#panelButton_P{ border-image: url(:/images/digital_hover_P.png); }");
        m_ui.panelButton_Q->setStyleSheet(
                    "QPushButton#panelButton_Q{ border-image: url(:/images/digital_normal_Q.png); }"
                    "QPushButton:hover#panelButton_Q{ border-image: url(:/images/digital_hover_Q.png); }");
        m_ui.panelButton_R->setStyleSheet(
                    "QPushButton#panelButton_R{ border-image: url(:/images/digital_normal_R.png); }"
                    "QPushButton:hover#panelButton_R{ border-image: url(:/images/digital_hover_R.png); }");
        m_ui.panelButton_S->setStyleSheet(
                    "QPushButton#panelButton_S{ border-image: url(:/images/digital_normal_S.png); }"
                    "QPushButton:hover#panelButton_S{ border-image: url(:/images/digital_hover_S.png); }");
        m_ui.panelButton_T->setStyleSheet(
                    "QPushButton#panelButton_T{ border-image: url(:/images/digital_normal_T.png); }"
                    "QPushButton:hover#panelButton_T{ border-image: url(:/images/digital_hover_T.png); }");
        m_ui.panelButton_U->setStyleSheet(
                    "QPushButton#panelButton_U{ border-image: url(:/images/digital_normal_U.png); }"
                    "QPushButton:hover#panelButton_U{ border-image: url(:/images/digital_hover_U.png); }");
        m_ui.panelButton_V->setStyleSheet(
                    "QPushButton#panelButton_V{ border-image: url(:/images/digital_normal_V.png); }"
                    "QPushButton:hover#panelButton_V{ border-image: url(:/images/digital_hover_V.png); }");
        m_ui.panelButton_W->setStyleSheet(
                    "QPushButton#panelButton_W{ border-image: url(:/images/digital_normal_W.png); }"
                    "QPushButton:hover#panelButton_W{ border-image: url(:/images/digital_hover_W.png); }");
        m_ui.panelButton_X->setStyleSheet(
                    "QPushButton#panelButton_X{ border-image: url(:/images/digital_normal_X.png); }"
                    "QPushButton:hover#panelButton_X{ border-image: url(:/images/digital_hover_X.png); }");
        m_ui.panelButton_Y->setStyleSheet(
                    "QPushButton#panelButton_Y{ border-image: url(:/images/digital_normal_Y.png); }"
                    "QPushButton:hover#panelButton_Y{ border-image: url(:/images/digital_hover_Y.png); }");
        m_ui.panelButton_Z->setStyleSheet(
                    "QPushButton#panelButton_Z{ border-image: url(:/images/digital_normal_Z.png); }"
                    "QPushButton:hover#panelButton_Z{ border-image: url(:/images/digital_hover_Z.png); }");

        m_bCapsFlag = true;
    }
}

QString DigitalInputPanel::trim(const QString &digitalText)
{
    QString currentDigitalText = digitalText;
    if (currentDigitalText.length() > MAX_DIGITAL_TEXT_LENGTH)
    {
        currentDigitalText = currentDigitalText.left(MAX_DIGITAL_TEXT_LENGTH);
    }
    return currentDigitalText;
}
