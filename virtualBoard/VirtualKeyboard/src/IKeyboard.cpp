#include "IKeyboard.h"
#include <QDesktopWidget>
#include <QMouseEvent>
#include <QApplication>
#include <QLineEdit>
#include <QTextEdit>
#include <QDebug>

namespace Nut
{
    IKeyboard::IKeyboard(QWidget *parent, Qt::WindowFlags f)
        :QWidget(parent, f)
    {
        m_oldFocus = NULL;
        m_currentFocus = NULL;
        moveToScreenCenter();
        regExp = "";
    }

    void IKeyboard::showBoard()
    {
        show();
    }

    void IKeyboard::hideBoard()
    {
        hide();
    }

    void IKeyboard::setOldFocus(QWidget *focus)
    {
        m_oldFocus = focus;
    }

    void IKeyboard::setCurrentFocus(QWidget *focus)
    {
        m_currentFocus = focus;
    }

    void IKeyboard::setRegExp(const QString &arg)
    {
        regExp = arg;
    }

    void IKeyboard::mousePressEvent(QMouseEvent *e)
    {
        if (e->button() == Qt::LeftButton)
        {
            m_currentPosition = e->globalPos() - frameGeometry().topLeft();
            e->accept();
        }
    }

    void IKeyboard::mouseMoveEvent(QMouseEvent *e)
    {
        if (e->buttons() & Qt::LeftButton)
        {
            if (this->rect().contains(m_currentPosition, true))
            {
                move(e->globalPos() - m_currentPosition);
            }
        }
        e->accept();
    }

    void IKeyboard::moveToScreenCenter()
    {
        QDesktopWidget *desktopWidget = qApp->desktop();
        if (desktopWidget != NULL)
        {
            move((desktopWidget->width()-this->width())/2, \
                 (desktopWidget->height()-this->height())/2);
        }
    }

} // namespace Nut
