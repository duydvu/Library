#ifndef CARDINFO_H
#define CARDINFO_H

#include <QString>

class cartinfo
{
public:
    cartinfo();
private:
    QString id;
    QString readername;
    QString readerid;
    QString bookname;
    QString bookid;
    QString brrowtime;
    int duration;
//    int fee;
    bool accept;
    bool paid;
public:
    void setID(QString id);
    QString getID();
    void setReaderName(QString name);
    QString getReaderName();
    void setReaderID(QString id);
    QString getReaderID();
    void setBookName(QString name);
    QString getBookName();
    void setBookID(QString id);
    QString getBookID();
    void setBrrowTime(QString time);
    QString getBrrowTime();
    void setDuration(int time);
    int getDuration();
//    void setFee(int fee);
//    int getFee();
    void clear();
    void setAccept(bool accept);
    bool getAccept();
    void setPaid(bool accept);
    bool getPaid();
};

#endif // CARDINFO_H
