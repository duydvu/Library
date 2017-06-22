#include "librarian.h"
#include "ui_librarian.h"

librarian::librarian(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::librarian)
{
    ui->setupUi(this);
    setWindowTitle("Libpro");
    librarian::setWindowState(Qt::WindowMaximized);
    ui->usersTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->registrationTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->CartInfos->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    regisTable();
    on_newCart_clicked();
    ui->r_done->hide();
    ui->searchButton->hide();

    ui->id->setText((*LogInUser).getID());
    ui->name->setText((*LogInUser).getName());
    ui->sex->setText((*LogInUser).getSex());
    ui->DoB->setText((*LogInUser).getDateofBirth());
    ui->email->setText((*LogInUser).getEmail());
    ui->address->setText((*LogInUser).getAddress());
    ui->dop->setText((*LogInUser).getDoP());

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

    QString s;
    if((*LogInAcc).getStatus())
    {
        ui->libra->setTabEnabled(1, false);
        ui->libra->setTabEnabled(2, false);
        ui->libra->setTabEnabled(3, false);
        ui->libra->setTabEnabled(4, false);
        s="Hợp đồng của bạn đã hết hiệu lực.";
    }
    else s="<p><center>Chúc bạn một ngày làm việc thật vui vẻ! Thân!</center></p>";
    ui->remind->setHtml(s);
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

void librarian::on_acceptedCart_clicked()
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

void librarian::on_lendingCart_clicked()
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

void librarian::on_infringeCart_clicked()
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

void librarian::on_doneCart_clicked()
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
        s="Vi phạm";
    else if((*c).getStatus()==4)
        s="Hoàn tất";
    ui->status->setText(s);

    ui->recipient->setText((*c).getRecipient());
}

void librarian::on_accept_clicked()
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

void librarian::on_send_clicked()
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

void librarian::on_infringe_clicked()
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
    on_infringeCart_clicked();
}

void librarian::on_done_clicked()
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
    on_doneCart_clicked();
}

void librarian::on_searchButton_clicked()
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

void librarian::on_usersTable_cellClicked(int row, int column)
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
    }
    ui->r_stt->setText(status);
}

void librarian::on_pushButton_4_clicked()
{
    if(ui->r_id->text()=="") return;
    pa=QSharedPointer<Password>(new Password);
    connect(pa.data(),SIGNAL(accepted()),this,SLOT(ReaderPassChange()));
    pa.data()->exec();
}

void librarian::ReaderPassChange()
{
    QLinkedList<Account>::iterator a=accounts.begin()+ui->r_id->text().toInt();
    (*a).setPsw(Account::encrypt(pa.data()->getPass()));
    pa.clear();
}

void librarian::on_pushButton_2_clicked()
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

void librarian::on_r_done_clicked()
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

void librarian::on_pushButton_3_clicked()
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
    case 2:status="Cấm mượn";break;
    case 3:status="Tạm khóa";break;
    }
    ui->r_stt->setText(status);
}

void librarian::on_pushButton_6_clicked()
{
    pa=QSharedPointer<Password>(new Password);
    connect(pa.data(),SIGNAL(accepted()),this,SLOT(ChangePass()));
    pa.data()->exec();
}

void librarian::ChangePass()
{
    (*LogInAcc).setPsw(Account::encrypt(pa.data()->getPass()));
    pa.clear();
}

void librarian::on_pushButton_5_clicked()
{
    if(ui->pushButton_5->text()=="Cập nhật")
    {
        ui->name->setReadOnly(false);
        ui->DoB->setReadOnly(false);
        ui->sex->setReadOnly(false);
        ui->email->setReadOnly(false);
        ui->address->setReadOnly(false);
        ui->pushButton_5->setText("Xong");
    }
    else
    {
        (*LogInUser).setName(ui->name->text());
        (*LogInUser).setDateofBirth(ui->DoB->text());
        (*LogInUser).setSex(ui->sex->text());
        (*LogInUser).setEmail(ui->email->text());
        (*LogInUser).setAddress(ui->address->text());
        ui->name->setReadOnly(true);
        ui->DoB->setReadOnly(true);
        ui->sex->setReadOnly(true);
        ui->email->setReadOnly(true);
        ui->address->setReadOnly(true);
        ui->pushButton_5->setText("Cập nhật");
    }
}

void librarian::on_searchBook_returnPressed()
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

void librarian::on_category_currentIndexChanged(int index)
{
    on_searchBook_returnPressed();
}

void librarian::on_pushButton_7_clicked()
{
    if(ui->pushButton_7->text()=="Cập nhật")
    {
        ui->bookName_2->setReadOnly(false);
        ui->bookAu->setReadOnly(false);
        ui->bookPub->setReadOnly(false);
        ui->bookQuantity->setReadOnly(false);
        ui->bookIntro->setReadOnly(false);
        ui->pushButton_7->setText("Xong");
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
        ui->pushButton_7->setText("Cập nhật");
    }
}

void librarian::on_bookTable_cellClicked(int row, int column)
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
