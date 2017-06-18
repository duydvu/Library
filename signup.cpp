#include "signup.h"
#include "ui_signup.h"

SignUp::SignUp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUp)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_SignUpButton_clicked()
{
    QString acc=ui->NameEdit->text();
    QLinkedList<Account>::iterator it=accounts.begin();
    for(;it!=accounts.end();it++)
    {
        if(acc==(*it).getAcc()){
            QMessageBox::information(this,"Tài khoản không hợp lệ",
            "Tên tài khoản này đã có sẵn hoặc chứa ký tự không hợp lệ.\n"
            "Bạn hãy vui lòng nhập lại.",
            QMessageBox::Ok);
            return;
        }
    }
    if( !(ui->librarian->isChecked()) && !(ui->reader->isChecked()) )
    {
        QMessageBox::information(this,"Bạn chưa chọn vai trò của tài khoản",
        "Bạn hãy chọn 1 trong 2 vai trò cho tài khoản của mình!",
        QMessageBox::Ok);
        return;
    }
    if(ui->ReenterPassword->text()!=ui->PasswordEdit->text())
    {
        QMessageBox::information(this,"Mật khẩu lần 2 không khớp",
        "Bạn hãy nhập lại mật khẩu của mình thật chính xác!",
        QMessageBox::Ok);
        return;
    }
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
    a.setStatus(true);
    return a;
}
