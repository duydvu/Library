#include "account.h"
#include <QCryptographicHash>

Account::Account()
{

}

Account::Account(QString acc, QString psw)
{
    this->acc=acc;
    this->psw=psw;
}

QString Account::getAcc()
{
    return this->acc;
}

void Account::setAcc(QString acc)
{
    this->acc = acc;
}

QString Account::getPsw()
{
    return this->psw;
}

void Account::setPsw(QString psw)
{
    this->psw = psw;
}

void Account::clear()
{
    this->acc="";
    this->psw="";
}

QString Account::encrypt(QString psw)
{
    QByteArray p;
    p.append(psw);
    QCryptographicHash::hash(p, QCryptographicHash::Md5);
    return p.toHex();
}

void Account::setID(QString id)
{
    this->ID=id;
}

QString Account::getID()
{
    return this->ID;
}

void Account::setActive(bool TF)
{
    this->active=TF;
}

bool Account::getActive()
{
    return this->active;
}
