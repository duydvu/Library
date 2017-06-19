#include "librarian.h"
#include "ui_librarian.h"

librarian::librarian(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::librarian)
{
    ui->setupUi(this);
    setWindowTitle("Libpro");
    librarian::setWindowState(Qt::WindowMaximized);
    ui->registrationTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    regisTable();
}

librarian::~librarian()
{
    delete ui;
}

void librarian::closeEvent (QCloseEvent *event)
{
    emit closed();
    event->accept();
}

void librarian::regisTable()
{
    ui->registrationTable->setRowCount(0);
    QLinkedList<Account>::iterator it=temp_accounts.begin();
    int cnt=0;
    for(;it!=temp_accounts.end();it++)
    {
        ui->registrationTable->insertRow(cnt);
        QTableWidgetItem *item = new QTableWidgetItem("");
        item->setCheckState(Qt::Unchecked);
        ui->registrationTable->setItem(cnt, 0, item);
        QLinkedList<User>::iterator it1;
        int id=(*it).getID().toInt();
        it1=temp_users.begin()+id;
        ui->registrationTable->setItem(cnt, 1, new QTableWidgetItem((*it).getAcc()));
        if((*it).getRole()=="L")
            ui->registrationTable->setItem(cnt, 2, new QTableWidgetItem("Thủ thư"));
        else ui->registrationTable->setItem(cnt, 2, new QTableWidgetItem("Độc giả"));
        ui->registrationTable->setItem(cnt, 3, new QTableWidgetItem((*it1).getName()));
        ui->registrationTable->setItem(cnt, 4, new QTableWidgetItem((*it1).getDoP()));
        ui->registrationTable->setItem(cnt, 5, new QTableWidgetItem((*it1).getDateofBirth()));
        ui->registrationTable->setItem(cnt, 6, new QTableWidgetItem((*it1).getSex()));
        ui->registrationTable->setItem(cnt, 7, new QTableWidgetItem((*it1).getEmail()));
        ui->registrationTable->setItem(cnt, 8, new QTableWidgetItem((*it1).getAddress()));
        cnt++;
    }
}

void librarian::on_Agree_clicked()
{
    for(int i=0; i<ui->registrationTable->rowCount(); i++)
        if(ui->registrationTable->item(i,0)->checkState()==Qt::Checked)
        {
            QLinkedList<Account>::iterator a=temp_accounts.begin()+i;
            accounts.append(*a);
            if((*a).getID().toInt()>=users.size())
            {
                QLinkedList<User>::iterator u=temp_users.begin()+(*a).getID().toInt()-users.size();
                users.append(*u);
                users.last().setDoP(ToString(QDate::currentDate()));
                users.last().setID(QString::number(users.size()-1));
                accounts.last().setID(users.last().getID());
                temp_users.erase(u);
            }
            temp_accounts.erase(a);
        }
    regisTable();
}

void librarian::on_Deny_clicked()
{
    for(int i=0; i<ui->registrationTable->rowCount(); i++)
        if(ui->registrationTable->item(i,0)->checkState()==Qt::Checked)
        {
            QLinkedList<Account>::iterator a=temp_accounts.begin()+i;
            if((*a).getID().toInt()>=users.size())
            {
                QLinkedList<User>::iterator u=temp_users.begin()+(*a).getID().toInt()-users.size();
                temp_users.erase(u);
            }
            temp_accounts.erase(a);
        }
    regisTable();
}

void librarian::on_newCart_clicked()
{
    ui->CartInfos->setRowCount(0);
    QLinkedList<cartinfo>::iterator it=cartInfos.begin();
    int cnt=0;
    for(;it!=cartInfos.end();it++)
    {
        if((*it).getStatus()==0)
        {
            ui->CartInfos->insertRow(cnt);
            QTableWidgetItem *item = new QTableWidgetItem("");
            item->setCheckState(Qt::Unchecked);
            ui->CartInfos->setItem(cnt, 0, item);
            ui->CartInfos->setItem(cnt, 1, new QTableWidgetItem((*it).getID()));
            ui->CartInfos->setItem(cnt, 2, new QTableWidgetItem((*it).getBookID()));
            ui->CartInfos->setItem(cnt, 3, new QTableWidgetItem((*it).getReaderID()));
            ui->CartInfos->setItem(cnt, 4, new QTableWidgetItem(QString::number((*it).getDuration())+" ngày"));
            cnt++;
        }
    }
}

void librarian::on_acceptedCart_clicked()
{
    ui->CartInfos->setRowCount(0);
    QLinkedList<cartinfo>::iterator it=cartInfos.begin();
    int cnt=0;
    for(;it!=cartInfos.end();it++)
    {
        if((*it).getStatus()==1)
        {
            ui->CartInfos->insertRow(cnt);
            QTableWidgetItem *item = new QTableWidgetItem("");
            item->setCheckState(Qt::Unchecked);
            ui->CartInfos->setItem(cnt, 0, item);
            ui->CartInfos->setItem(cnt, 1, new QTableWidgetItem((*it).getID()));
            ui->CartInfos->setItem(cnt, 2, new QTableWidgetItem((*it).getBookID()));
            ui->CartInfos->setItem(cnt, 3, new QTableWidgetItem((*it).getReaderID()));
            ui->CartInfos->setItem(cnt, 4, new QTableWidgetItem(QString::number((*it).getDuration())+" ngày"));
            cnt++;
        }
    }
}

void librarian::on_lendingCart_clicked()
{
    ui->CartInfos->setRowCount(0);
    QLinkedList<cartinfo>::iterator it=cartInfos.begin();
    int cnt=0;
    for(;it!=cartInfos.end();it++)
    {
        if((*it).getStatus()==2)
        {
            ui->CartInfos->insertRow(cnt);
            QTableWidgetItem *item = new QTableWidgetItem("");
            item->setCheckState(Qt::Unchecked);
            ui->CartInfos->setItem(cnt, 0, item);
            ui->CartInfos->setItem(cnt, 1, new QTableWidgetItem((*it).getID()));
            ui->CartInfos->setItem(cnt, 2, new QTableWidgetItem((*it).getBookID()));
            ui->CartInfos->setItem(cnt, 3, new QTableWidgetItem((*it).getReaderID()));
            ui->CartInfos->setItem(cnt, 4, new QTableWidgetItem(QString::number((*it).getDuration())+" ngày"));
            cnt++;
        }
    }
}

void librarian::on_doneCart_clicked()
{
    ui->CartInfos->setRowCount(0);
    QLinkedList<cartinfo>::iterator it=cartInfos.begin();
    int cnt=0;
    for(;it!=cartInfos.end();it++)
    {
        if((*it).getStatus()==3)
        {
            ui->CartInfos->insertRow(cnt);
            QTableWidgetItem *item = new QTableWidgetItem("");
            item->setCheckState(Qt::Unchecked);
            ui->CartInfos->setItem(cnt, 0, item);
            ui->CartInfos->setItem(cnt, 1, new QTableWidgetItem((*it).getID()));
            ui->CartInfos->setItem(cnt, 2, new QTableWidgetItem((*it).getBookID()));
            ui->CartInfos->setItem(cnt, 3, new QTableWidgetItem((*it).getReaderID()));
            ui->CartInfos->setItem(cnt, 4, new QTableWidgetItem(QString::number((*it).getDuration())+" ngày"));
            cnt++;
        }
    }
}

void librarian::on_infringeCart_clicked()
{
    ui->CartInfos->setRowCount(0);
    QLinkedList<cartinfo>::iterator it=cartInfos.begin();
    int cnt=0;
    for(;it!=cartInfos.end();it++)
    {
        if((*it).getStatus()==4)
        {
            ui->CartInfos->insertRow(cnt);
            QTableWidgetItem *item = new QTableWidgetItem("");
            item->setCheckState(Qt::Unchecked);
            ui->CartInfos->setItem(cnt, 0, item);
            ui->CartInfos->setItem(cnt, 1, new QTableWidgetItem((*it).getID()));
            ui->CartInfos->setItem(cnt, 2, new QTableWidgetItem((*it).getBookID()));
            ui->CartInfos->setItem(cnt, 3, new QTableWidgetItem((*it).getReaderID()));
            ui->CartInfos->setItem(cnt, 4, new QTableWidgetItem(QString::number((*it).getDuration())+" ngày"));
            cnt++;
        }
    }
}

void librarian::on_CartInfos_cellClicked(int row, int column)
{
    column++;
    QString id=ui->CartInfos->item(row,1)->text();
    QLinkedList<cartinfo>::iterator c=cartInfos.begin()+id.toInt();
    ui->bookName->setText((*c).getBookName());
    ui->readerName->setText((*c).getReaderName());
    QString s;
    if((*c).getStatus()==0)
        s="Chưa phản hồi";
    else if((*c).getStatus()==1)
        s="Đang chờ";
    else if((*c).getStatus()==2)
        s="Đang cho mượn";
    else if((*c).getStatus()==3)
        s="Đã trả";
    else if((*c).getStatus()==4)
        s="Vi phạm";
    ui->status->setText(s);
}

void librarian::on_accept_clicked()
{
    for(int i=0;i<ui->CartInfos->rowCount();i++)
    {
        if(ui->CartInfos->item(i,0)->checkState()==Qt::Checked)
        {
            (*(cartInfos.begin()+ui->CartInfos->item(i,1)->text().toInt())).setStatus(1);
            (*(cartInfos.begin()+ui->CartInfos->item(i,1)->text().toInt())).setRecipient((*LogInUser).getID());
        }
    }
    on_newCart_clicked();
}

void librarian::on_send_clicked()
{
    for(int i=0;i<ui->CartInfos->rowCount();i++)
    {
        if(ui->CartInfos->item(i,0)->checkState()==Qt::Checked)
        {
            (*(cartInfos.begin()+ui->CartInfos->item(i,1)->text().toInt())).setStatus(2);
            (*(cartInfos.begin()+ui->CartInfos->item(i,1)->text().toInt())).setRecipient((*LogInUser).getID());
        }
    }
    on_acceptedCart_clicked();
}

void librarian::on_done_clicked()
{
    for(int i=0;i<ui->CartInfos->rowCount();i++)
    {
        if(ui->CartInfos->item(i,0)->checkState()==Qt::Checked)
        {
            (*(cartInfos.begin()+ui->CartInfos->item(i,1)->text().toInt())).setStatus(3);
            (*(cartInfos.begin()+ui->CartInfos->item(i,1)->text().toInt())).setRecipient((*LogInUser).getID());
        }
    }
    on_doneCart_clicked();
}

void librarian::on_infringe_clicked()
{
    for(int i=0;i<ui->CartInfos->rowCount();i++)
    {
        if(ui->CartInfos->item(i,0)->checkState()==Qt::Checked)
        {
            (*(cartInfos.begin()+ui->CartInfos->item(i,1)->text().toInt())).setStatus(3);
            (*(cartInfos.begin()+ui->CartInfos->item(i,1)->text().toInt())).setRecipient((*LogInUser).getID());
        }
    }
    on_infringeCart_clicked();
}

void librarian::on_searchButton_clicked()
{
    // Substring search
    // using Knuth–Morris–Pratt algorithm

    // Get word
    QString word=ui->searchUsers->text();
    if(word.length()==0)
        return;
    // Create table
    int* table=new int[word.length()+1];
    int pos=1, cnd=0;
    table[0]=-1;
    while(pos<word.length())
    {
        if(compare(word[pos], word[cnd]))
        {
            table[pos]=table[cnd];
            pos++;
            cnd++;
        }
        else
        {
            table[pos]=cnd;
            cnd=table[cnd];
            while(cnd>=0 && !compare(word[pos], word[cnd]))
                cnd=table[cnd];
            pos++;
            cnd++;
        }
    }
    table[pos]=cnd;
    // Search through the data
    QLinkedList<Account>::iterator it=accounts.begin();
    int cnt=0;
    ui->usersTable->setRowCount(0);
    ui->usersTable->setSortingEnabled(false);
    for(;it!=accounts.end();it++)
    {
        QLinkedList<User>::iterator it1=users.begin()+(*it).getID().toInt();
        if((*it).getRole()!="R") continue;
        QString s[]={(*it).getAcc(), (*it1).getName()};
        int m=0, i=0, pre=cnt;
        for(int j=0; j<2; j++)
        {
            while(m+i < s[j].length())
            {
                if(compare(word[i], s[j][m+i]))
                {
                    i++;
                    if(i==word.length())
                    {
                        ui->usersTable->insertRow(cnt);
                        ui->usersTable->setItem(cnt, 0, new QTableWidgetItem((*it1).getID()));
                        ui->usersTable->setItem(cnt, 1, new QTableWidgetItem((*it).getAcc()));
                        ui->usersTable->setItem(cnt, 2, new QTableWidgetItem((*it1).getName()));
                        QString status;
                        switch((*it).getStatus())
                        {
                        case 0:status="Đã kích hoạt";break;
                        case 1:status="Bị khóa";break;
                        case 2:status="Cấm mượn";break;
                        case 3:status="Tạm khóa";break;
                        }
                        ui->usersTable->setItem(cnt, 3, new QTableWidgetItem(status));
                        cnt++;
                        break;
                    }
                }
                else
                {
                    if(table[i]>-1)
                    {
                        m+=i-table[i];
                        i=table[i];
                    }
                    else
                    {
                        m+=i+1;
                        i=0;
                    }
                }
            }
            if(pre!=cnt) break;
            m=0, i=0;
        }
    }
    ui->usersTable->setSortingEnabled(true);
    delete table;
}
