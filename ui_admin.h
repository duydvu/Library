/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_8;
    QTabWidget *admin;
    QWidget *staffs;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *search;
    QVBoxLayout *verticalLayout_3;
    QLabel *name_2;
    QLineEdit *name;
    QLabel *id_2;
    QLineEdit *id;
    QTableWidget *staffTable;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *staffInfo;
    QFormLayout *formLayout;
    QLabel *staffID;
    QLabel *staffName;
    QLabel *label_9;
    QLineEdit *s_name;
    QLineEdit *s_add;
    QWidget *customize;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *changePass;
    QPushButton *changeInfo;
    QLabel *s_id;
    QLabel *label_25;
    QFrame *s_stt;
    QHBoxLayout *horizontalLayout_17;
    QRadioButton *s_active;
    QRadioButton *s_nactive;
    QLabel *startDate;
    QLabel *s_DoP;
    QLabel *label_7;
    QLineEdit *s_sex;
    QLabel *label_8;
    QLineEdit *s_email;
    QLineEdit *s_DoB;
    QLabel *label_27;
    QPushButton *s_done;
    QWidget *books;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *searchBook;
    QComboBox *category;
    QTableWidget *bookTable;
    QFrame *frame_4;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QLineEdit *bookAu;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_13;
    QLineEdit *bookPub;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_15;
    QSpinBox *bookQuantity;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_12;
    QLabel *bookCategory;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QLineEdit *bookName_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_14;
    QLabel *bookID;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_18;
    QLabel *bookLent;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_20;
    QLabel *bookRemain;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_16;
    QTextEdit *bookIntro;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_29;
    QPushButton *bookChange;
    QWidget *users;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_14;
    QLineEdit *searchUsers;
    QPushButton *searchButton;
    QTableWidget *usersTable;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_26;
    QLabel *r_id;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_22;
    QLineEdit *r_name;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_23;
    QLineEdit *r_sex;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_24;
    QLineEdit *r_DoB;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_40;
    QLineEdit *r_email;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_42;
    QLineEdit *r_add;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_41;
    QLabel *r_DoP;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_43;
    QLabel *r_stt;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_18;
    QPushButton *r_done;
    QWidget *lent;
    QGridLayout *gridLayout_2;
    QTableWidget *CartInfos;
    QFrame *frame_2;
    QFormLayout *formLayout_2;
    QRadioButton *newCart;
    QRadioButton *acceptedCart;
    QRadioButton *infringeCart;
    QRadioButton *lendingCart;
    QRadioButton *doneCart;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_2;
    QLabel *bookName;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_3;
    QLabel *readerName;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_6;
    QLabel *recipient;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_4;
    QLabel *status;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QPushButton *accept;
    QPushButton *send;
    QPushButton *done;
    QPushButton *infringe;
    QWidget *NewRegistrations;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Agree;
    QPushButton *Deny;
    QTableWidget *registrationTable;

    void setupUi(QMainWindow *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName(QStringLiteral("Admin"));
        Admin->resize(807, 563);
        Admin->setStyleSheet(QLatin1String("background-color: #f9f9f9;\n"
"font: 15pt \"Myriad Pro Cond\";"));
        centralwidget = new QWidget(Admin);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QStringLiteral(""));
        gridLayout_8 = new QGridLayout(centralwidget);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        admin = new QTabWidget(centralwidget);
        admin->setObjectName(QStringLiteral("admin"));
        admin->setStyleSheet(QLatin1String("QTabWidget{\n"
"	background: none;\n"
"}\n"
"\n"
"QTabWidget::pane { /* The tab widget frame */\n"
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
"	width: 150px;\n"
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
        staffs = new QWidget();
        staffs->setObjectName(QStringLiteral("staffs"));
        horizontalLayout = new QHBoxLayout(staffs);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        search = new QGroupBox(staffs);
        search->setObjectName(QStringLiteral("search"));
        search->setStyleSheet(QStringLiteral("background: none;"));
        verticalLayout_3 = new QVBoxLayout(search);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        name_2 = new QLabel(search);
        name_2->setObjectName(QStringLiteral("name_2"));

        verticalLayout_3->addWidget(name_2);

        name = new QLineEdit(search);
        name->setObjectName(QStringLiteral("name"));
        name->setStyleSheet(QLatin1String("height: 30px;\n"
"border: 1px solid #aaa;\n"
"border-radius: 5px;\n"
"background: none;"));

        verticalLayout_3->addWidget(name);

        id_2 = new QLabel(search);
        id_2->setObjectName(QStringLiteral("id_2"));

        verticalLayout_3->addWidget(id_2);

        id = new QLineEdit(search);
        id->setObjectName(QStringLiteral("id"));
        id->setStyleSheet(QLatin1String("height: 30px;\n"
"border: 1px solid #aaa;\n"
"border-radius: 5px;background: none;"));

        verticalLayout_3->addWidget(id);


        verticalLayout->addWidget(search);

        staffTable = new QTableWidget(staffs);
        if (staffTable->columnCount() < 3)
            staffTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        staffTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        staffTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        staffTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        staffTable->setObjectName(QStringLiteral("staffTable"));
        staffTable->setStyleSheet(QLatin1String("QHeaderView::section {\n"
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
        staffTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        staffTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        staffTable->setSortingEnabled(true);
        staffTable->horizontalHeader()->setHighlightSections(false);
        staffTable->horizontalHeader()->setStretchLastSection(true);
        staffTable->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(staffTable);

        verticalLayout->setStretch(1, 6);

        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        staffInfo = new QGroupBox(staffs);
        staffInfo->setObjectName(QStringLiteral("staffInfo"));
        staffInfo->setStyleSheet(QStringLiteral("background: none;"));
        formLayout = new QFormLayout(staffInfo);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(6);
        formLayout->setVerticalSpacing(20);
        staffID = new QLabel(staffInfo);
        staffID->setObjectName(QStringLiteral("staffID"));
        staffID->setStyleSheet(QStringLiteral("background: none;"));

        formLayout->setWidget(1, QFormLayout::LabelRole, staffID);

        staffName = new QLabel(staffInfo);
        staffName->setObjectName(QStringLiteral("staffName"));
        staffName->setStyleSheet(QStringLiteral("background: none;"));

        formLayout->setWidget(2, QFormLayout::LabelRole, staffName);

        label_9 = new QLabel(staffInfo);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QStringLiteral("background: none;"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_9);

        s_name = new QLineEdit(staffInfo);
        s_name->setObjectName(QStringLiteral("s_name"));
        s_name->setStyleSheet(QLatin1String("background: none;border: 1px solid #aaa;\n"
"border-radius: 5px;"));
        s_name->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, s_name);

        s_add = new QLineEdit(staffInfo);
        s_add->setObjectName(QStringLiteral("s_add"));
        s_add->setStyleSheet(QLatin1String("background: none;border: 1px solid #aaa;\n"
"border-radius: 5px;"));
        s_add->setReadOnly(true);

        formLayout->setWidget(6, QFormLayout::FieldRole, s_add);

        customize = new QWidget(staffInfo);
        customize->setObjectName(QStringLiteral("customize"));
        horizontalLayout_2 = new QHBoxLayout(customize);
        horizontalLayout_2->setSpacing(50);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        changePass = new QPushButton(customize);
        changePass->setObjectName(QStringLiteral("changePass"));
        changePass->setCursor(QCursor(Qt::PointingHandCursor));
        changePass->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"	height: 30px;\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"	background: #6A1B9A;\n"
"	color: #eee;\n"
"	outline: none;\n"
"}\n"
"QPushButton:hover \n"
"{\n"
"	background-color: #8E24AA;\n"
"}"));

        horizontalLayout_2->addWidget(changePass);

        changeInfo = new QPushButton(customize);
        changeInfo->setObjectName(QStringLiteral("changeInfo"));
        changeInfo->setCursor(QCursor(Qt::PointingHandCursor));
        changeInfo->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"	height: 30px;\n"
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

        horizontalLayout_2->addWidget(changeInfo);


        formLayout->setWidget(0, QFormLayout::FieldRole, customize);

        s_id = new QLabel(staffInfo);
        s_id->setObjectName(QStringLiteral("s_id"));

        formLayout->setWidget(1, QFormLayout::FieldRole, s_id);

        label_25 = new QLabel(staffInfo);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setStyleSheet(QStringLiteral("background: none;"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_25);

        s_stt = new QFrame(staffInfo);
        s_stt->setObjectName(QStringLiteral("s_stt"));
        s_stt->setEnabled(true);
        s_stt->setCursor(QCursor(Qt::ArrowCursor));
        s_stt->setStyleSheet(QStringLiteral("background: none;"));
        s_stt->setFrameShape(QFrame::StyledPanel);
        s_stt->setFrameShadow(QFrame::Raised);
        horizontalLayout_17 = new QHBoxLayout(s_stt);
        horizontalLayout_17->setSpacing(0);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        s_active = new QRadioButton(s_stt);
        s_active->setObjectName(QStringLiteral("s_active"));
        s_active->setStyleSheet(QStringLiteral("background: none;"));

        horizontalLayout_17->addWidget(s_active);

        s_nactive = new QRadioButton(s_stt);
        s_nactive->setObjectName(QStringLiteral("s_nactive"));
        s_nactive->setStyleSheet(QStringLiteral("background: none;"));

        horizontalLayout_17->addWidget(s_nactive);


        formLayout->setWidget(8, QFormLayout::FieldRole, s_stt);

        startDate = new QLabel(staffInfo);
        startDate->setObjectName(QStringLiteral("startDate"));
        startDate->setStyleSheet(QStringLiteral("background: none;"));

        formLayout->setWidget(7, QFormLayout::LabelRole, startDate);

        s_DoP = new QLabel(staffInfo);
        s_DoP->setObjectName(QStringLiteral("s_DoP"));
        s_DoP->setStyleSheet(QStringLiteral("background: none;"));

        formLayout->setWidget(7, QFormLayout::FieldRole, s_DoP);

        label_7 = new QLabel(staffInfo);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("background: none;"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        s_sex = new QLineEdit(staffInfo);
        s_sex->setObjectName(QStringLiteral("s_sex"));
        s_sex->setStyleSheet(QLatin1String("background: none;border: 1px solid #aaa;\n"
"border-radius: 5px;"));
        s_sex->setReadOnly(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, s_sex);

        label_8 = new QLabel(staffInfo);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QStringLiteral("background: none;"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_8);

        s_email = new QLineEdit(staffInfo);
        s_email->setObjectName(QStringLiteral("s_email"));
        s_email->setStyleSheet(QLatin1String("background: none;border: 1px solid #aaa;\n"
"border-radius: 5px;"));
        s_email->setReadOnly(true);

        formLayout->setWidget(5, QFormLayout::FieldRole, s_email);

        s_DoB = new QLineEdit(staffInfo);
        s_DoB->setObjectName(QStringLiteral("s_DoB"));
        s_DoB->setStyleSheet(QLatin1String("background: none;border: 1px solid #aaa;\n"
"border-radius: 5px;"));
        s_DoB->setReadOnly(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, s_DoB);

        label_27 = new QLabel(staffInfo);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setStyleSheet(QStringLiteral("background: none;"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_27);

        s_done = new QPushButton(staffInfo);
        s_done->setObjectName(QStringLiteral("s_done"));
        s_done->setCursor(QCursor(Qt::PointingHandCursor));
        s_done->setStyleSheet(QLatin1String("QPushButton{\n"
"	height: 40px;\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	background-color: #448AFF;\n"
"	color: #fff;\n"
"	outline: none;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"	margin-left: 100px;\n"
"	margin-right: 100px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #82B1FF;\n"
"}"));

        formLayout->setWidget(9, QFormLayout::SpanningRole, s_done);


        verticalLayout_2->addWidget(staffInfo);

        verticalLayout_2->setStretch(0, 3);

        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 3);
        admin->addTab(staffs, QString());
        books = new QWidget();
        books->setObjectName(QStringLiteral("books"));
        gridLayout_6 = new QGridLayout(books);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        searchBook = new QLineEdit(books);
        searchBook->setObjectName(QStringLiteral("searchBook"));
        searchBook->setStyleSheet(QLatin1String("background: none;border: 1px solid #aaa;\n"
"border-radius: 5px;"));

        verticalLayout_4->addWidget(searchBook);

        category = new QComboBox(books);
        category->setObjectName(QStringLiteral("category"));
        category->setMaxVisibleItems(15);

        verticalLayout_4->addWidget(category);

        bookTable = new QTableWidget(books);
        if (bookTable->columnCount() < 2)
            bookTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        bookTable->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        bookTable->setHorizontalHeaderItem(1, __qtablewidgetitem4);
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

        verticalLayout_4->addWidget(bookTable);


        horizontalLayout_6->addLayout(verticalLayout_4);

        frame_4 = new QFrame(books);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setStyleSheet(QStringLiteral("background: none;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(frame_4);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_11 = new QLabel(frame_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(101, 16));

        horizontalLayout_10->addWidget(label_11);

        bookAu = new QLineEdit(frame_4);
        bookAu->setObjectName(QStringLiteral("bookAu"));
        bookAu->setStyleSheet(QLatin1String("border: 1px solid #aaa;\n"
"border-radius: 5px;"));
        bookAu->setReadOnly(true);

        horizontalLayout_10->addWidget(bookAu);

        horizontalLayout_10->setStretch(0, 1);
        horizontalLayout_10->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_10, 1, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_13 = new QLabel(frame_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(101, 16));

        horizontalLayout_8->addWidget(label_13);

        bookPub = new QLineEdit(frame_4);
        bookPub->setObjectName(QStringLiteral("bookPub"));
        bookPub->setStyleSheet(QLatin1String("border: 1px solid #aaa;\n"
"border-radius: 5px;"));
        bookPub->setReadOnly(true);

        horizontalLayout_8->addWidget(bookPub);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_8, 3, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_15 = new QLabel(frame_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMinimumSize(QSize(101, 16));

        horizontalLayout_11->addWidget(label_15);

        bookQuantity = new QSpinBox(frame_4);
        bookQuantity->setObjectName(QStringLiteral("bookQuantity"));
        bookQuantity->setReadOnly(true);

        horizontalLayout_11->addWidget(bookQuantity);

        horizontalLayout_11->setStretch(0, 1);
        horizontalLayout_11->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_11, 2, 1, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_12 = new QLabel(frame_4);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_9->addWidget(label_12);

        bookCategory = new QLabel(frame_4);
        bookCategory->setObjectName(QStringLiteral("bookCategory"));
        bookCategory->setMinimumSize(QSize(128, 16));

        horizontalLayout_9->addWidget(bookCategory);


        gridLayout->addLayout(horizontalLayout_9, 3, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_10 = new QLabel(frame_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(101, 16));

        horizontalLayout_5->addWidget(label_10);

        bookName_2 = new QLineEdit(frame_4);
        bookName_2->setObjectName(QStringLiteral("bookName_2"));
        bookName_2->setStyleSheet(QLatin1String("border: 1px solid #aaa;\n"
"border-radius: 5px;"));
        bookName_2->setReadOnly(true);

        horizontalLayout_5->addWidget(bookName_2);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_14 = new QLabel(frame_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(101, 16));

        horizontalLayout_7->addWidget(label_14);

        bookID = new QLabel(frame_4);
        bookID->setObjectName(QStringLiteral("bookID"));

        horizontalLayout_7->addWidget(bookID);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_7, 1, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout, 1, 0, 1, 2);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(2);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_18 = new QLabel(frame_4);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_12->addWidget(label_18);

        bookLent = new QLabel(frame_4);
        bookLent->setObjectName(QStringLiteral("bookLent"));

        horizontalLayout_12->addWidget(bookLent);

        horizontalLayout_12->setStretch(0, 1);
        horizontalLayout_12->setStretch(1, 2);

        verticalLayout_8->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_20 = new QLabel(frame_4);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_13->addWidget(label_20);

        bookRemain = new QLabel(frame_4);
        bookRemain->setObjectName(QStringLiteral("bookRemain"));

        horizontalLayout_13->addWidget(bookRemain);

        horizontalLayout_13->setStretch(0, 1);
        horizontalLayout_13->setStretch(1, 2);

        verticalLayout_8->addLayout(horizontalLayout_13);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_16 = new QLabel(frame_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_16);

        bookIntro = new QTextEdit(frame_4);
        bookIntro->setObjectName(QStringLiteral("bookIntro"));
        bookIntro->setStyleSheet(QLatin1String("border: 1px solid #aaa;\n"
"border-radius: 10px;"));
        bookIntro->setReadOnly(true);

        verticalLayout_5->addWidget(bookIntro);


        verticalLayout_8->addLayout(verticalLayout_5);

        verticalLayout_8->setStretch(0, 1);
        verticalLayout_8->setStretch(1, 1);
        verticalLayout_8->setStretch(2, 12);

        gridLayout_7->addLayout(verticalLayout_8, 2, 0, 1, 1);

        frame_5 = new QFrame(frame_4);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_29 = new QHBoxLayout(frame_5);
        horizontalLayout_29->setObjectName(QStringLiteral("horizontalLayout_29"));
        horizontalLayout_29->setContentsMargins(100, -1, 100, -1);
        bookChange = new QPushButton(frame_5);
        bookChange->setObjectName(QStringLiteral("bookChange"));
        bookChange->setCursor(QCursor(Qt::PointingHandCursor));
        bookChange->setStyleSheet(QLatin1String("QPushButton{\n"
"	height: 30px;\n"
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

        horizontalLayout_29->addWidget(bookChange);


        gridLayout_7->addWidget(frame_5, 0, 0, 1, 1);

        gridLayout_7->setRowStretch(0, 1);
        gridLayout_7->setRowStretch(1, 4);
        gridLayout_7->setRowStretch(2, 10);

        horizontalLayout_6->addWidget(frame_4);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 2);

        gridLayout_6->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        admin->addTab(books, QString());
        users = new QWidget();
        users->setObjectName(QStringLiteral("users"));
        gridLayout_5 = new QGridLayout(users);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        widget_2 = new QWidget(users);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setStyleSheet(QStringLiteral("background: none;"));
        horizontalLayout_14 = new QHBoxLayout(widget_2);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        searchUsers = new QLineEdit(widget_2);
        searchUsers->setObjectName(QStringLiteral("searchUsers"));
        searchUsers->setStyleSheet(QLatin1String("border: 1px solid #aaa;\n"
"border-radius: 5px;"));

        horizontalLayout_14->addWidget(searchUsers);

        searchButton = new QPushButton(widget_2);
        searchButton->setObjectName(QStringLiteral("searchButton"));

        horizontalLayout_14->addWidget(searchButton);


        verticalLayout_7->addWidget(widget_2);

        usersTable = new QTableWidget(users);
        if (usersTable->columnCount() < 3)
            usersTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        usersTable->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        usersTable->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        usersTable->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        usersTable->setObjectName(QStringLiteral("usersTable"));
        usersTable->setStyleSheet(QLatin1String("QHeaderView::section {\n"
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
        usersTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        usersTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        usersTable->setSortingEnabled(true);
        usersTable->horizontalHeader()->setHighlightSections(false);
        usersTable->horizontalHeader()->setStretchLastSection(true);
        usersTable->verticalHeader()->setVisible(false);
        usersTable->verticalHeader()->setCascadingSectionResizes(false);
        usersTable->verticalHeader()->setStretchLastSection(false);

        verticalLayout_7->addWidget(usersTable);


        gridLayout_5->addLayout(verticalLayout_7, 0, 0, 1, 1);

        frame_6 = new QFrame(users);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setStyleSheet(QStringLiteral("background: none;"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_11 = new QVBoxLayout(frame_6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        pushButton_4 = new QPushButton(frame_6);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"	height: 30px;\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"	background: #6A1B9A;\n"
"	color: #eee;\n"
"	outline: none;\n"
"}\n"
"QPushButton:hover \n"
"{\n"
"	background-color: #8E24AA;\n"
"}"));

        horizontalLayout_16->addWidget(pushButton_4);

        pushButton_2 = new QPushButton(frame_6);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"	height: 30px;\n"
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

        horizontalLayout_16->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(frame_6);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton{\n"
"	height: 30px;\n"
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

        horizontalLayout_16->addWidget(pushButton_3);


        verticalLayout_11->addLayout(horizontalLayout_16);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_26 = new QLabel(frame_6);
        label_26->setObjectName(QStringLiteral("label_26"));

        horizontalLayout_15->addWidget(label_26);

        r_id = new QLabel(frame_6);
        r_id->setObjectName(QStringLiteral("r_id"));

        horizontalLayout_15->addWidget(r_id);

        horizontalLayout_15->setStretch(0, 1);
        horizontalLayout_15->setStretch(1, 4);

        verticalLayout_11->addLayout(horizontalLayout_15);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_22 = new QLabel(frame_6);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_4->addWidget(label_22);

        r_name = new QLineEdit(frame_6);
        r_name->setObjectName(QStringLiteral("r_name"));
        r_name->setStyleSheet(QLatin1String("border: 1px solid #aaa;\n"
"border-radius: 5px;"));
        r_name->setReadOnly(true);

        horizontalLayout_4->addWidget(r_name);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 4);

        verticalLayout_11->addLayout(horizontalLayout_4);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        label_23 = new QLabel(frame_6);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_23->addWidget(label_23);

        r_sex = new QLineEdit(frame_6);
        r_sex->setObjectName(QStringLiteral("r_sex"));
        r_sex->setStyleSheet(QLatin1String("border: 1px solid #aaa;\n"
"border-radius: 5px;"));
        r_sex->setReadOnly(true);

        horizontalLayout_23->addWidget(r_sex);

        horizontalLayout_23->setStretch(0, 1);
        horizontalLayout_23->setStretch(1, 4);

        verticalLayout_11->addLayout(horizontalLayout_23);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        label_24 = new QLabel(frame_6);
        label_24->setObjectName(QStringLiteral("label_24"));

        horizontalLayout_24->addWidget(label_24);

        r_DoB = new QLineEdit(frame_6);
        r_DoB->setObjectName(QStringLiteral("r_DoB"));
        r_DoB->setStyleSheet(QLatin1String("border: 1px solid #aaa;\n"
"border-radius: 5px;"));
        r_DoB->setReadOnly(true);

        horizontalLayout_24->addWidget(r_DoB);

        horizontalLayout_24->setStretch(0, 1);
        horizontalLayout_24->setStretch(1, 4);

        verticalLayout_11->addLayout(horizontalLayout_24);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        label_40 = new QLabel(frame_6);
        label_40->setObjectName(QStringLiteral("label_40"));

        horizontalLayout_25->addWidget(label_40);

        r_email = new QLineEdit(frame_6);
        r_email->setObjectName(QStringLiteral("r_email"));
        r_email->setStyleSheet(QLatin1String("border: 1px solid #aaa;\n"
"border-radius: 5px;"));
        r_email->setReadOnly(true);

        horizontalLayout_25->addWidget(r_email);

        horizontalLayout_25->setStretch(0, 1);
        horizontalLayout_25->setStretch(1, 4);

        verticalLayout_11->addLayout(horizontalLayout_25);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        label_42 = new QLabel(frame_6);
        label_42->setObjectName(QStringLiteral("label_42"));

        horizontalLayout_27->addWidget(label_42);

        r_add = new QLineEdit(frame_6);
        r_add->setObjectName(QStringLiteral("r_add"));
        r_add->setStyleSheet(QLatin1String("border: 1px solid #aaa;\n"
"border-radius: 5px;"));
        r_add->setReadOnly(true);

        horizontalLayout_27->addWidget(r_add);

        horizontalLayout_27->setStretch(0, 1);
        horizontalLayout_27->setStretch(1, 4);

        verticalLayout_11->addLayout(horizontalLayout_27);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        label_41 = new QLabel(frame_6);
        label_41->setObjectName(QStringLiteral("label_41"));

        horizontalLayout_26->addWidget(label_41);

        r_DoP = new QLabel(frame_6);
        r_DoP->setObjectName(QStringLiteral("r_DoP"));

        horizontalLayout_26->addWidget(r_DoP);

        horizontalLayout_26->setStretch(0, 1);
        horizontalLayout_26->setStretch(1, 4);

        verticalLayout_11->addLayout(horizontalLayout_26);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        label_43 = new QLabel(frame_6);
        label_43->setObjectName(QStringLiteral("label_43"));

        horizontalLayout_28->addWidget(label_43);

        r_stt = new QLabel(frame_6);
        r_stt->setObjectName(QStringLiteral("r_stt"));

        horizontalLayout_28->addWidget(r_stt);

        horizontalLayout_28->setStretch(0, 1);
        horizontalLayout_28->setStretch(1, 4);

        verticalLayout_11->addLayout(horizontalLayout_28);

        frame_7 = new QFrame(frame_6);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_18 = new QHBoxLayout(frame_7);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(-1, -1, 200, -1);
        r_done = new QPushButton(frame_7);
        r_done->setObjectName(QStringLiteral("r_done"));
        r_done->setCursor(QCursor(Qt::PointingHandCursor));
        r_done->setStyleSheet(QLatin1String("QPushButton{\n"
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

        horizontalLayout_18->addWidget(r_done);


        verticalLayout_11->addWidget(frame_7);


        gridLayout_5->addWidget(frame_6, 0, 1, 1, 1);

        admin->addTab(users, QString());
        lent = new QWidget();
        lent->setObjectName(QStringLiteral("lent"));
        gridLayout_2 = new QGridLayout(lent);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        CartInfos = new QTableWidget(lent);
        if (CartInfos->columnCount() < 6)
            CartInfos->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        CartInfos->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        CartInfos->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        CartInfos->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        CartInfos->setHorizontalHeaderItem(3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        CartInfos->setHorizontalHeaderItem(4, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        CartInfos->setHorizontalHeaderItem(5, __qtablewidgetitem13);
        CartInfos->setObjectName(QStringLiteral("CartInfos"));
        CartInfos->setStyleSheet(QLatin1String("QHeaderView::section {\n"
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
"text-align:center;"));
        CartInfos->setEditTriggers(QAbstractItemView::NoEditTriggers);
        CartInfos->setSelectionBehavior(QAbstractItemView::SelectRows);
        CartInfos->horizontalHeader()->setCascadingSectionResizes(false);
        CartInfos->horizontalHeader()->setHighlightSections(false);
        CartInfos->horizontalHeader()->setStretchLastSection(true);
        CartInfos->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(CartInfos, 1, 1, 1, 1);

        frame_2 = new QFrame(lent);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setMinimumSize(QSize(281, 91));
        frame_2->setStyleSheet(QStringLiteral("background: none;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        formLayout_2 = new QFormLayout(frame_2);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        newCart = new QRadioButton(frame_2);
        newCart->setObjectName(QStringLiteral("newCart"));
        newCart->setChecked(true);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, newCart);

        acceptedCart = new QRadioButton(frame_2);
        acceptedCart->setObjectName(QStringLiteral("acceptedCart"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, acceptedCart);

        infringeCart = new QRadioButton(frame_2);
        infringeCart->setObjectName(QStringLiteral("infringeCart"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, infringeCart);

        lendingCart = new QRadioButton(frame_2);
        lendingCart->setObjectName(QStringLiteral("lendingCart"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, lendingCart);

        doneCart = new QRadioButton(frame_2);
        doneCart->setObjectName(QStringLiteral("doneCart"));
        doneCart->setChecked(false);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, doneCart);


        gridLayout_2->addWidget(frame_2, 0, 0, 1, 1);

        frame_3 = new QFrame(lent);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setMinimumSize(QSize(231, 253));
        frame_3->setStyleSheet(QStringLiteral("background: none;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_3);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label = new QLabel(frame_3);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Myriad Pro Cond"));
        font.setPointSize(15);
        font.setBold(false);
        font.setItalic(true);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("font: italic;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_19->addWidget(label_2);

        bookName = new QLabel(frame_3);
        bookName->setObjectName(QStringLiteral("bookName"));

        horizontalLayout_19->addWidget(bookName);

        horizontalLayout_19->setStretch(0, 1);
        horizontalLayout_19->setStretch(1, 1);

        verticalLayout_6->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_20->addWidget(label_3);

        readerName = new QLabel(frame_3);
        readerName->setObjectName(QStringLiteral("readerName"));

        horizontalLayout_20->addWidget(readerName);

        horizontalLayout_20->setStretch(0, 1);
        horizontalLayout_20->setStretch(1, 1);

        verticalLayout_6->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QStringLiteral("font-size: 14pt;"));

        horizontalLayout_21->addWidget(label_6);

        recipient = new QLabel(frame_3);
        recipient->setObjectName(QStringLiteral("recipient"));

        horizontalLayout_21->addWidget(recipient);

        horizontalLayout_21->setStretch(0, 1);
        horizontalLayout_21->setStretch(1, 1);

        verticalLayout_6->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_22->addWidget(label_4);

        status = new QLabel(frame_3);
        status->setObjectName(QStringLiteral("status"));

        horizontalLayout_22->addWidget(status);

        horizontalLayout_22->setStretch(0, 1);
        horizontalLayout_22->setStretch(1, 1);

        verticalLayout_6->addLayout(horizontalLayout_22);


        gridLayout_2->addWidget(frame_3, 1, 0, 1, 1);

        frame = new QFrame(lent);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral("background: none;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(10);
        gridLayout_3->setVerticalSpacing(6);
        gridLayout_3->setContentsMargins(40, -1, 150, -1);
        accept = new QPushButton(frame);
        accept->setObjectName(QStringLiteral("accept"));
        accept->setEnabled(false);
        accept->setCursor(QCursor(Qt::PointingHandCursor));
        accept->setStyleSheet(QLatin1String("height: 25px;\n"
"width: 50px;"));

        gridLayout_3->addWidget(accept, 0, 0, 1, 1);

        send = new QPushButton(frame);
        send->setObjectName(QStringLiteral("send"));
        send->setEnabled(false);
        send->setCursor(QCursor(Qt::PointingHandCursor));
        send->setStyleSheet(QLatin1String("height: 25px;\n"
"width: 50px;"));

        gridLayout_3->addWidget(send, 1, 0, 1, 1);

        done = new QPushButton(frame);
        done->setObjectName(QStringLiteral("done"));
        done->setEnabled(false);
        done->setCursor(QCursor(Qt::PointingHandCursor));
        done->setStyleSheet(QLatin1String("height: 25px;\n"
"width: 50px;"));

        gridLayout_3->addWidget(done, 1, 1, 1, 1);

        infringe = new QPushButton(frame);
        infringe->setObjectName(QStringLiteral("infringe"));
        infringe->setEnabled(false);
        infringe->setCursor(QCursor(Qt::PointingHandCursor));
        infringe->setStyleSheet(QLatin1String("height: 25px;\n"
"width: 50px;"));

        gridLayout_3->addWidget(infringe, 0, 1, 1, 1);


        gridLayout_2->addWidget(frame, 0, 1, 1, 1);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setRowStretch(1, 3);
        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 2);
        admin->addTab(lent, QString());
        NewRegistrations = new QWidget();
        NewRegistrations->setObjectName(QStringLiteral("NewRegistrations"));
        gridLayout_4 = new QGridLayout(NewRegistrations);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(100);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(100, 9, 100, 9);
        Agree = new QPushButton(NewRegistrations);
        Agree->setObjectName(QStringLiteral("Agree"));
        Agree->setCursor(QCursor(Qt::PointingHandCursor));
        Agree->setStyleSheet(QLatin1String("QPushButton{\n"
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

        horizontalLayout_3->addWidget(Agree);

        Deny = new QPushButton(NewRegistrations);
        Deny->setObjectName(QStringLiteral("Deny"));
        Deny->setCursor(QCursor(Qt::PointingHandCursor));
        Deny->setStyleSheet(QLatin1String("QPushButton{\n"
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

        horizontalLayout_3->addWidget(Deny);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);

        gridLayout_4->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        registrationTable = new QTableWidget(NewRegistrations);
        if (registrationTable->columnCount() < 9)
            registrationTable->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(3, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(4, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(5, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(6, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(7, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(8, __qtablewidgetitem22);
        registrationTable->setObjectName(QStringLiteral("registrationTable"));
        registrationTable->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        registrationTable->setStyleSheet(QLatin1String("QHeaderView::section {\n"
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
        registrationTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        registrationTable->horizontalHeader()->setStretchLastSection(true);
        registrationTable->verticalHeader()->setVisible(false);

        gridLayout_4->addWidget(registrationTable, 1, 0, 1, 1);

        admin->addTab(NewRegistrations, QString());

        gridLayout_8->addWidget(admin, 0, 0, 1, 1);

        Admin->setCentralWidget(centralwidget);

        retranslateUi(Admin);
        QObject::connect(searchUsers, SIGNAL(returnPressed()), searchButton, SLOT(click()));

        admin->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QMainWindow *Admin)
    {
        Admin->setWindowTitle(QApplication::translate("Admin", "MainWindow", 0));
        search->setTitle(QApplication::translate("Admin", "T\303\254m ki\341\272\277m", 0));
        name_2->setText(QApplication::translate("Admin", "Theo t\303\252n: ", 0));
        id_2->setText(QApplication::translate("Admin", "Theo m\303\243", 0));
        QTableWidgetItem *___qtablewidgetitem = staffTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Admin", "M\303\243 nh\303\242n vi\303\252n", 0));
        QTableWidgetItem *___qtablewidgetitem1 = staffTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Admin", "T\303\240i kho\341\272\243n", 0));
        QTableWidgetItem *___qtablewidgetitem2 = staffTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Admin", "H\341\273\215 v\303\240 t\303\252n", 0));
        staffInfo->setTitle(QApplication::translate("Admin", "Th\303\264ng tin nh\303\242n vi\303\252n", 0));
        staffID->setText(QApplication::translate("Admin", "M\303\243 nh\303\242n vi\303\252n:", 0));
        staffName->setText(QApplication::translate("Admin", "T\303\252n nh\303\242n vi\303\252n:", 0));
        label_9->setText(QApplication::translate("Admin", "\304\220\341\273\213a ch\341\273\211:", 0));
        changePass->setText(QApplication::translate("Admin", "\304\220\341\273\225i m\341\272\255t kh\341\272\251u", 0));
        changeInfo->setText(QApplication::translate("Admin", "S\341\273\255a th\303\264ng tin", 0));
        s_id->setText(QString());
        label_25->setText(QApplication::translate("Admin", "T\303\254nh tr\341\272\241ng:", 0));
        s_active->setText(QApplication::translate("Admin", "\304\220ang l\303\240m vi\341\273\207c", 0));
        s_nactive->setText(QApplication::translate("Admin", "H\341\273\247y h\341\273\243p \304\221\341\273\223ng", 0));
        startDate->setText(QApplication::translate("Admin", "B\341\272\257t \304\221\341\272\247u l\303\240m vi\341\273\207c t\341\273\253:", 0));
        s_DoP->setText(QString());
        label_7->setText(QApplication::translate("Admin", "Gi\341\273\233i t\303\255nh: ", 0));
        label_8->setText(QApplication::translate("Admin", "Email:", 0));
        label_27->setText(QApplication::translate("Admin", "Ng\303\240y sinh:", 0));
        s_done->setText(QApplication::translate("Admin", "Xong", 0));
        admin->setTabText(admin->indexOf(staffs), QApplication::translate("Admin", "Qu\341\272\243n l\303\275 nh\303\242n vi\303\252n", 0));
        category->clear();
        category->insertItems(0, QStringList()
         << QApplication::translate("Admin", "T\341\272\245t c\341\272\243", 0)
         << QApplication::translate("Admin", "B\303\241ch khoa to\303\240n th\306\260", 0)
         << QApplication::translate("Admin", "Ch\303\242m bi\341\272\277m", 0)
         << QApplication::translate("Admin", "Du l\341\273\213ch", 0)
         << QApplication::translate("Admin", "\304\220\341\273\213a l\303\275", 0)
         << QApplication::translate("Admin", "H\303\240nh \304\221\341\273\231ng v\303\240 phi\303\252u l\306\260u", 0)
         << QApplication::translate("Admin", "Huy\341\273\201n b\303\255", 0)
         << QApplication::translate("Admin", "Khoa h\341\273\215c", 0)
         << QApplication::translate("Admin", "Khoa h\341\273\215c vi\341\273\205n t\306\260\341\273\237ng", 0)
         << QApplication::translate("Admin", "K\341\273\213ch", 0)
         << QApplication::translate("Admin", "Kinh d\341\273\213", 0)
         << QApplication::translate("Admin", "Kinh t\341\272\277", 0)
         << QApplication::translate("Admin", "L\303\243ng m\341\272\241n", 0)
         << QApplication::translate("Admin", "L\341\273\213ch s\341\273\255", 0)
         << QApplication::translate("Admin", "Ngh\341\273\207 thu\341\272\255t", 0)
         << QApplication::translate("Admin", "Nh\341\272\255t k\303\275", 0)
         << QApplication::translate("Admin", "S\303\241ch n\341\272\245u \304\203n", 0)
         << QApplication::translate("Admin", "S\341\273\251c kh\341\273\217e", 0)
         << QApplication::translate("Admin", "T\341\272\241p ch\303\255", 0)
         << QApplication::translate("Admin", "Th\306\241", 0)
         << QApplication::translate("Admin", "Ti\341\273\203u s\341\273\255", 0)
         << QApplication::translate("Admin", "To\303\241n", 0)
         << QApplication::translate("Admin", "T\303\264n gi\303\241o", 0)
         << QApplication::translate("Admin", "Ch\303\255nh tr\341\273\213", 0)
         << QApplication::translate("Admin", "Tr\341\272\273 em", 0)
         << QApplication::translate("Admin", "Truy\341\273\207n tranh", 0)
         << QApplication::translate("Admin", "T\341\273\253 \304\221i\341\273\203n", 0)
        );
        QTableWidgetItem *___qtablewidgetitem3 = bookTable->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("Admin", "M\303\243 s\303\241ch", 0));
        QTableWidgetItem *___qtablewidgetitem4 = bookTable->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("Admin", "T\341\273\261a s\303\241ch", 0));
        label_11->setText(QApplication::translate("Admin", "T\303\241c gi\341\272\243:", 0));
        label_13->setText(QApplication::translate("Admin", "Nh\303\240 xu\341\272\245t b\341\272\243n:", 0));
        label_15->setText(QApplication::translate("Admin", "S\341\273\221 l\306\260\341\273\243ng:", 0));
        label_12->setText(QApplication::translate("Admin", "Chuy\303\252n m\341\273\245c:", 0));
        bookCategory->setText(QString());
        label_10->setText(QApplication::translate("Admin", "T\303\252n:", 0));
        label_14->setText(QApplication::translate("Admin", "M\303\243:", 0));
        bookID->setText(QString());
        label_18->setText(QApplication::translate("Admin", "\304\220\303\243 cho m\306\260\341\273\243n:", 0));
        bookLent->setText(QString());
        label_20->setText(QApplication::translate("Admin", "Hi\341\273\207n c\303\262n:", 0));
        bookRemain->setText(QString());
        label_16->setText(QApplication::translate("Admin", "S\306\241 l\306\260\341\273\243c", 0));
        bookChange->setText(QApplication::translate("Admin", "C\341\272\255p nh\341\272\255t", 0));
        admin->setTabText(admin->indexOf(books), QApplication::translate("Admin", "Qu\341\272\243n l\303\275 s\303\241ch", 0));
        searchUsers->setPlaceholderText(QApplication::translate("Admin", "T\303\254m ki\341\272\277m", 0));
        searchButton->setText(QApplication::translate("Admin", "T\303\254m", 0));
        QTableWidgetItem *___qtablewidgetitem5 = usersTable->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("Admin", "M\303\243 s\341\273\221", 0));
        QTableWidgetItem *___qtablewidgetitem6 = usersTable->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("Admin", "T\303\240i kho\341\272\243n", 0));
        QTableWidgetItem *___qtablewidgetitem7 = usersTable->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("Admin", "H\341\273\215 v\303\240 t\303\252n", 0));
        pushButton_4->setText(QApplication::translate("Admin", "\304\220\341\273\225i m\341\272\255t kh\341\272\251u", 0));
        pushButton_2->setText(QApplication::translate("Admin", "S\341\273\255a", 0));
        pushButton_3->setText(QApplication::translate("Admin", "Kh\303\263a / M\341\273\237 kh\303\263a", 0));
        label_26->setText(QApplication::translate("Admin", "M\303\243 s\341\273\221:", 0));
        r_id->setText(QString());
        label_22->setText(QApplication::translate("Admin", "H\341\273\215 v\303\240 t\303\252n:", 0));
        label_23->setText(QApplication::translate("Admin", "Gi\341\273\233i t\303\255nh:", 0));
        label_24->setText(QApplication::translate("Admin", "Ng\303\240y sinh:", 0));
        label_40->setText(QApplication::translate("Admin", "Email:", 0));
        label_42->setText(QApplication::translate("Admin", "\304\220\341\273\213a ch\341\273\211:", 0));
        label_41->setText(QApplication::translate("Admin", "Ng\303\240y tham gia:", 0));
        r_DoP->setText(QString());
        label_43->setText(QApplication::translate("Admin", "T\303\254nh tr\341\272\241ng:", 0));
        r_stt->setText(QString());
        r_done->setText(QApplication::translate("Admin", "Xong", 0));
        admin->setTabText(admin->indexOf(users), QApplication::translate("Admin", "Qu\341\272\243n l\303\275 \304\221\341\273\231c gi\341\272\243", 0));
        QTableWidgetItem *___qtablewidgetitem8 = CartInfos->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("Admin", "M\303\243 phi\341\272\277u", 0));
        QTableWidgetItem *___qtablewidgetitem9 = CartInfos->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("Admin", "M\303\243 s\303\241ch", 0));
        QTableWidgetItem *___qtablewidgetitem10 = CartInfos->horizontalHeaderItem(3);
        ___qtablewidgetitem10->setText(QApplication::translate("Admin", "M\303\243 ng\306\260\341\273\235i d\303\271ng", 0));
        QTableWidgetItem *___qtablewidgetitem11 = CartInfos->horizontalHeaderItem(4);
        ___qtablewidgetitem11->setText(QApplication::translate("Admin", "Th\341\273\235i h\341\272\241n", 0));
        QTableWidgetItem *___qtablewidgetitem12 = CartInfos->horizontalHeaderItem(5);
        ___qtablewidgetitem12->setText(QApplication::translate("Admin", "S\341\273\221 s\303\241ch c\303\262n", 0));
        newCart->setText(QApplication::translate("Admin", "Phi\341\272\277u m\306\260\341\273\243n m\341\273\233i", 0));
        acceptedCart->setText(QApplication::translate("Admin", "Phi\341\272\277u \304\221\303\243 ch\341\272\245p nh\341\272\255n", 0));
        infringeCart->setText(QApplication::translate("Admin", "Phi\341\272\277u vi ph\341\272\241m", 0));
        lendingCart->setText(QApplication::translate("Admin", "Phi\341\272\277u \304\221ang cho m\306\260\341\273\243n", 0));
        doneCart->setText(QApplication::translate("Admin", "Phi\341\272\277u \304\221\303\243 ho\303\240n t\341\272\245t", 0));
        label->setText(QApplication::translate("Admin", "Th\303\264ng tin chi ti\341\272\277t", 0));
        label_2->setText(QApplication::translate("Admin", "T\341\273\261a s\303\241ch:", 0));
        bookName->setText(QString());
        label_3->setText(QApplication::translate("Admin", "T\303\252n ng\306\260\341\273\235i m\306\260\341\273\243n:", 0));
        readerName->setText(QString());
        label_6->setText(QApplication::translate("Admin", "X\303\241c nh\341\272\255n l\341\272\247n cu\341\273\221i b\341\273\237i:", 0));
        recipient->setText(QString());
        label_4->setText(QApplication::translate("Admin", "T\303\254nh tr\341\272\241ng:", 0));
        status->setText(QString());
        accept->setText(QApplication::translate("Admin", "Ch\341\272\245p nh\341\272\255n", 0));
        send->setText(QApplication::translate("Admin", "Cho m\306\260\341\273\243n", 0));
        done->setText(QApplication::translate("Admin", "Ho\303\240n t\341\272\245t", 0));
        infringe->setText(QApplication::translate("Admin", "Vi ph\341\272\241m", 0));
        admin->setTabText(admin->indexOf(lent), QApplication::translate("Admin", "Qu\341\272\243n l\303\275 m\306\260\341\273\243n tr\341\272\243", 0));
        Agree->setText(QApplication::translate("Admin", "Ch\341\272\245p nh\341\272\255n", 0));
        Deny->setText(QApplication::translate("Admin", "T\341\273\253 ch\341\273\221i", 0));
        QTableWidgetItem *___qtablewidgetitem13 = registrationTable->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QApplication::translate("Admin", "T\303\240i kho\341\272\243n", 0));
        QTableWidgetItem *___qtablewidgetitem14 = registrationTable->horizontalHeaderItem(2);
        ___qtablewidgetitem14->setText(QApplication::translate("Admin", "Vai tr\303\262", 0));
        QTableWidgetItem *___qtablewidgetitem15 = registrationTable->horizontalHeaderItem(3);
        ___qtablewidgetitem15->setText(QApplication::translate("Admin", "H\341\273\215 v\303\240 t\303\252n", 0));
        QTableWidgetItem *___qtablewidgetitem16 = registrationTable->horizontalHeaderItem(4);
        ___qtablewidgetitem16->setText(QApplication::translate("Admin", "Ng\303\240y \304\221\304\203ng k\303\275", 0));
        QTableWidgetItem *___qtablewidgetitem17 = registrationTable->horizontalHeaderItem(5);
        ___qtablewidgetitem17->setText(QApplication::translate("Admin", "Gi\341\273\233i t\303\255nh", 0));
        QTableWidgetItem *___qtablewidgetitem18 = registrationTable->horizontalHeaderItem(6);
        ___qtablewidgetitem18->setText(QApplication::translate("Admin", "Ng\303\240y sinh", 0));
        QTableWidgetItem *___qtablewidgetitem19 = registrationTable->horizontalHeaderItem(7);
        ___qtablewidgetitem19->setText(QApplication::translate("Admin", "Email", 0));
        QTableWidgetItem *___qtablewidgetitem20 = registrationTable->horizontalHeaderItem(8);
        ___qtablewidgetitem20->setText(QApplication::translate("Admin", "\304\220\341\273\213a ch\341\273\211", 0));
        admin->setTabText(admin->indexOf(NewRegistrations), QApplication::translate("Admin", "Qu\341\272\243n l\303\275 \304\221\304\203ng k\303\275 m\341\273\233i", 0));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
