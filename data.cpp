#include "data.h"

QLinkedList<Account> accounts;
QLinkedList<Book> books;
QLinkedList<User> users;
QLinkedList<Account> temp_accounts;
QLinkedList<User> temp_users;
QLinkedList<cartinfo> cartInfos;
QLinkedList<Account>::iterator LogInAcc;
QLinkedList<User>::iterator LogInUser;

bool compare(QChar a, QChar b)
{
    char x=a.toLatin1(), y=b.toLatin1();
    return x==y || (x>=65 && x<=90 && x+32==y) || (x>=97 && x<=122 && x==y+32);
}

QString ToString(QDate time)
{
    return time.toString("dd.MM.yyyy");
}

QString findCategory(QString cat)
{
    if(cat=="Enc")
        return "Bách khoa toàn thư";
    if(cat=="Sat")
        return "Châm biếm";
    if(cat=="Tra")
        return "Du lịch";
    if(cat=="Adv")
        return "Hành động và phiêu lưu";
    if(cat=="Mys")
        return "Huyền bí";
    if(cat=="Sci")
        return "Khoa học";
    if(cat=="Fic")
        return "Khoa học viễn tưởng";
    if(cat=="Com")
        return "Kịch";
    if(cat=="Hor")
        return "Kinh dị";
    if(cat=="Rom")
        return "Lãng mạn";
    if(cat=="His")
        return "Lịch sử";
    if(cat=="Art")
        return "Nghệ thuật";
    if(cat=="Dia")
        return "Nhật ký";
    if(cat=="Coo")
        return "Sách nấu ăn";
    if(cat=="Hea")
        return "Sức khỏe";
    if(cat=="Mag")
        return "Tạp chí";
    if(cat=="Poe")
        return "Thơ";
    if(cat=="Bio")
        return "Tiểu sử";
    if(cat=="Mth")
        return "Toán";
    if(cat=="Pol")
        return "Tôn giáo và chính trị";
    if(cat=="Chi")
        return "Trẻ em";
    if(cat=="Cmc")
        return "Truyện tranh";
    if(cat=="Dic")
        return "Từ điển";
    if(cat=="Geo")
        return "Địa lý";
    if(cat=="Bus")
        return "Kinh tế";
    return "Tất cả";
}
