#ifndef SIGNIN_H
#define SIGNIN_H

#include "data.h"


namespace Ui {
class SignIn;
}

class SignIn : public QDialog
{
    Q_OBJECT

public:
    explicit SignIn(QWidget *parent = 0);
    ~SignIn();

private slots:

    void on_LogInButton_clicked();

    void on_PasswordEdit_returnPressed();

private:
    Ui::SignIn *ui;
};

#endif // SIGNIN_H
