#ifndef DigitalBoard_H
#define DigitalBoard_H

#include <QWidget>
#include <QPoint>
#include <QSignalMapper>
#include "ui_DigitalBoard.h"
#include "IKeyboard.h"

namespace Nut
{
    class DigitalBoard : public IKeyboard
    {
        Q_OBJECT

    public:
        explicit DigitalBoard(QWidget *parent = NULL);

    public:
        void setPasswordMode();
        void setTextMode();
        virtual void focusChanged();
        void updateFocusText();

    protected:
        void paintEvent(QPaintEvent *e);
        bool eventFilter(QObject *o, QEvent *e);

    private:
        void StyleSheet();
    private slots:
        void onDigitalButtonClicked(QWidget *w);
        void onPanelButtonDelClicked();
        void onPanelButtonEnterClicked();

    private:
        QString trim(const QString &digitalText);

    private:
        Ui::DigitalBoard m_ui;
        QSignalMapper m_signalMapper;
    };

} // namespace Nut

#endif // DigitalBoard_H
