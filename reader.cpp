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
    ui->name->setText(LogInUser.getName());
    ui->id->setText(LogInUser.getID());
    ui->dob->setText(LogInUser.getDateofBirth());
    ui->sex->setText(LogInUser.getSex());
    ui->email->setText(LogInUser.getEmail());
    ui->address->setText(LogInUser.getAddress());
    ui->dop->setText(LogInUser.getDoP());
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
    bookSearched.clear();
    QString category=ui->category->currentText();
    ui->bookTable->setRowCount(0);
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
                if(compare(word[i], s[j][m+i]))
                {
                    i++;
                    if(i==word.length())
                    {
                        bookSearched.append(*it);
                        ui->bookTable->insertRow(cnt);
                        ui->bookTable->setItem(cnt, 0, new QTableWidgetItem((*it).getName()));
                        ui->bookTable->setItem(cnt, 1, new QTableWidgetItem(cat));
                        ui->bookTable->setItem(cnt, 2, new QTableWidgetItem((*it).getAuthor()));
                        ui->bookTable->setItem(cnt, 3, new QTableWidgetItem((*it).getPublisher()));
                        if((*it).getQuantity()>0)
                            ui->bookTable->setItem(cnt, 4, new QTableWidgetItem("còn"));
                        else ui->bookTable->setItem(cnt, 4, new QTableWidgetItem("hết hàng"));
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

    delete table;
}

void reader::on_changeButton_clicked()
{
    bool read;
    if(ui->changeButton->text()=="Cập nhật")
    {
        read=false;
        ui->changeButton->setText("Xong");
    }
    else
    {
        read=true;
        ui->changeButton->setText("Cập nhật");
    }
    ui->name->setReadOnly(read);
    ui->id->setReadOnly(read);
    ui->dob->setReadOnly(read);
    ui->sex->setReadOnly(read);
    ui->email->setReadOnly(read);
    ui->address->setReadOnly(read);
}

void reader::on_bookTable_cellClicked(int row, int column)
{
    column++;
    QLinkedList<Book>::iterator b=bookSearched.begin()+row;
    ui->intro->setText((*b).getIntro());
}

void reader::on_name_textChanged(const QString &arg1)
{

}

void reader::on_bookBorrow_clicked()
{
    QLinkedList<Book>::iterator it=bookSearched.begin();
    int row=ui->bookTable->rowCount(), cnt=0;
    for(int i=0; i<row; i++)
    {
        if(ui->bookTable->item(i,5)->checkState()==Qt::Checked)
        {
            ui->borInfo->insertRow(cnt);
            ui->borInfo->setItem(cnt, 0, new QTableWidgetItem(QString::number(cartInfos.size()+cnt)));
            ui->borInfo->setItem(cnt, 1, new QTableWidgetItem((*(it+i)).getID()));
            ui->borInfo->setItem(cnt, 2, new QTableWidgetItem((*(it+i)).getName()));
            cnt++;
        }
    }

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
        c.setReaderName(LogInUser.getName());
        c.setReaderID(LogInUser.getID());
        c.setRecipient("");
        c.setBrrowTime(ToString(QDate::currentDate()));
        c.setDuration(ui->duration->value());
        c.setStatus(0);
        cartInfos.append(c);
    }
    ui->send->hide();
}

void reader::on_cancel_clicked()
{
    ui->borInfo->clearContents();
    ui->send->hide();
    ui->cancel->hide();
}
