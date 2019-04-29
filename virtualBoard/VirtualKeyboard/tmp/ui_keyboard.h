/********************************************************************************
** Form generated from reading UI file 'keyboard.ui'
**
** Created: Thu Apr 18 15:39:03 2019
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYBOARD_H
#define UI_KEYBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Keyboard
{
public:
    QPushButton *Buttonh;
    QPushButton *Buttonl;
    QPushButton *Buttonj;
    QPushButton *Buttonr;
    QPushButton *Buttonw;
    QPushButton *Buttont;
    QPushButton *Button3;
    QPushButton *Buttonq;
    QPushButton *Button6;
    QPushButton *Buttond;
    QPushButton *Buttony;
    QPushButton *Button0;
    QPushButton *Buttonx;
    QPushButton *Buttona;
    QPushButton *Buttoni;
    QPushButton *Buttonc;
    QPushButton *Buttonn;
    QPushButton *Button9;
    QPushButton *Button4;
    QPushButton *Buttonb;
    QPushButton *Buttonz;
    QPushButton *Buttone;
    QPushButton *Buttong;
    QPushButton *space;
    QPushButton *Button5;
    QPushButton *Buttonv;
    QPushButton *Button2;
    QPushButton *Buttons;
    QPushButton *Buttonf;
    QPushButton *Button7;
    QPushButton *Buttonm;
    QPushButton *Button1;
    QPushButton *Buttono;
    QPushButton *Buttonk;
    QPushButton *Button8;
    QPushButton *key_Symbol_char;
    QPushButton *Buttonp;
    QPushButton *key_Big_small;
    QPushButton *Buttonu;
    QPushButton *key_Confirm;
    QPushButton *key_Back;
    QLineEdit *lineEdit;
    QPushButton *key_clean;
    QFrame *line;
    QPushButton *key_Cancel;

    void setupUi(QWidget *Keyboard)
    {
        if (Keyboard->objectName().isEmpty())
            Keyboard->setObjectName(QString::fromUtf8("Keyboard"));
        Keyboard->setWindowModality(Qt::NonModal);
        Keyboard->resize(600, 380);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Keyboard->sizePolicy().hasHeightForWidth());
        Keyboard->setSizePolicy(sizePolicy);
        Keyboard->setWindowTitle(QString::fromUtf8("Keyboard"));
        Keyboard->setStyleSheet(QString::fromUtf8(""));
        Buttonh = new QPushButton(Keyboard);
        Buttonh->setObjectName(QString::fromUtf8("Buttonh"));
        Buttonh->setGeometry(QRect(301, 160, 56, 51));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Buttonh->sizePolicy().hasHeightForWidth());
        Buttonh->setSizePolicy(sizePolicy1);
        Buttonh->setMinimumSize(QSize(20, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221"));
        font.setPointSize(19);
        Buttonh->setFont(font);
        Buttonl = new QPushButton(Keyboard);
        Buttonl->setObjectName(QString::fromUtf8("Buttonl"));
        Buttonl->setGeometry(QRect(476, 160, 56, 51));
        sizePolicy1.setHeightForWidth(Buttonl->sizePolicy().hasHeightForWidth());
        Buttonl->setSizePolicy(sizePolicy1);
        Buttonl->setMinimumSize(QSize(20, 0));
        Buttonl->setFont(font);
        Buttonj = new QPushButton(Keyboard);
        Buttonj->setObjectName(QString::fromUtf8("Buttonj"));
        Buttonj->setGeometry(QRect(359, 160, 56, 51));
        sizePolicy1.setHeightForWidth(Buttonj->sizePolicy().hasHeightForWidth());
        Buttonj->setSizePolicy(sizePolicy1);
        Buttonj->setMinimumSize(QSize(20, 0));
        Buttonj->setFont(font);
        Buttonr = new QPushButton(Keyboard);
        Buttonr->setObjectName(QString::fromUtf8("Buttonr"));
        Buttonr->setGeometry(QRect(185, 108, 56, 50));
        sizePolicy1.setHeightForWidth(Buttonr->sizePolicy().hasHeightForWidth());
        Buttonr->setSizePolicy(sizePolicy1);
        Buttonr->setMinimumSize(QSize(20, 0));
        Buttonr->setFont(font);
        Buttonw = new QPushButton(Keyboard);
        Buttonw->setObjectName(QString::fromUtf8("Buttonw"));
        Buttonw->setGeometry(QRect(68, 108, 56, 50));
        sizePolicy1.setHeightForWidth(Buttonw->sizePolicy().hasHeightForWidth());
        Buttonw->setSizePolicy(sizePolicy1);
        Buttonw->setMinimumSize(QSize(20, 0));
        Buttonw->setFont(font);
        Buttont = new QPushButton(Keyboard);
        Buttont->setObjectName(QString::fromUtf8("Buttont"));
        Buttont->setGeometry(QRect(243, 108, 56, 50));
        sizePolicy1.setHeightForWidth(Buttont->sizePolicy().hasHeightForWidth());
        Buttont->setSizePolicy(sizePolicy1);
        Buttont->setMinimumSize(QSize(20, 0));
        Buttont->setFont(font);
        Button3 = new QPushButton(Keyboard);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        Button3->setGeometry(QRect(185, 55, 56, 51));
        sizePolicy1.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy1);
        Button3->setMinimumSize(QSize(20, 0));
        Button3->setFont(font);
        Buttonq = new QPushButton(Keyboard);
        Buttonq->setObjectName(QString::fromUtf8("Buttonq"));
        Buttonq->setGeometry(QRect(10, 108, 56, 50));
        sizePolicy1.setHeightForWidth(Buttonq->sizePolicy().hasHeightForWidth());
        Buttonq->setSizePolicy(sizePolicy1);
        Buttonq->setMinimumSize(QSize(20, 0));
        Buttonq->setFont(font);
        Button6 = new QPushButton(Keyboard);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        Button6->setGeometry(QRect(359, 55, 56, 51));
        sizePolicy1.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy1);
        Button6->setMinimumSize(QSize(20, 0));
        Button6->setFont(font);
        Buttond = new QPushButton(Keyboard);
        Buttond->setObjectName(QString::fromUtf8("Buttond"));
        Buttond->setGeometry(QRect(126, 160, 57, 51));
        sizePolicy1.setHeightForWidth(Buttond->sizePolicy().hasHeightForWidth());
        Buttond->setSizePolicy(sizePolicy1);
        Buttond->setMinimumSize(QSize(20, 0));
        Buttond->setFont(font);
        Buttony = new QPushButton(Keyboard);
        Buttony->setObjectName(QString::fromUtf8("Buttony"));
        Buttony->setGeometry(QRect(301, 108, 56, 50));
        sizePolicy1.setHeightForWidth(Buttony->sizePolicy().hasHeightForWidth());
        Buttony->setSizePolicy(sizePolicy1);
        Buttony->setMinimumSize(QSize(20, 0));
        Buttony->setFont(font);
        Button0 = new QPushButton(Keyboard);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        Button0->setGeometry(QRect(10, 55, 56, 51));
        sizePolicy1.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy1);
        Button0->setMinimumSize(QSize(20, 0));
        Button0->setFont(font);
        Buttonx = new QPushButton(Keyboard);
        Buttonx->setObjectName(QString::fromUtf8("Buttonx"));
        Buttonx->setGeometry(QRect(126, 213, 57, 50));
        sizePolicy1.setHeightForWidth(Buttonx->sizePolicy().hasHeightForWidth());
        Buttonx->setSizePolicy(sizePolicy1);
        Buttonx->setMinimumSize(QSize(20, 0));
        Buttonx->setFont(font);
        Buttona = new QPushButton(Keyboard);
        Buttona->setObjectName(QString::fromUtf8("Buttona"));
        Buttona->setGeometry(QRect(10, 160, 56, 51));
        sizePolicy1.setHeightForWidth(Buttona->sizePolicy().hasHeightForWidth());
        Buttona->setSizePolicy(sizePolicy1);
        Buttona->setMinimumSize(QSize(20, 0));
        Buttona->setFont(font);
        Buttoni = new QPushButton(Keyboard);
        Buttoni->setObjectName(QString::fromUtf8("Buttoni"));
        Buttoni->setGeometry(QRect(417, 108, 57, 50));
        sizePolicy1.setHeightForWidth(Buttoni->sizePolicy().hasHeightForWidth());
        Buttoni->setSizePolicy(sizePolicy1);
        Buttoni->setMinimumSize(QSize(20, 0));
        Buttoni->setFont(font);
        Buttonc = new QPushButton(Keyboard);
        Buttonc->setObjectName(QString::fromUtf8("Buttonc"));
        Buttonc->setGeometry(QRect(185, 213, 56, 50));
        sizePolicy1.setHeightForWidth(Buttonc->sizePolicy().hasHeightForWidth());
        Buttonc->setSizePolicy(sizePolicy1);
        Buttonc->setMinimumSize(QSize(20, 0));
        Buttonc->setFont(font);
        Buttonn = new QPushButton(Keyboard);
        Buttonn->setObjectName(QString::fromUtf8("Buttonn"));
        Buttonn->setGeometry(QRect(359, 213, 56, 50));
        sizePolicy1.setHeightForWidth(Buttonn->sizePolicy().hasHeightForWidth());
        Buttonn->setSizePolicy(sizePolicy1);
        Buttonn->setMinimumSize(QSize(20, 0));
        Buttonn->setFont(font);
        Button9 = new QPushButton(Keyboard);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        Button9->setGeometry(QRect(534, 55, 56, 51));
        sizePolicy1.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy1);
        Button9->setMinimumSize(QSize(20, 0));
        Button9->setFont(font);
        Button4 = new QPushButton(Keyboard);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        Button4->setGeometry(QRect(243, 55, 56, 51));
        sizePolicy1.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy1);
        Button4->setMinimumSize(QSize(20, 0));
        Button4->setFont(font);
        Buttonb = new QPushButton(Keyboard);
        Buttonb->setObjectName(QString::fromUtf8("Buttonb"));
        Buttonb->setGeometry(QRect(301, 213, 56, 50));
        sizePolicy1.setHeightForWidth(Buttonb->sizePolicy().hasHeightForWidth());
        Buttonb->setSizePolicy(sizePolicy1);
        Buttonb->setMinimumSize(QSize(20, 0));
        Buttonb->setFont(font);
        Buttonz = new QPushButton(Keyboard);
        Buttonz->setObjectName(QString::fromUtf8("Buttonz"));
        Buttonz->setGeometry(QRect(68, 213, 56, 50));
        sizePolicy1.setHeightForWidth(Buttonz->sizePolicy().hasHeightForWidth());
        Buttonz->setSizePolicy(sizePolicy1);
        Buttonz->setMinimumSize(QSize(20, 0));
        Buttonz->setFont(font);
        Buttone = new QPushButton(Keyboard);
        Buttone->setObjectName(QString::fromUtf8("Buttone"));
        Buttone->setGeometry(QRect(126, 108, 57, 50));
        sizePolicy1.setHeightForWidth(Buttone->sizePolicy().hasHeightForWidth());
        Buttone->setSizePolicy(sizePolicy1);
        Buttone->setMinimumSize(QSize(20, 0));
        Buttone->setFont(font);
        Buttong = new QPushButton(Keyboard);
        Buttong->setObjectName(QString::fromUtf8("Buttong"));
        Buttong->setGeometry(QRect(243, 160, 56, 51));
        sizePolicy1.setHeightForWidth(Buttong->sizePolicy().hasHeightForWidth());
        Buttong->setSizePolicy(sizePolicy1);
        Buttong->setMinimumSize(QSize(20, 0));
        Buttong->setFont(font);
        space = new QPushButton(Keyboard);
        space->setObjectName(QString::fromUtf8("space"));
        space->setGeometry(QRect(126, 265, 348, 50));
        space->setMinimumSize(QSize(20, 50));
        space->setFont(font);
        Button5 = new QPushButton(Keyboard);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        Button5->setGeometry(QRect(301, 55, 56, 51));
        sizePolicy1.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy1);
        Button5->setMinimumSize(QSize(20, 0));
        Button5->setFont(font);
        Buttonv = new QPushButton(Keyboard);
        Buttonv->setObjectName(QString::fromUtf8("Buttonv"));
        Buttonv->setGeometry(QRect(243, 213, 56, 50));
        sizePolicy1.setHeightForWidth(Buttonv->sizePolicy().hasHeightForWidth());
        Buttonv->setSizePolicy(sizePolicy1);
        Buttonv->setMinimumSize(QSize(20, 0));
        Buttonv->setFont(font);
        Button2 = new QPushButton(Keyboard);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        Button2->setGeometry(QRect(126, 55, 57, 51));
        sizePolicy1.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy1);
        Button2->setMinimumSize(QSize(20, 0));
        Button2->setFont(font);
        Buttons = new QPushButton(Keyboard);
        Buttons->setObjectName(QString::fromUtf8("Buttons"));
        Buttons->setGeometry(QRect(68, 160, 56, 51));
        sizePolicy1.setHeightForWidth(Buttons->sizePolicy().hasHeightForWidth());
        Buttons->setSizePolicy(sizePolicy1);
        Buttons->setMinimumSize(QSize(20, 0));
        Buttons->setFont(font);
        Buttonf = new QPushButton(Keyboard);
        Buttonf->setObjectName(QString::fromUtf8("Buttonf"));
        Buttonf->setGeometry(QRect(185, 160, 56, 51));
        sizePolicy1.setHeightForWidth(Buttonf->sizePolicy().hasHeightForWidth());
        Buttonf->setSizePolicy(sizePolicy1);
        Buttonf->setMinimumSize(QSize(20, 0));
        Buttonf->setFont(font);
        Button7 = new QPushButton(Keyboard);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        Button7->setGeometry(QRect(417, 55, 57, 51));
        sizePolicy1.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy1);
        Button7->setMinimumSize(QSize(20, 0));
        Button7->setFont(font);
        Buttonm = new QPushButton(Keyboard);
        Buttonm->setObjectName(QString::fromUtf8("Buttonm"));
        Buttonm->setGeometry(QRect(417, 213, 57, 50));
        sizePolicy1.setHeightForWidth(Buttonm->sizePolicy().hasHeightForWidth());
        Buttonm->setSizePolicy(sizePolicy1);
        Buttonm->setMinimumSize(QSize(20, 0));
        Buttonm->setFont(font);
        Button1 = new QPushButton(Keyboard);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        Button1->setGeometry(QRect(68, 55, 56, 51));
        sizePolicy1.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy1);
        Button1->setMinimumSize(QSize(20, 0));
        Button1->setFont(font);
        Buttono = new QPushButton(Keyboard);
        Buttono->setObjectName(QString::fromUtf8("Buttono"));
        Buttono->setGeometry(QRect(476, 108, 56, 50));
        sizePolicy1.setHeightForWidth(Buttono->sizePolicy().hasHeightForWidth());
        Buttono->setSizePolicy(sizePolicy1);
        Buttono->setMinimumSize(QSize(20, 0));
        Buttono->setFont(font);
        Buttonk = new QPushButton(Keyboard);
        Buttonk->setObjectName(QString::fromUtf8("Buttonk"));
        Buttonk->setGeometry(QRect(417, 160, 57, 51));
        sizePolicy1.setHeightForWidth(Buttonk->sizePolicy().hasHeightForWidth());
        Buttonk->setSizePolicy(sizePolicy1);
        Buttonk->setMinimumSize(QSize(20, 0));
        Buttonk->setFont(font);
        Button8 = new QPushButton(Keyboard);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        Button8->setGeometry(QRect(476, 55, 56, 51));
        sizePolicy1.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy1);
        Button8->setMinimumSize(QSize(20, 0));
        Button8->setFont(font);
        key_Symbol_char = new QPushButton(Keyboard);
        key_Symbol_char->setObjectName(QString::fromUtf8("key_Symbol_char"));
        key_Symbol_char->setGeometry(QRect(476, 265, 114, 50));
        sizePolicy1.setHeightForWidth(key_Symbol_char->sizePolicy().hasHeightForWidth());
        key_Symbol_char->setSizePolicy(sizePolicy1);
        key_Symbol_char->setMinimumSize(QSize(20, 0));
        key_Symbol_char->setFont(font);
        key_Symbol_char->setCheckable(true);
        key_Symbol_char->setChecked(false);
        Buttonp = new QPushButton(Keyboard);
        Buttonp->setObjectName(QString::fromUtf8("Buttonp"));
        Buttonp->setGeometry(QRect(534, 108, 56, 50));
        sizePolicy1.setHeightForWidth(Buttonp->sizePolicy().hasHeightForWidth());
        Buttonp->setSizePolicy(sizePolicy1);
        Buttonp->setMinimumSize(QSize(20, 0));
        Buttonp->setFont(font);
        key_Big_small = new QPushButton(Keyboard);
        key_Big_small->setObjectName(QString::fromUtf8("key_Big_small"));
        key_Big_small->setGeometry(QRect(10, 265, 114, 50));
        sizePolicy1.setHeightForWidth(key_Big_small->sizePolicy().hasHeightForWidth());
        key_Big_small->setSizePolicy(sizePolicy1);
        key_Big_small->setMinimumSize(QSize(20, 0));
        key_Big_small->setFont(font);
        key_Big_small->setStyleSheet(QString::fromUtf8(""));
        key_Big_small->setCheckable(false);
        Buttonu = new QPushButton(Keyboard);
        Buttonu->setObjectName(QString::fromUtf8("Buttonu"));
        Buttonu->setGeometry(QRect(359, 108, 56, 50));
        sizePolicy1.setHeightForWidth(Buttonu->sizePolicy().hasHeightForWidth());
        Buttonu->setSizePolicy(sizePolicy1);
        Buttonu->setMinimumSize(QSize(20, 0));
        Buttonu->setFont(font);
        key_Confirm = new QPushButton(Keyboard);
        key_Confirm->setObjectName(QString::fromUtf8("key_Confirm"));
        key_Confirm->setGeometry(QRect(360, 330, 171, 50));
        sizePolicy1.setHeightForWidth(key_Confirm->sizePolicy().hasHeightForWidth());
        key_Confirm->setSizePolicy(sizePolicy1);
        key_Confirm->setMinimumSize(QSize(20, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221"));
        font1.setPointSize(25);
        key_Confirm->setFont(font1);
        key_Back = new QPushButton(Keyboard);
        key_Back->setObjectName(QString::fromUtf8("key_Back"));
        key_Back->setGeometry(QRect(409, 10, 85, 40));
        key_Back->setFont(font);
        lineEdit = new QLineEdit(Keyboard);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 10, 381, 40));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221"));
        font2.setPointSize(21);
        lineEdit->setFont(font2);
        lineEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        key_clean = new QPushButton(Keyboard);
        key_clean->setObjectName(QString::fromUtf8("key_clean"));
        key_clean->setGeometry(QRect(505, 10, 85, 40));
        key_clean->setFont(font);
        line = new QFrame(Keyboard);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 320, 580, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        key_Cancel = new QPushButton(Keyboard);
        key_Cancel->setObjectName(QString::fromUtf8("key_Cancel"));
        key_Cancel->setGeometry(QRect(68, 330, 171, 50));
        sizePolicy1.setHeightForWidth(key_Cancel->sizePolicy().hasHeightForWidth());
        key_Cancel->setSizePolicy(sizePolicy1);
        key_Cancel->setMinimumSize(QSize(20, 0));
        key_Cancel->setFont(font1);

        retranslateUi(Keyboard);

        QMetaObject::connectSlotsByName(Keyboard);
    } // setupUi

    void retranslateUi(QWidget *Keyboard)
    {
        Buttonh->setText(QApplication::translate("Keyboard", "h", 0, QApplication::UnicodeUTF8));
        Buttonl->setText(QApplication::translate("Keyboard", "l", 0, QApplication::UnicodeUTF8));
        Buttonj->setText(QApplication::translate("Keyboard", "j", 0, QApplication::UnicodeUTF8));
        Buttonr->setText(QApplication::translate("Keyboard", "r", 0, QApplication::UnicodeUTF8));
        Buttonw->setText(QApplication::translate("Keyboard", "w", 0, QApplication::UnicodeUTF8));
        Buttont->setText(QApplication::translate("Keyboard", "t", 0, QApplication::UnicodeUTF8));
        Button3->setText(QApplication::translate("Keyboard", "3", 0, QApplication::UnicodeUTF8));
        Buttonq->setText(QApplication::translate("Keyboard", "q", 0, QApplication::UnicodeUTF8));
        Button6->setText(QApplication::translate("Keyboard", "6", 0, QApplication::UnicodeUTF8));
        Buttond->setText(QApplication::translate("Keyboard", "d", 0, QApplication::UnicodeUTF8));
        Buttony->setText(QApplication::translate("Keyboard", "y", 0, QApplication::UnicodeUTF8));
        Button0->setText(QApplication::translate("Keyboard", "0", 0, QApplication::UnicodeUTF8));
        Buttonx->setText(QApplication::translate("Keyboard", "x", 0, QApplication::UnicodeUTF8));
        Buttona->setText(QApplication::translate("Keyboard", "a", 0, QApplication::UnicodeUTF8));
        Buttoni->setText(QApplication::translate("Keyboard", "i", 0, QApplication::UnicodeUTF8));
        Buttonc->setText(QApplication::translate("Keyboard", "c", 0, QApplication::UnicodeUTF8));
        Buttonn->setText(QApplication::translate("Keyboard", "n", 0, QApplication::UnicodeUTF8));
        Button9->setText(QApplication::translate("Keyboard", "9", 0, QApplication::UnicodeUTF8));
        Button4->setText(QApplication::translate("Keyboard", "4", 0, QApplication::UnicodeUTF8));
        Buttonb->setText(QApplication::translate("Keyboard", "b", 0, QApplication::UnicodeUTF8));
        Buttonz->setText(QApplication::translate("Keyboard", "z", 0, QApplication::UnicodeUTF8));
        Buttone->setText(QApplication::translate("Keyboard", "e", 0, QApplication::UnicodeUTF8));
        Buttong->setText(QApplication::translate("Keyboard", "g", 0, QApplication::UnicodeUTF8));
        space->setText(QApplication::translate("Keyboard", "Space", 0, QApplication::UnicodeUTF8));
        Button5->setText(QApplication::translate("Keyboard", "5", 0, QApplication::UnicodeUTF8));
        Buttonv->setText(QApplication::translate("Keyboard", "v", 0, QApplication::UnicodeUTF8));
        Button2->setText(QApplication::translate("Keyboard", "2", 0, QApplication::UnicodeUTF8));
        Buttons->setText(QApplication::translate("Keyboard", "s", 0, QApplication::UnicodeUTF8));
        Buttonf->setText(QApplication::translate("Keyboard", "f", 0, QApplication::UnicodeUTF8));
        Button7->setText(QApplication::translate("Keyboard", "7", 0, QApplication::UnicodeUTF8));
        Buttonm->setText(QApplication::translate("Keyboard", "m", 0, QApplication::UnicodeUTF8));
        Button1->setText(QApplication::translate("Keyboard", "1", 0, QApplication::UnicodeUTF8));
        Buttono->setText(QApplication::translate("Keyboard", "o", 0, QApplication::UnicodeUTF8));
        Buttonk->setText(QApplication::translate("Keyboard", "k", 0, QApplication::UnicodeUTF8));
        Button8->setText(QApplication::translate("Keyboard", "8", 0, QApplication::UnicodeUTF8));
        key_Symbol_char->setText(QApplication::translate("Keyboard", "\347\254\246\345\217\267", 0, QApplication::UnicodeUTF8));
        Buttonp->setText(QApplication::translate("Keyboard", "p", 0, QApplication::UnicodeUTF8));
        key_Big_small->setText(QApplication::translate("Keyboard", "\345\244\247\345\206\231", 0, QApplication::UnicodeUTF8));
        Buttonu->setText(QApplication::translate("Keyboard", "u", 0, QApplication::UnicodeUTF8));
        key_Confirm->setText(QApplication::translate("Keyboard", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        key_Back->setText(QApplication::translate("Keyboard", "\351\200\200\346\240\274", 0, QApplication::UnicodeUTF8));
        key_clean->setText(QApplication::translate("Keyboard", "\346\270\205\351\231\244", 0, QApplication::UnicodeUTF8));
        key_Cancel->setText(QApplication::translate("Keyboard", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Keyboard);
    } // retranslateUi

};

namespace Ui {
    class Keyboard: public Ui_Keyboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYBOARD_H
