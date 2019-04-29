#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <QWidget>
#include <QtGui>
namespace Ui {
class Keyboard;
}

class Keyboard : public QWidget
{
    Q_OBJECT
    
public:
    explicit Keyboard(QWidget *parent = 0);
    void setLineEdit(QLineEdit * line);
    ~Keyboard();
    QPushButton *enterButton;
    
private slots:
    void keyboardHandler();
    //void on_shift_clicked();
    //void on_char_2_toggled(bool checked);
    //void on_clear_clicked();
    //void on_backButton_clicked();
    //void on_enterButton_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_lineEdit_returnPressed();



    void on_key_Big_small_clicked();
    void on_key_Symbol_char_clicked();
    void on_key_clean_clicked();
    void on_key_Back_clicked();
    void on_key_Confirm_clicked();

    void on_key_Cancel_clicked();

private:
    Ui::Keyboard *ui;
    QString outputText;
    QLineEdit *outputLineEdit;
    bool shift_small_big;
    bool shift_symbol_char;

    void revalueKeys(void);
};

#endif // KEYBOARD_H
