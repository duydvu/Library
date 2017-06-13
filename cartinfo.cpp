#include "cartinfo.h"
#include <QDate>
#include "data.h"

cartinfo::cartinfo()
{

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

void cartinfo::setBrrowTime(QString time)
{
    this->brrowtime=time;
}

QString cartinfo::getBrrowTime()
{
    return this->brrowtime;
}

void cartinfo::setDuration(int time)
{
    this->duration=time;
}

int cartinfo::getDuration()
{
    return this->duration;
}

//void cartinfo::setFee(int fee)
//{
//    this->fee=fee;
//}

//int cartinfo::getFee()
//{
//    return this->fee;
//}

void cartinfo::setAccept(bool accept)
{
    this->accept=accept;
}

bool cartinfo::getAccept()
{
    return this->accept;
}

void cartinfo::setPaid(bool paid)
{
    this->paid=paid;
}

bool cartinfo::getPaid()
{
    return this->paid;
}

void cartinfo::clear()
{
    this->id="";
    this->readername="";
    this->readerid="";
    this->bookname="";
    this->bookid="";
    this->brrowtime="";
    this->duration=0;
    //this->fee=0;
    this->accept=0;
    this->paid=0;
}
