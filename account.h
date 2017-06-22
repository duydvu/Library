#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <QString>

class Account
{
private:
    QString acc;
    QString psw;
    QString role;
    QString id;
    int status;
public:
    Account();
    Account(QString acc, QString psw);
    QString getAcc();
    void setAcc(QString acc);
    QString getPsw();
    void setPsw(QString psw);
    QString getRole();
    void setRole(QString role);
    QString getID();
    void setID(QString id);
    void setStatus(int stt);
    int getStatus();
    void clear();
    static QString encrypt(QString psw);
};

#endif // ACCOUNT_H
