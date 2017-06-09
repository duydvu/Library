#ifndef BOOK_H
#define BOOK_H

#include <QString>

class Book
{
private:
    QString name;
    QString author;
    int quantity;
    QString intro;
public:
    Book();
    Book(QString name, QString author);
    QString getName();
    void setName(QString name);
    QString getAuthor();
    void setAuthor(QString author);
    int getQuantity();
    void setQuantity(int quantity);
    QString getIntro();
    void setIntro(QString intro);
    void clear();
};

#endif // BOOK_H
