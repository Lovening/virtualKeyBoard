#ifndef KEYBOARDFACTORY_H
#define KEYBOARDFACTORY_H

#include <QMap>
#include <QString>
#include <QObject>
#include "IKeyboard.h"
#include "KeyboardExport.h"


namespace Nut
{
    class VIRTUALKEYBOARD_EXPORT KeyboardFactory
            :public QObject
    {
        Q_OBJECT

    public:
        KeyboardFactory();
        ~KeyboardFactory();

    public:
        IKeyboard* keyboard(const QString &name);
        void addKeyboard(const QString &name, IKeyboard *kb);
        void removeKeyboard(const QString &name);

    protected:
        bool eventFilter(QObject *obj, QEvent *event);

   private:
        void init();
        void release();

    private slots:

    private:
        QMap<QString, IKeyboard*> m_keyboards;
        bool eventType;

    };

} // namespace Nut

#endif // KEYBOARDFACTORY_H
