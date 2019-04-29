/********************************************************************************
** Form generated from reading UI file 'hzKB.ui'
**
** Created: Wed Apr 24 14:59:34 2019
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HZKB_H
#define UI_HZKB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLineEdit *lineEdit_window;
    QPushButton *pushButton_u;
    QPushButton *pushButton_t;
    QPushButton *pushButton_y;
    QPushButton *pushButton_i;
    QPushButton *pushButton_q;
    QPushButton *pushButton_zuokuo;
    QPushButton *pushButton_p;
    QPushButton *pushButton_r;
    QPushButton *pushButton_youkuo;
    QPushButton *pushButton_w;
    QPushButton *pushButton_o;
    QPushButton *pushButton_e;
    QPushButton *pushButton_j;
    QPushButton *pushButton_g;
    QPushButton *pushButton_h;
    QPushButton *pushButton_k;
    QPushButton *pushButton_a;
    QPushButton *pushButton_quote;
    QPushButton *pushButton_semicolon;
    QPushButton *pushButton_f;
    QPushButton *pushButton_enter;
    QPushButton *pushButton_s;
    QPushButton *pushButton_l;
    QPushButton *pushButton_d;
    QPushButton *pushButton_m;
    QPushButton *pushButton_b;
    QPushButton *pushButton_n;
    QPushButton *pushButton_comma;
    QPushButton *pushButton_z;
    QPushButton *pushButton_splash;
    QPushButton *pushButton_v;
    QPushButton *pushButton_x;
    QPushButton *pushButton_period;
    QPushButton *pushButton_c;
    QPushButton *pushButton_shift;
    QPushButton *pushButton_whitespace;
    QPushButton *pushButton_backsplash;
    QPushButton *pushButton_n2;
    QPushButton *pushButton_is_hanzi;
    QPushButton *pushButton_CONFIRM;
    QPushButton *pushButton_hanzi_7;
    QPushButton *pushButton_hanzi_5;
    QPushButton *pushButton_hanzi_6;
    QPushButton *pushButton_hanzi_8;
    QPushButton *pushButton_hanzi_4;
    QPushButton *pushButton_hanzi_2;
    QPushButton *pushButton_hanzi_3;
    QPushButton *pushButton_hanzi_left;
    QPushButton *pushButton_hanzi_right;
    QPushButton *pushButton_hanzi_1;
    QLineEdit *lineEdit_pinyin;
    QPushButton *pushButton_n3;
    QPushButton *pushButton_backspace;
    QPushButton *pushButton_n0;
    QPushButton *pushButton_n1;
    QPushButton *pushButton_n6;
    QPushButton *pushButton_deng;
    QPushButton *pushButton_gang;
    QPushButton *pushButton_n5;
    QPushButton *pushButton_n7;
    QPushButton *pushButton_n8;
    QPushButton *pushButton_n4;
    QPushButton *pushButton_n9;
    QFrame *line;
    QPushButton *pushButton_CANCEL;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(956, 494);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221"));
        Dialog->setFont(font);
        Dialog->setStyleSheet(QString::fromUtf8("QLabel#lineEdit_window\n"
"{\n"
"	font-size:40px;\n"
"\n"
"}\n"
"QWidget#widget_background\n"
"{\n"
"	background-color: #DEDEDE;\n"
"	border: 1px solid #FFFFFF;\n"
"}\n"
"\n"
"QLabel#label_title\n"
"{\n"
"	font-size:  22px;\n"
"	color: #000000;\n"
"}\n"
"\n"
"QLabel#lineEdit_window\n"
"{\n"
"	min-height: 40px;\n"
"	max-height: 40px;\n"
"	min-width: 650px;\n"
"	max-width: 650px;\n"
"	padding-left: 10px;\n"
"	border-image: url(:/images/input_label.png);\n"
"}\n"
"\n"
"\n"
"QPushButton#panelButton_enter\n"
"{\n"
"	border-image: url(:/images/enter_normal.png);\n"
"}\n"
"\n"
"QPushButton:pressed#panelButton_enter\n"
"{\n"
"	border-image: url(:/images/enter_selected.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_cancel\n"
"{\n"
"	border-image: url(:/images/cancel_normal.png);\n"
"}\n"
"\n"
"QPushButton:pressed#panelButton_cancel\n"
"{\n"
"	border-image: url(:/images/cancel_selected.png);\n"
"}\n"
"\n"
"QPushButton[belong=\"digital_panel\"]\n"
"{\n"
"	min-width: 70px;\n"
"	max-width: 70px;\n"
"	min-height: 57px;\n"
"	m"
                        "ax-height: 57px;\n"
"}\n"
"\n"
"QPushButton#pushButton_n0\n"
"{\n"
"	border-image: url(:/images/digital_normal_0.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_n0\n"
"{\n"
"	border-image: url(:/images/digital_hover_0.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_n1\n"
"{\n"
"	border-image: url(:/images/digital_normal_1.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_n1\n"
"{\n"
"	border-image: url(:/images/digital_hover_1.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_n2\n"
"{\n"
"	border-image: url(:/images/digital_normal_2.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_n2\n"
"{\n"
"	border-image: url(:/images/digital_hover_2.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_n3\n"
"{\n"
"	border-image: url(:/images/digital_normal_3.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_n3\n"
"{\n"
"	border-image: url(:/images/digital_hover_3.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_n4\n"
"{\n"
"	border-image: url(:/images/digital_normal_4.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_n4\n"
"{\n"
"	border-image"
                        ": url(:/images/digital_hover_4.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_n5\n"
"{\n"
"	border-image: url(:/images/digital_normal_5.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_n5\n"
"{\n"
"	border-image: url(:/images/digital_hover_5.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_n6\n"
"{\n"
"	border-image: url(:/images/digital_normal_6.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_n6\n"
"{\n"
"	border-image: url(:/images/digital_hover_6.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_n7\n"
"{\n"
"	border-image: url(:/images/digital_normal_7.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_n7\n"
"{\n"
"	border-image: url(:/images/digital_hover_7.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_n8\n"
"{\n"
"	border-image: url(:/images/digital_normal_8.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_n8\n"
"{\n"
"	border-image: url(:/images/digital_hover_8.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_n9\n"
"{\n"
"	border-image: url(:/images/digital_normal_9.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_n9\n"
""
                        "{\n"
"	border-image: url(:/images/digital_hover_9.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_a\n"
"{\n"
"	border-image: url(:/images/digital_normal_A.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_a\n"
"{\n"
"	border-image: url(:/images/digital_hover_A.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_b\n"
"{\n"
"	border-image: url(:/images/digital_normal_B.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_b\n"
"{\n"
"	border-image: url(:/images/digital_hover_B.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_lb\n"
"{\n"
"	border-image: url(:/images/digital_normal_lb.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_lb\n"
"{\n"
"	border-image: url(:/images/digital_hover_lb.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_c\n"
"{\n"
"	border-image: url(:/images/digital_normal_C.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_c\n"
"{\n"
"	border-image: url(:/images/digital_hover_C.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_d\n"
"{\n"
"	border-image: url(:/images/digital_normal_D.png);\n"
"}\n"
"\n"
"QPushButton:hover#p"
                        "ushButton_d\n"
"{\n"
"	border-image: url(:/images/digital_hover_D.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_e\n"
"{\n"
"	border-image: url(:/images/digital_normal_E.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_e\n"
"{\n"
"	border-image: url(:/images/digital_hover_E.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_f\n"
"{\n"
"	border-image: url(:/images/digital_normal_F.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_f\n"
"{\n"
"	border-image: url(:/images/digital_hover_F.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_g\n"
"{\n"
"	border-image: url(:/images/digital_normal_G.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_g\n"
"{\n"
"	border-image: url(:/images/digital_hover_G.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_h\n"
"{\n"
"	border-image: url(:/images/digital_normal_H.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_h\n"
"{\n"
"	border-image: url(:/images/digital_hover_H.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_i\n"
"{\n"
"	border-image: url(:/images/digital_normal_I.png);\n"
"}\n"
"\n"
"QPushButt"
                        "on:hover#pushButton_i\n"
"{\n"
"	border-image: url(:/images/digital_hover_I.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_j\n"
"{\n"
"	border-image: url(:/images/digital_normal_J.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_j\n"
"{\n"
"	border-image: url(:/images/digital_hover_J.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_k\n"
"{\n"
"	border-image: url(:/images/digital_normal_K.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_k\n"
"{\n"
"	border-image: url(:/images/digital_hover_K.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_l\n"
"{\n"
"	border-image: url(:/images/digital_normal_L.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_l\n"
"{\n"
"	border-image: url(:/images/digital_hover_L.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_m\n"
"{\n"
"	border-image: url(:/images/digital_normal_M.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_m\n"
"{\n"
"	border-image: url(:/images/digital_hover_M.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_n\n"
"{\n"
"	border-image: url(:/images/digital_normal_N.png);\n"
"}\n"
"\n"
""
                        "QPushButton:hover#pushButton_n\n"
"{\n"
"	border-image: url(:/images/digital_hover_N.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_o\n"
"{\n"
"	border-image: url(:/images/digital_normal_O.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_o\n"
"{\n"
"	border-image: url(:/images/digital_hover_O.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_p\n"
"{\n"
"	border-image: url(:/images/digital_normal_P.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_p\n"
"{\n"
"	border-image: url(:/images/digital_hover_P.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_q\n"
"{\n"
"	border-image: url(:/images/digital_normal_Q.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_q\n"
"{\n"
"	border-image: url(:/images/digital_hover_Q.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_r\n"
"{\n"
"	border-image: url(:/images/digital_normal_R.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_r\n"
"{\n"
"	border-image: url(:/images/digital_hover_R.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_s\n"
"{\n"
"	border-image: url(:/images/digital_normal_S.png);\n"
"}"
                        "\n"
"\n"
"QPushButton:hover#pushButton_s\n"
"{\n"
"	border-image: url(:/images/digital_hover_S.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_t\n"
"{\n"
"	border-image: url(:/images/digital_normal_T.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_t\n"
"{\n"
"	border-image: url(:/images/digital_hover_T.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_u\n"
"{\n"
"	border-image: url(:/images/digital_normal_U.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_u\n"
"{\n"
"	border-image: url(:/images/digital_hover_U.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_v\n"
"{\n"
"	border-image: url(:/images/digital_normal_V.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_v\n"
"{\n"
"	border-image: url(:/images/digital_hover_V.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_w\n"
"{\n"
"	border-image: url(:/images/digital_normal_W.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_w\n"
"{\n"
"	border-image: url(:/images/digital_hover_W.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_x\n"
"{\n"
"	border-image: url(:/images/digital_normal_X.p"
                        "ng);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_x\n"
"{\n"
"	border-image: url(:/images/digital_hover_X.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_y\n"
"{\n"
"	border-image: url(:/images/digital_normal_Y.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_y\n"
"{\n"
"	border-image: url(:/images/digital_hover_Y.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_z\n"
"{\n"
"	border-image: url(:/images/digital_normal_Z.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_z\n"
"{\n"
"	border-image: url(:/images/digital_hover_Z.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_symbol\n"
"{\n"
"	border-image: url(:/images/digital_normal_symbol.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_symbol\n"
"{\n"
"	border-image: url(:/images/digital_hover_symbol.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_caps\n"
"{\n"
"	border-image: url(:/images/digital_normal_caps.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_caps\n"
"{\n"
"	border-image: url(:/images/digital_hover_caps.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_whitespace\n"
""
                        "{\n"
"	min-width: 550px;\n"
"	max-width: 550px;\n"
"	border-image: url(:/images/digital_normal_space.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_whitespace\n"
"{\n"
"	border-image: url(:/images/digital_hover_space.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_minus\n"
"{\n"
"	border-image: url(:/images/digital_normal_minus.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_minus\n"
"{\n"
"	border-image: url(:/images/digital_hover_minus.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_plus\n"
"{\n"
"	border-image: url(:/images/digital_normal_plus.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_plus\n"
"{\n"
"	border-image: url(:/images/digital_hover_plus.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_dot\n"
"{\n"
"	border-image: url(:/images/digital_normal_dot.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_dot\n"
"{\n"
"	border-image: url(:/images/digital_hover_dot.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_del\n"
"{\n"
"	border-image: url(:/images/del_normal.png);\n"
"}\n"
"\n"
"QPushButton:hover#panel"
                        "Button_del\n"
"{\n"
"	border-image: url(:/images/del_hover.png);\n"
"}"));
        lineEdit_window = new QLineEdit(Dialog);
        lineEdit_window->setObjectName(QString::fromUtf8("lineEdit_window"));
        lineEdit_window->setGeometry(QRect(15, 15, 350, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221"));
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setWeight(75);
        lineEdit_window->setFont(font1);
        lineEdit_window->setFrame(true);
        pushButton_u = new QPushButton(Dialog);
        pushButton_u->setObjectName(QString::fromUtf8("pushButton_u"));
        pushButton_u->setGeometry(QRect(330, 185, 67, 42));
        pushButton_u->setFont(font1);
        pushButton_t = new QPushButton(Dialog);
        pushButton_t->setObjectName(QString::fromUtf8("pushButton_t"));
        pushButton_t->setGeometry(QRect(230, 185, 67, 42));
        pushButton_t->setFont(font1);
        pushButton_y = new QPushButton(Dialog);
        pushButton_y->setObjectName(QString::fromUtf8("pushButton_y"));
        pushButton_y->setGeometry(QRect(280, 185, 67, 42));
        pushButton_y->setFont(font1);
        pushButton_i = new QPushButton(Dialog);
        pushButton_i->setObjectName(QString::fromUtf8("pushButton_i"));
        pushButton_i->setGeometry(QRect(380, 185, 63, 38));
        pushButton_i->setFont(font1);
        pushButton_q = new QPushButton(Dialog);
        pushButton_q->setObjectName(QString::fromUtf8("pushButton_q"));
        pushButton_q->setGeometry(QRect(30, 185, 67, 42));
        pushButton_q->setFont(font1);
        pushButton_zuokuo = new QPushButton(Dialog);
        pushButton_zuokuo->setObjectName(QString::fromUtf8("pushButton_zuokuo"));
        pushButton_zuokuo->setGeometry(QRect(550, 185, 67, 42));
        pushButton_zuokuo->setFont(font1);
        pushButton_p = new QPushButton(Dialog);
        pushButton_p->setObjectName(QString::fromUtf8("pushButton_p"));
        pushButton_p->setGeometry(QRect(480, 185, 67, 42));
        pushButton_p->setFont(font1);
        pushButton_r = new QPushButton(Dialog);
        pushButton_r->setObjectName(QString::fromUtf8("pushButton_r"));
        pushButton_r->setGeometry(QRect(180, 185, 67, 42));
        pushButton_r->setFont(font1);
        pushButton_youkuo = new QPushButton(Dialog);
        pushButton_youkuo->setObjectName(QString::fromUtf8("pushButton_youkuo"));
        pushButton_youkuo->setGeometry(QRect(620, 185, 67, 42));
        pushButton_youkuo->setFont(font1);
        pushButton_w = new QPushButton(Dialog);
        pushButton_w->setObjectName(QString::fromUtf8("pushButton_w"));
        pushButton_w->setGeometry(QRect(80, 185, 67, 42));
        pushButton_w->setFont(font1);
        pushButton_o = new QPushButton(Dialog);
        pushButton_o->setObjectName(QString::fromUtf8("pushButton_o"));
        pushButton_o->setGeometry(QRect(430, 185, 67, 42));
        pushButton_o->setFont(font1);
        pushButton_e = new QPushButton(Dialog);
        pushButton_e->setObjectName(QString::fromUtf8("pushButton_e"));
        pushButton_e->setGeometry(QRect(130, 185, 63, 38));
        pushButton_e->setFont(font1);
        pushButton_j = new QPushButton(Dialog);
        pushButton_j->setObjectName(QString::fromUtf8("pushButton_j"));
        pushButton_j->setGeometry(QRect(340, 235, 63, 38));
        pushButton_j->setFont(font1);
        pushButton_g = new QPushButton(Dialog);
        pushButton_g->setObjectName(QString::fromUtf8("pushButton_g"));
        pushButton_g->setGeometry(QRect(240, 235, 63, 38));
        pushButton_g->setFont(font1);
        pushButton_h = new QPushButton(Dialog);
        pushButton_h->setObjectName(QString::fromUtf8("pushButton_h"));
        pushButton_h->setGeometry(QRect(290, 235, 63, 38));
        pushButton_h->setFont(font1);
        pushButton_k = new QPushButton(Dialog);
        pushButton_k->setObjectName(QString::fromUtf8("pushButton_k"));
        pushButton_k->setGeometry(QRect(390, 235, 63, 38));
        pushButton_k->setFont(font1);
        pushButton_a = new QPushButton(Dialog);
        pushButton_a->setObjectName(QString::fromUtf8("pushButton_a"));
        pushButton_a->setGeometry(QRect(40, 235, 63, 38));
        pushButton_a->setFont(font1);
        pushButton_quote = new QPushButton(Dialog);
        pushButton_quote->setObjectName(QString::fromUtf8("pushButton_quote"));
        pushButton_quote->setGeometry(QRect(600, 235, 67, 42));
        pushButton_quote->setFont(font1);
        pushButton_semicolon = new QPushButton(Dialog);
        pushButton_semicolon->setObjectName(QString::fromUtf8("pushButton_semicolon"));
        pushButton_semicolon->setGeometry(QRect(520, 235, 67, 42));
        pushButton_semicolon->setFont(font1);
        pushButton_f = new QPushButton(Dialog);
        pushButton_f->setObjectName(QString::fromUtf8("pushButton_f"));
        pushButton_f->setGeometry(QRect(190, 235, 63, 38));
        pushButton_f->setFont(font1);
        pushButton_enter = new QPushButton(Dialog);
        pushButton_enter->setObjectName(QString::fromUtf8("pushButton_enter"));
        pushButton_enter->setGeometry(QRect(680, 235, 67, 42));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221"));
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_enter->setFont(font2);
        pushButton_s = new QPushButton(Dialog);
        pushButton_s->setObjectName(QString::fromUtf8("pushButton_s"));
        pushButton_s->setGeometry(QRect(90, 235, 67, 42));
        pushButton_s->setFont(font1);
        pushButton_l = new QPushButton(Dialog);
        pushButton_l->setObjectName(QString::fromUtf8("pushButton_l"));
        pushButton_l->setGeometry(QRect(440, 235, 67, 42));
        pushButton_l->setFont(font1);
        pushButton_d = new QPushButton(Dialog);
        pushButton_d->setObjectName(QString::fromUtf8("pushButton_d"));
        pushButton_d->setGeometry(QRect(140, 235, 63, 38));
        pushButton_d->setFont(font1);
        pushButton_m = new QPushButton(Dialog);
        pushButton_m->setObjectName(QString::fromUtf8("pushButton_m"));
        pushButton_m->setGeometry(QRect(370, 285, 67, 42));
        pushButton_m->setFont(font1);
        pushButton_b = new QPushButton(Dialog);
        pushButton_b->setObjectName(QString::fromUtf8("pushButton_b"));
        pushButton_b->setGeometry(QRect(260, 285, 63, 38));
        pushButton_b->setFont(font1);
        pushButton_n = new QPushButton(Dialog);
        pushButton_n->setObjectName(QString::fromUtf8("pushButton_n"));
        pushButton_n->setGeometry(QRect(310, 285, 67, 42));
        pushButton_n->setFont(font1);
        pushButton_comma = new QPushButton(Dialog);
        pushButton_comma->setObjectName(QString::fromUtf8("pushButton_comma"));
        pushButton_comma->setGeometry(QRect(440, 285, 67, 42));
        pushButton_comma->setFont(font1);
        pushButton_z = new QPushButton(Dialog);
        pushButton_z->setObjectName(QString::fromUtf8("pushButton_z"));
        pushButton_z->setGeometry(QRect(60, 285, 67, 42));
        pushButton_z->setFont(font1);
        pushButton_splash = new QPushButton(Dialog);
        pushButton_splash->setObjectName(QString::fromUtf8("pushButton_splash"));
        pushButton_splash->setGeometry(QRect(570, 285, 67, 42));
        pushButton_splash->setFont(font1);
        pushButton_v = new QPushButton(Dialog);
        pushButton_v->setObjectName(QString::fromUtf8("pushButton_v"));
        pushButton_v->setGeometry(QRect(210, 285, 67, 42));
        pushButton_v->setFont(font1);
        pushButton_x = new QPushButton(Dialog);
        pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));
        pushButton_x->setGeometry(QRect(110, 285, 67, 42));
        pushButton_x->setFont(font1);
        pushButton_period = new QPushButton(Dialog);
        pushButton_period->setObjectName(QString::fromUtf8("pushButton_period"));
        pushButton_period->setGeometry(QRect(510, 285, 67, 42));
        pushButton_period->setFont(font1);
        pushButton_c = new QPushButton(Dialog);
        pushButton_c->setObjectName(QString::fromUtf8("pushButton_c"));
        pushButton_c->setGeometry(QRect(160, 285, 63, 38));
        pushButton_c->setFont(font1);
        pushButton_shift = new QPushButton(Dialog);
        pushButton_shift->setObjectName(QString::fromUtf8("pushButton_shift"));
        pushButton_shift->setGeometry(QRect(5, 335, 67, 42));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221"));
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton_shift->setFont(font3);
        pushButton_whitespace = new QPushButton(Dialog);
        pushButton_whitespace->setObjectName(QString::fromUtf8("pushButton_whitespace"));
        pushButton_whitespace->setGeometry(QRect(80, 340, 550, 38));
        pushButton_whitespace->setFont(font3);
        pushButton_backsplash = new QPushButton(Dialog);
        pushButton_backsplash->setObjectName(QString::fromUtf8("pushButton_backsplash"));
        pushButton_backsplash->setGeometry(QRect(690, 185, 67, 42));
        pushButton_backsplash->setFont(font1);
        pushButton_n2 = new QPushButton(Dialog);
        pushButton_n2->setObjectName(QString::fromUtf8("pushButton_n2"));
        pushButton_n2->setGeometry(QRect(55, 135, 63, 38));
        pushButton_n2->setFont(font1);
        pushButton_n2->setFocusPolicy(Qt::ClickFocus);
        pushButton_is_hanzi = new QPushButton(Dialog);
        pushButton_is_hanzi->setObjectName(QString::fromUtf8("pushButton_is_hanzi"));
        pushButton_is_hanzi->setGeometry(QRect(650, 330, 67, 42));
        pushButton_is_hanzi->setFont(font3);
        pushButton_is_hanzi->setFlat(false);
        pushButton_CONFIRM = new QPushButton(Dialog);
        pushButton_CONFIRM->setObjectName(QString::fromUtf8("pushButton_CONFIRM"));
        pushButton_CONFIRM->setGeometry(QRect(605, 15, 67, 42));
        QPalette palette;
        QBrush brush(QColor(0, 255, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush1(QColor(118, 116, 108, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pushButton_CONFIRM->setPalette(palette);
        pushButton_CONFIRM->setFont(font3);
        pushButton_hanzi_7 = new QPushButton(Dialog);
        pushButton_hanzi_7->setObjectName(QString::fromUtf8("pushButton_hanzi_7"));
        pushButton_hanzi_7->setGeometry(QRect(455, 70, 67, 42));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221"));
        font4.setPointSize(30);
        font4.setBold(true);
        font4.setWeight(75);
        pushButton_hanzi_7->setFont(font4);
        pushButton_hanzi_5 = new QPushButton(Dialog);
        pushButton_hanzi_5->setObjectName(QString::fromUtf8("pushButton_hanzi_5"));
        pushButton_hanzi_5->setGeometry(QRect(355, 70, 67, 42));
        pushButton_hanzi_5->setFont(font4);
        pushButton_hanzi_6 = new QPushButton(Dialog);
        pushButton_hanzi_6->setObjectName(QString::fromUtf8("pushButton_hanzi_6"));
        pushButton_hanzi_6->setGeometry(QRect(405, 70, 67, 42));
        pushButton_hanzi_6->setFont(font4);
        pushButton_hanzi_8 = new QPushButton(Dialog);
        pushButton_hanzi_8->setObjectName(QString::fromUtf8("pushButton_hanzi_8"));
        pushButton_hanzi_8->setGeometry(QRect(505, 70, 67, 42));
        pushButton_hanzi_8->setFont(font4);
        pushButton_hanzi_4 = new QPushButton(Dialog);
        pushButton_hanzi_4->setObjectName(QString::fromUtf8("pushButton_hanzi_4"));
        pushButton_hanzi_4->setGeometry(QRect(305, 70, 67, 42));
        pushButton_hanzi_4->setFont(font4);
        pushButton_hanzi_2 = new QPushButton(Dialog);
        pushButton_hanzi_2->setObjectName(QString::fromUtf8("pushButton_hanzi_2"));
        pushButton_hanzi_2->setGeometry(QRect(205, 70, 67, 42));
        pushButton_hanzi_2->setFont(font4);
        pushButton_hanzi_3 = new QPushButton(Dialog);
        pushButton_hanzi_3->setObjectName(QString::fromUtf8("pushButton_hanzi_3"));
        pushButton_hanzi_3->setGeometry(QRect(255, 70, 67, 42));
        pushButton_hanzi_3->setFont(font4);
        pushButton_hanzi_left = new QPushButton(Dialog);
        pushButton_hanzi_left->setObjectName(QString::fromUtf8("pushButton_hanzi_left"));
        pushButton_hanzi_left->setGeometry(QRect(5, 70, 67, 42));
        pushButton_hanzi_left->setFont(font4);
        pushButton_hanzi_right = new QPushButton(Dialog);
        pushButton_hanzi_right->setObjectName(QString::fromUtf8("pushButton_hanzi_right"));
        pushButton_hanzi_right->setGeometry(QRect(605, 70, 67, 42));
        pushButton_hanzi_right->setFont(font4);
        pushButton_hanzi_1 = new QPushButton(Dialog);
        pushButton_hanzi_1->setObjectName(QString::fromUtf8("pushButton_hanzi_1"));
        pushButton_hanzi_1->setGeometry(QRect(155, 70, 67, 42));
        pushButton_hanzi_1->setFont(font4);
        lineEdit_pinyin = new QLineEdit(Dialog);
        lineEdit_pinyin->setObjectName(QString::fromUtf8("lineEdit_pinyin"));
        lineEdit_pinyin->setGeometry(QRect(365, 15, 130, 50));
        lineEdit_pinyin->setFont(font1);
        lineEdit_pinyin->setFrame(false);
        pushButton_n3 = new QPushButton(Dialog);
        pushButton_n3->setObjectName(QString::fromUtf8("pushButton_n3"));
        pushButton_n3->setGeometry(QRect(105, 135, 63, 38));
        pushButton_n3->setFont(font1);
        pushButton_backspace = new QPushButton(Dialog);
        pushButton_backspace->setObjectName(QString::fromUtf8("pushButton_backspace"));
        pushButton_backspace->setGeometry(QRect(660, 130, 67, 42));
        pushButton_backspace->setFont(font2);
        pushButton_n0 = new QPushButton(Dialog);
        pushButton_n0->setObjectName(QString::fromUtf8("pushButton_n0"));
        pushButton_n0->setGeometry(QRect(455, 135, 63, 38));
        pushButton_n0->setFont(font1);
        pushButton_n1 = new QPushButton(Dialog);
        pushButton_n1->setObjectName(QString::fromUtf8("pushButton_n1"));
        pushButton_n1->setGeometry(QRect(5, 135, 63, 38));
        pushButton_n1->setFont(font1);
        pushButton_n1->setFocusPolicy(Qt::ClickFocus);
        pushButton_n6 = new QPushButton(Dialog);
        pushButton_n6->setObjectName(QString::fromUtf8("pushButton_n6"));
        pushButton_n6->setGeometry(QRect(255, 135, 63, 38));
        pushButton_n6->setFont(font1);
        pushButton_deng = new QPushButton(Dialog);
        pushButton_deng->setObjectName(QString::fromUtf8("pushButton_deng"));
        pushButton_deng->setGeometry(QRect(590, 130, 67, 42));
        pushButton_deng->setFont(font1);
        pushButton_gang = new QPushButton(Dialog);
        pushButton_gang->setObjectName(QString::fromUtf8("pushButton_gang"));
        pushButton_gang->setGeometry(QRect(520, 130, 67, 42));
        pushButton_gang->setFont(font1);
        pushButton_n5 = new QPushButton(Dialog);
        pushButton_n5->setObjectName(QString::fromUtf8("pushButton_n5"));
        pushButton_n5->setGeometry(QRect(205, 135, 63, 38));
        pushButton_n5->setFont(font1);
        pushButton_n7 = new QPushButton(Dialog);
        pushButton_n7->setObjectName(QString::fromUtf8("pushButton_n7"));
        pushButton_n7->setGeometry(QRect(305, 135, 63, 38));
        pushButton_n7->setFont(font1);
        pushButton_n8 = new QPushButton(Dialog);
        pushButton_n8->setObjectName(QString::fromUtf8("pushButton_n8"));
        pushButton_n8->setGeometry(QRect(355, 135, 63, 38));
        pushButton_n8->setFont(font1);
        pushButton_n4 = new QPushButton(Dialog);
        pushButton_n4->setObjectName(QString::fromUtf8("pushButton_n4"));
        pushButton_n4->setGeometry(QRect(155, 135, 63, 38));
        pushButton_n4->setFont(font1);
        pushButton_n9 = new QPushButton(Dialog);
        pushButton_n9->setObjectName(QString::fromUtf8("pushButton_n9"));
        pushButton_n9->setGeometry(QRect(405, 135, 63, 38));
        pushButton_n9->setFont(font1);
        line = new QFrame(Dialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(5, 125, 741, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton_CANCEL = new QPushButton(Dialog);
        pushButton_CANCEL->setObjectName(QString::fromUtf8("pushButton_CANCEL"));
        pushButton_CANCEL->setGeometry(QRect(500, 15, 67, 42));
        QFont font5;
        font5.setPointSize(20);
        font5.setBold(true);
        font5.setWeight(75);
        pushButton_CANCEL->setFont(font5);
        QWidget::setTabOrder(pushButton_hanzi_left, pushButton_hanzi_1);
        QWidget::setTabOrder(pushButton_hanzi_1, pushButton_hanzi_2);
        QWidget::setTabOrder(pushButton_hanzi_2, pushButton_hanzi_3);
        QWidget::setTabOrder(pushButton_hanzi_3, pushButton_hanzi_4);
        QWidget::setTabOrder(pushButton_hanzi_4, pushButton_hanzi_5);
        QWidget::setTabOrder(pushButton_hanzi_5, pushButton_hanzi_6);
        QWidget::setTabOrder(pushButton_hanzi_6, pushButton_hanzi_7);
        QWidget::setTabOrder(pushButton_hanzi_7, pushButton_hanzi_8);
        QWidget::setTabOrder(pushButton_hanzi_8, pushButton_hanzi_right);
        QWidget::setTabOrder(pushButton_hanzi_right, pushButton_n1);
        QWidget::setTabOrder(pushButton_n1, pushButton_n2);
        QWidget::setTabOrder(pushButton_n2, pushButton_n3);
        QWidget::setTabOrder(pushButton_n3, pushButton_n4);
        QWidget::setTabOrder(pushButton_n4, pushButton_n5);
        QWidget::setTabOrder(pushButton_n5, pushButton_n6);
        QWidget::setTabOrder(pushButton_n6, pushButton_n7);
        QWidget::setTabOrder(pushButton_n7, pushButton_n8);
        QWidget::setTabOrder(pushButton_n8, pushButton_n9);
        QWidget::setTabOrder(pushButton_n9, pushButton_n0);
        QWidget::setTabOrder(pushButton_n0, pushButton_gang);
        QWidget::setTabOrder(pushButton_gang, pushButton_deng);
        QWidget::setTabOrder(pushButton_deng, pushButton_backspace);
        QWidget::setTabOrder(pushButton_backspace, pushButton_q);
        QWidget::setTabOrder(pushButton_q, pushButton_w);
        QWidget::setTabOrder(pushButton_w, pushButton_e);
        QWidget::setTabOrder(pushButton_e, pushButton_r);
        QWidget::setTabOrder(pushButton_r, pushButton_t);
        QWidget::setTabOrder(pushButton_t, pushButton_y);
        QWidget::setTabOrder(pushButton_y, pushButton_u);
        QWidget::setTabOrder(pushButton_u, pushButton_i);
        QWidget::setTabOrder(pushButton_i, pushButton_o);
        QWidget::setTabOrder(pushButton_o, pushButton_p);
        QWidget::setTabOrder(pushButton_p, pushButton_zuokuo);
        QWidget::setTabOrder(pushButton_zuokuo, pushButton_youkuo);
        QWidget::setTabOrder(pushButton_youkuo, pushButton_backsplash);
        QWidget::setTabOrder(pushButton_backsplash, pushButton_a);
        QWidget::setTabOrder(pushButton_a, pushButton_s);
        QWidget::setTabOrder(pushButton_s, pushButton_d);
        QWidget::setTabOrder(pushButton_d, pushButton_f);
        QWidget::setTabOrder(pushButton_f, pushButton_g);
        QWidget::setTabOrder(pushButton_g, pushButton_h);
        QWidget::setTabOrder(pushButton_h, pushButton_j);
        QWidget::setTabOrder(pushButton_j, pushButton_k);
        QWidget::setTabOrder(pushButton_k, pushButton_l);
        QWidget::setTabOrder(pushButton_l, pushButton_semicolon);
        QWidget::setTabOrder(pushButton_semicolon, pushButton_quote);
        QWidget::setTabOrder(pushButton_quote, pushButton_enter);
        QWidget::setTabOrder(pushButton_enter, pushButton_z);
        QWidget::setTabOrder(pushButton_z, pushButton_x);
        QWidget::setTabOrder(pushButton_x, pushButton_c);
        QWidget::setTabOrder(pushButton_c, pushButton_v);
        QWidget::setTabOrder(pushButton_v, pushButton_b);
        QWidget::setTabOrder(pushButton_b, pushButton_n);
        QWidget::setTabOrder(pushButton_n, pushButton_m);
        QWidget::setTabOrder(pushButton_m, pushButton_comma);
        QWidget::setTabOrder(pushButton_comma, pushButton_period);
        QWidget::setTabOrder(pushButton_period, pushButton_splash);
        QWidget::setTabOrder(pushButton_splash, pushButton_shift);
        QWidget::setTabOrder(pushButton_shift, pushButton_whitespace);
        QWidget::setTabOrder(pushButton_whitespace, pushButton_is_hanzi);
        QWidget::setTabOrder(pushButton_is_hanzi, pushButton_CONFIRM);
        QWidget::setTabOrder(pushButton_CONFIRM, lineEdit_pinyin);
        QWidget::setTabOrder(lineEdit_pinyin, lineEdit_window);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        lineEdit_window->setText(QString());
        pushButton_u->setText(QString());
        pushButton_t->setText(QString());
        pushButton_y->setText(QString());
        pushButton_i->setText(QString());
        pushButton_q->setText(QString());
        pushButton_zuokuo->setText(QApplication::translate("Dialog", "[", 0, QApplication::UnicodeUTF8));
        pushButton_p->setText(QString());
        pushButton_r->setText(QString());
        pushButton_youkuo->setText(QApplication::translate("Dialog", "]", 0, QApplication::UnicodeUTF8));
        pushButton_w->setText(QString());
        pushButton_o->setText(QString());
        pushButton_e->setText(QString());
        pushButton_j->setText(QString());
        pushButton_g->setText(QString());
        pushButton_h->setText(QString());
        pushButton_k->setText(QString());
        pushButton_a->setText(QString());
        pushButton_quote->setText(QApplication::translate("Dialog", "'", 0, QApplication::UnicodeUTF8));
        pushButton_semicolon->setText(QApplication::translate("Dialog", ";", 0, QApplication::UnicodeUTF8));
        pushButton_f->setText(QString());
        pushButton_enter->setText(QApplication::translate("Dialog", "enter", 0, QApplication::UnicodeUTF8));
        pushButton_s->setText(QString());
        pushButton_l->setText(QString());
        pushButton_d->setText(QString());
        pushButton_m->setText(QString());
        pushButton_b->setText(QString());
        pushButton_n->setText(QString());
        pushButton_comma->setText(QApplication::translate("Dialog", ",", 0, QApplication::UnicodeUTF8));
        pushButton_z->setText(QString());
        pushButton_splash->setText(QApplication::translate("Dialog", "/", 0, QApplication::UnicodeUTF8));
        pushButton_v->setText(QString());
        pushButton_x->setText(QString());
        pushButton_period->setText(QApplication::translate("Dialog", ".", 0, QApplication::UnicodeUTF8));
        pushButton_c->setText(QString());
        pushButton_shift->setText(QString());
        pushButton_whitespace->setText(QString());
        pushButton_backsplash->setText(QApplication::translate("Dialog", "\\", 0, QApplication::UnicodeUTF8));
        pushButton_n2->setText(QString());
        pushButton_is_hanzi->setText(QString());
        pushButton_CONFIRM->setText(QApplication::translate("Dialog", "ok", 0, QApplication::UnicodeUTF8));
        pushButton_hanzi_7->setText(QString());
        pushButton_hanzi_5->setText(QString());
        pushButton_hanzi_6->setText(QString());
        pushButton_hanzi_8->setText(QString());
        pushButton_hanzi_4->setText(QString());
        pushButton_hanzi_2->setText(QString());
        pushButton_hanzi_3->setText(QString());
        pushButton_hanzi_left->setText(QApplication::translate("Dialog", "<<", 0, QApplication::UnicodeUTF8));
        pushButton_hanzi_right->setText(QApplication::translate("Dialog", ">>", 0, QApplication::UnicodeUTF8));
        pushButton_hanzi_1->setText(QString());
        lineEdit_pinyin->setText(QString());
        pushButton_n3->setText(QString());
        pushButton_backspace->setText(QApplication::translate("Dialog", "backspace", 0, QApplication::UnicodeUTF8));
        pushButton_n0->setText(QString());
        pushButton_n1->setText(QString());
        pushButton_n6->setText(QString());
        pushButton_deng->setText(QApplication::translate("Dialog", "=", 0, QApplication::UnicodeUTF8));
        pushButton_gang->setText(QApplication::translate("Dialog", "-", 0, QApplication::UnicodeUTF8));
        pushButton_n5->setText(QString());
        pushButton_n7->setText(QString());
        pushButton_n8->setText(QString());
        pushButton_n4->setText(QString());
        pushButton_n9->setText(QString());
        pushButton_CANCEL->setText(QApplication::translate("Dialog", "cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HZKB_H
