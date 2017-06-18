/********************************************************************************
** Form generated from reading UI file 'reader.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READER_H
#define UI_READER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reader
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QTabWidget *readerTab;
    QWidget *tab;
    QWidget *tab_4;
    QGroupBox *groupBox;
    QToolButton *bookBorrow;
    QToolButton *searchButton;
    QLineEdit *bookSearch;
    QTextBrowser *textBrowser_6;
    QComboBox *category;
    QLabel *label_16;
    QTableWidget *bookTable;
    QLabel *label_17;
    QTextBrowser *intro;
    QWidget *borrow;
    QTableWidget *borInfo;
    QPushButton *send;
    QLabel *label;
    QSpinBox *duration;
    QLabel *label_2;
    QGraphicsView *graphicsView;
    QPushButton *cancel;
    QWidget *perInfo;
    QGroupBox *personalInfo;
    QLabel *name_2;
    QLabel *id_2;
    QLabel *dob_2;
    QLabel *sex_2;
    QLabel *email_2;
    QLabel *address_2;
    QLabel *dop_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *changeButton;
    QLineEdit *name;
    QLineEdit *id;
    QLineEdit *dob;
    QLineEdit *sex;
    QLineEdit *email;
    QLineEdit *address;
    QLabel *dop;
    QGroupBox *cartInfo;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QWidget *tab_3;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_5;
    QWidget *tabsecond;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *reader)
    {
        if (reader->objectName().isEmpty())
            reader->setObjectName(QStringLiteral("reader"));
        reader->resize(1054, 676);
        centralwidget = new QWidget(reader);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(670, 14, 81, 31));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        readerTab = new QTabWidget(centralwidget);
        readerTab->setObjectName(QStringLiteral("readerTab"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        readerTab->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        groupBox = new QGroupBox(tab_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 451, 71));
        bookBorrow = new QToolButton(groupBox);
        bookBorrow->setObjectName(QStringLiteral("bookBorrow"));
        bookBorrow->setGeometry(QRect(10, 10, 121, 22));
        searchButton = new QToolButton(groupBox);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(320, 40, 101, 22));
        bookSearch = new QLineEdit(groupBox);
        bookSearch->setObjectName(QStringLiteral("bookSearch"));
        bookSearch->setGeometry(QRect(220, 10, 201, 22));
        textBrowser_6 = new QTextBrowser(tab_4);
        textBrowser_6->setObjectName(QStringLiteral("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(0, 500, 461, 41));
        category = new QComboBox(tab_4);
        category->setObjectName(QStringLiteral("category"));
        category->setGeometry(QRect(120, 110, 221, 22));
        label_16 = new QLabel(tab_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(30, 110, 71, 21));
        bookTable = new QTableWidget(tab_4);
        if (bookTable->columnCount() < 6)
            bookTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        bookTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        bookTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        bookTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        bookTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        bookTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        bookTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        bookTable->setObjectName(QStringLiteral("bookTable"));
        bookTable->setGeometry(QRect(0, 140, 671, 351));
        bookTable->horizontalHeader()->setStretchLastSection(true);
        bookTable->verticalHeader()->setVisible(false);
        label_17 = new QLabel(tab_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(710, 110, 61, 21));
        intro = new QTextBrowser(tab_4);
        intro->setObjectName(QStringLiteral("intro"));
        intro->setGeometry(QRect(700, 140, 301, 351));
        readerTab->addTab(tab_4, QString());
        borrow = new QWidget();
        borrow->setObjectName(QStringLiteral("borrow"));
        borInfo = new QTableWidget(borrow);
        if (borInfo->columnCount() < 3)
            borInfo->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        borInfo->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        borInfo->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        borInfo->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        borInfo->setObjectName(QStringLiteral("borInfo"));
        borInfo->setGeometry(QRect(370, 90, 631, 141));
        borInfo->setEditTriggers(QAbstractItemView::NoEditTriggers);
        borInfo->horizontalHeader()->setStretchLastSection(true);
        borInfo->verticalHeader()->setVisible(false);
        borInfo->verticalHeader()->setStretchLastSection(true);
        send = new QPushButton(borrow);
        send->setObjectName(QStringLiteral("send"));
        send->setGeometry(QRect(370, 350, 131, 51));
        label = new QLabel(borrow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(370, 300, 81, 21));
        duration = new QSpinBox(borrow);
        duration->setObjectName(QStringLiteral("duration"));
        duration->setGeometry(QRect(470, 300, 61, 21));
        label_2 = new QLabel(borrow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(550, 300, 47, 21));
        graphicsView = new QGraphicsView(borrow);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(20, 30, 301, 431));
        cancel = new QPushButton(borrow);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(520, 350, 121, 51));
        readerTab->addTab(borrow, QString());
        perInfo = new QWidget();
        perInfo->setObjectName(QStringLiteral("perInfo"));
        personalInfo = new QGroupBox(perInfo);
        personalInfo->setObjectName(QStringLiteral("personalInfo"));
        personalInfo->setGeometry(QRect(30, 30, 351, 321));
        name_2 = new QLabel(personalInfo);
        name_2->setObjectName(QStringLiteral("name_2"));
        name_2->setGeometry(QRect(20, 20, 55, 16));
        id_2 = new QLabel(personalInfo);
        id_2->setObjectName(QStringLiteral("id_2"));
        id_2->setGeometry(QRect(20, 50, 81, 16));
        dob_2 = new QLabel(personalInfo);
        dob_2->setObjectName(QStringLiteral("dob_2"));
        dob_2->setGeometry(QRect(20, 80, 81, 16));
        sex_2 = new QLabel(personalInfo);
        sex_2->setObjectName(QStringLiteral("sex_2"));
        sex_2->setGeometry(QRect(20, 110, 81, 16));
        email_2 = new QLabel(personalInfo);
        email_2->setObjectName(QStringLiteral("email_2"));
        email_2->setGeometry(QRect(220, 20, 101, 16));
        address_2 = new QLabel(personalInfo);
        address_2->setObjectName(QStringLiteral("address_2"));
        address_2->setGeometry(QRect(220, 80, 101, 16));
        dop_2 = new QLabel(personalInfo);
        dop_2->setObjectName(QStringLiteral("dop_2"));
        dop_2->setGeometry(QRect(20, 180, 141, 16));
        label_8 = new QLabel(personalInfo);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 200, 121, 16));
        label_9 = new QLabel(personalInfo);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 220, 121, 16));
        label_10 = new QLabel(personalInfo);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 250, 121, 16));
        changeButton = new QPushButton(personalInfo);
        changeButton->setObjectName(QStringLiteral("changeButton"));
        changeButton->setGeometry(QRect(250, 280, 93, 28));
        name = new QLineEdit(personalInfo);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(80, 20, 113, 20));
        name->setEchoMode(QLineEdit::Normal);
        name->setReadOnly(true);
        id = new QLineEdit(personalInfo);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(80, 50, 113, 20));
        id->setReadOnly(true);
        dob = new QLineEdit(personalInfo);
        dob->setObjectName(QStringLiteral("dob"));
        dob->setGeometry(QRect(80, 80, 113, 20));
        dob->setReadOnly(true);
        sex = new QLineEdit(personalInfo);
        sex->setObjectName(QStringLiteral("sex"));
        sex->setGeometry(QRect(80, 110, 113, 20));
        sex->setReadOnly(true);
        email = new QLineEdit(personalInfo);
        email->setObjectName(QStringLiteral("email"));
        email->setGeometry(QRect(220, 50, 113, 20));
        email->setReadOnly(true);
        address = new QLineEdit(personalInfo);
        address->setObjectName(QStringLiteral("address"));
        address->setGeometry(QRect(220, 110, 113, 20));
        address->setReadOnly(true);
        dop = new QLabel(personalInfo);
        dop->setObjectName(QStringLiteral("dop"));
        dop->setGeometry(QRect(100, 180, 131, 21));
        cartInfo = new QGroupBox(perInfo);
        cartInfo->setObjectName(QStringLiteral("cartInfo"));
        cartInfo->setGeometry(QRect(429, 30, 271, 321));
        label_11 = new QLabel(cartInfo);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 50, 55, 16));
        label_12 = new QLabel(cartInfo);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(30, 80, 55, 16));
        label_13 = new QLabel(cartInfo);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(30, 100, 55, 16));
        label_14 = new QLabel(cartInfo);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(30, 120, 81, 16));
        label_15 = new QLabel(cartInfo);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(30, 140, 55, 16));
        readerTab->addTab(perInfo, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        textBrowser_3 = new QTextBrowser(tab_3);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(80, 30, 291, 192));
        textBrowser_5 = new QTextBrowser(tab_3);
        textBrowser_5->setObjectName(QStringLiteral("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(365, 30, 291, 192));
        readerTab->addTab(tab_3, QString());
        tabsecond = new QWidget();
        tabsecond->setObjectName(QStringLiteral("tabsecond"));
        textBrowser = new QTextBrowser(tabsecond);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(50, 80, 256, 192));
        textBrowser_2 = new QTextBrowser(tabsecond);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(400, 80, 256, 192));
        readerTab->addTab(tabsecond, QString());

        gridLayout->addWidget(readerTab, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        reader->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(reader);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        reader->setStatusBar(statusbar);

        retranslateUi(reader);
        QObject::connect(category, SIGNAL(currentIndexChanged(QString)), searchButton, SLOT(click()));
        QObject::connect(bookSearch, SIGNAL(returnPressed()), searchButton, SLOT(click()));
        QObject::connect(bookSearch, SIGNAL(textChanged(QString)), searchButton, SLOT(click()));

        readerTab->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(reader);
    } // setupUi

    void retranslateUi(QMainWindow *reader)
    {
        reader->setWindowTitle(QApplication::translate("reader", "MainWindow", 0));
        pushButton->setText(QApplication::translate("reader", "Exit", 0));
        readerTab->setTabText(readerTab->indexOf(tab), QApplication::translate("reader", "Trang ch\341\273\247", 0));
        groupBox->setTitle(QString());
        bookBorrow->setText(QApplication::translate("reader", "M\306\260\341\273\243n s\303\241ch  ", 0));
        searchButton->setText(QApplication::translate("reader", "T\303\254m ki\341\272\277m", 0));
        textBrowser_6->setHtml(QApplication::translate("reader", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.8pt;\">Th\303\264ng tin t\303\241c gi\341\272\243</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.8pt;\">T\303\241c quy\341\273\201n</span></p></body></html>", 0));
        category->clear();
        category->insertItems(0, QStringList()
         << QApplication::translate("reader", "T\341\272\245t c\341\272\243", 0)
         << QApplication::translate("reader", "B\303\241ch khoa to\303\240n th\306\260", 0)
         << QApplication::translate("reader", "Ch\303\242m bi\341\272\277m", 0)
         << QApplication::translate("reader", "Du l\341\273\213ch", 0)
         << QApplication::translate("reader", "\304\220\341\273\213a l\303\275", 0)
         << QApplication::translate("reader", "H\303\240nh \304\221\341\273\231ng v\303\240 phi\303\252u l\306\260u", 0)
         << QApplication::translate("reader", "Huy\341\273\201n b\303\255", 0)
         << QApplication::translate("reader", "Khoa h\341\273\215c", 0)
         << QApplication::translate("reader", "Khoa h\341\273\215c vi\341\273\205n t\306\260\341\273\237ng", 0)
         << QApplication::translate("reader", "K\341\273\213ch", 0)
         << QApplication::translate("reader", "Kinh d\341\273\213", 0)
         << QApplication::translate("reader", "Kinh t\341\272\277", 0)
         << QApplication::translate("reader", "L\303\243ng m\341\272\241n", 0)
         << QApplication::translate("reader", "L\341\273\213ch s\341\273\255", 0)
         << QApplication::translate("reader", "Ngh\341\273\207 thu\341\272\255t", 0)
         << QApplication::translate("reader", "Nh\341\272\255t k\303\275", 0)
         << QApplication::translate("reader", "S\303\241ch n\341\272\245u \304\203n", 0)
         << QApplication::translate("reader", "S\341\273\251c kh\341\273\217e", 0)
         << QApplication::translate("reader", "T\341\272\241p ch\303\255", 0)
         << QApplication::translate("reader", "Th\306\241", 0)
         << QApplication::translate("reader", "Ti\341\273\203u s\341\273\255", 0)
         << QApplication::translate("reader", "To\303\241n", 0)
         << QApplication::translate("reader", "T\303\264n gi\303\241o", 0)
         << QApplication::translate("reader", "Ch\303\255nh tr\341\273\213", 0)
         << QApplication::translate("reader", "Tr\341\272\273 em", 0)
         << QApplication::translate("reader", "Truy\341\273\207n tranh", 0)
         << QApplication::translate("reader", "T\341\273\253 \304\221i\341\273\203n", 0)
        );
        label_16->setText(QApplication::translate("reader", "Chuy\303\252n m\341\273\245c", 0));
        QTableWidgetItem *___qtablewidgetitem = bookTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("reader", "T\341\273\261a s\303\241ch", 0));
        QTableWidgetItem *___qtablewidgetitem1 = bookTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("reader", "Chuy\303\252n m\341\273\245c", 0));
        QTableWidgetItem *___qtablewidgetitem2 = bookTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("reader", "T\303\241c gi\341\272\243", 0));
        QTableWidgetItem *___qtablewidgetitem3 = bookTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("reader", "Nh\303\240 xu\341\272\245t b\341\272\243n", 0));
        QTableWidgetItem *___qtablewidgetitem4 = bookTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("reader", "T\303\254nh tr\341\272\241ng", 0));
        label_17->setText(QApplication::translate("reader", "Gi\341\273\237i thi\341\273\207u", 0));
        readerTab->setTabText(readerTab->indexOf(tab_4), QApplication::translate("reader", "Th\306\260 vi\341\273\207n s\303\241ch", 0));
        QTableWidgetItem *___qtablewidgetitem5 = borInfo->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("reader", "M\303\243 phi\341\272\277u m\306\260\341\273\243n", 0));
        QTableWidgetItem *___qtablewidgetitem6 = borInfo->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("reader", "M\303\243 s\303\241ch c\341\272\247n m\306\260\341\273\243n", 0));
        QTableWidgetItem *___qtablewidgetitem7 = borInfo->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("reader", "T\303\252n s\303\241ch", 0));
        send->setText(QApplication::translate("reader", "G\341\273\255i phi\341\272\277u m\306\260\341\273\243n", 0));
        label->setText(QApplication::translate("reader", "Th\341\273\235i gian m\306\260\341\273\243n", 0));
        label_2->setText(QApplication::translate("reader", "Ng\303\240y", 0));
        cancel->setText(QApplication::translate("reader", "H\303\271y", 0));
        readerTab->setTabText(readerTab->indexOf(borrow), QApplication::translate("reader", "\304\220\304\203ng k\303\275 m\306\260\341\273\243n", 0));
        personalInfo->setTitle(QApplication::translate("reader", "Th\303\264ng tin c\341\273\247a b\341\272\241n", 0));
        name_2->setText(QApplication::translate("reader", "H\341\273\215 v\303\240 t\303\252n", 0));
        id_2->setText(QApplication::translate("reader", "M\303\243 \304\221\341\273\231c gi\341\272\243", 0));
        dob_2->setText(QApplication::translate("reader", "Ng\303\240y sinh", 0));
        sex_2->setText(QApplication::translate("reader", "Gi\341\273\233i t\303\255nh", 0));
        email_2->setText(QApplication::translate("reader", "Email", 0));
        address_2->setText(QApplication::translate("reader", "\304\220\341\273\213a ch\341\273\211", 0));
        dop_2->setText(QApplication::translate("reader", "Ng\303\240y tham gia", 0));
        label_8->setText(QApplication::translate("reader", "T\341\273\225ng s\303\241ch m\306\260\341\273\243n", 0));
        label_9->setText(QApplication::translate("reader", "T\341\273\225ng s\303\241ch tr\341\272\243", 0));
        label_10->setText(QApplication::translate("reader", "Vi ph\341\272\241m", 0));
        changeButton->setText(QApplication::translate("reader", "C\341\272\255p nh\341\272\255t", 0));
        dop->setText(QString());
        cartInfo->setTitle(QApplication::translate("reader", "Chi ti\341\272\277t phi\341\272\277u m\306\260\341\273\243n", 0));
        label_11->setText(QApplication::translate("reader", "1. L\341\272\247n 1", 0));
        label_12->setText(QApplication::translate("reader", "M\303\243 phi\341\272\277u", 0));
        label_13->setText(QApplication::translate("reader", "T\303\252n s\303\241ch", 0));
        label_14->setText(QApplication::translate("reader", "Ng\303\240y m\306\260\341\273\243n", 0));
        label_15->setText(QApplication::translate("reader", "H\341\272\241n tr\341\272\243", 0));
        readerTab->setTabText(readerTab->indexOf(perInfo), QApplication::translate("reader", "Th\303\264ng tin c\303\241 nh\303\242n", 0));
        textBrowser_3->setHtml(QApplication::translate("reader", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.8pt;\">N\341\273\231i quy</span></p></body></html>", 0));
        textBrowser_5->setHtml(QApplication::translate("reader", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.8pt;\">HDSD</span></p></body></html>", 0));
        readerTab->setTabText(readerTab->indexOf(tab_3), QApplication::translate("reader", "Tr\341\273\243 gi\303\272p", 0));
        textBrowser->setHtml(QApplication::translate("reader", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.8pt;\">Gi\341\273\233i thi\341\273\207u th\306\260 vi\341\273\207n</span></p></body></html>", 0));
        textBrowser_2->setHtml(QApplication::translate("reader", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.8pt;\">H\341\273\230P TH\306\257 G\303\223P \303\235</span></p></body></html>", 0));
        readerTab->setTabText(readerTab->indexOf(tabsecond), QApplication::translate("reader", "Li\303\252n h\341\273\207", 0));
    } // retranslateUi

};

namespace Ui {
    class reader: public Ui_reader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READER_H
