#ifndef IKeyboard_H
#define IKeyboard_H

#include <QWidget>
#include <QPoint>

namespace Nut
{
    class IKeyboard
            :public QWidget
    {
        Q_OBJECT

    public:
        IKeyboard(QWidget* parent=0, Qt::WindowFlags f=Qt::WindowFlags());

    public:
        virtual void focusChanged() = 0;
        virtual void showBoard();
        virtual void hideBoard();

    public:
        void setOldFocus(QWidget *focus);
        void setCurrentFocus(QWidget *focus);
        void setRegExp(const QString &arg);

    protected:
        void mousePressEvent(QMouseEvent *e);
        void mouseMoveEvent(QMouseEvent *e);

    private:
        void moveToScreenCenter();

    protected:
        QWidget *m_oldFocus;
        QWidget *m_currentFocus;
        QString regExp;
        QPoint m_currentPosition;
    };

} // namespace Nut

#endif // IKeyboard_H
