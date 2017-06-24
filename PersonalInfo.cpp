#include "PersonalInfo.h"
#include "ui_PersonalInfo.h"
#include "user.h"
#include "data.h"

personalinfo::personalinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::personalinfo)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
}

personalinfo::~personalinfo()
{
    delete ui;
}

User personalinfo::getUser()
{
    User a;
    QString sex;
    if(ui->male->isChecked()) sex="nam";
    else if (ui->female->isChecked()) sex="nữ";
    a.setName(ui->name->text());
    a.setSex(sex);
    a.setDateofBirth(ToString(ui->dateOfBirth->date()));
    a.setAddress(ui->address->text());
    a.setEmail(ui->email->text());
    a.setDoP(ToString(QDate::currentDate()));
    return a;
}

void personalinfo::on_Done_clicked()
{
    if(!ui->name->text().length() || !ui->address->text().length() || !ui->email->text().length() || !ui->dateOfBirth->text().length())
    {
        QMessageBox::information(0,"Không được để trống thông tin",
        "Bạn hãy nhập đầy đủ thông tin của mình vào bảng!",
        QMessageBox::Ok);
        return;
    }
    if(!ui->male->isChecked()&&!ui->female->isChecked())
    {
        QMessageBox::information(0,"Thiếu giới tính",
        "Bạn hãy chọn giới tính của bạn trong bảng chọn!",
        QMessageBox::Ok);
        return;
    }
    this->accept();
}
