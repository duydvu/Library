#include "cardinfo.h"
#include <QDate>
#include "data.h"

cardinfo::cardinfo()
{
    accept=0;
}
void cardinfo::setBrrowTime()
{
    QString a=ToString(QDate::currentDate());
    this->brrowtime=a;
}

QString cardinfo::getBrrowTime()
{
    return this->brrowtime;
}

void cardinfo::setPayTime(QString time)
{
    paytime=time;
}

QString cardinfo::getPayTime()
{
    return paytime;
}

void cardinfo::setFee(int fee)
{
    this->fee=fee;
}

int cardinfo::getFee()
{
    return this->fee;
}

void cardinfo::clear()
{
    readername="";
    readerid="";
    bookname="";
    bookid="";
    brrowtime="";
    paytime="";
    fee=0;
    accept=0;
}

void cardinfo::setAccept()
{
    accept=1;
}

bool cardinfo::getAccept()
{
    return accept;
}
