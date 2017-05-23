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

void User::setDateofBirth(QDate time)
{
    this->DateofBirth=time;
}

QDate User::getDateofBirth()
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
    //this->DateofBirth="";
    this->ID="";
    this->CMND="";
}
