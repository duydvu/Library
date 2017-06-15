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
    QString recipientID;
    int duration;
//    int fee;
    int status;
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
    void setRecipient(QString id);
    QString getRecipient();
    void setDuration(int time);
    int getDuration();
//    void setFee(int fee);
//    int getFee();

    void setStatus(int stt);
    int getStatus();
    void clear();
};

#endif // CARDINFO_H
