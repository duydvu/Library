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
    QString getID();
    void setID(QString id);
    void setActive(bool TF);
    bool getActive();
    void clear();
    static QString encrypt(QString psw);
private:
    QString acc;
    QString psw;
    QString ID;
    bool active;
};

#endif // ACCOUNT_H
