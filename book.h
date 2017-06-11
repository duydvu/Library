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
    QString publisher;
    QString id;
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
    QString getPublisher();
    void setPublisher(QString publisher);
    QString getID();
    void setID(QString id);
    void clear();
};

#endif // BOOK_H
