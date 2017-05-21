#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->AccountComboBox->hide();
    loadBooksFile();
    loadAccountFile();
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

void MainWindow::on_FindBooksButton_clicked()
{

}

void MainWindow::on_SignInButton_clicked()
{
    s=new SignIn;
    s->setWindowTitle("Đăng nhập");
    connect(s,SIGNAL(accepted()),this,SLOT(getAccount()));
    s->show();
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
    su->show();
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
}
