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

void User::setAddress(QString address)
{
  this->address=address;
}

QString User::getAddress()
{
    return this->address;
}

void User::setEmail(QString email)
{
  this->email=email;
}

QString User::getEmail()
{
    return this->email;
}

void User::setDoP(QString DoP)
{
  this->DateofParticipation=DoP;
}

QString User::getDoP()
{
    return this->DateofParticipation;
}

void User::clear()
{
    this->Name="";
    this->ID="";
    this->sex="";
    this->DateofBirth="";
    this->address="";
    this->email="";
    this->DateofParticipation="";
}
