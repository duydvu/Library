#include "password.h"
#include "ui_password.h"

Password::Password(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Password)
{
    ui->setupUi(this);
    this->setWindowTitle("Đổi mật khẩu");
}

Password::~Password()
{
    delete ui;
}

QString Password::getPass()
{
    return this->password;
}

void Password::on_accept_clicked()
{
    if(ui->pass1->text()!=ui->pass2->text())
    {
        ui->result->setText("Mật khẩu nhập lại không khớp");
    }
    else
    {
        password=ui->pass1->text();
        this->accept();
    }
}

void Password::on_cancel_clicked()
{
    this->close();
}
