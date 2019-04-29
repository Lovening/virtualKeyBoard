#ifndef	__HZKB_H__
#define	__HZKB_H__

#include <QFile>
#include <QKeyEvent>
#include <QButtonGroup>
#include <QPushButton>
#include <QLineEdit>
#include <QIcon>
#include <QPixmap>
#include <QObject>
#include "IKeyboard.h"
#include "ui_hzKeyB.h"



namespace Nut
{
class hzKB : public IKeyboard
{
    Q_OBJECT
public:
    hzKB(QWidget* parent = NULL);
    ~hzKB();

    void setLineEdit(QLineEdit * line);
    void focusChanged();
    void showBoard();
    void hideBoard();
    void updateFocusText(const QString& string);

private:
    void changePage(int index);
    void matching(QString pinyin);
    void initGb();
    void selectHanziPre();
    void selectHanziNext();
    void changeInputMethod();
    void changeLowerUpper();
    void clearString();
    void affirmString();
    void deleteString();

    void setModelCN(void);
    void setModelEN(void);
    void setChrUp(void);
    void setChrLow(void);
    void registerButton(int idx, QPushButton *pbt);

public slots:
    void buttonClickResponse(int buttonID);

signals:
    void sendPinyin(QString pinyin);

private slots:


private:
    QFile			pinyin_file;
    QKeyEvent	    *event;
    QRegExp			regExp;
    QButtonGroup		*button_group;
    QMultiMap<QString,QString>	pinyin_map;
    QList<QString>		pinyin_list;
    QVector<QPushButton*>	button_vector;
    int				input_method,lower_upper,page_count;

    QString			outputText;
    QLineEdit			*outputLineEdit;
    Ui::Form      m_ui;
};
}

#endif

