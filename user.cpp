#include "user.h"
#include <QString>
User::User()
{

}

void User::setName(QString name)
{
    this->Name=name;
}

QString User::getName()
{
    return this->Name;
}

void User::setSex(QString sex)
{
    this->sex=sex;
}

QString User::getSex()
{
 return this->sex;
}

QString User::setDateofBirthtoQString(QDate time)
{
    QString s;
    s=time.toString("dd.MM.yyyy");
    return s;
}

void User::setDateofBirth(QString time)
{
    this->DateofBirth=time;
}

QString User::getDateofBirth()
{
    return this->DateofBirth;
}

void User::setID(QString id)
{
    this->ID=id;
}

QString User::getID()
{
    return this->ID;
}

void User::setCMND(QString CMND)
{
  this->CMND=CMND;
}

QString User::getCMND()
{
    return this->CMND;
}

void User::clear()
{
    this->Name="";
    this->sex="";
    this->DateofBirth="";
    this->ID="";
    this->CMND="";
}
