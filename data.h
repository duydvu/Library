#ifndef DATA_H
#define DATA_H

#include "account.h"
#include "book.h"
#include <QLinkedList>
#include <QDialog>
#include <QFile>
#include <QDir>
#include <qxmlstream.h>
#include <QMessageBox>

extern QLinkedList<Book> books;
extern QLinkedList<Account> accounts;
extern Account LogInAcc;

#endif

