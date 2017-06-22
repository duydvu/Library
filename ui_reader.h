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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reader
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QTabWidget *readerTab;
    QWidget *tab;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_4;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_20;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QTextBrowser *textBrowser_4;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_7;
    QTextBrowser *myAnnouncement;
    QWidget *tab_4;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QToolButton *bookBorrow;
    QLineEdit *bookSearch;
    QComboBox *category;
    QToolButton *searchButton;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *bookTable;
    QVBoxLayout *verticalLayout;
    QLabel *label_17;
    QLabel *bookName;
    QGraphicsView *bookView;
    QTextBrowser *intro;
    QWidget *borrow;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_5;
    QTableWidget *borInfo;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpinBox *duration;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *send;
    QPushButton *cancel;
    QVBoxLayout *verticalLayout_6;
    QGraphicsView *borBookView;
    QLabel *borBookName;
    QWidget *perInfo;
    QGridLayout *gridLayout_3;
    QGroupBox *cartInfo;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_15;
    QLabel *cartduration;
    QHBoxLayout *horizontalLayout_23;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_12;
    QLabel *cartid;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_13;
    QLabel *cartname;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_14;
    QLabel *cartdate;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_16;
    QLabel *cartstatus;
    QFrame *frame;
    QGridLayout *gridLayout_5;
    QLabel *label_8;
    QLabel *allbor;
    QLabel *label_5;
    QLabel *allreturn;
    QGroupBox *personalInfo;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_11;
    QLabel *id_2;
    QLabel *id;
    QHBoxLayout *horizontalLayout_12;
    QLabel *name_2;
    QLineEdit *name;
    QHBoxLayout *horizontalLayout_13;
    QLabel *dob_2;
    QLineEdit *dob;
    QHBoxLayout *horizontalLayout_14;
    QLabel *sex_2;
    QLineEdit *sex;
    QHBoxLayout *horizontalLayout_21;
    QLabel *address_2;
    QLineEdit *address;
    QHBoxLayout *horizontalLayout_15;
    QLabel *email_2;
    QLineEdit *email;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_17;
    QLabel *dop_2;
    QLabel *dop;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_9;
    QLabel *status;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *changePass;
    QPushButton *changeButton;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_5;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_5;
    QWidget *tabsecond;
    QHBoxLayout *horizontalLayout_18;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;

    void setupUi(QMainWindow *reader)
    {
        if (reader->objectName().isEmpty())
            reader->setObjectName(QStringLiteral("reader"));
        reader->resize(830, 577);
        reader->setStyleSheet(QLatin1String("background-color: #fff;\n"
"font: 15pt \"Myriad Pro Cond\";"));
        centralwidget = new QWidget(reader);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        readerTab = new QTabWidget(centralwidget);
        readerTab->setObjectName(QStringLiteral("readerTab"));
        readerTab->setStyleSheet(QLatin1String("QTabWidget::pane { /* The tab widget frame */\n"
"    position: absolute;\n"
"}\n"
"\n"
"QTabWidget::tab-bar {\n"
"    alignment: center;\n"
"}\n"
"\n"
"/* Style the tab using the tab sub-control. Note that\n"
"    it reads QTabBar _not_ QTabWidget */\n"
"QTabBar::tab {\n"
"    background: #999;\n"
"	color: #fff;\n"
"    min-width: 8ex;\n"
"	width: 130px;\n"
"	height: 5ex;\n"
"	font-size: 15pt;\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"    background: #777;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background-color: #333;\n"
"	top: 0.05em;\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_10 = new QVBoxLayout(tab);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("font: 30pt \"Lobster\";\n"
"\n"
"background: none;"));
        label_4->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_10->addWidget(label_4);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("font: 45pt \"Lobster\";\n"
"color: #0277BD;\n"
"background: none;"));
        label_3->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_10->addWidget(label_3);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QStringLiteral("font-weight: bold;"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_6);

        textBrowser_4 = new QTextBrowser(tab);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));

        verticalLayout_4->addWidget(textBrowser_4);


        horizontalLayout_20->addLayout(verticalLayout_4);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("font-weight: bold;"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_7);

        myAnnouncement = new QTextBrowser(tab);
        myAnnouncement->setObjectName(QStringLiteral("myAnnouncement"));

        verticalLayout_8->addWidget(myAnnouncement);


        horizontalLayout_20->addLayout(verticalLayout_8);


        verticalLayout_10->addLayout(horizontalLayout_20);

        readerTab->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gridLayout_4 = new QGridLayout(tab_4);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(tab_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QStringLiteral("background: #1DE9B6;"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        bookBorrow = new QToolButton(groupBox);
        bookBorrow->setObjectName(QStringLiteral("bookBorrow"));
        bookBorrow->setCursor(QCursor(Qt::PointingHandCursor));
        bookBorrow->setStyleSheet(QLatin1String("#bookBorrow{\n"
"	height: 40px;\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	background-color: #F44336;\n"
"	color: #fff;\n"
"	outline: none;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"}\n"
"#bookBorrow:hover{\n"
"	background-color: #EF5350;\n"
"}"));

        horizontalLayout->addWidget(bookBorrow);

        bookSearch = new QLineEdit(groupBox);
        bookSearch->setObjectName(QStringLiteral("bookSearch"));
        bookSearch->setStyleSheet(QLatin1String("height: 40px;\n"
"	border: none;\n"
"	border-radius: 5px;\n"
"	padding-left: 10px;\n"
"	background: white;"));

        horizontalLayout->addWidget(bookSearch);

        category = new QComboBox(groupBox);
        category->setObjectName(QStringLiteral("category"));
        category->setCursor(QCursor(Qt::PointingHandCursor));
        category->setStyleSheet(QLatin1String("#category{\n"
"	height: 40px;\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	background-color: #448AFF;\n"
"	color: #fff;\n"
"	outline: none;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"}\n"
"QComboBox:editable {\n"
"    background: white;\n"
"}\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                 stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"}\n"
"\n"
"/* QComboBox gets the \"on\" state when the popup is open */\n"
"QComboBox:!editable:on, QComboBox::drop-down:editable:on {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #D3D3D3, stop: 0.4 #D8D8D8,\n"
"                                stop: 0.5 #DDDDDD, stop: 1.0 #E1E1E1);\n"
"}\n"
"\n"
"QComboBox:on { /* shift the text when the popup opens */\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"}\n"
"\n"
"QComboBox"
                        "::drop-down {\n"
"    width: 0px;\n"
"\n"
"    border: none\n"
"}"));

        horizontalLayout->addWidget(category);

        searchButton = new QToolButton(groupBox);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setCursor(QCursor(Qt::PointingHandCursor));
        searchButton->setStyleSheet(QLatin1String("#searchButton{\n"
"	height: 40px;\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	background: #6A1B9A;\n"
"	color: #fff;\n"
"	outline: none;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"}\n"
"#searchButton:hover \n"
"{\n"
"	background: #8E24AA;\n"
"}"));

        horizontalLayout->addWidget(searchButton);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
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
        bookTable->setStyleSheet(QLatin1String("QHeaderView::section {\n"
"    background-color: #6A1B9A;\n"
"	padding: 4px;\n"
"    border: 1px solid #fff;\n"
"	color: #fff;\n"
"    font-size: 15pt;\n"
"	font-family: \"Myriad Pro Cond\";\n"
"}\n"
"\n"
"QTableWidget {\n"
"	background-color: #eee;\n"
"    gridline-color: #fffff8;\n"
"    font-size: 15pt;\n"
"}\n"
"\n"
"QTableWidget QTableCornerButton::section {\n"
"    background-color: #646464;\n"
"    border: 1px solid #fffff8;\n"
"}\n"
""));
        bookTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        bookTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        bookTable->setSortingEnabled(true);
        bookTable->horizontalHeader()->setHighlightSections(false);
        bookTable->horizontalHeader()->setStretchLastSection(true);
        bookTable->verticalHeader()->setVisible(false);

        horizontalLayout_2->addWidget(bookTable);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_17 = new QLabel(tab_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setStyleSheet(QStringLiteral("font: 15pt \"Myriad Pro Cond\";"));
        label_17->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_17);

        bookName = new QLabel(tab_4);
        bookName->setObjectName(QStringLiteral("bookName"));
        bookName->setStyleSheet(QStringLiteral("font: 25pt \"Myriad Pro Cond\";"));
        bookName->setAlignment(Qt::AlignCenter);
        bookName->setWordWrap(true);

        verticalLayout->addWidget(bookName);

        bookView = new QGraphicsView(tab_4);
        bookView->setObjectName(QStringLiteral("bookView"));
        bookView->setStyleSheet(QStringLiteral("border: none;"));

        verticalLayout->addWidget(bookView);

        intro = new QTextBrowser(tab_4);
        intro->setObjectName(QStringLiteral("intro"));
        intro->setStyleSheet(QLatin1String("border: none;\n"
"font: 15pt \"Myriad Pro Cond\";"));

        verticalLayout->addWidget(intro);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 1);

        gridLayout_4->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        readerTab->addTab(tab_4, QString());
        borrow = new QWidget();
        borrow->setObjectName(QStringLiteral("borrow"));
        horizontalLayout_10 = new QHBoxLayout(borrow);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(10);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
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
        borInfo->setStyleSheet(QLatin1String("QHeaderView::section {\n"
"    background-color: #6A1B9A;\n"
"	padding: 4px;\n"
"    border: 1px solid #fff;\n"
"	color: #fff;\n"
"    font-size: 15pt;\n"
"	font-family: \"Myriad Pro Cond\";\n"
"}\n"
"\n"
"QTableWidget {\n"
"	background-color: #eee;\n"
"    gridline-color: #fffff8;\n"
"    font-size: 12pt;\n"
"}\n"
"\n"
"QTableWidget QTableCornerButton::section {\n"
"    background-color: #646464;\n"
"    border: 1px solid #fffff8;\n"
"}\n"
""));
        borInfo->setEditTriggers(QAbstractItemView::NoEditTriggers);
        borInfo->setSelectionBehavior(QAbstractItemView::SelectRows);
        borInfo->horizontalHeader()->setHighlightSections(false);
        borInfo->horizontalHeader()->setStretchLastSection(true);
        borInfo->verticalHeader()->setVisible(false);
        borInfo->verticalHeader()->setStretchLastSection(false);

        verticalLayout_5->addWidget(borInfo);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, 0, -1);
        label = new QLabel(borrow);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral(" font: 15pt \"Myriad Pro Cond\";"));

        horizontalLayout_3->addWidget(label);

        duration = new QSpinBox(borrow);
        duration->setObjectName(QStringLiteral("duration"));
        duration->setStyleSheet(QLatin1String("QSpinBox{\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"	border: 1px solid #555;\n"
"	border-radius: 5px;\n"
"	padding-left: 10px;\n"
"}\n"
""));
        duration->setMaximum(30);

        horizontalLayout_3->addWidget(duration);

        label_2 = new QLabel(borrow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font: 15pt \"Myriad Pro Cond\";\n"
"padding-left: 10px;"));

        horizontalLayout_3->addWidget(label_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        send = new QPushButton(borrow);
        send->setObjectName(QStringLiteral("send"));
        send->setCursor(QCursor(Qt::PointingHandCursor));
        send->setStyleSheet(QLatin1String("QPushButton{\n"
"	height: 40px;\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	background-color: #448AFF;\n"
"	color: #fff;\n"
"	outline: none;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #82B1FF;\n"
"}"));

        horizontalLayout_4->addWidget(send);

        cancel = new QPushButton(borrow);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setCursor(QCursor(Qt::PointingHandCursor));
        cancel->setStyleSheet(QLatin1String("QPushButton{\n"
"	height: 40px;\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	background-color: #F44336;\n"
"	color: #fff;\n"
"	outline: none;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #EF5350;\n"
"}"));

        horizontalLayout_4->addWidget(cancel);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 1);

        horizontalLayout_10->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(-1, -1, -1, 20);
        borBookView = new QGraphicsView(borrow);
        borBookView->setObjectName(QStringLiteral("borBookView"));
        borBookView->setStyleSheet(QStringLiteral("border: none;"));

        verticalLayout_6->addWidget(borBookView);

        borBookName = new QLabel(borrow);
        borBookName->setObjectName(QStringLiteral("borBookName"));
        borBookName->setStyleSheet(QStringLiteral("font: 30pt \"Myriad Pro Cond\";"));
        borBookName->setAlignment(Qt::AlignCenter);
        borBookName->setWordWrap(true);

        verticalLayout_6->addWidget(borBookName);


        horizontalLayout_10->addLayout(verticalLayout_6);

        horizontalLayout_10->setStretch(0, 3);
        horizontalLayout_10->setStretch(1, 2);
        readerTab->addTab(borrow, QString());
        perInfo = new QWidget();
        perInfo->setObjectName(QStringLiteral("perInfo"));
        gridLayout_3 = new QGridLayout(perInfo);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        cartInfo = new QGroupBox(perInfo);
        cartInfo->setObjectName(QStringLiteral("cartInfo"));
        cartInfo->setMinimumSize(QSize(369, 341));
        cartInfo->setStyleSheet(QLatin1String(" \n"
"QGroupBox {\n"
"    border: 2px solid gray;\n"
"    border-radius: 5px;\n"
"    margin-top: 1ex;\n"
"	\n"
"	\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center; /* position at the top center */\n"
"    padding: 0 3px;\n"
"}"));
        gridLayout_2 = new QGridLayout(cartInfo);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_15 = new QLabel(cartInfo);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setStyleSheet(QStringLiteral("background: none;"));

        horizontalLayout_9->addWidget(label_15);

        cartduration = new QLabel(cartInfo);
        cartduration->setObjectName(QStringLiteral("cartduration"));
        cartduration->setStyleSheet(QStringLiteral("background: none;"));

        horizontalLayout_9->addWidget(cartduration);

        horizontalLayout_9->setStretch(0, 1);
        horizontalLayout_9->setStretch(1, 3);

        gridLayout_2->addLayout(horizontalLayout_9, 4, 0, 1, 1);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        pushButton_2 = new QPushButton(cartInfo);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"	height: 40px;\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	background: #F44336;\n"
"	color: #fff;\n"
"	outline: none;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"}\n"
"QPushButton:hover \n"
"{\n"
"	background: #EF5350;\n"
"}"));

        horizontalLayout_23->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(cartInfo);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton{\n"
"	height: 40px;\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	background: #2196F3;\n"
"	color: #fff;\n"
"	outline: none;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"}\n"
"QPushButton:hover \n"
"{\n"
"	background: #42A5F5;\n"
"}"));

        horizontalLayout_23->addWidget(pushButton_3);


        gridLayout_2->addLayout(horizontalLayout_23, 6, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_12 = new QLabel(cartInfo);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QStringLiteral("background: none;"));

        horizontalLayout_6->addWidget(label_12);

        cartid = new QLabel(cartInfo);
        cartid->setObjectName(QStringLiteral("cartid"));
        cartid->setStyleSheet(QStringLiteral("background: none;"));

        horizontalLayout_6->addWidget(cartid);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 3);

        gridLayout_2->addLayout(horizontalLayout_6, 1, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_13 = new QLabel(cartInfo);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QStringLiteral("background: none;"));

        horizontalLayout_7->addWidget(label_13);

        cartname = new QLabel(cartInfo);
        cartname->setObjectName(QStringLiteral("cartname"));
        cartname->setStyleSheet(QStringLiteral("background: none;"));

        horizontalLayout_7->addWidget(cartname);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 3);

        gridLayout_2->addLayout(horizontalLayout_7, 2, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_14 = new QLabel(cartInfo);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setStyleSheet(QStringLiteral("background: none;"));

        horizontalLayout_8->addWidget(label_14);

        cartdate = new QLabel(cartInfo);
        cartdate->setObjectName(QStringLiteral("cartdate"));
        cartdate->setStyleSheet(QStringLiteral("background: none;"));

        horizontalLayout_8->addWidget(cartdate);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 3);

        gridLayout_2->addLayout(horizontalLayout_8, 3, 0, 1, 1);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        label_16 = new QLabel(cartInfo);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setStyleSheet(QStringLiteral("background: none;"));

        horizontalLayout_22->addWidget(label_16);

        cartstatus = new QLabel(cartInfo);
        cartstatus->setObjectName(QStringLiteral("cartstatus"));
        cartstatus->setStyleSheet(QStringLiteral("background: none;"));

        horizontalLayout_22->addWidget(cartstatus);

        horizontalLayout_22->setStretch(0, 1);
        horizontalLayout_22->setStretch(1, 3);

        gridLayout_2->addLayout(horizontalLayout_22, 5, 0, 1, 1);

        frame = new QFrame(cartInfo);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_5->addWidget(label_8, 0, 0, 1, 1);

        allbor = new QLabel(frame);
        allbor->setObjectName(QStringLiteral("allbor"));

        gridLayout_5->addWidget(allbor, 0, 1, 1, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_5->addWidget(label_5, 1, 0, 1, 1);

        allreturn = new QLabel(frame);
        allreturn->setObjectName(QStringLiteral("allreturn"));

        gridLayout_5->addWidget(allreturn, 1, 1, 1, 1);

        gridLayout_5->setColumnStretch(0, 1);
        gridLayout_5->setColumnStretch(1, 1);

        gridLayout_2->addWidget(frame, 0, 0, 1, 1);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setRowStretch(1, 1);
        gridLayout_2->setRowStretch(2, 1);
        gridLayout_2->setRowStretch(3, 1);
        gridLayout_2->setRowStretch(4, 1);
        gridLayout_2->setRowStretch(5, 1);

        gridLayout_3->addWidget(cartInfo, 0, 1, 1, 1);

        personalInfo = new QGroupBox(perInfo);
        personalInfo->setObjectName(QStringLiteral("personalInfo"));
        personalInfo->setMinimumSize(QSize(370, 341));
        personalInfo->setStyleSheet(QLatin1String(" \n"
"QGroupBox {\n"
"    border: 2px solid gray;\n"
"	border-right-width: 0px;\n"
"    border-radius: 5px;\n"
"    margin-top: 1ex;\n"
"	\n"
"	\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center; /* position at the top center */\n"
"    padding: 0 3px;\n"
"}"));
        verticalLayout_7 = new QVBoxLayout(personalInfo);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        id_2 = new QLabel(personalInfo);
        id_2->setObjectName(QStringLiteral("id_2"));
        id_2->setStyleSheet(QStringLiteral("background: none;"));

        horizontalLayout_11->addWidget(id_2);

        id = new QLabel(personalInfo);
        id->setObjectName(QStringLiteral("id"));
        id->setStyleSheet(QStringLiteral("background: none;"));

        horizontalLayout_11->addWidget(id);

        horizontalLayout_11->setStretch(0, 1);
        horizontalLayout_11->setStretch(1, 3);

        verticalLayout_9->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        name_2 = new QLabel(personalInfo);
        name_2->setObjectName(QStringLiteral("name_2"));
        name_2->setStyleSheet(QStringLiteral("background: none;"));

        horizontalLayout_12->addWidget(name_2);

        name = new QLineEdit(personalInfo);
        name->setObjectName(QStringLiteral("name"));
        name->setStyleSheet(QLatin1String("height: 30px;\n"
"border: 1px solid #aaa;\n"
"border-radius: 5px;\n"
"padding-left: 10px;\n"
"background: white;"));
        name->setEchoMode(QLineEdit::Normal);
        name->setReadOnly(true);

        horizontalLayout_12->addWidget(name);

        horizontalLayout_12->setStretch(0, 1);
        horizontalLayout_12->setStretch(1, 3);

        verticalLayout_9->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        dob_2 = new QLabel(personalInfo);
        dob_2->setObjectName(QStringLiteral("dob_2"));
        dob_2->setStyleSheet(QStringLiteral("background: none;"));

        horizontalLayout_13->addWidget(dob_2);

        dob = new QLineEdit(personalInfo);
        dob->setObjectName(QStringLiteral("dob"));
        dob->setStyleSheet(QLatin1String("height: 30px;\n"
"border: 1px solid #aaa;\n"
"border-radius: 5px;\n"
"padding-left: 10px;\n"
"background: white;"));
        dob->setReadOnly(true);

        horizontalLayout_13->addWidget(dob);

        horizontalLayout_13->setStretch(0, 1);
        horizontalLayout_13->setStretch(1, 3);

        verticalLayout_9->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        sex_2 = new QLabel(personalInfo);
        sex_2->setObjectName(QStringLiteral("sex_2"));
        sex_2->setStyleSheet(QStringLiteral("background: none;"));

        horizontalLayout_14->addWidget(sex_2);

        sex = new QLineEdit(personalInfo);
        sex->setObjectName(QStringLiteral("sex"));
        sex->setStyleSheet(QLatin1String("height: 30px;\n"
"border: 1px solid #aaa;\n"
"border-radius: 5px;\n"
"padding-left: 10px;\n"
"background: white;"));
        sex->setReadOnly(true);

        horizontalLayout_14->addWidget(sex);

        horizontalLayout_14->setStretch(0, 1);
        horizontalLayout_14->setStretch(1, 3);

        verticalLayout_9->addLayout(horizontalLayout_14);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        address_2 = new QLabel(personalInfo);
        address_2->setObjectName(QStringLiteral("address_2"));
        address_2->setStyleSheet(QStringLiteral("background: none;"));

        horizontalLayout_21->addWidget(address_2);

        address = new QLineEdit(personalInfo);
        address->setObjectName(QStringLiteral("address"));
        address->setStyleSheet(QLatin1String("height: 30px;\n"
"border: 1px solid #aaa;\n"
"border-radius: 5px;\n"
"padding-left: 10px;\n"
"background: white;"));
        address->setReadOnly(true);

        horizontalLayout_21->addWidget(address);

        horizontalLayout_21->setStretch(0, 1);
        horizontalLayout_21->setStretch(1, 3);

        verticalLayout_9->addLayout(horizontalLayout_21);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        email_2 = new QLabel(personalInfo);
        email_2->setObjectName(QStringLiteral("email_2"));
        email_2->setStyleSheet(QStringLiteral("background: none;"));

        horizontalLayout_15->addWidget(email_2);

        email = new QLineEdit(personalInfo);
        email->setObjectName(QStringLiteral("email"));
        email->setStyleSheet(QLatin1String("height: 30px;\n"
"border: 1px solid #aaa;\n"
"border-radius: 5px;\n"
"padding-left: 10px;\n"
"background: white;"));
        email->setReadOnly(true);

        horizontalLayout_15->addWidget(email);

        horizontalLayout_15->setStretch(0, 1);
        horizontalLayout_15->setStretch(1, 3);

        verticalLayout_9->addLayout(horizontalLayout_15);

        verticalLayout_9->setStretch(0, 1);
        verticalLayout_9->setStretch(1, 1);
        verticalLayout_9->setStretch(2, 1);
        verticalLayout_9->setStretch(3, 1);
        verticalLayout_9->setStretch(4, 1);
        verticalLayout_9->setStretch(5, 1);

        verticalLayout_7->addLayout(verticalLayout_9);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        dop_2 = new QLabel(personalInfo);
        dop_2->setObjectName(QStringLiteral("dop_2"));
        dop_2->setStyleSheet(QStringLiteral("background: none;"));

        horizontalLayout_17->addWidget(dop_2);

        dop = new QLabel(personalInfo);
        dop->setObjectName(QStringLiteral("dop"));
        dop->setStyleSheet(QStringLiteral("background: none;"));

        horizontalLayout_17->addWidget(dop);

        horizontalLayout_17->setStretch(0, 1);
        horizontalLayout_17->setStretch(1, 3);

        verticalLayout_11->addLayout(horizontalLayout_17);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_9 = new QLabel(personalInfo);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QStringLiteral("background: none;"));

        horizontalLayout_19->addWidget(label_9);

        status = new QLabel(personalInfo);
        status->setObjectName(QStringLiteral("status"));
        status->setStyleSheet(QStringLiteral("background: none;"));

        horizontalLayout_19->addWidget(status);

        horizontalLayout_19->setStretch(0, 1);
        horizontalLayout_19->setStretch(1, 3);

        verticalLayout_11->addLayout(horizontalLayout_19);

        verticalLayout_11->setStretch(0, 1);
        verticalLayout_11->setStretch(1, 1);

        verticalLayout_7->addLayout(verticalLayout_11);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        changePass = new QPushButton(personalInfo);
        changePass->setObjectName(QStringLiteral("changePass"));
        changePass->setCursor(QCursor(Qt::PointingHandCursor));
        changePass->setStyleSheet(QLatin1String("QPushButton{\n"
"	height: 40px;\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	background: #6A1B9A;\n"
"	color: #fff;\n"
"	outline: none;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"}\n"
"QPushButton:hover \n"
"{\n"
"	background: #8E24AA;\n"
"}"));

        horizontalLayout_16->addWidget(changePass);

        changeButton = new QPushButton(personalInfo);
        changeButton->setObjectName(QStringLiteral("changeButton"));
        changeButton->setCursor(QCursor(Qt::PointingHandCursor));
        changeButton->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"	height: 40px;\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"	background: #00BFA5;\n"
"	color: #eee;\n"
"	outline: none;\n"
"}\n"
"QPushButton:hover \n"
"{\n"
"	background-color: #1DE9B6;\n"
"}"));

        horizontalLayout_16->addWidget(changeButton);


        verticalLayout_7->addLayout(horizontalLayout_16);

        verticalLayout_7->setStretch(0, 5);
        verticalLayout_7->setStretch(1, 2);
        verticalLayout_7->setStretch(3, 1);

        gridLayout_3->addWidget(personalInfo, 0, 0, 1, 1);

        readerTab->addTab(perInfo, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        horizontalLayout_5 = new QHBoxLayout(tab_3);
        horizontalLayout_5->setSpacing(20);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(20, 20, 20, 20);
        textBrowser_3 = new QTextBrowser(tab_3);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));

        horizontalLayout_5->addWidget(textBrowser_3);

        textBrowser_5 = new QTextBrowser(tab_3);
        textBrowser_5->setObjectName(QStringLiteral("textBrowser_5"));

        horizontalLayout_5->addWidget(textBrowser_5);

        readerTab->addTab(tab_3, QString());
        tabsecond = new QWidget();
        tabsecond->setObjectName(QStringLiteral("tabsecond"));
        horizontalLayout_18 = new QHBoxLayout(tabsecond);
        horizontalLayout_18->setSpacing(20);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(20, 20, 20, 20);
        textBrowser = new QTextBrowser(tabsecond);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        horizontalLayout_18->addWidget(textBrowser);

        textBrowser_2 = new QTextBrowser(tabsecond);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));

        horizontalLayout_18->addWidget(textBrowser_2);

        readerTab->addTab(tabsecond, QString());

        gridLayout->addWidget(readerTab, 0, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        reader->setCentralWidget(centralwidget);

        retranslateUi(reader);
        QObject::connect(category, SIGNAL(currentIndexChanged(QString)), searchButton, SLOT(click()));
        QObject::connect(bookSearch, SIGNAL(textChanged(QString)), searchButton, SLOT(click()));
        QObject::connect(bookSearch, SIGNAL(returnPressed()), searchButton, SLOT(click()));

        readerTab->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(reader);
    } // setupUi

    void retranslateUi(QMainWindow *reader)
    {
        reader->setWindowTitle(QApplication::translate("reader", "MainWindow", 0));
        label_4->setText(QApplication::translate("reader", "Ch\303\240o m\341\273\253ng \304\221\341\272\277n v\341\273\233i", 0));
        label_3->setText(QApplication::translate("reader", "LIBRO", 0));
        label_6->setText(QApplication::translate("reader", "Tin t\341\273\251c t\341\273\253 th\306\260 vi\341\273\207n", 0));
        textBrowser_4->setHtml(QApplication::translate("reader", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Myriad Pro Cond'; font-size:15pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Th\303\264ng b\303\241o: </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">T\341\273\253 ng\303\240y 19-6, m\341\273\251c ph\341\272\241t cho vi\341\273\207c tr\341\272\243 s\303\241ch tr\341\273\205 h\341\272\241n ho\341\272\267c l\303\240m h\306\260 h\341\273\217ng s\303\241ch s\341\272\275 t\304\203ng 15% so v\341\273\233i tr\306\260\341\273\233c \304\221\303\242y. Mong qu\303\275 \304\221\341\273\231c gi\341\272\243 h\303\243y ch\303"
                        "\272 \303\275 \304\221\341\273\203 tr\303\241nh b\341\273\213 vi ph\341\272\241m. Xin c\303\241m \306\241n!</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">			Admin.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">S\303\241ch \304\221\306\260\341\273\243c \304\221\341\273\215c nhi\341\273\201u trong tu\341\272\247n:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">	<span style=\" font-style:italic;\">1. A brief history of time</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"
                        "\"><span style=\" font-style:italic;\">	2. The Alchemist</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">	3. The Hobbit</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-style:italic;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">S\303\241ch m\341\273\233i nh\341\272\255p:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">	<span style=\" font-style:italic;\">1. Oxford School Dictionary</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">	2. A Dictiona"
                        "ry of Biology 7/e</span></p></body></html>", 0));
        label_7->setText(QApplication::translate("reader", "Th\303\264ng b\303\241o d\303\240nh cho b\341\272\241n", 0));
        readerTab->setTabText(readerTab->indexOf(tab), QApplication::translate("reader", "Trang ch\341\273\247", 0));
        groupBox->setTitle(QString());
        bookBorrow->setText(QApplication::translate("reader", "M\306\260\341\273\243n s\303\241ch  ", 0));
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
        searchButton->setText(QApplication::translate("reader", "T\303\254m ki\341\272\277m", 0));
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
        label_17->setText(QApplication::translate("reader", "Gi\341\273\233i thi\341\273\207u", 0));
        bookName->setText(QString());
        readerTab->setTabText(readerTab->indexOf(tab_4), QApplication::translate("reader", "Th\306\260 vi\341\273\207n s\303\241ch", 0));
        QTableWidgetItem *___qtablewidgetitem5 = borInfo->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("reader", "M\303\243 phi\341\272\277u m\306\260\341\273\243n", 0));
        QTableWidgetItem *___qtablewidgetitem6 = borInfo->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("reader", "M\303\243 s\303\241ch c\341\272\247n m\306\260\341\273\243n", 0));
        QTableWidgetItem *___qtablewidgetitem7 = borInfo->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("reader", "T\303\252n s\303\241ch", 0));
        label->setText(QApplication::translate("reader", "Th\341\273\235i gian m\306\260\341\273\243n", 0));
        label_2->setText(QApplication::translate("reader", "Ng\303\240y", 0));
        send->setText(QApplication::translate("reader", "G\341\273\255i phi\341\272\277u m\306\260\341\273\243n", 0));
        cancel->setText(QApplication::translate("reader", "H\341\273\247y", 0));
        borBookName->setText(QString());
        readerTab->setTabText(readerTab->indexOf(borrow), QApplication::translate("reader", "\304\220\304\203ng k\303\275 m\306\260\341\273\243n", 0));
        cartInfo->setTitle(QApplication::translate("reader", "Chi ti\341\272\277t phi\341\272\277u m\306\260\341\273\243n", 0));
        label_15->setText(QApplication::translate("reader", "Th\341\273\235i gian m\306\260\341\273\243n:", 0));
        cartduration->setText(QString());
        pushButton_2->setText(QApplication::translate("reader", "Tr\306\260\341\273\233c", 0));
        pushButton_3->setText(QApplication::translate("reader", "Sau", 0));
        label_12->setText(QApplication::translate("reader", "M\303\243 phi\341\272\277u:", 0));
        cartid->setText(QString());
        label_13->setText(QApplication::translate("reader", "T\303\252n s\303\241ch:", 0));
        cartname->setText(QString());
        label_14->setText(QApplication::translate("reader", "Ng\303\240y m\306\260\341\273\243n:", 0));
        cartdate->setText(QString());
        label_16->setText(QApplication::translate("reader", "T\303\254nh tr\341\272\241ng:", 0));
        cartstatus->setText(QString());
        label_8->setText(QApplication::translate("reader", "T\341\273\225ng s\341\273\221 s\303\241ch \304\221\303\243 m\306\260\341\273\243n:", 0));
        allbor->setText(QString());
        label_5->setText(QApplication::translate("reader", "T\341\273\225ng s\341\273\221 s\303\241ch \304\221\303\243 tr\341\272\243:", 0));
        allreturn->setText(QString());
        personalInfo->setTitle(QApplication::translate("reader", "Th\303\264ng tin c\341\273\247a b\341\272\241n", 0));
        id_2->setText(QApplication::translate("reader", "M\303\243 \304\221\341\273\231c gi\341\272\243", 0));
        id->setText(QString());
        name_2->setText(QApplication::translate("reader", "H\341\273\215 v\303\240 t\303\252n:", 0));
        dob_2->setText(QApplication::translate("reader", "Ng\303\240y sinh:", 0));
        sex_2->setText(QApplication::translate("reader", "Gi\341\273\233i t\303\255nh:", 0));
        address_2->setText(QApplication::translate("reader", "\304\220\341\273\213a ch\341\273\211:", 0));
        email_2->setText(QApplication::translate("reader", "Email:", 0));
        dop_2->setText(QApplication::translate("reader", "Ng\303\240y tham gia:", 0));
        dop->setText(QString());
        label_9->setText(QApplication::translate("reader", "T\303\254nh tr\341\272\241ng:", 0));
        status->setText(QString());
        changePass->setText(QApplication::translate("reader", "\304\220\341\273\225i m\341\272\255t kh\341\272\251u", 0));
        changeButton->setText(QApplication::translate("reader", "C\341\272\255p nh\341\272\255t", 0));
        readerTab->setTabText(readerTab->indexOf(perInfo), QApplication::translate("reader", "Th\303\264ng tin c\303\241 nh\303\242n", 0));
        textBrowser_3->setHtml(QApplication::translate("reader", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Myriad Pro Cond'; font-size:15pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600; font-style:italic;\">N\341\273\231i quy th\306\260 vi\341\273\207n</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; background-color:#ffffff;\">1- Nh\341\273\257ng quy \304\221\341\273\213nh chung</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" background-color:#ffffff;\"> "
                        "  </span><span style=\" font-weight:600; background-color:#ffffff;\">\304\220i\341\273\201u 1</span><span style=\" background-color:#ffffff;\">. Kh\303\264ng cho ng\306\260\341\273\235i kh\303\241c m\306\260\341\273\243n t\303\240i kho\341\272\243n v\303\240 kh\303\264ng s\341\273\255 d\341\273\245ng t\303\240i kho\341\272\243n c\341\273\247a ng\306\260\341\273\235i kh\303\241c; Khi b\341\273\213 m\341\272\245t t\303\240i kho\341\272\243n ph\341\272\243i b\303\241o ngay cho ph\303\262ng DVTT \304\221\341\273\203 kh\303\263a t\303\240i kho\341\272\243n. Ch\341\273\247 t\303\240i kho\341\272\243n ho\303\240n to\303\240n ch\341\273\213u tr\303\241ch nhi\341\273\207m n\341\272\277u \304\221\341\273\203ng\306\260\341\273\235i kh\303\241c s\341\273\255 d\341\273\245ng t\303\240i kho\341\272\243n c\341\273\247a m\303\254nh m\306\260\341\273\243n t\303\240i li\341\273\207u.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span styl"
                        "e=\" background-color:#ffffff;\">   </span><span style=\" font-weight:600; background-color:#ffffff;\">\304\220i\341\273\201u 2</span><span style=\" background-color:#ffffff;\">.Xu\341\272\245t tr\303\254nh th\341\272\273 t\341\272\241i qu\341\272\247y th\341\273\247th\306\260ho\341\272\267c CMND/H\341\273\231 chi\341\272\277u.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" background-color:#ffffff;\">   </span><span style=\" font-weight:600; background-color:#ffffff;\">\304\220i\341\273\201u  3</span><span style=\" background-color:#ffffff;\">. Trang  ph\341\273\245c  nghi\303\252m  t\303\272c;  gi\341\273\257  g\303\254n  v\341\273\207  sinh,  kh\303\264ng mang  theo \304\221\341\273\223\304\203n  u\341\273\221ng;  gi\341\273\257tr\341\272\255t  t\341\273\261 v\303\240 tuy\341\273\207t \304\221\341\273\221i kh\303\264ng h\303\272t thu\341\273\221c, kh\303\264ng s\341\273\255 d\341\273\245ng c\303\241c v\341"
                        "\272\255t d\341\273\205 ch\303\241y n\341\273\225 trong khu v\341\273\261c th\306\260vi\341\273\207n. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; background-color:#ffffff;\">2- Quy \304\221\341\273\213nh t\341\272\241i ph\303\262ng \304\221\341\273\215c</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" background-color:#ffffff;\">   </span><span style=\" font-weight:600; background-color:#ffffff;\">\304\220i\341\273\201u 4.</span><span style=\" background-color:#ffffff;\"> B\341\272\241n \304\221\341\273\215c \304\221\341\273\203 t\306\260 trang v\303\240 t\303\240i li\341\273\207u c\303\241 nh\303\242n t\341\272\241i t\341\273\247 g\341\273\255i \304\221\341\273\223, t\341\273\261 b\341\272\243o qu\341\272\243n ti\341\273\201n v\303\240 t\303\240i s\341\272\243n. D\303\271ng xong t\341\273"
                        "\247ph\341\272\243i kh\303\263a t\341\273\247tr\306\260\341\273\233c khi tr\341\272\243 ch\303\254a kh\303\263a.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" background-color:#ffffff;\">   </span><span style=\" font-weight:600; background-color:#ffffff;\">\304\220i\341\273\201u 5</span><span style=\" background-color:#ffffff;\">. B\341\272\241n \304\221\341\273\215c t\303\254m hi\341\273\203u c\303\241c n\341\273\231i dung h\306\260\341\273\233ng d\341\272\253n s\341\273\255 d\341\273\245ng th\306\260vi\341\273\207n t\341\272\241i qu\341\272\247yho\341\272\267c nh\341\273\235 c\303\241n b\341\273\231th\306\260vi\341\273\207n tr\341\273\243gi\303\272p \304\221\341\273\203 tra c\341\273\251u v\303\240 t\341\273\261 t\303\254m t\303\240i li\341\273\207u tr\303\252n gi\303\241 theo b\341\272\243ng ch\341\273\211 d\341\272\253n; kh\303\264ng tr\303\241o \304\221\341\273\225i v\341\273\213tr\303\255 t\303\240i l"
                        "i\341\273\207u; \304\221\306\260\341\273\243c l\341\272\245y kh\303\264ng qu\303\241 03 cu\341\273\221n s\303\241ch ho\341\272\267c 1 lo\341\272\241i b\303\241o/t\341\272\241p ch\303\255 cho 1 l\341\272\247n s\341\273\255 d\341\273\245ng. \304\220\341\273\215c xong, \304\221\341\273\203s\303\241ch v\303\240o n\306\241i quy \304\221\341\273\213nh, \304\221\341\273\203 b\303\241o/t\341\272\241p ch\303\255 l\303\252n gi\303\241. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" background-color:#ffffff;\">   </span><span style=\" font-weight:600; background-color:#ffffff;\">\304\220i\341\273\201u 6</span><span style=\" background-color:#ffffff;\">. Tuy\341\273\207t \304\221\341\273\221i kh\303\264ng mang t\303\240i li\341\273\207u ra kh\341\273\217i ph\303\262ng \304\221\341\273\215c khi ch\306\260a \304\221\306\260\341\273\243c ph\303\251p c\341\273\247a c\303\241n b\341\273\231th\306\260vi\341\273\207n. N\341\272"
                        "\277u c\303\263 nhu c\341\272\247u m\306\260\341\273\243n t\303\240i li\341\273\207u v\341\273\201, b\341\272\241n \304\221\341\273\215c l\303\240m th\341\273\247 t\341\273\245c m\306\260\341\273\243n t\341\272\241i qu\341\272\247y th\341\273\247th\306\260. 3- Quy \304\221\341\273\213nh t\341\272\241i ph\303\262ng m\306\260\341\273\243n.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" background-color:#ffffff;\">   </span><span style=\" font-weight:600; background-color:#ffffff;\">\304\220i\341\273\201u 7</span><span style=\" background-color:#ffffff;\">.  Ki\341\273\203m tra th\303\264ng tin phi\341\272\277u m\306\260\341\273\243n, b\303\241o cho c\303\241n b\341\273\231th\306\260vi\341\273\207n t\303\254nh tr\341\272\241ng t\303\240i li\341\273\207u (b\341\273\213 r\303\241ch, b\341\272\251n) tr\306\260\341\273\233c khi ra kh\341\273\217i ph\303\262ng m\306\260\341\273\243n. </span></p>\n"
"<p style=\" marg"
                        "in-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; background-color:#ffffff;\">4- Nh\341\273\257ng quy \304\221\341\273\213nh v\341\273\201 b\341\272\243o qu\341\272\243n t\303\240i li\341\273\207u, t\303\240i s\341\272\243n, khen th\306\260\341\273\237ng, k\341\273\267lu\341\272\255t</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" background-color:#ffffff;\">   </span><span style=\" font-weight:600; background-color:#ffffff;\">\304\220i\341\273\201u 8</span><span style=\" background-color:#ffffff;\">. H\341\272\277t h\341\273\235i h\341\272\241n m\306\260\341\273\243n, n\341\272\277u mu\341\273\221n m\306\260\341\273\243n ti\341\272\277p t\303\240i li\341\273\207u c\341\272\247n l\303\240m th\341\273\247 t\341\273\245c gia h\341\272\241n. B\341\272\241n \304\221\341\273\215c tr\341\272\243t\303\240i li\341\273\207u ch\341\272"
                        "\255m b\341\273\213ph\341\272\241t theo quy \304\221\341\273\213nh hi\341\273\207n h\303\240nh.<br />  </span><span style=\" font-weight:600; background-color:#ffffff;\"> \304\220i\341\273\201u 9</span><span style=\" background-color:#ffffff;\">. Kh\303\264ng tr\303\241o \304\221\341\273\225i, c\341\272\257t x\303\251n, \304\221\303\241nh d\341\272\245u l\303\240m r\303\241ch n\303\241t, h\306\260 h\341\273\217ng t\303\240i li\341\273\207u; kh\303\264ng vi\341\272\277t nh\303\241p ho\341\272\267c ghi ch\303\251p v\303\240o c\303\241c trang t\303\240i li\341\273\207u; kh\303\264ng sao ch\341\273\245p tr\303\241i ph\303\251p t\303\240i li\341\273\207u. C\303\263 ngh\304\251a v\341\273\245 cho ki\341\273\203m tra t\303\240i li\341\273\207u c\305\251ng nh\306\260 c\303\241c v\341\272\255t d\341\273\245ng mang ra kh\341\273\217i th\306\260vi\341\273\207n khi c\303\263 y\303\252u c\341\272\247u c\341\273\247a ng\306\260\341\273\235i c\303\263 tr\303\241ch nhi\341\273\207m.</span></p>\n"
"<p style=\" margin-top:0px; "
                        "margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" background-color:#ffffff;\">  </span><span style=\" font-weight:600; background-color:#ffffff;\"> \304\220i\341\273\201u 10</span><span style=\" background-color:#ffffff;\">. Nghi\303\252m c\341\272\245m m\341\273\215i h\303\240nh vi g\303\242y thi\341\273\207t h\341\272\241i \304\221\341\272\277n t\303\240i s\341\272\243n, thi\341\272\277t b\341\273\213 v\303\240 c\306\241 s\341\273\237 v\341\272\255t ch\341\272\245t c\341\273\247a th\306\260vi\341\273\207n.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" background-color:#ffffff;\">   </span><span style=\" font-weight:600; background-color:#ffffff;\">\304\220i\341\273\201u 11</span><span style=\" background-color:#ffffff;\">. N\341\272\277u b\341\272\241n \304\221\341\273\215c vi ph\341\272\241m c\303\241c quy \304\221\341\273\213nh trong N\341\273\231"
                        "i quy n\303\240y, t\303\271y theo t\303\255nh ch\341\272\245t, m\341\273\251c \304\221\341\273\231 s\341\272\275ph\341\272\243i ch\341\273\213u x\341\273\255 l\303\275 theo Quy \304\221\341\273\213nh v\341\273\201 x\341\273\255 l\303\275 vi ph\341\272\241m n\341\273\231i quy th\306\260 vi\341\273\207n c\341\273\247a Trung t\303\242m v\341\273\233i c\303\241c h\303\254nh th\341\273\251c sau: Nh\341\272\257c nh\341\273\237, c\341\272\243nh c\303\241o; \304\220\303\254nh ch\341\273\211 quy\341\273\201n s\341\273\255 d\341\273\245ng th\306\260vi\341\273\207n; B\341\273\223i th\306\260\341\273\235ng thi\341\273\207t h\341\272\241i; Th\303\264ng b\303\241o v\341\273\201c\306\241 s\341\273\237qu\341\272\243n l\303\275, \304\221\303\240o t\341\272\241o; \304\220\341\273\201 ngh\341\273\213 truy t\341\273\221tr\306\260\341\273\233c ph\303\241p lu\341\272\255t.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" background"
                        "-color:#ffffff;\">   </span><span style=\" font-weight:600; background-color:#ffffff;\">\304\220i\341\273\201u 12</span><span style=\" background-color:#ffffff;\">. Th\306\260vi\341\273\207n s\341\272\265n s\303\240ng ti\341\272\277p nh\341\272\255n \303\275 ki\341\272\277n \304\221\303\263ng g\303\263p v\303\240 gi\341\272\243i \304\221\303\241p th\341\272\257c m\341\272\257c.</span></p></body></html>", 0));
        textBrowser_5->setHtml(QApplication::translate("reader", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Myriad Pro Cond'; font-size:15pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt;\">HDSD</span></p></body></html>", 0));
        readerTab->setTabText(readerTab->indexOf(tab_3), QApplication::translate("reader", "Tr\341\273\243 gi\303\272p", 0));
        textBrowser->setHtml(QApplication::translate("reader", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Myriad Pro Cond'; font-size:15pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt;\">Gi\341\273\233i thi\341\273\207u th\306\260 vi\341\273\207n</span></p></body></html>", 0));
        textBrowser_2->setHtml(QApplication::translate("reader", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Myriad Pro Cond'; font-size:15pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt;\">H\341\273\230P TH\306\257 G\303\223P \303\235</span></p></body></html>", 0));
        readerTab->setTabText(readerTab->indexOf(tabsecond), QApplication::translate("reader", "Li\303\252n h\341\273\207", 0));
    } // retranslateUi

};

namespace Ui {
    class reader: public Ui_reader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READER_H
