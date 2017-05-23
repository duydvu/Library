#include "data.h"

QLinkedList<Account> accounts;
QLinkedList<Book> books;
QLinkedList<User> users;
Account LogInAcc;

bool compare(QChar a, QChar b)
{
    char x=a.toLatin1(), y=b.toLatin1();
    return x==y || (x>=65 && x<=90 && x+32==y) || (x>=97 && x<=122 && x==y+32);
}
