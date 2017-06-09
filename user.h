#ifndef USER_H
#define USER_H
#include<QString>
#include "account.h"
#include <QDate>
class User
{
public:
    User();
    void setName(QString);
    QString getName();
    void setSex(QString);
    QString getSex();
    void setDateofBirth(QString);
    QString getDateofBirth();
    void setID(QString);
    QString getID();
    void setAddress(QString);
    QString getAddress();
    void setEmail(QString);
    QString getEmail();
    void setDoP(QString);
    QString getDoP();
    void clear();

private:
    QString Name;
    QString ID;
    QString DateofBirth;
    QString sex;
    QString address;
    QString email;
    QString DateofParticipation;
};

#endif // USER_H
