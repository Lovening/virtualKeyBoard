/********************************************************************************
** Form generated from reading UI file 'DigitalBoard.ui'
**
** Created: Mon Apr 29 15:24:51 2019
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIGITALBOARD_H
#define UI_DIGITALBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DigitalBoard
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget_background;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_title;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEdit_digital_text;
    QPushButton *panelButton_enter;
    QPushButton *panelButton_cancel;
    QWidget *widget_7;
    QGridLayout *gridLayout;
    QPushButton *panelButton_1;
    QPushButton *panelButton_2;
    QPushButton *panelButton_3;
    QPushButton *panelButton_minus;
    QPushButton *panelButton_4;
    QPushButton *panelButton_5;
    QPushButton *panelButton_6;
    QPushButton *panelButton_7;
    QPushButton *panelButton_8;
    QPushButton *panelButton_9;
    QPushButton *panelButton_plus;
    QPushButton *panelButton_0;
    QPushButton *panelButton_dot;
    QPushButton *panelButton_del;

    void setupUi(QWidget *DigitalBoard)
    {
        if (DigitalBoard->objectName().isEmpty())
            DigitalBoard->setObjectName(QString::fromUtf8("DigitalBoard"));
        DigitalBoard->setEnabled(true);
        DigitalBoard->resize(335, 377);
        DigitalBoard->setFocusPolicy(Qt::NoFocus);
        DigitalBoard->setStyleSheet(QString::fromUtf8("QWidget#DigitalInputPanel\n"
"{\n"
"        min-width: 319px;\n"
"        max-width: 319px;\n"
"        min-height: 360px;\n"
"        max-height: 360px;\n"
"}\n"
"QWidget#widget_background\n"
"{\n"
"        background-color: #DEDEDE;\n"
"        border: 1px solid #FFFFFF;\n"
"}\n"
"\n"
"QLineEdit#lineEdit_digital_text\n"
"{\n"
"    height: 40px;\n"
"    color: back;\n"
"    background: #4a4a4a;\n"
"    font-size:40px;\n"
"}\n"
"\n"
"QLineEdit#lineEdit_digital_text[warning=\"YES\"]\n"
"{\n"
"    height: 40px;\n"
"    color: red;\n"
"    background: #4a4a4a;\n"
"    font-size:40px;\n"
"}\n"
"QLineEdit#lineEdit_digital_text[warning=\"NO\"]\n"
"{\n"
"    height: 40px;\n"
"    color: back;\n"
"    background: #4a4a4a;\n"
"    font-size:40px;\n"
"}\n"
"\n"
"\n"
"QLabel#label_title\n"
"{\n"
"        font-size:  22px;\n"
"        color: #000000;\n"
"}\n"
"\n"
"QLineEdit#lineEdit_digital_text{\n"
"        min-height: 38px;\n"
"        max-height: 38px;\n"
"        min-width: 148px;\n"
"        max-width: 148px;\n"
"  "
                        "      padding-left: 10px;\n"
"        border-image: url(:/images/input_label.png);\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton#panelButton_enter, #panelButton_cancel\n"
"{\n"
"                min-height: 38px;\n"
"                min-width: 63px;\n"
"                max-height: 38px;\n"
"                max-width: 63px;\n"
"}\n"
"\n"
"QPushButton#panelButton_enter\n"
"{\n"
"        border-image: url(:/images/enter_normal.png);\n"
"}\n"
"\n"
"QPushButton:pressed#panelButton_enter\n"
"{\n"
"        border-image: url(:/images/enter_selected.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_cancel\n"
"{\n"
"        border-image: url(:/images/cancel_normal.png);\n"
"}\n"
"\n"
"QPushButton:pressed#panelButton_cancel\n"
"{\n"
"        border-image: url(:/images/cancel_selected.png);\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"        min-width: 70px;\n"
"        max-width: 70px;\n"
"        min-height: 57px;\n"
"        max-height: 57px;\n"
"}\n"
"\n"
"QPushButton[belong=\"digital_panel\"]\n"
"{\n"
"        min-width: 70px;\n"
"       "
                        " max-width: 70px;\n"
"        min-height: 57px;\n"
"        max-height: 57px;\n"
"}\n"
"\n"
"\n"
"QPushButton#panelButton_0\n"
"{\n"
"        min-width: 143px;\n"
"        max-width: 143px;\n"
"        border-image: url(:/images/digital_normal_0.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_0\n"
"{\n"
"        border-image: url(:/images/digital_hover_0.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_1\n"
"{\n"
"        border-image: url(:/images/digital_normal_1.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_1\n"
"{\n"
"        border-image: url(:/images/digital_hover_1.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_2\n"
"{\n"
"        border-image: url(:/images/digital_normal_2.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_2\n"
"{\n"
"        border-image: url(:/images/digital_hover_2.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_3\n"
"{\n"
"        border-image: url(:/images/digital_normal_3.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_3\n"
"{\n"
"        border-image: url(:/images/digital_hove"
                        "r_3.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_4\n"
"{\n"
"        border-image: url(:/images/digital_normal_4.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_4\n"
"{\n"
"        border-image: url(:/images/digital_hover_4.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_5\n"
"{\n"
"        border-image: url(:/images/digital_normal_5.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_5\n"
"{\n"
"        border-image: url(:/images/digital_hover_5.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_6\n"
"{\n"
"        border-image: url(:/images/digital_normal_6.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_6\n"
"{\n"
"        border-image: url(:/images/digital_hover_6.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_7\n"
"{\n"
"        border-image: url(:/images/digital_normal_7.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_7\n"
"{\n"
"        border-image: url(:/images/digital_hover_7.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_8\n"
"{\n"
"        border-image: url(:/images/digital_normal_8.png);\n"
"}\n"
"\n"
""
                        "QPushButton:hover#panelButton_8\n"
"{\n"
"        border-image: url(:/images/digital_hover_8.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_9\n"
"{\n"
"        border-image: url(:/images/digital_normal_9.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_9\n"
"{\n"
"        border-image: url(:/images/digital_hover_9.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_minus\n"
"{\n"
"        min-height: 117px;\n"
"        max-height: 117px;\n"
"        border-image: url(:/images/digital_normal_minus.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_minus\n"
"{\n"
"        border-image: url(:/images/digital_hover_minus.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_plus\n"
"{\n"
"        border-image: url(:/images/digital_normal_plus.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_plus\n"
"{\n"
"        border-image: url(:/images/digital_hover_plus.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_dot\n"
"{\n"
"        border-image: url(:/images/digital_normal_dot.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_dot\n"
"{"
                        "\n"
"        border-image: url(:/images/digital_hover_dot.png);\n"
"}\n"
"\n"
"QPushButton#panelButton_del\n"
"{\n"
"        border-image: url(:/images/del_normal.png);\n"
"}\n"
"\n"
"QPushButton:hover#panelButton_del\n"
"{\n"
"        border-image: url(:/images/del_hover.png);\n"
"}"));
        horizontalLayout = new QHBoxLayout(DigitalBoard);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(6, 6, 6, 6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget_background = new QWidget(DigitalBoard);
        widget_background->setObjectName(QString::fromUtf8("widget_background"));
        verticalLayout_2 = new QVBoxLayout(widget_background);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(9, 10, 9, 9);
        widget_5 = new QWidget(widget_background);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_7 = new QHBoxLayout(widget_5);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_title = new QLabel(widget_5);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_title);


        verticalLayout_2->addWidget(widget_5);

        widget_6 = new QWidget(widget_background);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        lineEdit_digital_text = new QLineEdit(widget_6);
        lineEdit_digital_text->setObjectName(QString::fromUtf8("lineEdit_digital_text"));
        lineEdit_digital_text->setEnabled(false);
        QFont font;
        lineEdit_digital_text->setFont(font);
        lineEdit_digital_text->setMouseTracking(false);
        lineEdit_digital_text->setFocusPolicy(Qt::NoFocus);
        lineEdit_digital_text->setContextMenuPolicy(Qt::NoContextMenu);
        lineEdit_digital_text->setAcceptDrops(false);
        lineEdit_digital_text->setMaxLength(10);
        lineEdit_digital_text->setEchoMode(QLineEdit::Password);
        lineEdit_digital_text->setReadOnly(true);

        horizontalLayout_6->addWidget(lineEdit_digital_text);

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


        verticalLayout_2->addWidget(widget_6);

        widget_7 = new QWidget(widget_background);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        gridLayout = new QGridLayout(widget_7);
        gridLayout->setSpacing(3);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        panelButton_1 = new QPushButton(widget_7);
        panelButton_1->setObjectName(QString::fromUtf8("panelButton_1"));
        panelButton_1->setEnabled(true);
        sizePolicy.setHeightForWidth(panelButton_1->sizePolicy().hasHeightForWidth());
        panelButton_1->setSizePolicy(sizePolicy);
        panelButton_1->setMinimumSize(QSize(70, 57));
        panelButton_1->setFocusPolicy(Qt::NoFocus);
        panelButton_1->setProperty("ButtonValue", QVariant(QChar(49)));

        gridLayout->addWidget(panelButton_1, 0, 0, 1, 1);

        panelButton_2 = new QPushButton(widget_7);
        panelButton_2->setObjectName(QString::fromUtf8("panelButton_2"));
        sizePolicy.setHeightForWidth(panelButton_2->sizePolicy().hasHeightForWidth());
        panelButton_2->setSizePolicy(sizePolicy);
        panelButton_2->setMinimumSize(QSize(70, 57));
        panelButton_2->setFocusPolicy(Qt::NoFocus);
        panelButton_2->setProperty("ButtonValue", QVariant(QChar(50)));

        gridLayout->addWidget(panelButton_2, 0, 1, 1, 1);

        panelButton_3 = new QPushButton(widget_7);
        panelButton_3->setObjectName(QString::fromUtf8("panelButton_3"));
        sizePolicy.setHeightForWidth(panelButton_3->sizePolicy().hasHeightForWidth());
        panelButton_3->setSizePolicy(sizePolicy);
        panelButton_3->setMinimumSize(QSize(70, 57));
        panelButton_3->setFocusPolicy(Qt::NoFocus);
        panelButton_3->setProperty("ButtonValue", QVariant(QChar(51)));

        gridLayout->addWidget(panelButton_3, 0, 2, 1, 1);

        panelButton_minus = new QPushButton(widget_7);
        panelButton_minus->setObjectName(QString::fromUtf8("panelButton_minus"));
        sizePolicy.setHeightForWidth(panelButton_minus->sizePolicy().hasHeightForWidth());
        panelButton_minus->setSizePolicy(sizePolicy);
        panelButton_minus->setFocusPolicy(Qt::NoFocus);
        panelButton_minus->setProperty("ButtonValue", QVariant(QChar(45)));

        gridLayout->addWidget(panelButton_minus, 0, 3, 2, 1);

        panelButton_4 = new QPushButton(widget_7);
        panelButton_4->setObjectName(QString::fromUtf8("panelButton_4"));
        sizePolicy.setHeightForWidth(panelButton_4->sizePolicy().hasHeightForWidth());
        panelButton_4->setSizePolicy(sizePolicy);
        panelButton_4->setMinimumSize(QSize(70, 57));
        panelButton_4->setFocusPolicy(Qt::NoFocus);
        panelButton_4->setProperty("ButtonValue", QVariant(QChar(52)));

        gridLayout->addWidget(panelButton_4, 1, 0, 1, 1);

        panelButton_5 = new QPushButton(widget_7);
        panelButton_5->setObjectName(QString::fromUtf8("panelButton_5"));
        sizePolicy.setHeightForWidth(panelButton_5->sizePolicy().hasHeightForWidth());
        panelButton_5->setSizePolicy(sizePolicy);
        panelButton_5->setMinimumSize(QSize(70, 57));
        panelButton_5->setFocusPolicy(Qt::NoFocus);
        panelButton_5->setProperty("ButtonValue", QVariant(QChar(53)));

        gridLayout->addWidget(panelButton_5, 1, 1, 1, 1);

        panelButton_6 = new QPushButton(widget_7);
        panelButton_6->setObjectName(QString::fromUtf8("panelButton_6"));
        sizePolicy.setHeightForWidth(panelButton_6->sizePolicy().hasHeightForWidth());
        panelButton_6->setSizePolicy(sizePolicy);
        panelButton_6->setMinimumSize(QSize(70, 57));
        panelButton_6->setFocusPolicy(Qt::NoFocus);
        panelButton_6->setProperty("ButtonValue", QVariant(QChar(54)));

        gridLayout->addWidget(panelButton_6, 1, 2, 1, 1);

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

        gridLayout->addWidget(panelButton_7, 2, 0, 1, 1);

        panelButton_8 = new QPushButton(widget_7);
        panelButton_8->setObjectName(QString::fromUtf8("panelButton_8"));
        sizePolicy.setHeightForWidth(panelButton_8->sizePolicy().hasHeightForWidth());
        panelButton_8->setSizePolicy(sizePolicy);
        panelButton_8->setMinimumSize(QSize(70, 57));
        panelButton_8->setFocusPolicy(Qt::NoFocus);
        panelButton_8->setProperty("ButtonValue", QVariant(QChar(56)));

        gridLayout->addWidget(panelButton_8, 2, 1, 1, 1);

        panelButton_9 = new QPushButton(widget_7);
        panelButton_9->setObjectName(QString::fromUtf8("panelButton_9"));
        sizePolicy.setHeightForWidth(panelButton_9->sizePolicy().hasHeightForWidth());
        panelButton_9->setSizePolicy(sizePolicy);
        panelButton_9->setMinimumSize(QSize(70, 57));
        panelButton_9->setFocusPolicy(Qt::NoFocus);
        panelButton_9->setProperty("ButtonValue", QVariant(QChar(57)));

        gridLayout->addWidget(panelButton_9, 2, 2, 1, 1);

        panelButton_plus = new QPushButton(widget_7);
        panelButton_plus->setObjectName(QString::fromUtf8("panelButton_plus"));
        sizePolicy.setHeightForWidth(panelButton_plus->sizePolicy().hasHeightForWidth());
        panelButton_plus->setSizePolicy(sizePolicy);
        panelButton_plus->setFocusPolicy(Qt::NoFocus);
        panelButton_plus->setProperty("ButtonValue", QVariant(QChar(43)));

        gridLayout->addWidget(panelButton_plus, 2, 3, 1, 1);

        panelButton_0 = new QPushButton(widget_7);
        panelButton_0->setObjectName(QString::fromUtf8("panelButton_0"));
        sizePolicy.setHeightForWidth(panelButton_0->sizePolicy().hasHeightForWidth());
        panelButton_0->setSizePolicy(sizePolicy);
        panelButton_0->setMinimumSize(QSize(143, 57));
        panelButton_0->setFocusPolicy(Qt::NoFocus);
        panelButton_0->setProperty("ButtonValue", QVariant(QChar(48)));

        gridLayout->addWidget(panelButton_0, 3, 0, 1, 2);

        panelButton_dot = new QPushButton(widget_7);
        panelButton_dot->setObjectName(QString::fromUtf8("panelButton_dot"));
        sizePolicy.setHeightForWidth(panelButton_dot->sizePolicy().hasHeightForWidth());
        panelButton_dot->setSizePolicy(sizePolicy);
        panelButton_dot->setMinimumSize(QSize(70, 57));
        panelButton_dot->setFocusPolicy(Qt::NoFocus);
        panelButton_dot->setProperty("ButtonValue", QVariant(QChar(46)));

        gridLayout->addWidget(panelButton_dot, 3, 2, 1, 1);

        panelButton_del = new QPushButton(widget_7);
        panelButton_del->setObjectName(QString::fromUtf8("panelButton_del"));
        sizePolicy.setHeightForWidth(panelButton_del->sizePolicy().hasHeightForWidth());
        panelButton_del->setSizePolicy(sizePolicy);
        panelButton_del->setMinimumSize(QSize(70, 57));
        panelButton_del->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(panelButton_del, 3, 3, 1, 1);


        verticalLayout_2->addWidget(widget_7);


        horizontalLayout->addWidget(widget_background);


        retranslateUi(DigitalBoard);

        QMetaObject::connectSlotsByName(DigitalBoard);
    } // setupUi

    void retranslateUi(QWidget *DigitalBoard)
    {
        DigitalBoard->setWindowTitle(QApplication::translate("DigitalBoard", "Panel", 0, QApplication::UnicodeUTF8));
        label_title->setText(QApplication::translate("DigitalBoard", "\350\257\267\350\276\223\345\205\245", 0, QApplication::UnicodeUTF8));
        label_title->setProperty("belong", QVariant(QApplication::translate("DigitalBoard", "digital_panel", 0, QApplication::UnicodeUTF8)));
        lineEdit_digital_text->setText(QString());
        panelButton_enter->setText(QString());
        panelButton_enter->setProperty("belong", QVariant(QApplication::translate("DigitalBoard", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_cancel->setText(QString());
        panelButton_cancel->setProperty("belong", QVariant(QApplication::translate("DigitalBoard", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_1->setText(QString());
        panelButton_1->setProperty("belong", QVariant(QApplication::translate("DigitalBoard", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_2->setText(QString());
        panelButton_2->setProperty("belong", QVariant(QApplication::translate("DigitalBoard", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_3->setText(QString());
        panelButton_3->setProperty("belong", QVariant(QApplication::translate("DigitalBoard", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_minus->setText(QString());
        panelButton_minus->setProperty("belong", QVariant(QApplication::translate("DigitalBoard", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_4->setText(QString());
        panelButton_4->setProperty("belong", QVariant(QApplication::translate("DigitalBoard", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_5->setText(QString());
        panelButton_5->setProperty("belong", QVariant(QApplication::translate("DigitalBoard", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_6->setText(QString());
        panelButton_6->setProperty("belong", QVariant(QApplication::translate("DigitalBoard", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_7->setText(QString());
        panelButton_7->setProperty("belong", QVariant(QApplication::translate("DigitalBoard", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_8->setText(QString());
        panelButton_8->setProperty("belong", QVariant(QApplication::translate("DigitalBoard", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_9->setText(QString());
        panelButton_9->setProperty("belong", QVariant(QApplication::translate("DigitalBoard", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_plus->setText(QString());
        panelButton_plus->setProperty("belong", QVariant(QApplication::translate("DigitalBoard", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_0->setText(QString());
        panelButton_0->setProperty("belong", QVariant(QApplication::translate("DigitalBoard", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_dot->setText(QString());
        panelButton_dot->setProperty("belong", QVariant(QApplication::translate("DigitalBoard", "digital_panel", 0, QApplication::UnicodeUTF8)));
        panelButton_del->setText(QString());
        panelButton_del->setProperty("belong", QVariant(QApplication::translate("DigitalBoard", "digital_panel", 0, QApplication::UnicodeUTF8)));
    } // retranslateUi

};

namespace Ui {
    class DigitalBoard: public Ui_DigitalBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIGITALBOARD_H
