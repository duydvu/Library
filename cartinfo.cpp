#include "cartinfo.h"
#include <QDate>
#include "data.h"

cartinfo::cartinfo()
{
    accept=0;
}

void cartinfo::setID(QString id)
{
    this->id=id;
}

QString cartinfo::getID()
{
    return this->id;
}

void cartinfo::setReaderName(QString name)
{
    this->readername=name;
}

QString cartinfo::getReaderName()
{
    return this->readername;
}

void cartinfo::setReaderID(QString id)
{
    this->readerid=id;
}

QString cartinfo::getReaderID()
{
    return this->readerid;
}

void cartinfo::setBookName(QString name)
{
    this->bookname=name;
}

QString cartinfo::getBookName()
{
    return this->bookname;
}

void cartinfo::setBookID(QString id)
{
    this->bookid=id;
}

QString cartinfo::getBookID()
{
    return this->bookid;
}

void cartinfo::setBrrowTime()
{
    QString a=ToString(QDate::currentDate());
    this->brrowtime=a;
}

QString cartinfo::getBrrowTime()
{
    return this->brrowtime;
}

void cartinfo::setPayTime(QString time)
{
    paytime=time;
}

QString cartinfo::getPayTime()
{
    return paytime;
}

//void cartinfo::setFee(int fee)
//{
//    this->fee=fee;
//}

//int cartinfo::getFee()
//{
//    return this->fee;
//}

void cartinfo::setAccept()
{
    accept=1;
}

bool cartinfo::getAccept()
{
    return accept;
}

void cartinfo::clear()
{
    id="";
    readername="";
    readerid="";
    bookname="";
    bookid="";
    brrowtime="";
    paytime="";
    //fee=0;
    accept=0;
}
