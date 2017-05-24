#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MainWindow::setWindowState(Qt::WindowMaximized);
    ui->AccountComboBox->hide();
    ui->BooksTable->setColumnCount(3);
    ui->BooksTable->setHorizontalHeaderItem(0, new QTableWidgetItem("#"));
    ui->BooksTable->setHorizontalHeaderItem(1, new QTableWidgetItem("Tựa sách"));
    ui->BooksTable->setHorizontalHeaderItem(2, new QTableWidgetItem("Tác giả"));
    ui->BooksTable->setColumnWidth(0, ui->BooksTable->width()/100*5);
    ui->BooksTable->setColumnWidth(1, ui->BooksTable->width()/100*70);
    ui->BooksTable->horizontalHeader()->setStretchLastSection(true);
    ui->BooksTable->setStyleSheet("QTableView {selection-background-color: #66b2ff;}");
    loadBooksFile();
    loadAccountFile();
    loadUserFile();
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
   ui->AccountComboBox->setGeometry(QRect(this->size().width()-170, 60, 161, 31));
}


void MainWindow::loadBooksFile()
{
    QFile xmlFile(":/Data/Books.xml");
    if (!xmlFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this,"Load XML File Problem",
        "Couldn't open Books.xml to load data",
        QMessageBox::Ok);
        return;
    }
    QXmlStreamReader* xmlReader = new QXmlStreamReader(&xmlFile);
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
    xmlFile.close();
}

void MainWindow::loadAccountFile()
{
    QFile xmlFile(":/Data/Accounts.xml");
    if (!xmlFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this,"Load XML File Problem",
        "Couldn't open Accounts.xml to load data",
        QMessageBox::Ok);
        return;
    }

    QXmlStreamReader* xmlReader = new QXmlStreamReader(&xmlFile);
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
    xmlFile.close();
}

void MainWindow::loadUserFile()
{
    QFile xmlFile(":/Data/Users.xml");
    if (!xmlFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this,"Load XML File Problem",
        "Couldn't open Users.xml to load data",
        QMessageBox::Ok);
        return;
    }

    QXmlStreamReader* xmlReader = new QXmlStreamReader(&xmlFile);
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
            if(xmlReader->name() == "sex")
            {
                a.setSex(xmlReader->readElementText());
            }
            if(xmlReader->name() == "Dob")
            {
                a.setDateofBirth(xmlReader->readElementText());
            }
            if(xmlReader->name() == "cmnd")
            {
                a.setCMND(xmlReader->readElementText());
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
    xmlFile.close();
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
    s->setWindowTitle("Đăng nhập");
    connect(s,SIGNAL(accepted()),this,SLOT(getAccount()));
    s->exec();
}

void MainWindow::getAccount()
{
    ui->SignInButton->hide();
    ui->SignUpButton->hide();
    ui->AccountComboBox->show();
    ui->AccountLabel->setText("Xin chào!  " + LogInAcc.getAcc());
    delete s;
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
    accounts.append(su->getAccount());

    QFile xmlFile(QDir::currentPath() + "/Data/Accounts.xml");

    if (!xmlFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(this,"Load XML File Problem",
        "Couldn't open Accounts.xml to write data",
        QMessageBox::Ok);
        return;
    }
    QXmlStreamWriter* xmlWriter = new QXmlStreamWriter(&xmlFile);
    xmlWriter->setAutoFormatting(true);
    xmlWriter->writeStartDocument();
    xmlWriter->writeStartElement("Accounts");

    QLinkedList<Account>::iterator it=accounts.begin();
    for(;it!=accounts.end();it++)
    {
        xmlWriter->writeStartElement("account");
        xmlWriter->writeTextElement("name", (*it).getAcc());
        xmlWriter->writeTextElement("password", (*it).getPsw());
        xmlWriter->writeEndElement();
    }
    xmlWriter->writeEndElement();

    delete xmlWriter;
    xmlFile.close();
    delete su;
}

void MainWindow::createUser()
{
    users.append(pi->getUser());

    QFile xmlFile(QDir::currentPath() + "/Data/Users.xml");
    qDebug()<<QDir::currentPath();
    if (!xmlFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(this,"Load XML File Problem",
        "Couldn't open Users.xml to write data",
        QMessageBox::Ok);
        return;
    }
    QXmlStreamWriter* xmlWriter = new QXmlStreamWriter(&xmlFile);
    xmlWriter->setAutoFormatting(true);
    xmlWriter->writeStartDocument();
    xmlWriter->writeStartElement("Users");

    QLinkedList<User>::iterator it=users.begin();
    for(;it!=users.end();it++)
    {
        xmlWriter->writeStartElement("user");
        xmlWriter->writeTextElement("name", (*it).getName());
        xmlWriter->writeTextElement("sex", (*it).getSex());
        xmlWriter->writeTextElement("Dob", (*it).getDateofBirth());
        xmlWriter->writeTextElement("cmnd", (*it).getCMND());
        xmlWriter->writeEndElement();
    }
    xmlWriter->writeEndElement();

    delete xmlWriter;
    xmlFile.close();
    delete pi;
}

void MainWindow::on_AccountComboBox_currentIndexChanged(const QString &arg1)
{
    if(arg1=="Đăng xuất")
    {
        LogInAcc.clear();
        ui->SignInButton->show();
        ui->SignUpButton->show();
        ui->AccountComboBox->hide();
        ui->AccountLabel->clear();
    }
    if (arg1=="Trang cá nhân")
    {
        pi=new personalinfo;
        pi->setWindowTitle("Thông tin cá nhân");
        connect(pi,SIGNAL(accepted()),this,SLOT(createUser()));
        pi->exec();
    }
}
