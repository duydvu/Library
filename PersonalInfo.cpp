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
    QString sex,b,c="";
    if(ui->male->isChecked()) sex="male";
    else if (ui->female->isChecked()) sex="female";
    a.setName(ui->name->text());
    a.setSex(sex);
    a.setDateofBirth(ToString(ui->dateOfBirth->date()));
    a.setAddress(ui->address->text());
    a.setEmail(ui->email->text());
    QString id = QString::number(users.size());
    a.setID(id);
    a.setDoP(ToString(QDate::currentDate()));
    return a;
}

void personalinfo::on_Done_clicked()
{
    this->accept();
}
