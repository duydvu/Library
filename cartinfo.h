#ifndef CARDINFO_H
#define CARDINFO_H

#include <QString>

class cartinfo
{
private:
    QString id;
    QString readername;
    QString readerid;
    QString bookname;
    QString bookid;
    QString brrowtime;
    QString recipient;
    int duration;
    int status;
public:
    cartinfo();
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
    void setRecipient(QString name);
    QString getRecipient();
    void setDuration(int time);
    int getDuration();
    void setStatus(int stt);
    int getStatus();
    void clear();
};

#endif // CARDINFO_H
