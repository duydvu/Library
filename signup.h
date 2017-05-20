#ifndef SIGNUP_H
#define SIGNUP_H

#include "data.h"

namespace Ui {
class SignUp;
}

class SignUp : public QDialog
{
    Q_OBJECT

public:
    explicit SignUp(QWidget *parent = 0);
    ~SignUp();

    Account getAccount();

private slots:

    void on_SignUpButton_clicked();

private:
    Ui::SignUp *ui;
};

#endif // SIGNUP_H
