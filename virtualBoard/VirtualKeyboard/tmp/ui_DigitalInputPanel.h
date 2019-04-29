/********************************************************************************
** Form generated from reading UI file 'DigitalInputPanel.ui'
**
** Created: Fri Apr 26 17:15:06 2019
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIGITALINPUTPANEL_H
#define UI_DIGITALINPUTPANEL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DigitalInputPanel
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget_background;
    QGridLayout *gridLayout;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_digital_text;
    QPushButton *panelButton_enter;
    QPushButton *panelButton_cancel;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *panelButton_1;
    QPushButton *panelButton_2;
    QPushButton *panelButton_3;
    QPushButton *panelButton_4;
    QPushButton *panelButton_5;
    QPushButton *panelButton_6;
    QPushButton *panelButton_7;
    QPushButton *panelButton_8;
    QPushButton *panelButton_9;
    QPushButton *panelButton_0;
    QPushButton *panelButton_del;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *panelButton_Q;
    QPushButton *panelButton_W;
    QPushButton *panelButton_E;
    QPushButton *panelButton_R;
    QPushButton *panelButton_T;
    QPushButton *panelButton_Y;
    QPushButton *panelButton_U;
    QPushButton *panelButton_I;
    QPushButton *panelButton_O;
    QPushButton *panelButton_P;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *panelButton_A;
    QPushButton *panelButton_S;
    QPushButton *panelButton_D;
    QPushButton *panelButton_F;
    QPushButton *panelButton_G;
    QPushButton *panelButton_H;
    QPushButton *panelButton_J;
    QPushButton *panelButton_K;
    QPushButton *panelButton_L;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *panelButton_caps;
    QPushButton *panelButton_Z;
    QPushButton *panelButton_X;
    QPushButton *panelButton_C;
    QPushButton *panelButton_V;
    QPushButton *panelButton_B;
    QPushButton *panelButton_N;
    QPushButton *panelButton_M;
    QPushButton *panelButton_dot;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *panelButton_symbol;
    QPushButton *panelButton_space;
    QPushButton *panelButton_minus;
    QPushButton *panelButton_plus;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QWidget *DigitalInputPanel)
    {
        if (DigitalInputPanel->objectName().isEmpty())
            DigitalInputPanel->setObjectName(QString::fromUtf8("DigitalInputPanel"));
        DigitalInputPanel->resize(880, 413);
        DigitalInputPanel->setStyleSheet(QString::fromUtf8("QLabel#label_digital_text\n"
"{\n"
"	font-size:40px;\n"
"\n"
"}\n"
"\n"
"QWidget#widget_background\n"
"{\n"
"	background-color: #DEDEDE;\n"
"	border: 1px solid #FFFFFF;\n"
"}\n"
"QLabel#label_title\n"
"{\n"
"	font-size:  22px;\n"
"	color: #000000;\n"
"}\n"
"\n"
"QLabel#label_digital_text\n"
"{\n"
"	min-height: 40px;\n"
"	max-height: 40px;\n"
"	min-width: 650px;\n"
"	max-width: 650px;\n"
"	padding-left: 10px;\n"
"	border-image: url(:/images/input_label.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_enter, #panelButton_cancel\n"
"{\n"
"	min-height: 38px;\n"
"	min-width: 63px;\n"
"	max-height: 38px;\n"
"	max-width: 63px;\n"
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
"QPushButton:pressed#panelButton_cancel\n"
"{\n"
"	border-image: url("
                        ":/images/cancel_selected.png);\n"
"}\n"
"\n"
"QPushButton[belong=\"digital_panel\"]\n"
"{\n"
"	min-width: 70px;\n"
"	max-width: 70px;\n"
"	min-height: 57px;\n"
"	max-height: 57px;\n"
"}\n"
"\n"
"QPushButton#panelButton_0\n"
"{\n"
"	border-image: url(:/images/digital_normal_0.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_0\n"
"{\n"
"	border-image: url(:/images/digital_hover_0.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_1\n"
"{\n"
"	border-image: url(:/images/digital_normal_1.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_1\n"
"{\n"
"	border-image: url(:/images/digital_hover_1.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_2\n"
"{\n"
"	border-image: url(:/images/digital_normal_2.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_2\n"
"{\n"
"	border-image: url(:/images/digital_hover_2.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_3\n"
"{\n"
"	border-image: url(:/images/digital_normal_3.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_3\n"
"{\n"
"	border-image: url(:/images/digital_hover_3.png);\n"
"}\n"
""
                        "\n"
"QPushButton#panelButton_4\n"
"{\n"
"	border-image: url(:/images/digital_normal_4.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_4\n"
"{\n"
"	border-image: url(:/images/digital_hover_4.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_5\n"
"{\n"
"	border-image: url(:/images/digital_normal_5.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_5\n"
"{\n"
"	border-image: url(:/images/digital_hover_5.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_6\n"
"{\n"
"	border-image: url(:/images/digital_normal_6.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_6\n"
"{\n"
"	border-image: url(:/images/digital_hover_6.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_7\n"
"{\n"
"	border-image: url(:/images/digital_normal_7.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_7\n"
"{\n"
"	border-image: url(:/images/digital_hover_7.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_8\n"
"{\n"
"	border-image: url(:/images/digital_normal_8.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_8\n"
"{\n"
"	border-image: url(:/images/digital_hove"
                        "r_8.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_9\n"
"{\n"
"	border-image: url(:/images/digital_normal_9.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_9\n"
"{\n"
"	border-image: url(:/images/digital_hover_9.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_A\n"
"{\n"
"	border-image: url(:/images/digital_normal_A.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_A\n"
"{\n"
"	border-image: url(:/images/digital_hover_A.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_B\n"
"{\n"
"	border-image: url(:/images/digital_normal_B.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_B\n"
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
"QPushButton#panelButton_C\n"
"{\n"
"	border-image: url(:/images/digital_normal_C.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_C\n"
"{\n"
"	border-image: u"
                        "rl(:/images/digital_hover_C.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_D\n"
"{\n"
"	border-image: url(:/images/digital_normal_D.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_D\n"
"{\n"
"	border-image: url(:/images/digital_hover_D.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_E\n"
"{\n"
"	border-image: url(:/images/digital_normal_E.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_E\n"
"{\n"
"	border-image: url(:/images/digital_hover_E.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_F\n"
"{\n"
"	border-image: url(:/images/digital_normal_F.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_F\n"
"{\n"
"	border-image: url(:/images/digital_hover_F.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_G\n"
"{\n"
"	border-image: url(:/images/digital_normal_G.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_G\n"
"{\n"
"	border-image: url(:/images/digital_hover_G.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_H\n"
"{\n"
"	border-image: url(:/images/digital_normal_H.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_H\n"
"{\n"
""
                        "	border-image: url(:/images/digital_hover_H.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_I\n"
"{\n"
"	border-image: url(:/images/digital_normal_I.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_I\n"
"{\n"
"	border-image: url(:/images/digital_hover_I.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_J\n"
"{\n"
"	border-image: url(:/images/digital_normal_J.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_J\n"
"{\n"
"	border-image: url(:/images/digital_hover_J.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_K\n"
"{\n"
"	border-image: url(:/images/digital_normal_K.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_K\n"
"{\n"
"	border-image: url(:/images/digital_hover_K.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_L\n"
"{\n"
"	border-image: url(:/images/digital_normal_L.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_L\n"
"{\n"
"	border-image: url(:/images/digital_hover_L.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_M\n"
"{\n"
"	border-image: url(:/images/digital_normal_M.png);\n"
"}\n"
"\n"
"QPushButton:hover#pane"
                        "lButton_M\n"
"{\n"
"	border-image: url(:/images/digital_hover_M.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_N\n"
"{\n"
"	border-image: url(:/images/digital_normal_N.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_N\n"
"{\n"
"	border-image: url(:/images/digital_hover_N.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_O\n"
"{\n"
"	border-image: url(:/images/digital_normal_O.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_O\n"
"{\n"
"	border-image: url(:/images/digital_hover_O.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_P\n"
"{\n"
"	border-image: url(:/images/digital_normal_P.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_P\n"
"{\n"
"	border-image: url(:/images/digital_hover_P.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_Q\n"
"{\n"
"	border-image: url(:/images/digital_normal_Q.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_Q\n"
"{\n"
"	border-image: url(:/images/digital_hover_Q.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_R\n"
"{\n"
"	border-image: url(:/images/digital_normal_R.png);\n"
"}\n"
"\n"
"QP"
                        "ushButton:hover#panelButton_R\n"
"{\n"
"	border-image: url(:/images/digital_hover_R.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_S\n"
"{\n"
"	border-image: url(:/images/digital_normal_S.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_S\n"
"{\n"
"	border-image: url(:/images/digital_hover_S.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_T\n"
"{\n"
"	border-image: url(:/images/digital_normal_T.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_T\n"
"{\n"
"	border-image: url(:/images/digital_hover_T.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_U\n"
"{\n"
"	border-image: url(:/images/digital_normal_U.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_U\n"
"{\n"
"	border-image: url(:/images/digital_hover_U.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_V\n"
"{\n"
"	border-image: url(:/images/digital_normal_V.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_V\n"
"{\n"
"	border-image: url(:/images/digital_hover_V.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_W\n"
"{\n"
"	border-image: url(:/images/digital_normal_W.png"
                        ");\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_W\n"
"{\n"
"	border-image: url(:/images/digital_hover_W.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_X\n"
"{\n"
"	border-image: url(:/images/digital_normal_X.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_X\n"
"{\n"
"	border-image: url(:/images/digital_hover_X.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_Y\n"
"{\n"
"	border-image: url(:/images/digital_normal_Y.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_Y\n"
"{\n"
"	border-image: url(:/images/digital_hover_Y.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_Z\n"
"{\n"
"	border-image: url(:/images/digital_normal_Z.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_Z\n"
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
"	bord"
                        "er-image: url(:/images/digital_normal_caps.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_caps\n"
"{\n"
"	border-image: url(:/images/digital_hover_caps.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_space\n"
"{\n"
"	min-width: 550px;\n"
"	max-width: 550px;\n"
"	border-image: url(:/images/digital_normal_space.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_space\n"
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
"QPushButton:hover#panelBu"
                        "tton_dot\n"
"{\n"
"	border-image: url(:/images/digital_hover_dot.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_del\n"
"{\n"
"	border-image: url(:/images/del_normal.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_del\n"
"{\n"
"	border-image: url(:/images/del_hover.png);\n"
"}"));
        horizontalLayout = new QHBoxLayout(DigitalInputPanel);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(6, 6, 6, 6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget_background = new QWidget(DigitalInputPanel);
        widget_background->setObjectName(QString::fromUtf8("widget_background"));
        gridLayout = new QGridLayout(widget_background);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_6 = new QWidget(widget_background);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_digital_text = new QLabel(widget_6);
        label_digital_text->setObjectName(QString::fromUtf8("label_digital_text"));
        label_digital_text->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_6->addWidget(label_digital_text);

        panelButton_enter = new QPushButton(widget_6);
        panelButton_enter->setObjectName(QString::fromUtf8("panelButton_enter"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(panelButton_enter->sizePolicy().hasHeightForWidth());
        panelButton_enter->setSizePolicy(sizePolicy);
        panelButton_enter->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_6->addWidget(panelButton_enter);

        panelButton_cancel = new QPushButton(widget_6);
        panelButton_cancel->setObjectName(QString::fromUtf8("panelButton_cancel"));
        sizePolicy.setHeightForWidth(panelButton_cancel->sizePolicy().hasHeightForWidth());
        panelButton_cancel->setSizePolicy(sizePolicy);
        panelButton_cancel->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_6->addWidget(panelButton_cancel);


        gridLayout->addWidget(widget_6, 0, 0, 1, 1);

        widget_7 = new QWidget(widget_background);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        verticalLayout = new QVBoxLayout(widget_7);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        panelButton_1 = new QPushButton(widget_7);
        panelButton_1->setObjectName(QString::fromUtf8("panelButton_1"));
        sizePolicy.setHeightForWidth(panelButton_1->sizePolicy().hasHeightForWidth());
        panelButton_1->setSizePolicy(sizePolicy);
        panelButton_1->setMinimumSize(QSize(70, 57));
        panelButton_1->setFocusPolicy(Qt::NoFocus);
        panelButton_1->setProperty("ButtonValue", QVariant(QChar(49)));

        horizontalLayout_2->addWidget(panelButton_1);

        panelButton_2 = new QPushButton(widget_7);
        panelButton_2->setObjectName(QString::fromUtf8("panelButton_2"));
        sizePolicy.setHeightForWidth(panelButton_2->sizePolicy().hasHeightForWidth());
        panelButton_2->setSizePolicy(sizePolicy);
        panelButton_2->setMinimumSize(QSize(70, 57));
        panelButton_2->setFocusPolicy(Qt::NoFocus);
        panelButton_2->setProperty("ButtonValue", QVariant(QChar(50)));

        horizontalLayout_2->addWidget(panelButton_2);

        panelButton_3 = new QPushButton(widget_7);
        panelButton_3->setObjectName(QString::fromUtf8("panelButton_3"));
        sizePolicy.setHeightForWidth(panelButton_3->sizePolicy().hasHeightForWidth());
        panelButton_3->setSizePolicy(sizePolicy);
        panelButton_3->setMinimumSize(QSize(70, 57));
        panelButton_3->setFocusPolicy(Qt::NoFocus);
        panelButton_3->setProperty("ButtonValue", QVariant(QChar(51)));

        horizontalLayout_2->addWidget(panelButton_3);

        panelButton_4 = new QPushButton(widget_7);
        panelButton_4->setObjectName(QString::fromUtf8("panelButton_4"));
        sizePolicy.setHeightForWidth(panelButton_4->sizePolicy().hasHeightForWidth());
        panelButton_4->setSizePolicy(sizePolicy);
        panelButton_4->setMinimumSize(QSize(70, 57));
        panelButton_4->setFocusPolicy(Qt::NoFocus);
        panelButton_4->setProperty("ButtonValue", QVariant(QChar(52)));

        horizontalLayout_2->addWidget(panelButton_4);

        panelButton_5 = new QPushButton(widget_7);
        panelButton_5->setObjectName(QString::fromUtf8("panelButton_5"));
        sizePolicy.setHeightForWidth(panelButton_5->sizePolicy().hasHeightForWidth());
        panelButton_5->setSizePolicy(sizePolicy);
        panelButton_5->setMinimumSize(QSize(70, 57));
        panelButton_5->setFocusPolicy(Qt::NoFocus);
        panelButton_5->setProperty("ButtonValue", QVariant(QChar(53)));

        horizontalLayout_2->addWidget(panelButton_5);

        panelButton_6 = new QPushButton(widget_7);
        panelButton_6->setObjectName(QString::fromUtf8("panelButton_6"));
        sizePolicy.setHeightForWidth(panelButton_6->sizePolicy().hasHeightForWidth());
        panelButton_6->setSizePolicy(sizePolicy);
        panelButton_6->setMinimumSize(QSize(70, 57));
        panelButton_6->setFocusPolicy(Qt::NoFocus);
        panelButton_6->setProperty("ButtonValue", QVariant(QChar(54)));

        horizontalLayout_2->addWidget(panelButton_6);

        panelButton_7 = new QPushButton(widget_7);
        panelButton_7->setObjectName(QString::fromUtf8("panelButton_7"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(panelButton_7->sizePolicy().hasHeightForWidth());
        panelButton_7->setSizePolicy(sizePolicy1);
        panelButton_7->setMinimumSize(QSize(70, 57));
        panelButton_7->setFocusPolicy(Qt::NoFocus);
        panelButton_7->setProperty("ButtonValue", QVariant(QChar(55)));

        horizontalLayout_2->addWidget(panelButton_7);

        panelButton_8 = new QPushButton(widget_7);
        panelButton_8->setObjectName(QString::fromUtf8("panelButton_8"));
        sizePolicy.setHeightForWidth(panelButton_8->sizePolicy().hasHeightForWidth());
        panelButton_8->setSizePolicy(sizePolicy);
        panelButton_8->setMinimumSize(QSize(70, 57));
        panelButton_8->setFocusPolicy(Qt::NoFocus);
        panelButton_8->setProperty("ButtonValue", QVariant(QChar(56)));

        horizontalLayout_2->addWidget(panelButton_8);

        panelButton_9 = new QPushButton(widget_7);
        panelButton_9->setObjectName(QString::fromUtf8("panelButton_9"));
        sizePolicy.setHeightForWidth(panelButton_9->sizePolicy().hasHeightForWidth());
        panelButton_9->setSizePolicy(sizePolicy);
        panelButton_9->setMinimumSize(QSize(70, 57));
        panelButton_9->setFocusPolicy(Qt::NoFocus);
        panelButton_9->setProperty("ButtonValue", QVariant(QChar(57)));

        horizontalLayout_2->addWidget(panelButton_9);

        panelButton_0 = new QPushButton(widget_7);
        panelButton_0->setObjectName(QString::fromUtf8("panelButton_0"));
        sizePolicy.setHeightForWidth(panelButton_0->sizePolicy().hasHeightForWidth());
        panelButton_0->setSizePolicy(sizePolicy);
        panelButton_0->setMinimumSize(QSize(70, 57));
        panelButton_0->setMaximumSize(QSize(70, 57));
        panelButton_0->setFocusPolicy(Qt::NoFocus);
        panelButton_0->setProperty("ButtonValue", QVariant(QChar(48)));

        horizontalLayout_2->addWidget(panelButton_0);

        panelButton_del = new QPushButton(widget_7);
        panelButton_del->setObjectName(QString::fromUtf8("panelButton_del"));
        sizePolicy.setHeightForWidth(panelButton_del->sizePolicy().hasHeightForWidth());
        panelButton_del->setSizePolicy(sizePolicy);
        panelButton_del->setMinimumSize(QSize(70, 57));
        panelButton_del->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(panelButton_del);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        panelButton_Q = new QPushButton(widget_7);
        panelButton_Q->setObjectName(QString::fromUtf8("panelButton_Q"));
        sizePolicy.setHeightForWidth(panelButton_Q->sizePolicy().hasHeightForWidth());
        panelButton_Q->setSizePolicy(sizePolicy);
        panelButton_Q->setMinimumSize(QSize(70, 57));
        panelButton_Q->setMaximumSize(QSize(70, 57));
        panelButton_Q->setFocusPolicy(Qt::NoFocus);
        panelButton_Q->setStyleSheet(QString::fromUtf8(""));
        panelButton_Q->setProperty("ButtonValue", QVariant(QChar(81)));

        horizontalLayout_3->addWidget(panelButton_Q);

        panelButton_W = new QPushButton(widget_7);
        panelButton_W->setObjectName(QString::fromUtf8("panelButton_W"));
        sizePolicy.setHeightForWidth(panelButton_W->sizePolicy().hasHeightForWidth());
        panelButton_W->setSizePolicy(sizePolicy);
        panelButton_W->setMinimumSize(QSize(70, 57));
        panelButton_W->setMaximumSize(QSize(70, 57));
        panelButton_W->setFocusPolicy(Qt::NoFocus);
        panelButton_W->setProperty("ButtonValue", QVariant(QChar(87)));

        horizontalLayout_3->addWidget(panelButton_W);

        panelButton_E = new QPushButton(widget_7);
        panelButton_E->setObjectName(QString::fromUtf8("panelButton_E"));
        sizePolicy.setHeightForWidth(panelButton_E->sizePolicy().hasHeightForWidth());
        panelButton_E->setSizePolicy(sizePolicy);
        panelButton_E->setMinimumSize(QSize(70, 57));
        panelButton_E->setMaximumSize(QSize(70, 57));
        panelButton_E->setFocusPolicy(Qt::NoFocus);
        panelButton_E->setProperty("ButtonValue", QVariant(QChar(69)));

        horizontalLayout_3->addWidget(panelButton_E);

        panelButton_R = new QPushButton(widget_7);
        panelButton_R->setObjectName(QString::fromUtf8("panelButton_R"));
        sizePolicy.setHeightForWidth(panelButton_R->sizePolicy().hasHeightForWidth());
        panelButton_R->setSizePolicy(sizePolicy);
        panelButton_R->setMinimumSize(QSize(70, 57));
        panelButton_R->setMaximumSize(QSize(70, 57));
        panelButton_R->setFocusPolicy(Qt::NoFocus);
        panelButton_R->setProperty("ButtonValue", QVariant(QChar(82)));

        horizontalLayout_3->addWidget(panelButton_R);

        panelButton_T = new QPushButton(widget_7);
        panelButton_T->setObjectName(QString::fromUtf8("panelButton_T"));
        sizePolicy.setHeightForWidth(panelButton_T->sizePolicy().hasHeightForWidth());
        panelButton_T->setSizePolicy(sizePolicy);
        panelButton_T->setMinimumSize(QSize(70, 57));
        panelButton_T->setMaximumSize(QSize(70, 57));
        panelButton_T->setFocusPolicy(Qt::NoFocus);
        panelButton_T->setProperty("ButtonValue", QVariant(QChar(84)));

        horizontalLayout_3->addWidget(panelButton_T);

        panelButton_Y = new QPushButton(widget_7);
        panelButton_Y->setObjectName(QString::fromUtf8("panelButton_Y"));
        sizePolicy.setHeightForWidth(panelButton_Y->sizePolicy().hasHeightForWidth());
        panelButton_Y->setSizePolicy(sizePolicy);
        panelButton_Y->setMinimumSize(QSize(70, 57));
        panelButton_Y->setMaximumSize(QSize(70, 57));
        panelButton_Y->setFocusPolicy(Qt::NoFocus);
        panelButton_Y->setProperty("ButtonValue", QVariant(QChar(89)));

        horizontalLayout_3->addWidget(panelButton_Y);

        panelButton_U = new QPushButton(widget_7);
        panelButton_U->setObjectName(QString::fromUtf8("panelButton_U"));
        sizePolicy.setHeightForWidth(panelButton_U->sizePolicy().hasHeightForWidth());
        panelButton_U->setSizePolicy(sizePolicy);
        panelButton_U->setMinimumSize(QSize(70, 57));
        panelButton_U->setMaximumSize(QSize(70, 57));
        panelButton_U->setFocusPolicy(Qt::NoFocus);
        panelButton_U->setProperty("ButtonValue", QVariant(QChar(85)));

        horizontalLayout_3->addWidget(panelButton_U);

        panelButton_I = new QPushButton(widget_7);
        panelButton_I->setObjectName(QString::fromUtf8("panelButton_I"));
        sizePolicy.setHeightForWidth(panelButton_I->sizePolicy().hasHeightForWidth());
        panelButton_I->setSizePolicy(sizePolicy);
        panelButton_I->setMinimumSize(QSize(70, 57));
        panelButton_I->setMaximumSize(QSize(70, 57));
        panelButton_I->setFocusPolicy(Qt::NoFocus);
        panelButton_I->setProperty("ButtonValue", QVariant(QChar(73)));

        horizontalLayout_3->addWidget(panelButton_I);

        panelButton_O = new QPushButton(widget_7);
        panelButton_O->setObjectName(QString::fromUtf8("panelButton_O"));
        sizePolicy.setHeightForWidth(panelButton_O->sizePolicy().hasHeightForWidth());
        panelButton_O->setSizePolicy(sizePolicy);
        panelButton_O->setMinimumSize(QSize(70, 57));
        panelButton_O->setMaximumSize(QSize(70, 57));
        panelButton_O->setFocusPolicy(Qt::NoFocus);
        panelButton_O->setProperty("ButtonValue", QVariant(QChar(79)));

        horizontalLayout_3->addWidget(panelButton_O);

        panelButton_P = new QPushButton(widget_7);
        panelButton_P->setObjectName(QString::fromUtf8("panelButton_P"));
        sizePolicy.setHeightForWidth(panelButton_P->sizePolicy().hasHeightForWidth());
        panelButton_P->setSizePolicy(sizePolicy);
        panelButton_P->setMinimumSize(QSize(70, 57));
        panelButton_P->setMaximumSize(QSize(70, 57));
        panelButton_P->setFocusPolicy(Qt::NoFocus);
        panelButton_P->setProperty("ButtonValue", QVariant(QChar(80)));

        horizontalLayout_3->addWidget(panelButton_P);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        panelButton_A = new QPushButton(widget_7);
        panelButton_A->setObjectName(QString::fromUtf8("panelButton_A"));
        sizePolicy.setHeightForWidth(panelButton_A->sizePolicy().hasHeightForWidth());
        panelButton_A->setSizePolicy(sizePolicy);
        panelButton_A->setMinimumSize(QSize(70, 57));
        panelButton_A->setMaximumSize(QSize(70, 57));
        panelButton_A->setFocusPolicy(Qt::NoFocus);
        panelButton_A->setProperty("ButtonValue", QVariant(QChar(65)));

        horizontalLayout_4->addWidget(panelButton_A);

        panelButton_S = new QPushButton(widget_7);
        panelButton_S->setObjectName(QString::fromUtf8("panelButton_S"));
        sizePolicy.setHeightForWidth(panelButton_S->sizePolicy().hasHeightForWidth());
        panelButton_S->setSizePolicy(sizePolicy);
        panelButton_S->setMinimumSize(QSize(70, 57));
        panelButton_S->setMaximumSize(QSize(70, 57));
        panelButton_S->setFocusPolicy(Qt::NoFocus);
        panelButton_S->setProperty("ButtonValue", QVariant(QChar(83)));

        horizontalLayout_4->addWidget(panelButton_S);

        panelButton_D = new QPushButton(widget_7);
        panelButton_D->setObjectName(QString::fromUtf8("panelButton_D"));
        sizePolicy.setHeightForWidth(panelButton_D->sizePolicy().hasHeightForWidth());
        panelButton_D->setSizePolicy(sizePolicy);
        panelButton_D->setMinimumSize(QSize(70, 57));
        panelButton_D->setMaximumSize(QSize(70, 57));
        panelButton_D->setFocusPolicy(Qt::NoFocus);
        panelButton_D->setProperty("ButtonValue", QVariant(QChar(68)));

        horizontalLayout_4->addWidget(panelButton_D);

        panelButton_F = new QPushButton(widget_7);
        panelButton_F->setObjectName(QString::fromUtf8("panelButton_F"));
        sizePolicy.setHeightForWidth(panelButton_F->sizePolicy().hasHeightForWidth());
        panelButton_F->setSizePolicy(sizePolicy);
        panelButton_F->setMinimumSize(QSize(70, 57));
        panelButton_F->setMaximumSize(QSize(70, 57));
        panelButton_F->setFocusPolicy(Qt::NoFocus);
        panelButton_F->setProperty("ButtonValue", QVariant(QChar(70)));

        horizontalLayout_4->addWidget(panelButton_F);

        panelButton_G = new QPushButton(widget_7);
        panelButton_G->setObjectName(QString::fromUtf8("panelButton_G"));
        sizePolicy.setHeightForWidth(panelButton_G->sizePolicy().hasHeightForWidth());
        panelButton_G->setSizePolicy(sizePolicy);
        panelButton_G->setMinimumSize(QSize(70, 57));
        panelButton_G->setMaximumSize(QSize(70, 57));
        panelButton_G->setFocusPolicy(Qt::NoFocus);
        panelButton_G->setProperty("ButtonValue", QVariant(QChar(71)));

        horizontalLayout_4->addWidget(panelButton_G);

        panelButton_H = new QPushButton(widget_7);
        panelButton_H->setObjectName(QString::fromUtf8("panelButton_H"));
        sizePolicy.setHeightForWidth(panelButton_H->sizePolicy().hasHeightForWidth());
        panelButton_H->setSizePolicy(sizePolicy);
        panelButton_H->setMinimumSize(QSize(70, 57));
        panelButton_H->setMaximumSize(QSize(70, 57));
        panelButton_H->setFocusPolicy(Qt::NoFocus);
        panelButton_H->setProperty("ButtonValue", QVariant(QChar(72)));

        horizontalLayout_4->addWidget(panelButton_H);

        panelButton_J = new QPushButton(widget_7);
        panelButton_J->setObjectName(QString::fromUtf8("panelButton_J"));
        sizePolicy.setHeightForWidth(panelButton_J->sizePolicy().hasHeightForWidth());
        panelButton_J->setSizePolicy(sizePolicy);
        panelButton_J->setMinimumSize(QSize(70, 57));
        panelButton_J->setMaximumSize(QSize(70, 57));
        panelButton_J->setFocusPolicy(Qt::NoFocus);
        panelButton_J->setProperty("ButtonValue", QVariant(QChar(74)));

        horizontalLayout_4->addWidget(panelButton_J);

        panelButton_K = new QPushButton(widget_7);
        panelButton_K->setObjectName(QString::fromUtf8("panelButton_K"));
        sizePolicy.setHeightForWidth(panelButton_K->sizePolicy().hasHeightForWidth());
        panelButton_K->setSizePolicy(sizePolicy);
        panelButton_K->setMinimumSize(QSize(70, 57));
        panelButton_K->setMaximumSize(QSize(70, 57));
        panelButton_K->setFocusPolicy(Qt::NoFocus);
        panelButton_K->setProperty("ButtonValue", QVariant(QChar(75)));

        horizontalLayout_4->addWidget(panelButton_K);

        panelButton_L = new QPushButton(widget_7);
        panelButton_L->setObjectName(QString::fromUtf8("panelButton_L"));
        sizePolicy.setHeightForWidth(panelButton_L->sizePolicy().hasHeightForWidth());
        panelButton_L->setSizePolicy(sizePolicy);
        panelButton_L->setMinimumSize(QSize(70, 57));
        panelButton_L->setMaximumSize(QSize(70, 57));
        panelButton_L->setFocusPolicy(Qt::NoFocus);
        panelButton_L->setProperty("ButtonValue", QVariant(QChar(76)));

        horizontalLayout_4->addWidget(panelButton_L);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        panelButton_caps = new QPushButton(widget_7);
        panelButton_caps->setObjectName(QString::fromUtf8("panelButton_caps"));
        sizePolicy.setHeightForWidth(panelButton_caps->sizePolicy().hasHeightForWidth());
        panelButton_caps->setSizePolicy(sizePolicy);
        panelButton_caps->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_5->addWidget(panelButton_caps);

        panelButton_Z = new QPushButton(widget_7);
        panelButton_Z->setObjectName(QString::fromUtf8("panelButton_Z"));
        sizePolicy.setHeightForWidth(panelButton_Z->sizePolicy().hasHeightForWidth());
        panelButton_Z->setSizePolicy(sizePolicy);
        panelButton_Z->setMinimumSize(QSize(70, 57));
        panelButton_Z->setMaximumSize(QSize(70, 57));
        panelButton_Z->setFocusPolicy(Qt::NoFocus);
        panelButton_Z->setProperty("ButtonValue", QVariant(QChar(90)));

        horizontalLayout_5->addWidget(panelButton_Z);

        panelButton_X = new QPushButton(widget_7);
        panelButton_X->setObjectName(QString::fromUtf8("panelButton_X"));
        sizePolicy.setHeightForWidth(panelButton_X->sizePolicy().hasHeightForWidth());
        panelButton_X->setSizePolicy(sizePolicy);
        panelButton_X->setMinimumSize(QSize(70, 57));
        panelButton_X->setMaximumSize(QSize(70, 57));
        panelButton_X->setFocusPolicy(Qt::NoFocus);
        panelButton_X->setProperty("ButtonValue", QVariant(QChar(88)));

        horizontalLayout_5->addWidget(panelButton_X);

        panelButton_C = new QPushButton(widget_7);
        panelButton_C->setObjectName(QString::fromUtf8("panelButton_C"));
        sizePolicy.setHeightForWidth(panelButton_C->sizePolicy().hasHeightForWidth());
        panelButton_C->setSizePolicy(sizePolicy);
        panelButton_C->setMinimumSize(QSize(70, 57));
        panelButton_C->setMaximumSize(QSize(70, 57));
        panelButton_C->setFocusPolicy(Qt::NoFocus);
        panelButton_C->setProperty("ButtonValue", QVariant(QChar(67)));

        horizontalLayout_5->addWidget(panelButton_C);

        panelButton_V = new QPushButton(widget_7);
        panelButton_V->setObjectName(QString::fromUtf8("panelButton_V"));
        sizePolicy.setHeightForWidth(panelButton_V->sizePolicy().hasHeightForWidth());
        panelButton_V->setSizePolicy(sizePolicy);
        panelButton_V->setMinimumSize(QSize(70, 57));
        panelButton_V->setMaximumSize(QSize(70, 57));
        panelButton_V->setFocusPolicy(Qt::NoFocus);
        panelButton_V->setProperty("ButtonValue", QVariant(QChar(86)));

        horizontalLayout_5->addWidget(panelButton_V);

        panelButton_B = new QPushButton(widget_7);
        panelButton_B->setObjectName(QString::fromUtf8("panelButton_B"));
        sizePolicy.setHeightForWidth(panelButton_B->sizePolicy().hasHeightForWidth());
        panelButton_B->setSizePolicy(sizePolicy);
        panelButton_B->setMinimumSize(QSize(70, 57));
        panelButton_B->setMaximumSize(QSize(70, 57));
        panelButton_B->setFocusPolicy(Qt::NoFocus);
        panelButton_B->setProperty("ButtonValue", QVariant(QChar(66)));

        horizontalLayout_5->addWidget(panelButton_B);

        panelButton_N = new QPushButton(widget_7);
        panelButton_N->setObjectName(QString::fromUtf8("panelButton_N"));
        sizePolicy.setHeightForWidth(panelButton_N->sizePolicy().hasHeightForWidth());
        panelButton_N->setSizePolicy(sizePolicy);
        panelButton_N->setMinimumSize(QSize(70, 57));
        panelButton_N->setMaximumSize(QSize(70, 57));
        panelButton_N->setFocusPolicy(Qt::NoFocus);
        panelButton_N->setProperty("ButtonValue", QVariant(QChar(78)));

        horizontalLayout_5->addWidget(panelButton_N);

        panelButton_M = new QPushButton(widget_7);
        panelButton_M->setObjectName(QString::fromUtf8("panelButton_M"));
        sizePolicy.setHeightForWidth(panelButton_M->sizePolicy().hasHeightForWidth());
        panelButton_M->setSizePolicy(sizePolicy);
        panelButton_M->setMinimumSize(QSize(70, 57));
        panelButton_M->setMaximumSize(QSize(70, 57));
        panelButton_M->setFocusPolicy(Qt::NoFocus);
        panelButton_M->setProperty("ButtonValue", QVariant(QChar(77)));

        horizontalLayout_5->addWidget(panelButton_M);

        panelButton_dot = new QPushButton(widget_7);
        panelButton_dot->setObjectName(QString::fromUtf8("panelButton_dot"));
        sizePolicy.setHeightForWidth(panelButton_dot->sizePolicy().hasHeightForWidth());
        panelButton_dot->setSizePolicy(sizePolicy);
        panelButton_dot->setMinimumSize(QSize(70, 57));
        panelButton_dot->setFocusPolicy(Qt::NoFocus);
        panelButton_dot->setProperty("ButtonValue", QVariant(QChar(46)));

        horizontalLayout_5->addWidget(panelButton_dot);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        panelButton_symbol = new QPushButton(widget_7);
        panelButton_symbol->setObjectName(QString::fromUtf8("panelButton_symbol"));
        sizePolicy.setHeightForWidth(panelButton_symbol->sizePolicy().hasHeightForWidth());
        panelButton_symbol->setSizePolicy(sizePolicy);
        panelButton_symbol->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_8->addWidget(panelButton_symbol);

        panelButton_space = new QPushButton(widget_7);
        panelButton_space->setObjectName(QString::fromUtf8("panelButton_space"));
        sizePolicy.setHeightForWidth(panelButton_space->sizePolicy().hasHeightForWidth());
        panelButton_space->setSizePolicy(sizePolicy);
        panelButton_space->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_8->addWidget(panelButton_space);

        panelButton_minus = new QPushButton(widget_7);
        panelButton_minus->setObjectName(QString::fromUtf8("panelButton_minus"));
        sizePolicy.setHeightForWidth(panelButton_minus->sizePolicy().hasHeightForWidth());
        panelButton_minus->setSizePolicy(sizePolicy);
        panelButton_minus->setFocusPolicy(Qt::NoFocus);
        panelButton_minus->setProperty("ButtonValue", QVariant(QChar(45)));

        horizontalLayout_8->addWidget(panelButton_minus);

        panelButton_plus = new QPushButton(widget_7);
        panelButton_plus->setObjectName(QString::fromUtf8("panelButton_plus"));
        sizePolicy.setHeightForWidth(panelButton_plus->sizePolicy().hasHeightForWidth());
        panelButton_plus->setSizePolicy(sizePolicy);
        panelButton_plus->setFocusPolicy(Qt::NoFocus);
        panelButton_plus->setProperty("ButtonValue", QVariant(QChar(43)));

        horizontalLayout_8->addWidget(panelButton_plus);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_8);


        gridLayout->addWidget(widget_7, 1, 0, 1, 1);


        horizontalLayout->addWidget(widget_background);


        retranslateUi(DigitalInputPanel);

        QMetaObject::connectSlotsByName(DigitalInputPanel);
    } // setupUi

    void retranslateUi(QWidget *DigitalInputPanel)
    {
        DigitalInputPanel->setWindowTitle(QApplication::translate("DigitalInputPanel", "Panel", 0, QApplication::UnicodeUTF8));
        label_digital_text->setText(QString());
        label_digital_text->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_enter->setText(QString());
        panelButton_enter->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_cancel->setText(QString());
        panelButton_cancel->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_1->setText(QString());
        panelButton_1->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_2->setText(QString());
        panelButton_2->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_3->setText(QString());
        panelButton_3->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_4->setText(QString());
        panelButton_4->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_5->setText(QString());
        panelButton_5->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_6->setText(QString());
        panelButton_6->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_7->setText(QString());
        panelButton_7->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_8->setText(QString());
        panelButton_8->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_9->setText(QString());
        panelButton_9->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_0->setText(QString());
        panelButton_0->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_del->setText(QString());
        panelButton_del->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_Q->setText(QString());
        panelButton_Q->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_W->setText(QString());
        panelButton_W->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_E->setText(QString());
        panelButton_E->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_R->setText(QString());
        panelButton_R->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_T->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_Y->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_U->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_I->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_O->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_P->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_A->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_S->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_D->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_F->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_G->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_H->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_J->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_K->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_L->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_caps->setText(QString());
        panelButton_caps->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_Z->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_X->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_C->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_V->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_B->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_N->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_M->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_dot->setText(QString());
        panelButton_dot->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_symbol->setText(QString());
        panelButton_symbol->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_space->setText(QString());
        panelButton_space->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_minus->setText(QString());
        panelButton_minus->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_plus->setText(QString());
        panelButton_plus->setProperty("belong", QVariant(QApplication::translate("DigitalInputPanel", "digital_panel", 0, QApplication::UnicodeUTF8)));
    } // retranslateUi

};

namespace Ui {
    class DigitalInputPanel: public Ui_DigitalInputPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIGITALINPUTPANEL_H
