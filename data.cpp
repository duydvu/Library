#include "data.h"

QLinkedList<Account> accounts;
QLinkedList<Book> books;
QLinkedList<User> users;
QLinkedList<Account> temp_accounts;
QLinkedList<User> temp_users;
Account LogInAcc;

bool compare(QChar a, QChar b)
{
    char x=a.toLatin1(), y=b.toLatin1();
    return x==y || (x>=65 && x<=90 && x+32==y) || (x>=97 && x<=122 && x==y+32);
}

QString ToString(QDate time)
{
    return time.toString("dd.MM.yyyy");
}

template <class T>
T* KMPsearch(QLinkedList<QString>, QLinkedList<T>)
{

}
