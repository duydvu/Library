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
    if(ui->pass1->text()=="")
    {
        ui->result->setText("Không được để trống mật khẩu");
        return;
    }
    for(int i=0;i<ui->pass1->text().length();i++)
    {
        if(ui->pass1->text()[i]==' ')
        {
            ui->result->setText("Mật khẩu không thể có dấu cách");
            return;
        }
    }
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
