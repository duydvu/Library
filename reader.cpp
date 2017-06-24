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
    ui->readerTab->setTabEnabled(2,false);

    ui->send->hide();
    ui->cancel->hide();
    ui->name->setText((*LogInUser).getName());
    ui->id->setText((*LogInUser).getID());
    ui->dob->setText((*LogInUser).getDateofBirth());
    ui->sex->setText((*LogInUser).getSex());
    ui->email->setText((*LogInUser).getEmail());
    ui->address->setText((*LogInUser).getAddress());
    ui->dop->setText((*LogInUser).getDoP());
    if((*LogInAcc).getStatus())
        ui->status->setText("Bạn đã bị khóa");
    else ui->status->setText("Tích cực");

    QLinkedList<cartinfo>::iterator it=cartInfos.begin();
    for(;it!=cartInfos.end();it++)
    {
        if((*it).getReaderID()==(*LogInUser).getID())
        {
            myCartInfos.append((*it));
        }
    }

    ui->allbor->setText(QString::number(myCartInfos.size()));
    int done=0, lending=0, waiting=0, infringe=0, duration=9999;
    it=myCartInfos.begin();
    for(;it!=myCartInfos.end();it++)
    {
        if((*it).getStatus()==4)
        {
            done++;
        }
        else if((*it).getStatus()==2)
        {
            lending++;
            if((*it).getDuration()-QDate::fromString((*it).getBrrowTime(),"dd.MM.yyyy").daysTo(QDate::currentDate())<duration)
                duration=(*it).getDuration()-QDate::fromString((*it).getBrrowTime(),"dd.MM.yyyy").daysTo(QDate::currentDate());
        }
        else if((*it).getStatus()==1)
        {
            waiting++;
        }
        else if((*it).getStatus()==3)
        {
            infringe++;
        }
    }
    ui->allreturn->setText(QString::number(done));

    if(myCartInfos.size()>0)
    {
        currentCart=myCartInfos.begin();
        ui->cartid->setText((*currentCart).getID());
        ui->cartname->setText((*currentCart).getBookName());
        ui->cartdate->setText((*currentCart).getBrrowTime());
        ui->cartduration->setText(QString::number((*currentCart).getDuration())+" ngày");
        QString s;
        switch((*currentCart).getStatus())
        {
        case 0:
            s="Chưa phản hồi";
            break;
        case 1:
            s="Đã chấp nhận";
            break;
        case 2:
            s="Đang mượn";
            break;
        case 3:
            s="Vi phạm";
            break;
        case 4:
            s="Hoàn tất";
        }
        ui->cartstatus->setText(s);
    }

    QString s="<i>Xin chào bạn!  :)</i><br><br>";
    if(lending>0)
    {
        s+="<p style='background-color:green; color: white; margin: 0;'>Hiện tại bạn đang mượn "+QString::number(lending)+" cuốn sách từ thư viện.<br>";
        s+="Bạn còn "+QString::number(duration)+" ngày nữa để trả số sách mà bạn đang mượn.</p><br>";
    }
    if(waiting>0)
        s+="<p style='background-color:blue; color: white; margin: 0;'>Bạn có "+QString::number(waiting)+" phiếu mượn đã được chấp nhận đang chờ bạn đến lấy sách.</p><br>";
    if(infringe>0)
        s+="<p style='background-color:red; color: white; margin: 0;'>***Bạn đã vi phạm "+QString::number(infringe)+" phiếu mượn sách và chúng tôi đã khóa tài khoản của bạn, bạn hãy đến thư viện để đóng phạt và trả lại sách để được mở lại tài khoản. Chúng tôi mong bạn sẽ không vi phạm thêm nữa. Thân!</p><br>";
    s+="<center><i>Chúc bạn một ngày tốt lành!</i></center><br><center>- Hết -</center>";
    ui->myAnnouncement->setHtml(s);
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

void reader::resizeEvent(QResizeEvent* event)
{
    ui->bookTable->setColumnWidth(0,ui->bookTable->width()*40/100);
    ui->bookTable->setColumnWidth(1,ui->bookTable->width()*15/100);
    ui->bookTable->setColumnWidth(2,ui->bookTable->width()*15/100);
    ui->bookTable->setColumnWidth(3,ui->bookTable->width()*15/100);
    ui->bookTable->setColumnWidth(4,ui->bookTable->width()*10/100);
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
    for(int k=0;it!=books.end();it++)
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
                        if((*it).getQuantity()-numberOfLentBooks[k]>0)
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
        k++;
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
            if(!this->ptr_scene.isNull())
                this->ptr_scene.clear();
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
    if((*LogInAcc).getStatus()) return;
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
    ui->readerTab->setTabEnabled(2,true);
    ui->readerTab->setCurrentIndex(2);
    ui->send->show();
    ui->cancel->show();
}

void reader::on_send_clicked()
{
    if(ui->duration->value()==0)
    {
        QMessageBox::warning(0,"Thời hạn không hợp lệ",
        "Bạn hãy chọn 1 thời hạn thích hợp để mượn sách.",
        QMessageBox::Ok);
        return;
    }
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
    QMessageBox::information(0,"Phiếu mượn được gửi thành công",
                             "Bạn vui lòng chờ nhân viên phản hồi để lấy sách.",
                             QMessageBox::Ok);
    ui->send->hide();
    ui->cancel->hide();
    ui->readerTab->setTabEnabled(2,false);
}

void reader::on_cancel_clicked()
{
    ui->borInfo->setRowCount(0);
    ui->send->hide();
    ui->cancel->hide();
    ui->readerTab->setTabEnabled(2,false);
}

void reader::on_borInfo_cellClicked(int row, int column)
{
    QString s = ui->borInfo->item(row,1)->text();
    QLinkedList<Book>::iterator it=books.begin();
    for(;it!=books.end();it++)
    {

        if(s==(*it).getID())
        {
            ui->borBookName->setText((*it).getName());
            QImage image("Images/Books/"+(*it).getID()+".jpg");
            if(!this->ptr_scene.isNull())
                this->ptr_scene.clear();
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
    pa.clear();
}

void reader::on_pushButton_2_clicked()
{
    if(myCartInfos.size()==0) return;
    if(currentCart==myCartInfos.begin())
        currentCart=myCartInfos.end()-1;
    else currentCart--;
    ui->cartid->setText((*currentCart).getID());
    ui->cartname->setText((*currentCart).getBookName());
    ui->cartdate->setText((*currentCart).getBrrowTime());
    ui->cartduration->setText(QString::number((*currentCart).getDuration())+" ngày");
    QString s;
    switch((*currentCart).getStatus())
    {
    case 0:
        s="Chưa phản hồi";
        break;
    case 1:
        s="Đã chấp nhận";
        break;
    case 2:
        s="Đang mượn";
        break;
    case 3:
        s="Vi phạm";
        break;
    case 4:
        s="Hoàn tất";
    }
    ui->cartstatus->setText(s);
}

void reader::on_pushButton_3_clicked()
{
    if(myCartInfos.size()==0) return;
    if(currentCart==myCartInfos.end()-1)
        currentCart=myCartInfos.begin();
    else currentCart++;
    ui->cartid->setText((*currentCart).getID());
    ui->cartname->setText((*currentCart).getBookName());
    ui->cartdate->setText((*currentCart).getBrrowTime());
    ui->cartduration->setText(QString::number((*currentCart).getDuration())+" ngày");
    QString s;
    switch((*currentCart).getStatus())
    {
    case 0:
        s="Chưa phản hồi";
        break;
    case 1:
        s="Đã chấp nhận";
        break;
    case 2:
        s="Đang mượn";
        break;
    case 3:
        s="Vi phạm";
        break;
    case 4:
        s="Hoàn tất";
    }
    ui->cartstatus->setText(s);
}

void reader::on_readerTab_currentChanged(int index)
{
    if(index==1)
    {
        ui->bookTable->setColumnWidth(0,ui->bookTable->width()*40/100);
        ui->bookTable->setColumnWidth(1,ui->bookTable->width()*15/100);
        ui->bookTable->setColumnWidth(2,ui->bookTable->width()*15/100);
        ui->bookTable->setColumnWidth(3,ui->bookTable->width()*15/100);
        ui->bookTable->setColumnWidth(4,ui->bookTable->width()*10/100);
        on_searchButton_clicked();
    }
}
