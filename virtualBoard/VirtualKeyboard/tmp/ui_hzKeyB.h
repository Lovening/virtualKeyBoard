/********************************************************************************
** Form generated from reading UI file 'hzKeyB.ui'
**
** Created: Mon Apr 29 15:24:51 2019
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HZKEYB_H
#define UI_HZKEYB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *lineEdit_window;
    QLineEdit *lineEdit_pinyin;
    QPushButton *pushButton_CANCEL;
    QPushButton *pushButton_CONFIRM;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_hanzi_left;
    QPushButton *pushButton_hanzi_1;
    QPushButton *pushButton_hanzi_2;
    QPushButton *pushButton_hanzi_3;
    QPushButton *pushButton_hanzi_4;
    QPushButton *pushButton_hanzi_5;
    QPushButton *pushButton_hanzi_6;
    QPushButton *pushButton_hanzi_7;
    QPushButton *pushButton_hanzi_8;
    QPushButton *pushButton_hanzi_right;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_n1;
    QPushButton *pushButton_n2;
    QPushButton *pushButton_n3;
    QPushButton *pushButton_n4;
    QPushButton *pushButton_n5;
    QPushButton *pushButton_n6;
    QPushButton *pushButton_n7;
    QPushButton *pushButton_n8;
    QPushButton *pushButton_n9;
    QPushButton *pushButton_n0;
    QPushButton *pushButton_gang;
    QPushButton *pushButton_deng;
    QPushButton *pushButton_backspace;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_q;
    QPushButton *pushButton_w;
    QPushButton *pushButton_e;
    QPushButton *pushButton_r;
    QPushButton *pushButton_t;
    QPushButton *pushButton_y;
    QPushButton *pushButton_u;
    QPushButton *pushButton_i;
    QPushButton *pushButton_o;
    QPushButton *pushButton_p;
    QPushButton *pushButton_zuokuo;
    QPushButton *pushButton_youkuo;
    QPushButton *pushButton_backsplash;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_a;
    QPushButton *pushButton_s;
    QPushButton *pushButton_d;
    QPushButton *pushButton_f;
    QPushButton *pushButton_g;
    QPushButton *pushButton_h;
    QPushButton *pushButton_j;
    QPushButton *pushButton_k;
    QPushButton *pushButton_l;
    QPushButton *pushButton_semicolon;
    QPushButton *pushButton_quote;
    QPushButton *pushButton_enter;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_z;
    QPushButton *pushButton_x;
    QPushButton *pushButton_c;
    QPushButton *pushButton_v;
    QPushButton *pushButton_b;
    QPushButton *pushButton_n;
    QPushButton *pushButton_m;
    QPushButton *pushButton_comma;
    QPushButton *pushButton_period;
    QPushButton *pushButton_splash;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton_shift;
    QPushButton *pushButton_whitespace;
    QPushButton *pushButton_is_hanzi;
    QSpacerItem *horizontalSpacer_10;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(1085, 553);
        Form->setStyleSheet(QString::fromUtf8("QWidget#From\n"
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
"QPushButton\n"
"{\n"
"	min-width: 70px;\n"
"	max-width: 70px;\n"
"	min-height: 57px;\n"
"	max-height: 57px;\n"
"	color:#ffffff;\n"
"	font-size:28px;\n"
"	border-image: url(:/images/digital_normal_char);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	border-image: url(:/images/digital_hover_char);\n"
"}\n"
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
"QPushButt"
                        "on:pressed#panelButton_cancel\n"
"{\n"
"	border-image: url(:/images/cancel_selected.png);\n"
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
"	border-image: url(:/images/digital_normal_4.png"
                        ");\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_n4\n"
"{\n"
"	border-image: url(:/images/digital_hover_4.png);\n"
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
"	border-image: url(:/images/"
                        "digital_normal_9.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_n9\n"
"{\n"
"	border-image: url(:/images/digital_hover_9.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_a[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_A.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_a[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_A.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_a[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_la.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_a[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_la.png);\n"
"}\n"
"\n"
"\n"
"QPushButton#pushButton_b[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_B.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_b[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_B.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_b[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_lb.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton"
                        "_b[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_lb.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_c[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_C.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_c[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_C.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_c[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_lc.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_c[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_lc.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_d[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_D.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_d[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_D.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_d[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_ld.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_d[case = \"false\"]\n"
"{\n"
"	border-image: url(:/i"
                        "mages/digital_hover_ld.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_e[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_E.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_e[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_E.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_e[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_le.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_e[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_le.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_f[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_F.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_f[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_F.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_f[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_lf.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_f[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_lf.png);\n"
"}\n"
"\n"
"QPushButt"
                        "on#pushButton_g[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_G.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_g[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_G.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_g[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_lg.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_g[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_lg.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_h[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_H.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_h[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_H.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_h[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_lh.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_h[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_lh.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_i[case = \"true\"]\n"
"{\n"
"	border-im"
                        "age: url(:/images/digital_normal_I.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_i[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_I.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_i[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_li.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_i[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_li.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_j[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_J.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_j[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_J.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_j[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_lj.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_j[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_lj.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_k[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_K.png);\n"
"}\n"
"\n"
""
                        "QPushButton:hover#pushButton_k[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_K.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_k[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_lk.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_k[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_lk.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_l[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_L.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_l[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_L.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_l[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_ll.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_l[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_ll.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_m[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_M.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_m[case = \"true\"]\n"
"{"
                        "\n"
"	border-image: url(:/images/digital_hover_M.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_m[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_lm.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_m[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_lm.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_n[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_N.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_n[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_N.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_n[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_ln.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_n[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_ln.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_o[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_O.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_o[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_O.png)"
                        ";\n"
"}\n"
"\n"
"QPushButton#pushButton_o[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_lo.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_o[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_lo.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_p[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_P.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_p[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_P.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_p[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_lp.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_p[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_lp.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_q[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_Q.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_q[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_Q.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_q[case = \"fa"
                        "lse\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_lq.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_q[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_lq.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_r[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_R.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_r[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_R.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_r[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_lr.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_r[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_lr.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_s[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_S.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_s[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_S.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_s[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_"
                        "normal_ls.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_s[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_ls.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_t[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_T.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_t[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_T.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_t[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_lt.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_t[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_lt.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_u[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_U.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_u[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_U.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_u[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_lu.png);\n"
"}\n"
"\n"
"QPushButton:hover#push"
                        "Button_u[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_lu.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_v[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_V.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_v[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_V.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_v[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_lv.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_v[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_lv.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_w[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_W.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_w[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_W.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_w[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_lw.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_w[case = \"false\"]\n"
"{\n"
"	border-image: u"
                        "rl(:/images/digital_hover_lw.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_x[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_X.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_x[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_X.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_x[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_lx.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_x[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_lx.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_y[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_Y.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_y[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_Y.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_y[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_ly.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_y[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_ly.png);\n"
"}\n"
"\n"
"QPu"
                        "shButton#pushButton_z[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_Z.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_z[case = \"true\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_Z.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_z[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_normal_lz.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_z[case = \"false\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_lz.png);\n"
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
"{\n"
"	min-width: 550px;\n"
"	max-width: 550px;\n"
"	m"
                        "in-height: 57px;\n"
"	min-height: 57px;\n"
"	border-image: url(:/images/digital_normal_space.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_whitespace\n"
"{\n"
"	border-image: url(:/images/digital_hover_space.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_is_hanzi[case = \"CN\"]\n"
"{\n"
"	min-width: 70px;\n"
"	min-height: 57px;\n"
"	border-image: url(:/images/digital_normal_CN.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_is_hanzi[case = \"CN\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_CN.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_is_hanzi[case = \"EN\"]\n"
"{\n"
"	min-width: 70px;\n"
"	min-height: 57px;\n"
"	border-image: url(:/images/digital_normal_EN.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_is_hanzi[case = \"EN\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_EN.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_backspace\n"
"{\n"
"	min-width: 130px;	\n"
"	min-height: 57px;\n"
"	border-image:url(:/images/digital_normal_backspace.png)\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_backs"
                        "pace\n"
"{\n"
"	min-width: 130px;	\n"
"	min-height: 57px;\n"
"	border-image:url(:/images/digital_hover_backspace.png)\n"
"}\n"
"\n"
"\n"
"QPushButton#pushButton_shift[case =  \"BIG\"]\n"
"{\n"
"	min-width: 70px;\n"
"	min-height: 57px;\n"
"	border-image: url(:/images/digital_normal_bigsmall.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_shift[case  =  \"BIG\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_bigsmall.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_shift[case  =  \"SMALL\"]\n"
"{\n"
"	min-width: 70px;\n"
"	min-height: 57px;\n"
"	border-image: url(:/images/digital_normal_smallbig.png);\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_shift[case = \"SMALL\"]\n"
"{\n"
"	border-image: url(:/images/digital_hover_smallbig.png);\n"
"}\n"
"\n"
"QPushButton#pushButton_enter\n"
"{\n"
"	min-width: 140px;	\n"
"	min-height: 57px;\n"
"	border-image:url(:/images/digital_normal_enter)\n"
"}\n"
"\n"
"QPushButton:hover#pushButton_enter\n"
"{\n"
"	min-width: 140px;	\n"
"	min-height: 57px;\n"
"	border-image:url(:/imag"
                        "es/digital_hover_enter)\n"
"}\n"
"\n"
"\n"
"QPushButton#pushButton_CANCEL\n"
"{\n"
"	min-width: 120px;	\n"
"	min-height: 57px;	\n"
"}\n"
"QPushButton#pushButton_CONFIRM\n"
"{\n"
"	min-width: 120px;	\n"
"	min-height: 57px;	\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        verticalLayout = new QVBoxLayout(Form);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        lineEdit_window = new QLineEdit(Form);
        lineEdit_window->setObjectName(QString::fromUtf8("lineEdit_window"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221"));
        font.setPointSize(25);
        font.setBold(true);
        font.setWeight(75);
        lineEdit_window->setFont(font);
        lineEdit_window->setFrame(true);

        horizontalLayout_8->addWidget(lineEdit_window);

        lineEdit_pinyin = new QLineEdit(Form);
        lineEdit_pinyin->setObjectName(QString::fromUtf8("lineEdit_pinyin"));
        lineEdit_pinyin->setFont(font);
        lineEdit_pinyin->setFrame(false);

        horizontalLayout_8->addWidget(lineEdit_pinyin);

        pushButton_CANCEL = new QPushButton(Form);
        pushButton_CANCEL->setObjectName(QString::fromUtf8("pushButton_CANCEL"));
        QFont font1;
        pushButton_CANCEL->setFont(font1);

        horizontalLayout_8->addWidget(pushButton_CANCEL);

        pushButton_CONFIRM = new QPushButton(Form);
        pushButton_CONFIRM->setObjectName(QString::fromUtf8("pushButton_CONFIRM"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        pushButton_CONFIRM->setPalette(palette);
        pushButton_CONFIRM->setFont(font1);

        horizontalLayout_8->addWidget(pushButton_CONFIRM);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        pushButton_hanzi_left = new QPushButton(Form);
        pushButton_hanzi_left->setObjectName(QString::fromUtf8("pushButton_hanzi_left"));
        pushButton_hanzi_left->setFont(font1);

        horizontalLayout_7->addWidget(pushButton_hanzi_left);

        pushButton_hanzi_1 = new QPushButton(Form);
        pushButton_hanzi_1->setObjectName(QString::fromUtf8("pushButton_hanzi_1"));
        pushButton_hanzi_1->setFont(font1);

        horizontalLayout_7->addWidget(pushButton_hanzi_1);

        pushButton_hanzi_2 = new QPushButton(Form);
        pushButton_hanzi_2->setObjectName(QString::fromUtf8("pushButton_hanzi_2"));
        pushButton_hanzi_2->setFont(font1);

        horizontalLayout_7->addWidget(pushButton_hanzi_2);

        pushButton_hanzi_3 = new QPushButton(Form);
        pushButton_hanzi_3->setObjectName(QString::fromUtf8("pushButton_hanzi_3"));
        pushButton_hanzi_3->setFont(font1);

        horizontalLayout_7->addWidget(pushButton_hanzi_3);

        pushButton_hanzi_4 = new QPushButton(Form);
        pushButton_hanzi_4->setObjectName(QString::fromUtf8("pushButton_hanzi_4"));
        pushButton_hanzi_4->setFont(font1);

        horizontalLayout_7->addWidget(pushButton_hanzi_4);

        pushButton_hanzi_5 = new QPushButton(Form);
        pushButton_hanzi_5->setObjectName(QString::fromUtf8("pushButton_hanzi_5"));
        pushButton_hanzi_5->setFont(font1);

        horizontalLayout_7->addWidget(pushButton_hanzi_5);

        pushButton_hanzi_6 = new QPushButton(Form);
        pushButton_hanzi_6->setObjectName(QString::fromUtf8("pushButton_hanzi_6"));
        pushButton_hanzi_6->setFont(font1);

        horizontalLayout_7->addWidget(pushButton_hanzi_6);

        pushButton_hanzi_7 = new QPushButton(Form);
        pushButton_hanzi_7->setObjectName(QString::fromUtf8("pushButton_hanzi_7"));
        pushButton_hanzi_7->setFont(font1);

        horizontalLayout_7->addWidget(pushButton_hanzi_7);

        pushButton_hanzi_8 = new QPushButton(Form);
        pushButton_hanzi_8->setObjectName(QString::fromUtf8("pushButton_hanzi_8"));
        pushButton_hanzi_8->setFont(font1);

        horizontalLayout_7->addWidget(pushButton_hanzi_8);

        pushButton_hanzi_right = new QPushButton(Form);
        pushButton_hanzi_right->setObjectName(QString::fromUtf8("pushButton_hanzi_right"));
        pushButton_hanzi_right->setFont(font1);

        horizontalLayout_7->addWidget(pushButton_hanzi_right);


        verticalLayout->addLayout(horizontalLayout_7);

        line = new QFrame(Form);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton_n1 = new QPushButton(Form);
        pushButton_n1->setObjectName(QString::fromUtf8("pushButton_n1"));
        pushButton_n1->setFont(font1);
        pushButton_n1->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout->addWidget(pushButton_n1);

        pushButton_n2 = new QPushButton(Form);
        pushButton_n2->setObjectName(QString::fromUtf8("pushButton_n2"));
        pushButton_n2->setFont(font1);
        pushButton_n2->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout->addWidget(pushButton_n2);

        pushButton_n3 = new QPushButton(Form);
        pushButton_n3->setObjectName(QString::fromUtf8("pushButton_n3"));
        pushButton_n3->setFont(font1);

        horizontalLayout->addWidget(pushButton_n3);

        pushButton_n4 = new QPushButton(Form);
        pushButton_n4->setObjectName(QString::fromUtf8("pushButton_n4"));
        pushButton_n4->setFont(font1);

        horizontalLayout->addWidget(pushButton_n4);

        pushButton_n5 = new QPushButton(Form);
        pushButton_n5->setObjectName(QString::fromUtf8("pushButton_n5"));
        pushButton_n5->setFont(font1);

        horizontalLayout->addWidget(pushButton_n5);

        pushButton_n6 = new QPushButton(Form);
        pushButton_n6->setObjectName(QString::fromUtf8("pushButton_n6"));
        pushButton_n6->setFont(font1);

        horizontalLayout->addWidget(pushButton_n6);

        pushButton_n7 = new QPushButton(Form);
        pushButton_n7->setObjectName(QString::fromUtf8("pushButton_n7"));
        pushButton_n7->setFont(font1);

        horizontalLayout->addWidget(pushButton_n7);

        pushButton_n8 = new QPushButton(Form);
        pushButton_n8->setObjectName(QString::fromUtf8("pushButton_n8"));
        pushButton_n8->setFont(font1);

        horizontalLayout->addWidget(pushButton_n8);

        pushButton_n9 = new QPushButton(Form);
        pushButton_n9->setObjectName(QString::fromUtf8("pushButton_n9"));
        pushButton_n9->setFont(font1);

        horizontalLayout->addWidget(pushButton_n9);

        pushButton_n0 = new QPushButton(Form);
        pushButton_n0->setObjectName(QString::fromUtf8("pushButton_n0"));
        pushButton_n0->setFont(font1);

        horizontalLayout->addWidget(pushButton_n0);

        pushButton_gang = new QPushButton(Form);
        pushButton_gang->setObjectName(QString::fromUtf8("pushButton_gang"));
        pushButton_gang->setFont(font1);

        horizontalLayout->addWidget(pushButton_gang);

        pushButton_deng = new QPushButton(Form);
        pushButton_deng->setObjectName(QString::fromUtf8("pushButton_deng"));
        pushButton_deng->setFont(font1);

        horizontalLayout->addWidget(pushButton_deng);

        pushButton_backspace = new QPushButton(Form);
        pushButton_backspace->setObjectName(QString::fromUtf8("pushButton_backspace"));
        pushButton_backspace->setFont(font1);

        horizontalLayout->addWidget(pushButton_backspace);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_q = new QPushButton(Form);
        pushButton_q->setObjectName(QString::fromUtf8("pushButton_q"));
        pushButton_q->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_q);

        pushButton_w = new QPushButton(Form);
        pushButton_w->setObjectName(QString::fromUtf8("pushButton_w"));
        pushButton_w->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_w);

        pushButton_e = new QPushButton(Form);
        pushButton_e->setObjectName(QString::fromUtf8("pushButton_e"));
        pushButton_e->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_e);

        pushButton_r = new QPushButton(Form);
        pushButton_r->setObjectName(QString::fromUtf8("pushButton_r"));
        pushButton_r->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_r);

        pushButton_t = new QPushButton(Form);
        pushButton_t->setObjectName(QString::fromUtf8("pushButton_t"));
        pushButton_t->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_t);

        pushButton_y = new QPushButton(Form);
        pushButton_y->setObjectName(QString::fromUtf8("pushButton_y"));
        pushButton_y->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_y);

        pushButton_u = new QPushButton(Form);
        pushButton_u->setObjectName(QString::fromUtf8("pushButton_u"));
        pushButton_u->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_u);

        pushButton_i = new QPushButton(Form);
        pushButton_i->setObjectName(QString::fromUtf8("pushButton_i"));
        pushButton_i->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_i);

        pushButton_o = new QPushButton(Form);
        pushButton_o->setObjectName(QString::fromUtf8("pushButton_o"));
        pushButton_o->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_o);

        pushButton_p = new QPushButton(Form);
        pushButton_p->setObjectName(QString::fromUtf8("pushButton_p"));
        pushButton_p->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_p);

        pushButton_zuokuo = new QPushButton(Form);
        pushButton_zuokuo->setObjectName(QString::fromUtf8("pushButton_zuokuo"));
        pushButton_zuokuo->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_zuokuo);

        pushButton_youkuo = new QPushButton(Form);
        pushButton_youkuo->setObjectName(QString::fromUtf8("pushButton_youkuo"));
        pushButton_youkuo->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_youkuo);

        pushButton_backsplash = new QPushButton(Form);
        pushButton_backsplash->setObjectName(QString::fromUtf8("pushButton_backsplash"));
        pushButton_backsplash->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_backsplash);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        pushButton_a = new QPushButton(Form);
        pushButton_a->setObjectName(QString::fromUtf8("pushButton_a"));
        pushButton_a->setFont(font1);

        horizontalLayout_4->addWidget(pushButton_a);

        pushButton_s = new QPushButton(Form);
        pushButton_s->setObjectName(QString::fromUtf8("pushButton_s"));
        pushButton_s->setFont(font1);

        horizontalLayout_4->addWidget(pushButton_s);

        pushButton_d = new QPushButton(Form);
        pushButton_d->setObjectName(QString::fromUtf8("pushButton_d"));
        pushButton_d->setFont(font1);

        horizontalLayout_4->addWidget(pushButton_d);

        pushButton_f = new QPushButton(Form);
        pushButton_f->setObjectName(QString::fromUtf8("pushButton_f"));
        pushButton_f->setFont(font1);

        horizontalLayout_4->addWidget(pushButton_f);

        pushButton_g = new QPushButton(Form);
        pushButton_g->setObjectName(QString::fromUtf8("pushButton_g"));
        pushButton_g->setFont(font1);

        horizontalLayout_4->addWidget(pushButton_g);

        pushButton_h = new QPushButton(Form);
        pushButton_h->setObjectName(QString::fromUtf8("pushButton_h"));
        pushButton_h->setFont(font1);

        horizontalLayout_4->addWidget(pushButton_h);

        pushButton_j = new QPushButton(Form);
        pushButton_j->setObjectName(QString::fromUtf8("pushButton_j"));
        pushButton_j->setFont(font1);

        horizontalLayout_4->addWidget(pushButton_j);

        pushButton_k = new QPushButton(Form);
        pushButton_k->setObjectName(QString::fromUtf8("pushButton_k"));
        pushButton_k->setFont(font1);

        horizontalLayout_4->addWidget(pushButton_k);

        pushButton_l = new QPushButton(Form);
        pushButton_l->setObjectName(QString::fromUtf8("pushButton_l"));
        pushButton_l->setFont(font1);

        horizontalLayout_4->addWidget(pushButton_l);

        pushButton_semicolon = new QPushButton(Form);
        pushButton_semicolon->setObjectName(QString::fromUtf8("pushButton_semicolon"));
        pushButton_semicolon->setFont(font1);

        horizontalLayout_4->addWidget(pushButton_semicolon);

        pushButton_quote = new QPushButton(Form);
        pushButton_quote->setObjectName(QString::fromUtf8("pushButton_quote"));
        pushButton_quote->setFont(font1);

        horizontalLayout_4->addWidget(pushButton_quote);

        pushButton_enter = new QPushButton(Form);
        pushButton_enter->setObjectName(QString::fromUtf8("pushButton_enter"));
        pushButton_enter->setFont(font1);

        horizontalLayout_4->addWidget(pushButton_enter);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        pushButton_z = new QPushButton(Form);
        pushButton_z->setObjectName(QString::fromUtf8("pushButton_z"));
        pushButton_z->setFont(font1);

        horizontalLayout_3->addWidget(pushButton_z);

        pushButton_x = new QPushButton(Form);
        pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));
        pushButton_x->setFont(font1);

        horizontalLayout_3->addWidget(pushButton_x);

        pushButton_c = new QPushButton(Form);
        pushButton_c->setObjectName(QString::fromUtf8("pushButton_c"));
        pushButton_c->setFont(font1);

        horizontalLayout_3->addWidget(pushButton_c);

        pushButton_v = new QPushButton(Form);
        pushButton_v->setObjectName(QString::fromUtf8("pushButton_v"));
        pushButton_v->setFont(font1);

        horizontalLayout_3->addWidget(pushButton_v);

        pushButton_b = new QPushButton(Form);
        pushButton_b->setObjectName(QString::fromUtf8("pushButton_b"));
        pushButton_b->setFont(font1);

        horizontalLayout_3->addWidget(pushButton_b);

        pushButton_n = new QPushButton(Form);
        pushButton_n->setObjectName(QString::fromUtf8("pushButton_n"));
        pushButton_n->setFont(font1);

        horizontalLayout_3->addWidget(pushButton_n);

        pushButton_m = new QPushButton(Form);
        pushButton_m->setObjectName(QString::fromUtf8("pushButton_m"));
        pushButton_m->setFont(font1);

        horizontalLayout_3->addWidget(pushButton_m);

        pushButton_comma = new QPushButton(Form);
        pushButton_comma->setObjectName(QString::fromUtf8("pushButton_comma"));
        pushButton_comma->setFont(font1);

        horizontalLayout_3->addWidget(pushButton_comma);

        pushButton_period = new QPushButton(Form);
        pushButton_period->setObjectName(QString::fromUtf8("pushButton_period"));
        pushButton_period->setFont(font1);

        horizontalLayout_3->addWidget(pushButton_period);

        pushButton_splash = new QPushButton(Form);
        pushButton_splash->setObjectName(QString::fromUtf8("pushButton_splash"));
        pushButton_splash->setFont(font1);

        horizontalLayout_3->addWidget(pushButton_splash);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        pushButton_shift = new QPushButton(Form);
        pushButton_shift->setObjectName(QString::fromUtf8("pushButton_shift"));
        pushButton_shift->setFont(font1);

        horizontalLayout_5->addWidget(pushButton_shift);

        pushButton_whitespace = new QPushButton(Form);
        pushButton_whitespace->setObjectName(QString::fromUtf8("pushButton_whitespace"));
        pushButton_whitespace->setFont(font1);

        horizontalLayout_5->addWidget(pushButton_whitespace);

        pushButton_is_hanzi = new QPushButton(Form);
        pushButton_is_hanzi->setObjectName(QString::fromUtf8("pushButton_is_hanzi"));
        pushButton_is_hanzi->setFont(font1);
        pushButton_is_hanzi->setFlat(false);

        horizontalLayout_5->addWidget(pushButton_is_hanzi);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0, QApplication::UnicodeUTF8));
        lineEdit_window->setText(QString());
        lineEdit_pinyin->setText(QString());
        pushButton_CANCEL->setText(QApplication::translate("Form", "cancel", 0, QApplication::UnicodeUTF8));
        pushButton_CONFIRM->setText(QApplication::translate("Form", "ok", 0, QApplication::UnicodeUTF8));
        pushButton_hanzi_left->setText(QApplication::translate("Form", "<<", 0, QApplication::UnicodeUTF8));
        pushButton_hanzi_1->setText(QString());
        pushButton_hanzi_2->setText(QString());
        pushButton_hanzi_3->setText(QString());
        pushButton_hanzi_4->setText(QString());
        pushButton_hanzi_5->setText(QString());
        pushButton_hanzi_6->setText(QString());
        pushButton_hanzi_7->setText(QString());
        pushButton_hanzi_8->setText(QString());
        pushButton_hanzi_right->setText(QApplication::translate("Form", ">>", 0, QApplication::UnicodeUTF8));
        pushButton_n1->setText(QString());
        pushButton_n2->setText(QString());
        pushButton_n3->setText(QString());
        pushButton_n4->setText(QString());
        pushButton_n5->setText(QString());
        pushButton_n6->setText(QString());
        pushButton_n7->setText(QString());
        pushButton_n8->setText(QString());
        pushButton_n9->setText(QString());
        pushButton_n0->setText(QString());
        pushButton_gang->setText(QApplication::translate("Form", "-", 0, QApplication::UnicodeUTF8));
        pushButton_deng->setText(QApplication::translate("Form", "=", 0, QApplication::UnicodeUTF8));
        pushButton_backspace->setText(QString());
        pushButton_q->setText(QString());
        pushButton_w->setText(QString());
        pushButton_e->setText(QString());
        pushButton_r->setText(QString());
        pushButton_t->setText(QString());
        pushButton_y->setText(QString());
        pushButton_u->setText(QString());
        pushButton_i->setText(QString());
        pushButton_o->setText(QString());
        pushButton_p->setText(QString());
        pushButton_zuokuo->setText(QApplication::translate("Form", "[", 0, QApplication::UnicodeUTF8));
        pushButton_youkuo->setText(QApplication::translate("Form", "]", 0, QApplication::UnicodeUTF8));
        pushButton_backsplash->setText(QApplication::translate("Form", "\\", 0, QApplication::UnicodeUTF8));
        pushButton_a->setText(QString());
        pushButton_s->setText(QString());
        pushButton_d->setText(QString());
        pushButton_f->setText(QString());
        pushButton_g->setText(QString());
        pushButton_h->setText(QString());
        pushButton_j->setText(QString());
        pushButton_k->setText(QString());
        pushButton_l->setText(QString());
        pushButton_semicolon->setText(QApplication::translate("Form", ";", 0, QApplication::UnicodeUTF8));
        pushButton_quote->setText(QApplication::translate("Form", "'", 0, QApplication::UnicodeUTF8));
        pushButton_enter->setText(QString());
        pushButton_z->setText(QString());
        pushButton_x->setText(QString());
        pushButton_c->setText(QString());
        pushButton_v->setText(QString());
        pushButton_b->setText(QString());
        pushButton_n->setText(QString());
        pushButton_m->setText(QString());
        pushButton_comma->setText(QApplication::translate("Form", ",", 0, QApplication::UnicodeUTF8));
        pushButton_period->setText(QApplication::translate("Form", ".", 0, QApplication::UnicodeUTF8));
        pushButton_splash->setText(QApplication::translate("Form", "/", 0, QApplication::UnicodeUTF8));
        pushButton_shift->setText(QString());
        pushButton_whitespace->setText(QString());
        pushButton_is_hanzi->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HZKEYB_H
