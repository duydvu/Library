#include "admin.h"
#include "ui_admin.h"

Admin::Admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
    setWindowTitle("Libpro");
    Admin::setWindowState(Qt::WindowMaximized);
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



void Admin::on_searchButton_clicked()
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
    QLinkedList<User>::iterator it=users.begin();
    int cnt=0;
    ui->usersTable->setRowCount(0);
    for(;it!=users.end();it++)
    {
        QString s[]={(*it).getID(), (*it).getName(), (*it).getAddress(), (*it).getEmail()};
        int m=0, i=0, pre=cnt;
        for(int j=0; j<4; j++)
        {
            while(m+i < s[j].length())
            {
                if(compare(word[i], s[j][m+i]))
                {
                    i++;
                    if(i==word.length())
                    {
                        ui->usersTable->insertRow(cnt);
                        ui->usersTable->setItem(cnt, 0, new QTableWidgetItem((*it).getID()));
                        ui->usersTable->setItem(cnt, 1, new QTableWidgetItem((*it).getName()));
                        ui->usersTable->setItem(cnt, 2, new QTableWidgetItem((*it).getAddress()));
                        ui->usersTable->setItem(cnt, 3, new QTableWidgetItem((*it).getDateofBirth()));
                        ui->usersTable->setItem(cnt, 4, new QTableWidgetItem((*it).getEmail()));
                        ui->usersTable->setItem(cnt, 5, new QTableWidgetItem((*it).getSex()));
                        ui->usersTable->setItem(cnt, 6, new QTableWidgetItem((*it).getDoP()));
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
    delete table;
}
