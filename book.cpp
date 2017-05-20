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

void Book::clear()
{
    this->author="";
    this->name="";
}
