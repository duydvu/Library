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
        {
            if(Account::encrypt(psw) == (*it).getPsw())
            {
                if((*it).getStatus())
                {
                    QMessageBox::information(0,"Tài khoản của bạn đang bị khóa",
                    "Hiện tại, bạn sẽ không thể sử dụng 1 số chức năng của thư viện.\nNếu bạn muốn khôi phục tài khoản hãy liên hệ với người quản lý để được giải quyết.\nThân!",
                    QMessageBox::Ok);
                }
                LogInAcc=it;
                LogInUser=users.begin()+(*LogInAcc).getID().toInt();
                this->accept();
                return;
            }
            break;
        }
    }
    ui->ResultLabel->clear();
    ui->ResultLabel->setText("Tài khoản hoặc mật khẩu không chính xác");
}



void SignIn::on_PasswordEdit_returnPressed()
{
    on_LogInButton_clicked();
}

