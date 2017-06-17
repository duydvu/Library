#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MainWindow::setWindowState(Qt::WindowMaximized);
    ui->BooksTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    QPixmap pixmap("Images/back.png");
    QIcon ButtonIcon(pixmap);
    ui->Back->setIcon(ButtonIcon);
    ui->Back->setIconSize(pixmap.rect().size());
    QPixmap pixmap2("Images/search.png");
    QIcon ButtonIcon2(pixmap2);
    ui->Search->setIcon(ButtonIcon2);
    ui->Search->setIconSize(pixmap2.rect().size());
    ui->FindBooksButton->setIcon(ButtonIcon2);
    ui->FindBooksButton->setIconSize(pixmap2.rect().size());
    ui->MainBar->hide();
    ui->BooksTable->hide();
    ui->frame_3->hide();

    QPropertyAnimation animation(ui->SignInButton, "geometry");
    animation.setDuration(10000);
    animation.setStartValue(QRect(0, 0, 100, 30));
    animation.setEndValue(QRect(250, 250, 100, 30));

    animation.start();

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
            if(xmlReader->name() == "active")
            {
                QString b=xmlReader->readElementText();
                if(b=="T")
                    a.setActive(true);
                else a.setActive(false);
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
            if(xmlReader->name() == "active")
            {
                QString b=xmlReader->readElementText();
                if(b=="T")
                    a.setActive(true);
                else a.setActive(false);
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
            if(xmlReader->name() == "recipientID")
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
    QLinkedList<Book>::iterator it=books.begin();
    int cnt=0;
    ui->BooksTable->setRowCount(0);
    ui->BooksTable->setSortingEnabled(false);
    for(;it!=books.end();it++)
    {
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
                        ui->BooksTable->insertRow(cnt);
                        ui->BooksTable->setItem(cnt, 0, new QTableWidgetItem((*it).getName()));
                        ui->BooksTable->setItem(cnt, 1, new QTableWidgetItem((*it).getAuthor()));
                        ui->BooksTable->setItem(cnt, 2, new QTableWidgetItem(findCategory((*it).getID().left(3))));
                        ui->BooksTable->setItem(cnt, 3, new QTableWidgetItem((*it).getPublisher()));
                        if((*it).getQuantity()>0)
                            ui->BooksTable->setItem(cnt, 4, new QTableWidgetItem("còn"));
                        else ui->BooksTable->setItem(cnt, 4, new QTableWidgetItem("hết hàng"));
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
    ui->BooksTable->setSortingEnabled(true);
    delete table;
}

void MainWindow::on_SignInButton_clicked()
{
    s=new SignIn;
    connect(s,SIGNAL(accepted()),this,SLOT(logIn()));
    s->exec();
}

void MainWindow::logIn()
{
    this->hide();
    QString role=LogInAcc.getRole();
    ad=new Admin;
    li = new librarian;
    re = new reader;
    if(role=="A")
    {
        connect(ad,SIGNAL(closed()),this,SLOT(logOut()));
        ad->show();
    }
    else if(role=="L")
    {
        connect(li,SIGNAL(closed()),this,SLOT(logOut()));
        li->show();
    }
    else if(role=="R")
    {
        connect(re,SIGNAL(closed()),this,SLOT(logOut()));
        re->show();
    }
    delete s;
}

void MainWindow::logOut()
{
    delete ad;
    delete li;
    delete re;
    LogInAcc.clear();
    this->show();
}

void MainWindow::on_SignUpButton_clicked()
{
    su=new SignUp;
    su->setWindowTitle("Đăng ký");
    connect(su,SIGNAL(accepted()),this,SLOT(createAccount()));
    su->exec();
}

void MainWindow::createAccount()
{
    // Fill user information
    pi=new personalinfo;
    pi->setWindowTitle("Thông tin người dùng");
    connect(pi,SIGNAL(accepted()),this,SLOT(createUser()));
    pi->exec();
}

void MainWindow::createUser()
{
    temp_accounts.append(su->getAccount());
    temp_users.append(pi->getUser());
    temp_accounts.last().setID(temp_users.last().getID());
    delete su;
    delete pi;
}


void MainWindow::closeEvent (QCloseEvent *event)
{
    saveBooksFile();
    saveAccountsFile();
    saveUsersFile();
    saveTempAccountsFile();
    saveTempUsersFile();
    saveCartInfosFile();
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
        if((*it).getActive())
            xmlWriter->writeTextElement("active", "T");
        else xmlWriter->writeTextElement("active", "F");
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
        if((*it).getActive())
            xmlWriter->writeTextElement("active", "T");
        else xmlWriter->writeTextElement("active", "F");
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
        xmlWriter->writeTextElement("recipientID", (*it).getRecipient());
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
    ui->BooksTable->selectRow(row);
    QString s = ui->BooksTable->item(row,0)->text();
    QLinkedList<Book>::iterator it=books.begin();
    for(;it!=books.end();it++)
    {

        if(s==(*it).getName())
        {
            ui->intro->setText((*it).getIntro());
        }
    }
}

void MainWindow::on_Search_clicked()
{
    ui->MainBar->show();
    ui->BooksTable->show();
    ui->frame_3->show();
    ui->frame_2->hide();
}

void MainWindow::on_Back_clicked()
{
    ui->MainBar->hide();
    ui->BooksTable->hide();
    ui->frame_3->hide();
    ui->frame_2->show();
}
