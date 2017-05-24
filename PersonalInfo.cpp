#include "PersonalInfo.h"
#include "ui_PersonalInfo.h"

personalinfo::personalinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::personalinfo)
{
    ui->setupUi(this);
}

personalinfo::~personalinfo()
{
    delete ui;
}

User personalinfo::getUser()
{
    User a;
    QString sex,b;
    if(ui->male->isChecked()) sex="nam";
    else if (ui->female->isChecked()) sex="nữ";
    a.setName(ui->name->text());
    a.setSex(sex);
    b=a.setDateofBirthtoQString(ui->dateEdit->date());
    a.setDateofBirth(b);
    a.setCMND(ui->CMND->text());
    return a;
}

void personalinfo::on_pushButton_clicked()
{
    this->accept();
}
