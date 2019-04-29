#include "DigitalBoard.h"
#include <QPointer>
#include <QTextEdit>
#include <QLineEdit>
#include <QDesktopWidget>
#include <QPainter>
#include <QPainterPath>
#include <QColor>
#include <qmath.h>
#include <QMouseEvent>
#include <QDebug>
#include <QDir>
#include <QFile>

#define MAX_DIGITAL_TEXT_LENGTH 10

namespace Nut
{
DigitalBoard::DigitalBoard(QWidget *parent) :
    IKeyboard(parent, Qt::Popup | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint)
{
    m_ui.setupUi(this);
    setAttribute(Qt::WA_TranslucentBackground, true);

    QDesktopWidget *desktopWidget = qApp->desktop();
    if (desktopWidget != NULL)
    {
        move((desktopWidget->width()-this->width())/2, \
             (desktopWidget->height()-this->height())/2);
    }

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

    connect(m_ui.panelButton_1, SIGNAL(clicked()),
            &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_2, SIGNAL(clicked()),
            &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_3, SIGNAL(clicked()),
            &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_4, SIGNAL(clicked()),
            &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_5, SIGNAL(clicked()),
            &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_6, SIGNAL(clicked()),
            &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_7, SIGNAL(clicked()),
            &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_8, SIGNAL(clicked()),
            &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_9, SIGNAL(clicked()),
            &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_0, SIGNAL(clicked()),
            &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_minus, SIGNAL(clicked()),
            &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_plus, SIGNAL(clicked()),
            &m_signalMapper, SLOT(map()));
    connect(m_ui.panelButton_dot, SIGNAL(clicked()),
            &m_signalMapper, SLOT(map()));

    connect(&m_signalMapper, SIGNAL(mapped(QWidget*)),
            this, SLOT(onDigitalButtonClicked(QWidget*)));

    connect(m_ui.panelButton_enter, SIGNAL(clicked()), this, SLOT(onPanelButtonEnterClicked()));
    connect(m_ui.panelButton_del, SIGNAL(clicked()), this, SLOT(onPanelButtonDelClicked()));
    connect(m_ui.panelButton_cancel, SIGNAL(clicked()), this, SLOT(hide()));

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

    StyleSheet();

}

void DigitalBoard::setPasswordMode()
{
    m_ui.lineEdit_digital_text->setEchoMode(QLineEdit::Password);
    m_ui.panelButton_dot->setEnabled(false);
    m_ui.panelButton_minus->setEnabled(false);
    m_ui.panelButton_plus->setEnabled(false);
}

void DigitalBoard::setTextMode()
{
    m_ui.lineEdit_digital_text->setEchoMode(QLineEdit::Normal);
    m_ui.panelButton_dot->setEnabled(true);
    m_ui.panelButton_minus->setEnabled(true);
    m_ui.panelButton_plus->setEnabled(true);
}

void DigitalBoard::focusChanged()
{
    if (m_currentFocus != NULL && !this->isAncestorOf(m_currentFocus))
    {
        QString currentDigitalText;
        QString className = m_currentFocus->metaObject()->className();
        if (className == "QLineEdit")
        {
            QPointer<QLineEdit> edit = dynamic_cast<QLineEdit *>(m_currentFocus);

            if (edit.isNull()) return;
            if (edit->echoMode() == QLineEdit::Password)
            {
                setPasswordMode();
            }
            else
            {
                setTextMode();
            }
            currentDigitalText = trim(edit->text());
        }
        else if (className == "QTextEdit")
        {
            QPointer<QTextEdit> edit = dynamic_cast<QTextEdit *>(m_currentFocus);
            if (edit.isNull()) return;
            setTextMode();
            currentDigitalText = trim(edit->toPlainText());
        }
        m_ui.lineEdit_digital_text->setText(currentDigitalText);
        m_currentFocus->clearFocus ();
    }
}

void DigitalBoard::updateFocusText()
{
    if (m_currentFocus == NULL) return;


    QString text = m_ui.lineEdit_digital_text->text();
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
    else
    {
        qDebug() << "unsupported class type : " << className;
    }
}

void DigitalBoard::paintEvent(QPaintEvent *e)
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

bool DigitalBoard::eventFilter(QObject * o, QEvent * e)
{
    if (e->type() == QEvent::MouseMove)
    {
        if (o == m_ui.panelButton_0 || \
                o == m_ui.panelButton_1 || \
                o == m_ui.panelButton_2 || \
                o == m_ui.panelButton_3 || \
                o == m_ui.panelButton_4 || \
                o == m_ui.panelButton_5 || \
                o == m_ui.panelButton_6 || \
                o == m_ui.panelButton_7 || \
                o == m_ui.panelButton_8 || \
                o == m_ui.panelButton_9 || \
                o == m_ui.panelButton_minus || \
                o == m_ui.panelButton_plus || \
                o == m_ui.panelButton_dot || \
                o == m_ui.panelButton_del || \
                o == m_ui.panelButton_enter || \
                o == m_ui.panelButton_cancel
                )
        {
            return true;
        }
    }
    return QWidget::eventFilter(o, e);
}

void DigitalBoard::StyleSheet()
{

}

void DigitalBoard::onDigitalButtonClicked(QWidget *w)
{
    QChar chr = qvariant_cast<QChar>(w->property("ButtonValue"));
    QString digitalText = trim(m_ui.lineEdit_digital_text->text() + chr);

    m_ui.lineEdit_digital_text->setText(digitalText);
    //设置字体颜色
    m_ui.lineEdit_digital_text->setProperty ("warning","NO");
    m_ui.lineEdit_digital_text->setStyleSheet (QString(""));
    if(regExp != "")
    {
        QRegExp reg(regExp);

        QRegExpValidator validator(reg,0);

        int pos=0;
        QString str =m_ui.lineEdit_digital_text->text ();

        if(QValidator::Invalid == validator.validate(str,pos))
        {
            onPanelButtonDelClicked();
            return;
        }

    }
}

void DigitalBoard::onPanelButtonDelClicked()
{
    QString digitalText = m_ui.lineEdit_digital_text->text();
    digitalText = digitalText.left(digitalText.length() - 1);
    m_ui.lineEdit_digital_text->setText(digitalText);
}

void DigitalBoard::onPanelButtonEnterClicked()
{
    if(regExp != "")
    {
        QRegExp reg(regExp);
        //        reg.exactMatch
        QRegExpValidator validator(reg,0);
        int pos=0;
        QString str =m_ui.lineEdit_digital_text->text ();

        if(QValidator::Acceptable != validator.validate(str,pos))
        {
            m_ui.lineEdit_digital_text->setProperty ("warning",QString("YES"));
            m_ui.lineEdit_digital_text->setStyleSheet (QString(""));
            return;
        }
    }
    hideBoard();
    updateFocusText();
}

QString DigitalBoard::trim(const QString &digitalText)
{
    QString currentDigitalText = digitalText;
    if (currentDigitalText.length() > MAX_DIGITAL_TEXT_LENGTH)
    {
        currentDigitalText = currentDigitalText.left(MAX_DIGITAL_TEXT_LENGTH);
    }
    return currentDigitalText;
}

} // namespace Nut
