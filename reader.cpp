#include "reader.h"
#include "ui_reader.h"

reader::reader(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::reader)
{
    ui->setupUi(this);
    setWindowTitle("Libpro");
    reader::setWindowState(Qt::WindowMaximized);
    ui->borInfo->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->send->hide();
    ui->cancel->hide();
    ui->name->setText((*LogInUser).getName());
    ui->id->setText((*LogInUser).getID());
    ui->dob->setText((*LogInUser).getDateofBirth());
    ui->sex->setText((*LogInUser).getSex());
    ui->email->setText((*LogInUser).getEmail());
    ui->address->setText((*LogInUser).getAddress());
    ui->dop->setText((*LogInUser).getDoP());
    int allbor=0, allreturn=0, infringe=0;
    QLinkedList<cartinfo>::iterator it=cartInfos.begin();
    for(;it!=cartInfos.end();it++)
    {
        if((*it).getReaderID()==(*LogInUser).getID())
        {
            switch((*it).getStatus())
            {
            case 2:
                allbor++;
                break;
            case 3:
                allbor++;
                allreturn++;
                break;
            case 4:
                allbor++;
                infringe++;
            }
        }
    }
    ui->allbor->setText(QString::number(allbor));
    ui->allreturn->setText(QString::number(allreturn));
    ui->infringe->setText(QString::number(infringe));
}

reader::~reader()
{
    delete ui;
}

void reader::closeEvent (QCloseEvent *event)
{
    emit closed();
    event->accept();
}

void reader::on_searchButton_clicked()
{
    // Substring search
    // using Knuth–Morris–Pratt algorithm

    // Get word
    QString word=ui->bookSearch->text();
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
                        ui->bookTable->setItem(cnt, 0, new QTableWidgetItem((*it).getName()));
                        ui->bookTable->setItem(cnt, 1, new QTableWidgetItem(cat));
                        ui->bookTable->setItem(cnt, 2, new QTableWidgetItem((*it).getAuthor()));
                        ui->bookTable->setItem(cnt, 3, new QTableWidgetItem((*it).getPublisher()));
                        if((*it).getQuantity()>0)
                            ui->bookTable->setItem(cnt, 4, new QTableWidgetItem("còn"));
                        else ui->bookTable->setItem(cnt, 4, new QTableWidgetItem("hết sách"));
                        QTableWidgetItem *item = new QTableWidgetItem("");
                        item->setCheckState(Qt::Unchecked);
                        ui->bookTable->setItem(cnt, 5, item);
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

void reader::on_changeButton_clicked()
{
    if(ui->changeButton->text()=="Cập nhật")
    {
        ui->name->setReadOnly(false);
        ui->dob->setReadOnly(false);
        ui->sex->setReadOnly(false);
        ui->email->setReadOnly(false);
        ui->address->setReadOnly(false);
        ui->changeButton->setText("Xong");
    }
    else
    {
        (*LogInUser).setName(ui->name->text());
        (*LogInUser).setDateofBirth(ui->dob->text());
        (*LogInUser).setSex(ui->sex->text());
        (*LogInUser).setEmail(ui->email->text());
        (*LogInUser).setAddress(ui->address->text());
        ui->name->setReadOnly(true);
        ui->dob->setReadOnly(true);
        ui->sex->setReadOnly(true);
        ui->email->setReadOnly(true);
        ui->address->setReadOnly(true);
        ui->changeButton->setText("Cập nhật");
    }
}

void reader::on_bookTable_cellClicked(int row, int column)
{
    QString s = ui->bookTable->item(row,0)->text();
    QLinkedList<Book>::iterator it=books.begin();
    for(;it!=books.end();it++)
    {

        if(s==(*it).getName())
        {
            ui->intro->setText((*it).getIntro());
            ui->bookName->setText(s);
            QImage image("Images/Books/"+(*it).getID()+".jpg");
            this->ptr_scene=QSharedPointer<QGraphicsScene>(new QGraphicsScene());
            ui->bookView->setScene(ptr_scene.data());
            QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(image));
            ptr_scene.data()->addItem(item);
            ui->bookView->fitInView(ptr_scene.data()->itemsBoundingRect(),Qt::KeepAspectRatio);
            ui->bookView->show();
            break;
        }
    }
}

void reader::on_bookBorrow_clicked()
{
    int row=ui->bookTable->rowCount(), cnt=0;
    for(int i=0; i<row; i++)
    {
        if(ui->bookTable->item(i,5)->checkState()==Qt::Checked)
        {
            QString s = ui->bookTable->item(i,0)->text();
            QLinkedList<Book>::iterator it=books.begin();
            for(;it!=books.end();it++)
            {
                if(s==(*it).getName()) break;
            }
            ui->borInfo->insertRow(cnt);
            ui->borInfo->setItem(cnt, 0, new QTableWidgetItem(QString::number(cartInfos.size()+cnt)));
            ui->borInfo->setItem(cnt, 1, new QTableWidgetItem((*it).getID()));
            ui->borInfo->setItem(cnt, 2, new QTableWidgetItem((*it).getName()));
            cnt++;
        }
    }
    if(cnt==0) return;
    ui->readerTab->setCurrentIndex(2);
    ui->send->show();
    ui->cancel->show();
}

void reader::on_send_clicked()
{
    cartinfo c;
    for(int i=0;i<ui->borInfo->rowCount();i++)
    {
        c.setID(QString::number(cartInfos.size()));
        c.setBookID(ui->borInfo->item(i,1)->text());
        c.setBookName(ui->borInfo->item(i,2)->text());
        c.setReaderName((*LogInUser).getName());
        c.setReaderID((*LogInUser).getID());
        c.setRecipient("");
        c.setBrrowTime(ToString(QDate::currentDate()));
        c.setDuration(ui->duration->value());
        c.setStatus(0);
        cartInfos.append(c);
    }
    ui->send->hide();
    ui->cancel->hide();
}

void reader::on_cancel_clicked()
{
    ui->borInfo->setRowCount(0);
    ui->send->hide();
    ui->cancel->hide();
}

void reader::on_borInfo_cellClicked(int row, int column)
{
    QString s = ui->borInfo->item(row,1)->text();
    QLinkedList<Book>::iterator it=books.begin();
    for(;it!=books.end();it++)
    {

        if(s==(*it).getID())
        {
            ui->borBookName->setText(s);
            QImage image("Images/Books/"+(*it).getID()+".jpg");
            this->ptr_scene=QSharedPointer<QGraphicsScene>(new QGraphicsScene());
            ui->borBookView->setScene(ptr_scene.data());
            QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(image));
            ptr_scene.data()->addItem(item);
            ui->borBookView->fitInView(ptr_scene.data()->itemsBoundingRect(),Qt::KeepAspectRatio);
            ui->borBookView->show();
            break;
        }
    }
}

void reader::on_changePass_clicked()
{
    pa=QSharedPointer<Password>(new Password);
    connect(pa.data(),SIGNAL(accepted()),this,SLOT(ChangePass()));
    pa.data()->exec();
}

void reader::ChangePass()
{
    (*LogInAcc).setPsw(Account::encrypt(pa.data()->getPass()));
}
