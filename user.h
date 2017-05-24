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
    QString setDateofBirthtoQString(QDate);
    void setDateofBirth(QString);
    QString getDateofBirth();
    void setID(QString);
    QString getID();
    void setCMND(QString);
    QString getCMND();
    void clear();

private:
    QString Name;
    QString sex;
    QString DateofBirth;
    QString ID;
    QString CMND;
};

#endif // USER_H
