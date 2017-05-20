#ifndef BOOK_H
#define BOOK_H

#include <QString>

class Book
{
private:
    QString name;
    QString author;
public:
    Book();
    Book(QString name, QString author);
    QString getName();
    void setName(QString name);
    QString getAuthor();
    void setAuthor(QString author);
    void clear();
};

#endif // BOOK_H
