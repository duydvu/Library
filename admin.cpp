#include "admin.h"
#include "ui_admin.h"

Admin::Admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
    setWindowTitle("Libpro");
    Admin::setWindowState(Qt::WindowMaximized);
    ui->staffTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->usersTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->registrationTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->CartInfos->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    regisTable();
    on_newCart_clicked();
    ui->s_done->hide();
    ui->r_done->hide();
    ui->searchButton->hide();

    QLinkedList<cartinfo>::iterator it=cartInfos.begin();
    for(;it!=cartInfos.end();it++)
    {
        if((*it).getStatus()==2)
        {
            if(QDate::fromString((*it).getBrrowTime(),"dd.MM.yyyy").daysTo(QDate::currentDate()) > (*it).getDuration())
            {
                (*it).setStatus(3);
                QString s=(*it).getReaderID();
                QLinkedList<Account>::iterator it1=accounts.begin();
                for(;it1!=accounts.end();it1++)
                {
                    if(s==(*it1).getID())
                    {
                        (*it1).setStatus(1);
                        break;
                    }
                }
            }
        }
    }
}

Admin::~Admin()
{
    delete ui;
}

void Admin::closeEvent (QCloseEvent *event)
{
    emit closed();
    event->accept();
}

void Admin::regisTable()
{
    ui->registrationTable->setSortingEnabled(false);
    ui->registrationTable->setRowCount(0);
    QLinkedList<Account>::iterator it=temp_accounts.begin();
    int cnt=0;
    for(int i=0;it!=temp_accounts.end();it++,i++)
    {
        ui->registrationTable->insertRow(cnt);
        QTableWidgetItem *item = new QTableWidgetItem("");
        item->setCheckState(Qt::Unchecked);
        ui->registrationTable->setItem(cnt, 0, item);
        QLinkedList<User>::iterator it1=temp_users.begin()+i;
        ui->registrationTable->setItem(cnt, 1, new QTableWidgetItem((*it).getID()));
        ui->registrationTable->setItem(cnt, 2, new QTableWidgetItem((*it).getAcc()));
        if((*it).getRole()=="L")
            ui->registrationTable->setItem(cnt, 3, new QTableWidgetItem("Thủ thư"));
        else ui->registrationTable->setItem(cnt, 3, new QTableWidgetItem("Độc giả"));
        ui->registrationTable->setItem(cnt, 4, new QTableWidgetItem((*it1).getName()));
        ui->registrationTable->setItem(cnt, 5, new QTableWidgetItem((*it1).getDoP()));
        ui->registrationTable->setItem(cnt, 6, new QTableWidgetItem((*it1).getDateofBirth()));
        ui->registrationTable->setItem(cnt, 7, new QTableWidgetItem((*it1).getSex()));
        ui->registrationTable->setItem(cnt, 8, new QTableWidgetItem((*it1).getEmail()));
        ui->registrationTable->setItem(cnt, 9, new QTableWidgetItem((*it1).getAddress()));
        cnt++;
    }
    ui->registrationTable->setSortingEnabled(true);
}

void Admin::on_searchButton_clicked()
{
    // Substring search
    // using Knuth–Morris–Pratt algorithm

    // Get word
    QString word=ui->searchUsers->text();
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
        QString s[]={(*it).getAcc(), (*it1).getName(), (*it).getID()};
        int m=0, i=0, pre=cnt;
        for(int j=0; j<3; j++)
        {
            while(m+i < s[j].length())
            {
                if(compare(word[i], s[j][m+i])||word.length()==0)
                {
                    i++;
                    if(i==word.length()||word.length()==0)
                    {
                        ui->usersTable->insertRow(cnt);
                        ui->usersTable->setItem(cnt, 0, new QTableWidgetItem((*it1).getID()));
                        ui->usersTable->setItem(cnt, 1, new QTableWidgetItem((*it).getAcc()));
                        ui->usersTable->setItem(cnt, 2, new QTableWidgetItem((*it1).getName()));
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

void Admin::on_Agree_clicked()
{
    for(int i=0; i<ui->registrationTable->rowCount(); i++)
        if(ui->registrationTable->item(i,0)->checkState()==Qt::Checked)
        {
            QLinkedList<Account>::iterator a=temp_accounts.begin();
            QLinkedList<User>::iterator u=temp_users.begin();
            for(;a!=temp_accounts.end();a++,u++)
            {
                if((*a).getID()==ui->registrationTable->item(i,1)->text())
                    break;
            }
            int j=0;
            QLinkedList<Account>::iterator it=accounts.begin();
            QLinkedList<User>::iterator it1=users.begin();
            for(;it!=accounts.end();it++,it1++,j++)
            {
                if((*it).getStatus()==-1)
                    break;
            }
            if(it!=accounts.end())
            {
                *it=*a;
                *it1=*u;
                (*it).setID(QString::number(j));
                (*it1).setID(QString::number(j));
                (*it1).setDoP(ToString(QDate::currentDate()));
            }
            else
            {
                accounts.append(*a);
                users.append(*u);
                accounts.last().setID(QString::number(j));
                users.last().setID(QString::number(j));
                users.last().setDoP(ToString(QDate::currentDate()));
            }
            temp_users.erase(u);
            temp_accounts.erase(a);
        }
    regisTable();
}



void Admin::on_Deny_clicked()
{
    for(int i=0; i<ui->registrationTable->rowCount(); i++)
        if(ui->registrationTable->item(i,0)->checkState()==Qt::Checked)
        {
            QLinkedList<Account>::iterator a=temp_accounts.begin();
            QLinkedList<User>::iterator u=temp_users.begin();
            for(;a!=temp_accounts.end();a++,u++)
            {
                if((*a).getID()==ui->registrationTable->item(i,1)->text())
                    break;
            }
            temp_users.erase(u);
            temp_accounts.erase(a);
        }
    regisTable();
}

void Admin::on_CartInfos_cellClicked(int row, int column)
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
        s="Vi phạm";
    else if((*c).getStatus()==4)
        s="Hoàn tất";
    ui->status->setText(s);

    ui->recipient->setText((*c).getRecipient());
}

void Admin::on_newCart_clicked()
{
    ui->accept->setEnabled(true);
    ui->done->setEnabled(false);
    ui->send->setEnabled(false);
    ui->infringe->setEnabled(false);
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
            QLinkedList<Book>::iterator b=books.begin();
            for(int i=0;b!=books.end();b++)
            {
                if((*b).getID()==(*it).getBookID())
                {
                    ui->CartInfos->setItem(cnt, 5, new QTableWidgetItem(QString::number((*b).getQuantity()-numberOfLentBooks[i])));
                    break;
                }
                i++;
            }
            cnt++;
        }
    }
}

void Admin::on_acceptedCart_clicked()
{
    ui->accept->setEnabled(false);
    ui->done->setEnabled(false);
    ui->send->setEnabled(true);
    ui->infringe->setEnabled(false);
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
            QLinkedList<Book>::iterator b=books.begin();
            for(int i=0;b!=books.end();b++)
            {
                if((*b).getID()==(*it).getBookID())
                {
                    ui->CartInfos->setItem(cnt, 5, new QTableWidgetItem(QString::number((*b).getQuantity()-numberOfLentBooks[i])));
                    break;
                }
                i++;
            }
            cnt++;
        }
    }
}

void Admin::on_lendingCart_clicked()
{
    ui->accept->setEnabled(false);
    ui->done->setEnabled(true);
    ui->send->setEnabled(false);
    ui->infringe->setEnabled(true);
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
            QLinkedList<Book>::iterator b=books.begin();
            for(int i=0;b!=books.end();b++)
            {
                if((*b).getID()==(*it).getBookID())
                {
                    ui->CartInfos->setItem(cnt, 5, new QTableWidgetItem(QString::number((*b).getQuantity()-numberOfLentBooks[i])));
                    break;
                }
                i++;
            }
            cnt++;
        }
    }
}

void Admin::on_infringeCart_clicked()
{
    ui->accept->setEnabled(false);
    ui->done->setEnabled(true);
    ui->send->setEnabled(false);
    ui->infringe->setEnabled(false);
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
            QLinkedList<Book>::iterator b=books.begin();
            for(int i=0;b!=books.end();b++)
            {
                if((*b).getID()==(*it).getBookID())
                {
                    ui->CartInfos->setItem(cnt, 5, new QTableWidgetItem(QString::number((*b).getQuantity()-numberOfLentBooks[i])));
                    break;
                }
                i++;
            }
            cnt++;
        }
    }
}

void Admin::on_doneCart_clicked()
{
    ui->accept->setEnabled(false);
    ui->done->setEnabled(false);
    ui->send->setEnabled(false);
    ui->infringe->setEnabled(false);
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
            QLinkedList<Book>::iterator b=books.begin();
            for(int i=0;b!=books.end();b++)
            {
                if((*b).getID()==(*it).getBookID())
                {
                    ui->CartInfos->setItem(cnt, 5, new QTableWidgetItem(QString::number((*b).getQuantity()-numberOfLentBooks[i])));
                    break;
                }
                i++;
            }
            cnt++;
        }
    }
}

void Admin::on_accept_clicked()
{
    for(int i=0;i<ui->CartInfos->rowCount();i++)
    {
        if(ui->CartInfos->item(i,0)->checkState()==Qt::Checked)
        {
            int n=ui->CartInfos->item(i,1)->text().toInt();
            QLinkedList<Book>::iterator b=books.begin();
            bool check=true;
            for(int i=0;b!=books.end();b++)
            {
                if((*b).getID()==(*(cartInfos.begin()+n)).getBookID())
                {
                    int m=0;
                    QLinkedList<cartinfo>::iterator c=cartInfos.begin();
                    for(;c!=cartInfos.end();c++)
                    {
                        if((*c).getBookID()==(*b).getID())
                            if((*c).getStatus()==1)
                                m++;
                    }
                    if((*b).getQuantity()-numberOfLentBooks[i]-m<=0)
                        check=false;
                    break;
                }
                i++;
            }
            if(!check)
            {
                QMessageBox::warning(0,"Không còn sách để cho mượn",
                (*(cartInfos.begin()+n)).getReaderName() + " chưa thể mượn sách.",
                QMessageBox::Ok);
                continue;
            }
            (*(cartInfos.begin()+n)).setStatus(1);
            (*(cartInfos.begin()+n)).setRecipient((*LogInUser).getName());
        }
    }
    on_newCart_clicked();
}

void Admin::on_send_clicked()
{
    for(int i=0;i<ui->CartInfos->rowCount();i++)
    {
        if(ui->CartInfos->item(i,0)->checkState()==Qt::Checked)
        {
            int n=ui->CartInfos->item(i,1)->text().toInt();
            QLinkedList<Book>::iterator b=books.begin();
            bool check=true;
            for(int i=0;b!=books.end();b++)
            {
                if((*b).getID()==(*(cartInfos.begin()+n)).getBookID())
                {
                    if((*b).getQuantity()-numberOfLentBooks[i]>0)
                        numberOfLentBooks[i]++;
                    else check=false;
                    break;
                }
                i++;
            }
            if(!check)
            {
                QMessageBox::information(0,"Không còn sách để cho mượn",
                (*(cartInfos.begin()+n)).getReaderName() + " chưa thể mượn sách.",
                QMessageBox::Ok);
                continue;
            }
            (*(cartInfos.begin()+n)).setStatus(2);
            (*(cartInfos.begin()+n)).setBrrowTime(ToString(QDate::currentDate()));
            (*(cartInfos.begin()+n)).setRecipient((*LogInUser).getName());
        }
    }
    on_acceptedCart_clicked();
}

void Admin::on_infringe_clicked()
{
    for(int i=0;i<ui->CartInfos->rowCount();i++)
    {
        if(ui->CartInfos->item(i,0)->checkState()==Qt::Checked)
        {
            (*(cartInfos.begin()+ui->CartInfos->item(i,1)->text().toInt())).setStatus(3);
            (*(cartInfos.begin()+ui->CartInfos->item(i,1)->text().toInt())).setRecipient((*LogInUser).getName());
            QString s=(*(cartInfos.begin()+ui->CartInfos->item(i,1)->text().toInt())).getReaderID();
            QLinkedList<Account>::iterator it=accounts.begin();
            for(;it!=accounts.end();it++)
            {
                if(s==(*it).getID())
                {
                    (*it).setStatus(1);
                    break;
                }
            }
        }
    }
    on_lendingCart_clicked();
}

void Admin::on_done_clicked()
{
    for(int i=0;i<ui->CartInfos->rowCount();i++)
    {
        if(ui->CartInfos->item(i,0)->checkState()==Qt::Checked)
        {
            int n=ui->CartInfos->item(i,1)->text().toInt();
            QLinkedList<Book>::iterator b=books.begin();
            for(int i=0;b!=books.end();b++)
            {
                if((*b).getID()==(*(cartInfos.begin()+n)).getBookID())
                {
                    numberOfLentBooks[i]--;
                    break;
                }
                i++;
            }
            if((*(cartInfos.begin()+n)).getStatus()==3)
            {
                QString s=(*(cartInfos.begin()+n)).getReaderID();
                QLinkedList<Account>::iterator it=accounts.begin();
                for(;it!=accounts.end();it++)
                {
                    if(s==(*it).getID())
                    {
                        (*it).setStatus(0);
                        break;
                    }
                }
            }
            (*(cartInfos.begin()+n)).setStatus(4);
            (*(cartInfos.begin()+n)).setRecipient((*LogInUser).getName());
        }
    }
    on_infringeCart_clicked();
}

void Admin::on_name_returnPressed()
{
    // Substring search
    // using Knuth–Morris–Pratt algorithm

    // Get word
    QString word=ui->name->text();
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
    ui->staffTable->setRowCount(0);
    ui->staffTable->setSortingEnabled(false);
    for(;it!=accounts.end();it++)
    {
        QLinkedList<User>::iterator it1=users.begin()+(*it).getID().toInt();
        if((*it).getRole()!="L") continue;
        QString s=(*it1).getName();
        int m=0, i=0;
        while(m+i < s.length())
        {
            if(compare(word[i], s[m+i])||word.length()==0)
            {
                i++;
                if(i==word.length()||word.length()==0)
                {
                    ui->staffTable->insertRow(cnt);
                    ui->staffTable->setItem(cnt, 0, new QTableWidgetItem((*it).getID()));
                    ui->staffTable->setItem(cnt, 1, new QTableWidgetItem((*it).getAcc()));
                    ui->staffTable->setItem(cnt, 2, new QTableWidgetItem((*it1).getName()));
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
    }
    ui->staffTable->setSortingEnabled(true);
    delete table;
}

void Admin::on_id_returnPressed()
{
    // Substring search
    // using Knuth–Morris–Pratt algorithm

    // Get word
    QString word=ui->id->text();
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
    ui->staffTable->setRowCount(0);
    ui->staffTable->setSortingEnabled(false);
    for(;it!=accounts.end();it++)
    {
        QLinkedList<User>::iterator it1=users.begin()+(*it).getID().toInt();
        if((*it).getRole()!="L") continue;
        QString s=(*it1).getID();
        int m=0, i=0;
        while(m+i < s.length())
        {
            if(compare(word[i], s[m+i])||word.length()==0)
            {
                i++;
                if(i==word.length()||word.length()==0)
                {
                    ui->staffTable->insertRow(cnt);
                    ui->staffTable->setItem(cnt, 0, new QTableWidgetItem((*it).getID()));
                    ui->staffTable->setItem(cnt, 1, new QTableWidgetItem((*it).getAcc()));
                    ui->staffTable->setItem(cnt, 2, new QTableWidgetItem((*it1).getName()));
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
    }
    ui->staffTable->setSortingEnabled(true);
    delete table;
}

void Admin::on_staffTable_cellClicked(int row, int column)
{
    QString id=ui->staffTable->item(row,0)->text();
    QLinkedList<User>::iterator it=users.begin()+id.toInt();
    QLinkedList<Account>::iterator a=accounts.begin()+id.toInt();
    ui->s_id->setText((*it).getID());
    ui->s_name->setText((*it).getName());
    ui->s_DoP->setText((*it).getDoP());
    ui->s_sex->setText((*it).getSex());
    ui->s_email->setText((*it).getEmail());
    ui->s_add->setText((*it).getAddress());
    ui->s_DoB->setText((*it).getDateofBirth());
    if((*a).getStatus()==0)
        ui->s_active->setChecked(true);
    else ui->s_nactive->setChecked(true);
}

void Admin::on_changePass_clicked()
{
    if(ui->s_id->text()=="") return;
    pa=QSharedPointer<Password>(new Password);
    connect(pa.data(),SIGNAL(accepted()),this,SLOT(LibraPassChange()));
    pa.data()->exec();
}

void Admin::LibraPassChange()
{
    QLinkedList<Account>::iterator a=accounts.begin()+ui->s_id->text().toInt();
    (*a).setPsw(Account::encrypt(pa.data()->getPass()));
    pa.clear();
}

void Admin::on_changeInfo_clicked()
{
    if(ui->s_id->text()=="") return;
    ui->s_done->show();
    ui->s_name->setReadOnly(false);
    ui->s_sex->setReadOnly(false);
    ui->s_email->setReadOnly(false);
    ui->s_add->setReadOnly(false);
    ui->s_DoB->setReadOnly(false);
    ui->staffTable->setEnabled(false);
}

void Admin::on_s_done_clicked()
{
    QLinkedList<User>::iterator u=users.begin()+ui->s_id->text().toInt();
    QLinkedList<Account>::iterator a=accounts.begin()+ui->s_id->text().toInt();
    (*u).setName(ui->s_name->text());
    (*u).setSex(ui->s_sex->text());
    (*u).setEmail(ui->s_email->text());
    (*u).setAddress(ui->s_add->text());
    if(ui->s_active->isChecked())
        (*a).setStatus(0);
    else (*a).setStatus(1);
    ui->s_done->hide();
    ui->s_name->setReadOnly(true);
    ui->s_sex->setReadOnly(true);
    ui->s_email->setReadOnly(true);
    ui->s_add->setReadOnly(true);
    ui->s_DoB->setReadOnly(true);
    ui->staffTable->setEnabled(true);
}

void Admin::on_usersTable_cellClicked(int row, int column)
{
    QString id=ui->usersTable->item(row,0)->text();
    QLinkedList<User>::iterator it=users.begin()+id.toInt();
    QLinkedList<Account>::iterator a=accounts.begin()+id.toInt();
    ui->r_id->setText((*it).getID());
    ui->r_name->setText((*it).getName());
    ui->r_DoP->setText((*it).getDoP());
    ui->r_DoB->setText((*it).getDateofBirth());
    ui->r_sex->setText((*it).getSex());
    ui->r_email->setText((*it).getEmail());
    ui->r_add->setText((*it).getAddress());
    QString status;
    switch((*a).getStatus())
    {
    case 0:status="Đã kích hoạt";break;
    case 1:status="Bị khóa";break;
    case 2:status="Cấm mượn";break;
    case 3:status="Tạm khóa";break;
    }
    ui->r_stt->setText(status);
}

void Admin::on_pushButton_4_clicked()
{
    if(ui->r_id->text()=="") return;
    pa=QSharedPointer<Password>(new Password);
    connect(pa.data(),SIGNAL(accepted()),this,SLOT(ReaderPassChange()));
    pa.data()->exec();
}

void Admin::ReaderPassChange()
{
    QLinkedList<Account>::iterator a=accounts.begin()+ui->r_id->text().toInt();
    (*a).setPsw(Account::encrypt(pa.data()->getPass()));
    pa.clear();
}

void Admin::on_pushButton_3_clicked()
{
    if(ui->r_id->text()=="") return;
    QLinkedList<Account>::iterator a=accounts.begin()+ui->r_id->text().toInt();
    if((*a).getStatus()==0)
        (*a).setStatus(1);
    else if((*a).getStatus()==1)
        (*a).setStatus(0);
    QString status;
    switch((*a).getStatus())
    {
    case 0:status="Đã kích hoạt";break;
    case 1:status="Bị khóa";break;
    }
    ui->r_stt->setText(status);
}

void Admin::on_pushButton_2_clicked()
{
    if(ui->r_id->text()=="") return;
    ui->r_done->show();
    ui->r_name->setReadOnly(false);
    ui->r_sex->setReadOnly(false);
    ui->r_email->setReadOnly(false);
    ui->r_add->setReadOnly(false);
    ui->r_DoB->setReadOnly(false);
    ui->usersTable->setEnabled(false);
}

void Admin::on_r_done_clicked()
{
    QLinkedList<User>::iterator u=users.begin()+ui->r_id->text().toInt();
    (*u).setName(ui->r_name->text());
    (*u).setSex(ui->r_sex->text());
    (*u).setEmail(ui->r_email->text());
    (*u).setAddress(ui->r_add->text());
    (*u).setDateofBirth(ui->r_DoB->text());
    ui->r_done->hide();
    ui->r_name->setReadOnly(true);
    ui->r_sex->setReadOnly(true);
    ui->r_email->setReadOnly(true);
    ui->r_add->setReadOnly(true);
    ui->r_DoB->setReadOnly(true);
    ui->usersTable->setEnabled(true);
}

void Admin::on_searchBook_returnPressed()
{
    // Substring search
    // using Knuth–Morris–Pratt algorithm

    // Get word
    QString word=ui->searchBook->text();
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
    QLinkedList<Book>::iterator it=books.begin();
    int cnt=0;
    QString category=ui->category->currentText();
    ui->bookTable->setRowCount(0);
    ui->bookTable->setSortingEnabled(false);
    for(;it!=books.end();it++)
    {
        QString cat=(*it).getID().left(3);
        cat=findCategory(cat);
        if(cat!=category && category!="Tất cả") continue;

        QString s[]={(*it).getName(), (*it).getAuthor(), (*it).getPublisher()};
        int m=0, i=0, pre=cnt;
        for(int j=0; j<3; j++)
        {
            while(m+i<s[j].length())
            {
                if(compare(word[i], s[j][m+i])||word.length()==0)
                {
                    i++;
                    if(i==word.length()||word.length()==0)
                    {
                        ui->bookTable->insertRow(cnt);
                        ui->bookTable->setItem(cnt, 0, new QTableWidgetItem((*it).getID()));
                        ui->bookTable->setItem(cnt, 1, new QTableWidgetItem((*it).getName()));
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
    ui->bookTable->setSortingEnabled(true);
    delete table;
}

void Admin::on_category_currentIndexChanged(int index)
{
    on_searchBook_returnPressed();
}

void Admin::on_bookTable_cellClicked(int row, int column)
{
    QString s=ui->bookTable->item(row, 0)->text();
    QLinkedList<Book>::iterator it=books.begin();
    for(int i=0;it!=books.end();it++)
    {
        if((*it).getID()==s)
        {
            ui->bookName_2->setText((*it).getName());
            ui->bookAu->setText((*it).getAuthor());
            ui->bookID->setText((*it).getID());
            ui->bookQuantity->setValue((*it).getQuantity());
            ui->bookPub->setText((*it).getPublisher());
            ui->bookIntro->setText((*it).getIntro());
            ui->bookLent->setText(QString::number(numberOfLentBooks[i]));
            ui->bookRemain->setText(QString::number((*it).getQuantity()-numberOfLentBooks[i]));
            break;
        }
        i++;
    }
}

void Admin::on_bookChange_clicked()
{
    if(ui->bookChange->text()=="Cập nhật")
    {
        ui->bookName_2->setReadOnly(false);
        ui->bookAu->setReadOnly(false);
        ui->bookPub->setReadOnly(false);
        ui->bookQuantity->setReadOnly(false);
        ui->bookIntro->setReadOnly(false);
        ui->bookChange->setText("Xong");
    }
    else
    {
        QString s=ui->bookID->text();
        QLinkedList<Book>::iterator it=books.begin();
        for(;it!=books.end();it++)
        {
            if((*it).getID()==s)
            {
                (*it).setName(ui->bookName_2->text());
                (*it).setAuthor(ui->bookAu->text());
                (*it).setPublisher(ui->bookPub->text());
                (*it).setQuantity(ui->bookQuantity->value());
                (*it).setIntro(ui->bookIntro->toPlainText());
                break;
            }
        }

        ui->bookName_2->setReadOnly(true);
        ui->bookAu->setReadOnly(true);
        ui->bookPub->setReadOnly(true);
        ui->bookQuantity->setReadOnly(true);
        ui->bookIntro->setReadOnly(true);
        ui->bookChange->setText("Cập nhật");
    }
}

void Admin::on_removeStaff_clicked()
{
    QString s=ui->s_id->text();
    QLinkedList<Account>::iterator it=accounts.begin();
    QLinkedList<User>::iterator it1=users.begin();
    for(;it!=accounts.end();it++,it1++)
    {
        if((*it).getID()==s)
        {
            (*it).clear();
            (*it1).clear();
            break;
        }
    }
    on_name_returnPressed();
}

void Admin::on_removeUser_clicked()
{
    QString s=ui->r_id->text();
    QLinkedList<Account>::iterator it=accounts.begin();
    QLinkedList<User>::iterator it1=users.begin();
    for(;it!=accounts.end();it++,it1++)
    {
        if((*it).getID()==s)
        {
            (*it).clear();
            (*it1).clear();
            break;
        }
    }
    on_searchButton_clicked();
}
