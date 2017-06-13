#include "signin.h"
#include "ui_signin.h"


SignIn::SignIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignIn)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    setWindowTitle("Đăng nhập");
}

SignIn::~SignIn()
{
    delete ui;
}

void SignIn::on_LogInButton_clicked()
{
    QString acc=ui->AccountEdit->text();
    QString psw=ui->PasswordEdit->text();
    QLinkedList<Account>::iterator it=accounts.begin();
    for(;it!=accounts.end();it++)
    {
        if((*it).getAcc() == acc)
            if(Account::encrypt(psw) == (*it).getPsw())
            {
                LogInAcc=*it;
                LogInUser=*(users.begin()+LogInAcc.getID().toInt());
                this->accept();
                return;
            }
    }
    ui->ResultLabel->clear();
    ui->ResultLabel->setText("Tài khoản hoặc mật khẩu không chính xác");
}



void SignIn::on_PasswordEdit_returnPressed()
{
    on_LogInButton_clicked();
}

