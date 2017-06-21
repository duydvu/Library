#include "book.h"

Book::Book()
{

}

Book::Book(QString name, QString author)
{
    this->name=name;
    this->author=author;
}

QString Book::getName()
{
    return this->name;
}

void Book::setName(QString name)
{
    this->name=name;
}

QString Book::getAuthor()
{
    return this->author;
}

void Book::setAuthor(QString author)
{
    this->author=author;
}

int Book::getQuantity()
{
    return quantity;
}

void Book::setQuantity(int quantity)
{
    this->quantity=quantity;
}

QString Book::getIntro()
{
    return intro;
}

void Book::setIntro(QString intro)
{
    this->intro=intro;
}

QString Book::getPublisher()
{
    return publisher;
}

void Book::setPublisher(QString publisher)
{
    this->publisher=publisher;
}

QString Book::getID()
{
    return id;
}

void Book::setID(QString id)
{
    this->id=id;
}

void Book::clear()
{
    this->author="";
    this->name="";
    this->quantity=0;
    this->intro="";
    this->publisher="";
    this->id="";
}
