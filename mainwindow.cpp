#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MainWindow::setWindowState(Qt::WindowMaximized);

    QPixmap pixmap("Images/back.png");
    QIcon ButtonIcon(pixmap);
    ui->Back->setIcon(ButtonIcon);
    ui->Back->setIconSize(pixmap.rect().size());
    QPixmap pixmap2("Images/search.png");
    QIcon ButtonIcon2(pixmap2);
    ui->Search->setIcon(ButtonIcon2);
    ui->Search->setIconSize(pixmap2.rect().size());
    QPixmap pixmap3("Images/help.png");
    QIcon ButtonIcon3(pixmap3);
    ui->Help->setIcon(ButtonIcon3);
    ui->Help->setIconSize(pixmap3.rect().size());
    QPixmap pixmap4("Images/about.png");
    QIcon ButtonIcon4(pixmap4);
    ui->About->setIcon(ButtonIcon4);
    ui->About->setIconSize(pixmap4.rect().size());
    QPixmap pixmap5("Images/signin.png");
    QIcon ButtonIcon5(pixmap5);
    ui->SignInButton->setIcon(ButtonIcon5);
    ui->SignInButton->setIconSize(pixmap5.rect().size());
    QPixmap pixmap6("Images/signup.png");
    QIcon ButtonIcon6(pixmap6);
    ui->SignUpButton->setIcon(ButtonIcon6);
    ui->SignUpButton->setIconSize(pixmap6.rect().size());

    ui->FindBooksButton->setIcon(ButtonIcon2);
    ui->FindBooksButton->setIconSize(pixmap2.rect().size());
    ui->MainBar->hide();
    ui->BooksTable->hide();
    ui->frame_3->hide();

    loadBooksFile();
    loadAccountsFile();
    loadUsersFile();
    loadTempAccountsFile();
    loadTempUsersFile();
    loadCartInfosFile();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent* event)
{
    ui->BooksTable->setColumnWidth(0,ui->BooksTable->width()*45/100);
    ui->BooksTable->setColumnWidth(1,ui->BooksTable->width()*15/100);
    ui->BooksTable->setColumnWidth(2,ui->BooksTable->width()*15/100);
    ui->BooksTable->setColumnWidth(3,ui->BooksTable->width()*15/100);
    ui->BooksTable->setColumnWidth(4,ui->BooksTable->width()*10/100);
    QMainWindow::resizeEvent(event);
}

void MainWindow::loadBooksFile()
{
    QFile* xmlFile = new QFile("Data/Books.xml");
    if (!xmlFile->open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this,"Load XML File Problem",
        "Couldn't open Books.xml to load data",
        QMessageBox::Ok);
        return;
    }
    QXmlStreamReader* xmlReader = new QXmlStreamReader(xmlFile);
    Book b;
    while(!xmlReader->atEnd() && !xmlReader->hasError())
    {
        xmlReader->readNext();
        if(xmlReader->isStartElement())
        {
            if(xmlReader->name() == "name")
            {
                b.setName(xmlReader->readElementText());
            }
            if(xmlReader->name() == "author")
            {
                b.setAuthor(xmlReader->readElementText());
            }
            if(xmlReader->name() == "quantity")
            {
                b.setQuantity(xmlReader->readElementText().toInt());
            }
            if(xmlReader->name() == "intro")
            {
                b.setIntro(xmlReader->readElementText());
            }
            if(xmlReader->name() == "publisher")
            {
                b.setPublisher(xmlReader->readElementText());
            }
            if(xmlReader->name() == "id")
            {
                b.setID(xmlReader->readElementText());
                books.append(b);
                b.clear();
            }
        }
    }

    if(xmlReader->hasError()) {
        QMessageBox::critical(this,
        "Books.xml Parse Error",xmlReader->errorString(),
        QMessageBox::Ok);
        return;
    }

    xmlReader->clear();
    delete xmlReader;
    xmlFile->close();
    delete xmlFile;
}

void MainWindow::loadAccountsFile()
{
    QFile* xmlFile = new QFile("Data/Accounts.xml");
    if (!xmlFile->open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this,"Load XML File Problem",
        "Couldn't open Accounts.xml to load data",
        QMessageBox::Ok);
        return;
    }

    QXmlStreamReader* xmlReader = new QXmlStreamReader(xmlFile);
    Account a;

    while(!xmlReader->atEnd() && !xmlReader->hasError())
    {
        xmlReader->readNext();
        if(xmlReader->isStartElement())
        {
            if(xmlReader->name() == "name")
            {
                a.setAcc(xmlReader->readElementText());
            }
            if(xmlReader->name() == "password")
            {
                a.setPsw(xmlReader->readElementText());
            }
            if(xmlReader->name() == "role")
            {
                a.setRole(xmlReader->readElementText());
            }
            if(xmlReader->name() == "id")
            {
                a.setID(xmlReader->readElementText());
            }
            if(xmlReader->name() == "status")
            {
                a.setStatus(xmlReader->readElementText().toInt());
                accounts.append(a);
                a.clear();
            }
        }
    }

    if(xmlReader->hasError()) {
        QMessageBox::critical(this,
        "Accounts.xml Parse Error",xmlReader->errorString(),
        QMessageBox::Ok);
        return;
    }

    xmlReader->clear();
    delete xmlReader;
    xmlFile->close();
    delete xmlFile;
}

void MainWindow::loadTempAccountsFile()
{
    QFile* xmlFile = new QFile("Data/TempAccounts.xml");
    if (!xmlFile->open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this,"Load XML File Problem",
        "Couldn't open TempAccounts.xml to load data",
        QMessageBox::Ok);
        return;
    }

    QXmlStreamReader* xmlReader = new QXmlStreamReader(xmlFile);
    Account a;

    while(!xmlReader->atEnd() && !xmlReader->hasError())
    {
        xmlReader->readNext();
        if(xmlReader->isStartElement())
        {
            if(xmlReader->name() == "name")
            {
                a.setAcc(xmlReader->readElementText());
            }
            if(xmlReader->name() == "password")
            {
                a.setPsw(xmlReader->readElementText());
            }
            if(xmlReader->name() == "role")
            {
                a.setRole(xmlReader->readElementText());
            }
            if(xmlReader->name() == "id")
            {
                a.setID(xmlReader->readElementText());
            }
            if(xmlReader->name() == "status")
            {
                a.setStatus(xmlReader->readElementText().toInt());
                temp_accounts.append(a);
                a.clear();
            }
        }
    }

    if(xmlReader->hasError()) {
        QMessageBox::critical(this,
        "TempAccounts.xml Parse Error",xmlReader->errorString(),
        QMessageBox::Ok);
        return;
    }

    xmlReader->clear();
    delete xmlReader;
    xmlFile->close();
    delete xmlFile;
}

void MainWindow::loadUsersFile()
{
    QFile* xmlFile = new QFile("Data/Users.xml");
    if (!xmlFile->open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this,"Load XML File Problem",
        "Couldn't open Users.xml to load data",
        QMessageBox::Ok);
        return;
    }

    QXmlStreamReader* xmlReader = new QXmlStreamReader(xmlFile);
    User a;

    while(!xmlReader->atEnd() && !xmlReader->hasError())
    {
        xmlReader->readNext();
        if(xmlReader->isStartElement())
        {
            if(xmlReader->name() == "name")
            {
                a.setName(xmlReader->readElementText());
            }
            if(xmlReader->name() == "id")
            {
                a.setID(xmlReader->readElementText());
            }
            if(xmlReader->name() == "DoB")
            {
                a.setDateofBirth(xmlReader->readElementText());
            }
            if(xmlReader->name() == "sex")
            {
                a.setSex(xmlReader->readElementText());
            }
            if(xmlReader->name() == "address")
            {
                a.setAddress(xmlReader->readElementText());
            }
            if(xmlReader->name() == "email")
            {
                a.setEmail(xmlReader->readElementText());
            }
            if(xmlReader->name() == "DoP")
            {
                a.setDoP(xmlReader->readElementText());
                users.append(a);
                a.clear();
            }
        }
    }

    if(xmlReader->hasError()) {
        QMessageBox::critical(this,
        "Users.xml Parse Error",xmlReader->errorString(),
        QMessageBox::Ok);
        return;
    }

    xmlReader->clear();
    delete xmlReader;
    xmlFile->close();
    delete xmlFile;
}

void MainWindow::loadTempUsersFile()
{
    QFile* xmlFile = new QFile("Data/TempUsers.xml");
    if (!xmlFile->open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this,"Load XML File Problem",
        "Couldn't open TempUsers.xml to load data",
        QMessageBox::Ok);
        return;
    }

    QXmlStreamReader* xmlReader = new QXmlStreamReader(xmlFile);
    User a;

    while(!xmlReader->atEnd() && !xmlReader->hasError())
    {
        xmlReader->readNext();
        if(xmlReader->isStartElement())
        {
            if(xmlReader->name() == "name")
            {
                a.setName(xmlReader->readElementText());
            }
            if(xmlReader->name() == "id")
            {
                a.setID(xmlReader->readElementText());
            }
            if(xmlReader->name() == "DoB")
            {
                a.setDateofBirth(xmlReader->readElementText());
            }
            if(xmlReader->name() == "sex")
            {
                a.setSex(xmlReader->readElementText());
            }
            if(xmlReader->name() == "address")
            {
                a.setAddress(xmlReader->readElementText());
            }
            if(xmlReader->name() == "email")
            {
                a.setEmail(xmlReader->readElementText());
            }
            if(xmlReader->name() == "DoP")
            {
                a.setDoP(xmlReader->readElementText());
                temp_users.append(a);
                a.clear();
            }
        }
    }

    if(xmlReader->hasError()) {
        QMessageBox::critical(this,
        "TempUsers.xml Parse Error",xmlReader->errorString(),
        QMessageBox::Ok);
        return;
    }

    xmlReader->clear();
    delete xmlReader;
    xmlFile->close();
    delete xmlFile;
}

void MainWindow::loadCartInfosFile()
{
    QFile* xmlFile = new QFile("Data/CartInfos.xml");
    if (!xmlFile->open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this,"Load XML File Problem",
        "Couldn't open CartInfos.xml to load data",
        QMessageBox::Ok);
        return;
    }

    QXmlStreamReader* xmlReader = new QXmlStreamReader(xmlFile);
    cartinfo a;

    while(!xmlReader->atEnd() && !xmlReader->hasError())
    {
        xmlReader->readNext();
        if(xmlReader->isStartElement())
        {
            if(xmlReader->name() == "id")
            {
                a.setID(xmlReader->readElementText());
            }
            if(xmlReader->name() == "readername")
            {
                a.setReaderName(xmlReader->readElementText());
            }
            if(xmlReader->name() == "readerid")
            {
                a.setReaderID(xmlReader->readElementText());
            }
            if(xmlReader->name() == "bookname")
            {
                a.setBookName(xmlReader->readElementText());
            }
            if(xmlReader->name() == "bookid")
            {
                a.setBookID(xmlReader->readElementText());
            }
            if(xmlReader->name() == "recipient")
            {
                a.setRecipient(xmlReader->readElementText());
            }
            if(xmlReader->name() == "brtime")
            {
                a.setBrrowTime(xmlReader->readElementText());
            }
            if(xmlReader->name() == "duration")
            {
                a.setDuration(xmlReader->readElementText().toInt());
            }
            if(xmlReader->name() == "status")
            {
                a.setStatus(xmlReader->readElementText().toInt());
                cartInfos.append(a);
                a.clear();
            }
        }
    }

    if(xmlReader->hasError()) {
        QMessageBox::critical(this,
        "TempUsers.xml Parse Error",xmlReader->errorString(),
        QMessageBox::Ok);
        return;
    }

    // initialize numberOfLentBooks
    numberOfLentBooks = new int[books.size()];
    for(int i=0;i<books.size();i++)
    {
        numberOfLentBooks[i]=0;
        QLinkedList<Book>::iterator it=books.begin()+i;
        QLinkedList<cartinfo>::iterator it1=cartInfos.begin();
        for(;it1!=cartInfos.end();it1++)
            if((*it1).getBookID()==(*it).getID())
                if((*it1).getStatus()==2||(*it1).getStatus()==3)
                    numberOfLentBooks[i]++;
    }

    xmlReader->clear();
    delete xmlReader;
    xmlFile->close();
    delete xmlFile;
}

void MainWindow::on_FindBooksButton_clicked()
{
    // Substring search
    // using Knuth–Morris–Pratt algorithm

    // Get word
    QString word=ui->FindBooksEdit->text();
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
    QString category=ui->Category->currentText();
    ui->BooksTable->setRowCount(0);
    ui->BooksTable->setSortingEnabled(false);
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
                        ui->BooksTable->insertRow(cnt);
                        ui->BooksTable->setItem(cnt, 0, new QTableWidgetItem((*it).getName()));
                        ui->BooksTable->setItem(cnt, 1, new QTableWidgetItem((*it).getAuthor()));
                        ui->BooksTable->setItem(cnt, 2, new QTableWidgetItem(findCategory((*it).getID().left(3))));
                        ui->BooksTable->setItem(cnt, 3, new QTableWidgetItem((*it).getPublisher()));
                        if((*it).getQuantity()-numberOfLentBooks[k]>0)
                            ui->BooksTable->setItem(cnt, 4, new QTableWidgetItem("còn"));
                        else ui->BooksTable->setItem(cnt, 4, new QTableWidgetItem("hết sách"));
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
    ui->BooksTable->setSortingEnabled(true);
    delete table;
}

void MainWindow::on_SignInButton_clicked()
{
    s = QSharedPointer<SignIn>(new SignIn);
    connect(s.data(),SIGNAL(accepted()),this,SLOT(logIn()));
    s.data()->exec();
}

void MainWindow::logIn()
{
    this->hide();
    QString role=(*LogInAcc).getRole();
    if(role=="A")
    {
        ad = QSharedPointer<Admin>(new Admin);
        connect(ad.data(),SIGNAL(closed()),this,SLOT(logOut()));
        ad.data()->show();
    }
    else if(role=="L")
    {
        li = QSharedPointer<librarian>(new librarian);
        connect(li.data(),SIGNAL(closed()),this,SLOT(logOut()));
        li.data()->show();
    }
    else
    {
        re = QSharedPointer<reader>(new reader);
        connect(re.data(),SIGNAL(closed()),this,SLOT(logOut()));
        re.data()->show();
    }
    s.clear();
}

void MainWindow::logOut()
{
    QString role=(*LogInAcc).getRole();
    LogInAcc=NULL;
    LogInUser=NULL;
    this->show();
    if(role=="A")
        ad.clear();
    else if(role=="L")
        li.clear();
    else re.clear();
}

void MainWindow::on_SignUpButton_clicked()
{
    su=QSharedPointer<SignUp>(new SignUp);
    su.data()->setWindowTitle("Đăng ký");
    connect(su.data(),SIGNAL(accepted()),this,SLOT(createAccount()));
    su.data()->exec();
}

void MainWindow::createAccount()
{
    // Fill user information
    pi=QSharedPointer<personalinfo>(new personalinfo);
    pi.data()->setWindowTitle("Thông tin người dùng");
    connect(pi.data(),SIGNAL(accepted()),this,SLOT(createUser()));
    pi.data()->exec();
}

void MainWindow::createUser()
{
    // Find ID for new register account and user
    if(temp_accounts.size()==0)
    {
        temp_accounts.append(su.data()->getAccount());
        temp_users.append(pi.data()->getUser());
        temp_accounts.last().setID("0");
        temp_users.last().setID("0");
    }
    else
    {
        QLinkedList<Account>::iterator a=temp_accounts.begin();
        QLinkedList<User>::iterator u=temp_users.begin();
        if((*a).getID().toInt()!=0)
        {
            temp_accounts.insert(a,su.data()->getAccount());
            temp_users.insert(u,pi.data()->getUser());
            (*a).setID("0");
            (*u).setID("0");
        }
        else
        {
            for(a+=1,u+=1;a!=temp_accounts.end();a++,u++)
            {
                if((*a).getID().toInt()-(*(a-1)).getID().toInt()!=1)
                {
                    temp_accounts.insert(a,su.data()->getAccount());
                    temp_users.insert(u,pi.data()->getUser());
                    (*(a-1)).setID(QString::number((*(a-2)).getID().toInt()+1));
                    (*(u-1)).setID(QString::number((*(u-2)).getID().toInt()+1));
                    break;
                }
            }
            if(a==temp_accounts.end())
            {
                temp_accounts.append(su.data()->getAccount());
                temp_users.append(pi.data()->getUser());
                temp_accounts.last().setID(QString::number(temp_accounts.size()-1));
                temp_users.last().setID(QString::number(temp_users.size()-1));
            }
        }
    }
    su.clear();
    pi.clear();
}


void MainWindow::closeEvent (QCloseEvent *event)
{
    saveBooksFile();
    saveAccountsFile();
    saveUsersFile();
    saveTempAccountsFile();
    saveTempUsersFile();
    saveCartInfosFile();
    delete numberOfLentBooks;
    event->accept();
}
void MainWindow::saveUsersFile()
{
    QFile* xmlFile = new QFile("Data/Users.xml");
    if (!xmlFile->open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(this,"Load XML File Problem",
        "Couldn't open Users.xml to write data",
        QMessageBox::Ok);
        return;
    }
    QXmlStreamWriter* xmlWriter = new QXmlStreamWriter(xmlFile);
    xmlWriter->setAutoFormatting(true);
    xmlWriter->writeStartDocument();
    xmlWriter->writeStartElement("Users");

    QLinkedList<User>::iterator it=users.begin();
    for(;it!=users.end();it++)
    {
        xmlWriter->writeStartElement("user");
        xmlWriter->writeTextElement("name", (*it).getName());
        xmlWriter->writeTextElement("id", (*it).getID());
        xmlWriter->writeTextElement("DoB", (*it).getDateofBirth());
        xmlWriter->writeTextElement("sex", (*it).getSex());
        xmlWriter->writeTextElement("address", (*it).getAddress());
        xmlWriter->writeTextElement("email", (*it).getEmail());
        xmlWriter->writeTextElement("DoP", (*it).getDoP());
        xmlWriter->writeEndElement();
    }
    xmlWriter->writeEndElement();

    delete xmlWriter;
    xmlFile->close();
    delete xmlFile;
}
void MainWindow::saveAccountsFile()
{
    QFile* xmlFile = new QFile("Data/Accounts.xml");

    if (!xmlFile->open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(this,"Load XML File Problem",
        "Couldn't open Accounts.xml to write data",
        QMessageBox::Ok);
        return;
    }
    QXmlStreamWriter* xmlWriter = new QXmlStreamWriter(xmlFile);
    xmlWriter->setAutoFormatting(true);
    xmlWriter->writeStartDocument();
    xmlWriter->writeStartElement("Accounts");

    QLinkedList<Account>::iterator it=accounts.begin();
    for(;it!=accounts.end();it++)
    {
        xmlWriter->writeStartElement("account");
        xmlWriter->writeTextElement("name", (*it).getAcc());
        xmlWriter->writeTextElement("password", (*it).getPsw());
        xmlWriter->writeTextElement("role", (*it).getRole());
        xmlWriter->writeTextElement("id", (*it).getID());
        xmlWriter->writeTextElement("status", QString::number((*it).getStatus()));
        xmlWriter->writeEndElement();
    }
    xmlWriter->writeEndElement();

    delete xmlWriter;
    xmlFile->close();
    delete xmlFile;
}
void MainWindow::saveBooksFile()
{
    QFile* xmlFile = new QFile("Data/Books.xml");

    if (!xmlFile->open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(this,"Load XML File Problem",
        "Couldn't open Books.xml to write data",
        QMessageBox::Ok);
        return;
    }
    QXmlStreamWriter* xmlWriter = new QXmlStreamWriter(xmlFile);
    xmlWriter->setAutoFormatting(true);
    xmlWriter->writeStartDocument();
    xmlWriter->writeStartElement("Library");

    QLinkedList<Book>::iterator it=books.begin();
    for(;it!=books.end();it++)
    {
        xmlWriter->writeStartElement("book");
        xmlWriter->writeTextElement("name", (*it).getName());
        xmlWriter->writeTextElement("author", (*it).getAuthor());
        xmlWriter->writeTextElement("quantity", QString::number((*it).getQuantity()));
        xmlWriter->writeTextElement("intro", (*it).getIntro());
        xmlWriter->writeTextElement("publisher", (*it).getPublisher());
        xmlWriter->writeTextElement("id", (*it).getID());
        xmlWriter->writeEndElement();
    }
    xmlWriter->writeEndElement();

    delete xmlWriter;
    xmlFile->close();
    delete xmlFile;
}
void MainWindow::saveTempAccountsFile()
{
    QFile* xmlFile = new QFile("Data/TempAccounts.xml");

    if (!xmlFile->open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(this,"Load XML File Problem",
        "Couldn't open TempAccounts.xml to write data",
        QMessageBox::Ok);
        return;
    }
    QXmlStreamWriter* xmlWriter = new QXmlStreamWriter(xmlFile);
    xmlWriter->setAutoFormatting(true);
    xmlWriter->writeStartDocument();
    xmlWriter->writeStartElement("TempAccounts");

    QLinkedList<Account>::iterator it=temp_accounts.begin();
    for(;it!=temp_accounts.end();it++)
    {
        xmlWriter->writeStartElement("account");
        xmlWriter->writeTextElement("name", (*it).getAcc());
        xmlWriter->writeTextElement("password", (*it).getPsw());
        xmlWriter->writeTextElement("role", (*it).getRole());
        xmlWriter->writeTextElement("id", (*it).getID());
        xmlWriter->writeTextElement("status", QString::number((*it).getStatus()));
        xmlWriter->writeEndElement();
    }
    xmlWriter->writeEndElement();

    delete xmlWriter;
    xmlFile->close();
    delete xmlFile;
}
void MainWindow::saveTempUsersFile()
{
    QFile* xmlFile = new QFile("Data/TempUsers.xml");
    if (!xmlFile->open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(this,"Load XML File Problem",
        "Couldn't open TempUsers.xml to write data",
        QMessageBox::Ok);
        return;
    }
    QXmlStreamWriter* xmlWriter = new QXmlStreamWriter(xmlFile);
    xmlWriter->setAutoFormatting(true);
    xmlWriter->writeStartDocument();
    xmlWriter->writeStartElement("TempUsers");

    QLinkedList<User>::iterator it=temp_users.begin();
    for(;it!=temp_users.end();it++)
    {
        xmlWriter->writeStartElement("user");
        xmlWriter->writeTextElement("name", (*it).getName());
        xmlWriter->writeTextElement("id", (*it).getID());
        xmlWriter->writeTextElement("DoB", (*it).getDateofBirth());
        xmlWriter->writeTextElement("sex", (*it).getSex());
        xmlWriter->writeTextElement("address", (*it).getAddress());
        xmlWriter->writeTextElement("email", (*it).getEmail());
        xmlWriter->writeTextElement("DoP", (*it).getDoP());
        xmlWriter->writeEndElement();
    }
    xmlWriter->writeEndElement();

    delete xmlWriter;
    xmlFile->close();
    delete xmlFile;
}
void MainWindow::saveCartInfosFile()
{
    QFile* xmlFile = new QFile("Data/CartInfos.xml");
    if (!xmlFile->open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(this,"Load XML File Problem",
        "Couldn't open CartInfos.xml to write data",
        QMessageBox::Ok);
        return;
    }
    QXmlStreamWriter* xmlWriter = new QXmlStreamWriter(xmlFile);
    xmlWriter->setAutoFormatting(true);
    xmlWriter->writeStartDocument();
    xmlWriter->writeStartElement("CartInfos");

    QLinkedList<cartinfo>::iterator it=cartInfos.begin();
    for(;it!=cartInfos.end();it++)
    {
        xmlWriter->writeStartElement("cartInfo");
        xmlWriter->writeTextElement("id", (*it).getID());
        xmlWriter->writeTextElement("readername", (*it).getReaderName());
        xmlWriter->writeTextElement("readerid", (*it).getReaderID());
        xmlWriter->writeTextElement("bookname", (*it).getBookName());
        xmlWriter->writeTextElement("bookid", (*it).getBookID());
        xmlWriter->writeTextElement("recipient", (*it).getRecipient());
        xmlWriter->writeTextElement("brtime", (*it).getBrrowTime());
        xmlWriter->writeTextElement("duration", QString::number((*it).getDuration()));
        xmlWriter->writeTextElement("status", QString::number((*it).getStatus()));
        xmlWriter->writeEndElement();
    }
    xmlWriter->writeEndElement();

    delete xmlWriter;
    xmlFile->close();
    delete xmlFile;
}

void MainWindow::on_BooksTable_cellClicked(int row, int column)
{
    column++;
    QString s = ui->BooksTable->item(row,0)->text();
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

void MainWindow::on_Search_clicked()
{
    ui->MainBar->show();
    ui->BooksTable->show();
    ui->frame_3->show();
    ui->frame_2->hide();
    ui->BooksTable->setColumnWidth(0,ui->BooksTable->width()*45/100);
    ui->BooksTable->setColumnWidth(1,ui->BooksTable->width()*15/100);
    ui->BooksTable->setColumnWidth(2,ui->BooksTable->width()*15/100);
    ui->BooksTable->setColumnWidth(3,ui->BooksTable->width()*15/100);
    ui->BooksTable->setColumnWidth(4,ui->BooksTable->width()*10/100);
    on_FindBooksButton_clicked();
}

void MainWindow::on_Back_clicked()
{
    ui->MainBar->hide();
    ui->BooksTable->hide();
    ui->frame_3->hide();
    ui->frame_2->show();
}

void MainWindow::on_Help_clicked()
{
    if(!he.isNull())
        he.clear();
    he=QSharedPointer<Help>(new Help);
    he.data()->exec();
}

void MainWindow::on_About_clicked()
{
    if(!ab.isNull())
        ab.clear();
    ab=QSharedPointer<About>(new About);
    ab.data()->exec();
}
