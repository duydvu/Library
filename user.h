#ifndef USER_H
#define USER_H
#include<QString>
#include <QDate>
class User
{
private:
    QString Name;
    QString ID;
    QString DateofBirth;
    QString sex;
    QString address;
    QString email;
    QString DateofParticipation;
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
};

#endif // USER_H
