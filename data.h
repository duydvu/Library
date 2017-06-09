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

extern QLinkedList<Book> books;
extern QLinkedList<Account> accounts;
extern QLinkedList<User> users;
extern QLinkedList<Account> temp_accounts;
extern QLinkedList<User> temp_users;
extern Account LogInAcc;

bool compare(QChar, QChar);
QString ToString(QDate);

#endif

