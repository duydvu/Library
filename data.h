#ifndef DATA_H
#define DATA_H

#include "account.h"
#include "book.h"
#include "user.h"
#include "cartinfo.h"
#include <QLinkedList>
#include <QDialog>
#include <QFile>
#include <QDir>
#include <qxmlstream.h>
#include <QMessageBox>
#include <QCloseEvent>
#include <QIcon>
#include <QScrollArea>

extern QLinkedList<Book> books;
extern QLinkedList<Account> accounts;
extern QLinkedList<User> users;
extern QLinkedList<Account> temp_accounts;
extern QLinkedList<User> temp_users;
extern QLinkedList<cartinfo> cartInfos;
extern Account LogInAcc;
extern User LogInUser;

bool compare(QChar, QChar);
QString ToString(QDate);
QString findCategory(QString);

#endif

