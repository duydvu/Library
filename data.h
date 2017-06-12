#ifndef DATA_H
#define DATA_H

#include "account.h"
#include "book.h"
#include "user.h"
#include <QLinkedList>
#include <QDialog>
#include <QFile>
#include <QDir>
#include <qxmlstream.h>
#include <QMessageBox>
#include <QCloseEvent>
#include <QIcon>

extern QLinkedList<Book> books;
extern QLinkedList<Account> accounts;
extern QLinkedList<User> users;
extern QLinkedList<Account> temp_accounts;
extern QLinkedList<User> temp_users;
extern Account LogInAcc;

bool compare(QChar, QChar);
QString ToString(QDate);

// Knuth–Morris–Pratt algorithm for searching substring
template <class T>
T* KMPsearch(QLinkedList<QString>, QLinkedList<T>);

#endif

