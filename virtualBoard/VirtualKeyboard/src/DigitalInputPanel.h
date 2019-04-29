#ifndef DIGITALINPUTPANEL_H
#define DIGITALINPUTPANEL_H

#include <QWidget>
#include <QPoint>
#include <QSignalMapper>
#include "ui_DigitalInputPanel.h"
#include "IKeyboard.h"


namespace Nut
{
 using  Nut::IKeyboard;
    class DigitalInputPanel : public IKeyboard
    {
        Q_OBJECT

    public:
        explicit DigitalInputPanel(QWidget *parent = NULL);

    public:
        QWidget *lastFocusedWidget() const;

        void updateFocusText();
    signals:
        void sigInputDigitalText(const QString &text);

    protected:
        bool event(QEvent *e);
        void paintEvent(QPaintEvent *e);
        void mousePressEvent(QMouseEvent *e);
        void mouseReleaseEvent(QMouseEvent *e);
        void mouseMoveEvent(QMouseEvent *e);
        bool eventFilter(QObject *o, QEvent *e);


    private slots:
        void focusChanged();//(QWidget *oldFocus, QWidget *newFocus);
        void onDigitalButtonClicked(QWidget *w);
        void onPanelButtonDelClicked();
        void onPanelButtonEnterClicked();

        void onPanelButtonSpaceClicked();   //空格键按钮槽函数
        void onPanelButtonSymbolClicked();  //符号键按钮槽函数
        void onPanelButtonCapsClicked();    //大写锁定键按钮槽函数


    private:
        QString trim(const QString &digitalText);
        QString currentEditType;        //当前焦点控件的类型

    private:
        Ui::DigitalInputPanel m_ui;
        QWidget *m_lastFocusedWidget;
        QSignalMapper m_signalMapper;
        bool isFirst;                   //是否首次加载

    private:
        QPoint m_currentPosition;
        bool m_bNumFlag;    //数字\符号切换标志 默认true 数字
        bool m_bCapsFlag;   //大小写锁定 默认true 大写
    };
}

#endif // DIGITALINPUTPANEL_H
