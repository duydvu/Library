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
        if(id>=users.size())
            it1=temp_users.begin()+id-users.size();
        else it1=users.begin()+id;
        ui->registrationTable->setItem(cnt, 1, new QTableWidgetItem((*it).getAcc()));
        if((*it).getRole()=="L")
            ui->registrationTable->setItem(cnt, 2, new QTableWidgetItem("Thủ thư"));
        else ui->registrationTable->setItem(cnt, 2, new QTableWidgetItem("Độc giả"));
        ui->registrationTable->setItem(cnt, 3, new QTableWidgetItem((*it1).getName()));
        ui->registrationTable->setItem(cnt, 4, new QTableWidgetItem((*it1).getDoP()));
        cnt++;
    }
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
            ui->registrationTable->removeRow(i);
        }
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
            ui->registrationTable->removeRow(i);
        }
}
