#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <QString>

class Account
{
public:
    Account();
    Account(QString acc, QString psw);
    QString getAcc();
    void setAcc(QString acc);
    QString getPsw();
    void setPsw(QString psw);
    void clear();
    static QString encrypt(QString psw);
private:
    QString acc;
    QString psw;
};

#endif // ACCOUNT_H
