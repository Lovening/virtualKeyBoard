#include "KeyboardFactory.h"
#include <QEvent>
#include <QApplication>
#include "DigitalBoard.h"
#include "DigitalInputPanel.h"
#include "hzKB.h"
#include <QThread>
#include <thread>
namespace Nut
{
KeyboardFactory::KeyboardFactory():eventType(false)
{

    qApp->installEventFilter(this);

    init();
}

KeyboardFactory::~KeyboardFactory()
{
    release();
}

IKeyboard *KeyboardFactory::keyboard(const QString &name)
{
    auto it = m_keyboards.find(name);
    if (it != m_keyboards.end())
    {
        return it.value();
    }
    return NULL;
}

void KeyboardFactory::addKeyboard(const QString &name, IKeyboard *kb)
{
    auto it = m_keyboards.find(name);
    if (it != m_keyboards.end())
    {
        if (it.value() != NULL)
        {
            delete it.value();
        }
    }
    m_keyboards[name] = kb;
}

void KeyboardFactory::removeKeyboard(const QString &name)
{
    auto it = m_keyboards.find(name);
    if (it != m_keyboards.end())
    {
        if (it.value() != NULL)
        {
            delete it.value();
        }
        m_keyboards.erase(it);
    }
}

bool KeyboardFactory::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::MouseButtonPress)
    {
        if(qApp->focusWidget() != NULL)
        {
            QString kbType = qApp->focusWidget()->property ("Keyboard").toByteArray();
            QString regExp = qApp->focusWidget()->property("setRegExp").toByteArray();
            if (!kbType.isEmpty())
            {
                auto it = m_keyboards.find(kbType);

                if (it != m_keyboards.end())
                {
                    it.value()->setRegExp(regExp);
                    it.value()->setCurrentFocus(qApp->focusWidget());
                    it.value()->focusChanged();
                    it.value()->showBoard();

                }
            }
        }
    }
    return QObject::eventFilter(obj, event);
}

void KeyboardFactory::init()
{
    DigitalBoard *board = new DigitalBoard;
    hzKB* hzkeyBoard  = new hzKB;


    addKeyboard("DigitalBoard", board);
    addKeyboard("pingyin",hzkeyBoard);
}

void KeyboardFactory::release()
{
    for (auto it=m_keyboards.begin(); it!=m_keyboards.end(); ++it)
    {
        if (it.value() != NULL)
        {
            delete it.value();
        }
    }
    m_keyboards.clear();
}


} // namespace Nut
