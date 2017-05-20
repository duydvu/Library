#include "signin.h"
#include "ui_signin.h"


SignIn::SignIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignIn)
{
    ui->setupUi(this);
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
                break;
    }
    if(it!=accounts.end())
    {
        LogInAcc=*it;
        this->accept();
    }
    else
    {
        ui->ResultLabel->clear();
        ui->ResultLabel->setText("Oops! Bạn nhập sai mất rồi!");
    }
}



void SignIn::on_PasswordEdit_returnPressed()
{
    on_LogInButton_clicked();
}

