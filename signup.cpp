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
    QString acc=ui->NameEdit->text();
    QLinkedList<Account>::iterator it=accounts.begin();
    bool check=true;
    for(;it!=accounts.end();it++)
    {
        if(acc==(*it).getAcc()){
            QMessageBox::information(this,"Tài khoản không hợp lệ",
            "Tên tài khoản này đã có sẵn hoặc chứa ký tự không hợp lệ.\n"
            "Bạn hãy vui lòng nhập lại.",
            QMessageBox::Ok);
            check=false;
            break;
        }
    }
    if(check)
        this->accept();
}

Account SignUp::getAccount()
{
    Account a;
    a.setAcc(ui->NameEdit->text());
    a.setPsw(Account::encrypt(ui->PasswordEdit->text()));
    if(ui->librarian->isChecked())
        a.setRole("L");
    else a.setRole("R");
    a.setActive(true);
    return a;
}
