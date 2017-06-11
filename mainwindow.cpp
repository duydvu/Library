#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MainWindow::setWindowState(Qt::WindowMaximized);
    ui->BooksTable->setColumnCount(3);
    ui->BooksTable->setHorizontalHeaderItem(0, new QTableWidgetItem("#"));
    ui->BooksTable->setHorizontalHeaderItem(1, new QTableWidgetItem("Tựa sách"));
    ui->BooksTable->setHorizontalHeaderItem(2, new QTableWidgetItem("Tác giả"));
    ui->BooksTable->setColumnWidth(0, ui->BooksTable->width()/100*5);
    ui->BooksTable->setColumnWidth(1, ui->BooksTable->width()/100*70);
    ui->BooksTable->horizontalHeader()->setStretchLastSection(true);
    ui->BooksTable->setStyleSheet("QTableView {selection-background-color: #66b2ff;}");
    loadBooksFile();
    loadAccountsFile();
    loadUsersFile();
    loadTempAccountsFile();
    loadTempUsersFile();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent* event)
{
   QMainWindow::resizeEvent(event);
   ui->MainBar->setGeometry(QRect(0,0,this->size().width(),101));
   ui->SignUpButton->setGeometry(QRect(this->size().width()-110, 20, 101, 31));
   ui->SignInButton->setGeometry(QRect(this->size().width()-219, 20, 101, 31));
   ui->AccountLabel->setGeometry(QRect(this->size().width()-239, 20, 231, 31));
}


void MainWindow::loadBooksFile()
{
    QFile* xmlFile = new QFile(":/Data/Books.xml");
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
    QFile* xmlFile = new QFile(":/Data/Accounts.xml");
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
    QFile* xmlFile = new QFile(":/Data/TempAccounts.xml");
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
    QFile* xmlFile = new QFile(":/Data/Users.xml");
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
    QFile* xmlFile = new QFile(":/Data/TempUsers.xml");
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
    for(;it!=books.end();it++)
    {
        QString name=(*it).getName(), author=(*it).getAuthor();
        int m=0, i=0, pre=cnt;
        while(m+i<name.length())
        {
            if(compare(word[i], name[m+i]))
            {
                i++;
                if(i==word.length())
                {
                    ui->BooksTable->insertRow(cnt);
                    ui->BooksTable->setItem(cnt, 0, new QTableWidgetItem(QString::number(cnt+1)));
                    ui->BooksTable->setItem(cnt, 1, new QTableWidgetItem(name));
                    ui->BooksTable->setItem(cnt, 2, new QTableWidgetItem(author));
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
        if(pre!=cnt) continue;
        m=0, i=0;
        while(m+i<author.length())
        {
            if(compare(word[i], author[m+i]))
            {
                i++;
                if(i==word.length())
                {
                    ui->BooksTable->insertRow(cnt);
                    ui->BooksTable->setItem(cnt, 0, new QTableWidgetItem(QString::number(cnt+1)));
                    ui->BooksTable->setItem(cnt, 1, new QTableWidgetItem(name));
                    ui->BooksTable->setItem(cnt, 2, new QTableWidgetItem(author));
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

    delete table;
}

void MainWindow::on_SignInButton_clicked()
{
    s=new SignIn;
    ad=new Admin;
    li = new librarian;
    re = new reader;
    s->setWindowTitle("Đăng nhập");
    connect(s,SIGNAL(accepted()),this,SLOT(logIn()));
    s->exec();
}

void MainWindow::logIn()
{
    this->hide();
    QString role=LogInAcc.getRole();
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
}

void MainWindow::logOut()
{
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
    temp_accounts.append(su->getAccount());

    // Fill user information
    pi=new personalinfo;
    pi->setWindowTitle("Thông tin người dùng");
    connect(pi,SIGNAL(accepted()),this,SLOT(createUser()));
    pi->exec();
}

void MainWindow::createUser()
{
    temp_users.append(pi->getUser());
}


void MainWindow::closeEvent (QCloseEvent *event)
{
    saveBooksFile();
    saveAccountsFile();
    saveUsersFile();
    saveTempAccountsFile();
    saveTempUsersFile();
    event->accept();
}
void MainWindow::saveUsersFile()
{
    QFile* xmlFile = new QFile(QDir::currentPath() + "/Data/Users.xml");
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
    QFile* xmlFile = new QFile(QDir::currentPath() + "/Data/Accounts.xml");

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
    QFile* xmlFile = new QFile(QDir::currentPath() + "/Data/Books.xml");

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
    QFile* xmlFile = new QFile(QDir::currentPath() + "/Data/TempAccounts.xml");

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
    QFile* xmlFile = new QFile(QDir::currentPath() + "/Data/TempUsers.xml");
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


void MainWindow::on_BooksTable_cellClicked(int row, int column)
{
    column++;
    QString s = ui->BooksTable->item(row,1)->text();
    QLinkedList<Book>::iterator it=books.begin();
    for(;it!=books.end();it++)
    {

        if(s==(*it).getName())
        {
            ui->intro->setText((*it).getIntro());
            ui->quantity->setText(QString::number((*it).getQuantity()));
        }
    }
}
