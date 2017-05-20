#include "signup.h"
#include "ui_signup.h"

SignUp::SignUp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUp)
{
    ui->setupUi(this);
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_SignUpButton_clicked()
{
    this->accept();
}

Account SignUp::getAccount()
{
    Account a;
    a.setAcc(ui->NameEdit->text());
    a.setPsw(Account::encrypt(ui->PasswordEdit->text()));
    return a;
}
