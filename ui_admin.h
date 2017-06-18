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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
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
    QWidget *customize;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *changeInfo;
    QPushButton *remove;
    QPushButton *changePass;
    QTableWidget *staffTable;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *search;
    QVBoxLayout *verticalLayout_3;
    QLabel *name_2;
    QLineEdit *name;
    QLabel *id_2;
    QLineEdit *id;
    QGroupBox *staffInfo;
    QFormLayout *formLayout;
    QLabel *staffID;
    QLabel *s_id;
    QLabel *staffName;
    QLabel *s_name;
    QLabel *startDate;
    QLabel *s_DoP;
    QLabel *label_7;
    QLabel *s_sex;
    QLabel *label_8;
    QLabel *s_email;
    QLabel *label_9;
    QLabel *s_add;
    QWidget *books;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_5;
    QComboBox *category;
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QFrame *frame_4;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_14;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_15;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_13;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_12;
    QLabel *label_17;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_18;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_20;
    QLabel *label_21;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_16;
    QTextEdit *textEdit;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *users;
    QHBoxLayout *horizontalLayout_15;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_14;
    QLineEdit *searchUsers;
    QPushButton *searchButton;
    QTableWidget *usersTable;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_22;
    QLineEdit *lineEdit_12;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_23;
    QLineEdit *lineEdit_13;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_24;
    QLineEdit *lineEdit_14;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_40;
    QLineEdit *lineEdit_15;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_41;
    QLineEdit *lineEdit_16;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_42;
    QLineEdit *lineEdit_17;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_43;
    QLineEdit *lineEdit_18;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QWidget *lent;
    QGridLayout *gridLayout_2;
    QTableWidget *CartInfos;
    QFrame *frame_2;
    QFormLayout *formLayout_2;
    QRadioButton *newCart;
    QRadioButton *doneCart;
    QRadioButton *acceptedCart;
    QRadioButton *infringeCart;
    QRadioButton *lendingCart;
    QFrame *frame_3;
    QFormLayout *formLayout_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *bookName;
    QLabel *label_5;
    QLabel *capacity;
    QLabel *label_3;
    QLabel *readerName;
    QLabel *label_6;
    QLabel *recipient;
    QLabel *label_4;
    QLabel *status;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QPushButton *accept;
    QPushButton *done;
    QPushButton *send;
    QPushButton *infringe;
    QWidget *NewRegistrations;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Agree;
    QPushButton *Deny;
    QSpacerItem *horizontalSpacer;
    QTableWidget *registrationTable;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName(QStringLiteral("Admin"));
        Admin->resize(807, 527);
        centralwidget = new QWidget(Admin);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_8 = new QGridLayout(centralwidget);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        admin = new QTabWidget(centralwidget);
        admin->setObjectName(QStringLiteral("admin"));
        staffs = new QWidget();
        staffs->setObjectName(QStringLiteral("staffs"));
        horizontalLayout = new QHBoxLayout(staffs);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        customize = new QWidget(staffs);
        customize->setObjectName(QStringLiteral("customize"));
        horizontalLayout_2 = new QHBoxLayout(customize);
        horizontalLayout_2->setSpacing(50);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, 9);
        changeInfo = new QPushButton(customize);
        changeInfo->setObjectName(QStringLiteral("changeInfo"));
        changeInfo->setStyleSheet(QStringLiteral("height: 20px;"));

        horizontalLayout_2->addWidget(changeInfo);

        remove = new QPushButton(customize);
        remove->setObjectName(QStringLiteral("remove"));
        remove->setStyleSheet(QStringLiteral("height: 20px;"));

        horizontalLayout_2->addWidget(remove);

        changePass = new QPushButton(customize);
        changePass->setObjectName(QStringLiteral("changePass"));
        changePass->setStyleSheet(QStringLiteral("height: 20px;"));

        horizontalLayout_2->addWidget(changePass);


        verticalLayout->addWidget(customize);

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
        staffTable->setSortingEnabled(true);
        staffTable->horizontalHeader()->setStretchLastSection(true);
        staffTable->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(staffTable);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 6);

        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        search = new QGroupBox(staffs);
        search->setObjectName(QStringLiteral("search"));
        verticalLayout_3 = new QVBoxLayout(search);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        name_2 = new QLabel(search);
        name_2->setObjectName(QStringLiteral("name_2"));

        verticalLayout_3->addWidget(name_2);

        name = new QLineEdit(search);
        name->setObjectName(QStringLiteral("name"));
        name->setStyleSheet(QLatin1String("height: 30px;\n"
"border: 1px solid #aaa;\n"
"border-radius: 5px;"));

        verticalLayout_3->addWidget(name);

        id_2 = new QLabel(search);
        id_2->setObjectName(QStringLiteral("id_2"));

        verticalLayout_3->addWidget(id_2);

        id = new QLineEdit(search);
        id->setObjectName(QStringLiteral("id"));
        id->setStyleSheet(QLatin1String("height: 30px;\n"
"border: 1px solid #aaa;\n"
"border-radius: 5px;"));

        verticalLayout_3->addWidget(id);


        verticalLayout_2->addWidget(search);

        staffInfo = new QGroupBox(staffs);
        staffInfo->setObjectName(QStringLiteral("staffInfo"));
        formLayout = new QFormLayout(staffInfo);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(6);
        formLayout->setVerticalSpacing(20);
        staffID = new QLabel(staffInfo);
        staffID->setObjectName(QStringLiteral("staffID"));

        formLayout->setWidget(0, QFormLayout::LabelRole, staffID);

        s_id = new QLabel(staffInfo);
        s_id->setObjectName(QStringLiteral("s_id"));

        formLayout->setWidget(0, QFormLayout::FieldRole, s_id);

        staffName = new QLabel(staffInfo);
        staffName->setObjectName(QStringLiteral("staffName"));

        formLayout->setWidget(1, QFormLayout::LabelRole, staffName);

        s_name = new QLabel(staffInfo);
        s_name->setObjectName(QStringLiteral("s_name"));

        formLayout->setWidget(1, QFormLayout::FieldRole, s_name);

        startDate = new QLabel(staffInfo);
        startDate->setObjectName(QStringLiteral("startDate"));

        formLayout->setWidget(2, QFormLayout::LabelRole, startDate);

        s_DoP = new QLabel(staffInfo);
        s_DoP->setObjectName(QStringLiteral("s_DoP"));

        formLayout->setWidget(2, QFormLayout::FieldRole, s_DoP);

        label_7 = new QLabel(staffInfo);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        s_sex = new QLabel(staffInfo);
        s_sex->setObjectName(QStringLiteral("s_sex"));

        formLayout->setWidget(3, QFormLayout::FieldRole, s_sex);

        label_8 = new QLabel(staffInfo);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_8);

        s_email = new QLabel(staffInfo);
        s_email->setObjectName(QStringLiteral("s_email"));

        formLayout->setWidget(4, QFormLayout::FieldRole, s_email);

        label_9 = new QLabel(staffInfo);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_9);

        s_add = new QLabel(staffInfo);
        s_add->setObjectName(QStringLiteral("s_add"));

        formLayout->setWidget(5, QFormLayout::FieldRole, s_add);


        verticalLayout_2->addWidget(staffInfo);

        verticalLayout_2->setStretch(0, 2);
        verticalLayout_2->setStretch(1, 3);

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
        lineEdit_5 = new QLineEdit(books);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        verticalLayout_4->addWidget(lineEdit_5);

        category = new QComboBox(books);
        category->setObjectName(QStringLiteral("category"));

        verticalLayout_4->addWidget(category);

        tableWidget = new QTableWidget(books);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);

        verticalLayout_4->addWidget(tableWidget);

        pushButton = new QPushButton(books);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_4->addWidget(pushButton);


        horizontalLayout_6->addLayout(verticalLayout_4);

        frame_4 = new QFrame(books);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(frame_4);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_10 = new QLabel(frame_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(101, 16));

        horizontalLayout_5->addWidget(label_10);

        lineEdit = new QLineEdit(frame_4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_5->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_11 = new QLabel(frame_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(101, 16));

        horizontalLayout_10->addWidget(label_11);

        lineEdit_3 = new QLineEdit(frame_4);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_10->addWidget(lineEdit_3);


        gridLayout->addLayout(horizontalLayout_10, 0, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_14 = new QLabel(frame_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(101, 16));

        horizontalLayout_7->addWidget(label_14);

        lineEdit_2 = new QLineEdit(frame_4);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_7->addWidget(lineEdit_2);


        gridLayout->addLayout(horizontalLayout_7, 1, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_15 = new QLabel(frame_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMinimumSize(QSize(101, 16));

        horizontalLayout_11->addWidget(label_15);

        lineEdit_6 = new QLineEdit(frame_4);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        horizontalLayout_11->addWidget(lineEdit_6);


        gridLayout->addLayout(horizontalLayout_11, 1, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_13 = new QLabel(frame_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(101, 16));

        horizontalLayout_8->addWidget(label_13);

        lineEdit_4 = new QLineEdit(frame_4);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_8->addWidget(lineEdit_4);


        gridLayout->addLayout(horizontalLayout_8, 2, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_12 = new QLabel(frame_4);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_9->addWidget(label_12);

        label_17 = new QLabel(frame_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMinimumSize(QSize(128, 16));

        horizontalLayout_9->addWidget(label_17);


        gridLayout->addLayout(horizontalLayout_9, 2, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout, 0, 0, 1, 2);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_18 = new QLabel(frame_4);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_12->addWidget(label_18);

        label_19 = new QLabel(frame_4);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_12->addWidget(label_19);


        verticalLayout_8->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_20 = new QLabel(frame_4);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_13->addWidget(label_20);

        label_21 = new QLabel(frame_4);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_13->addWidget(label_21);


        verticalLayout_8->addLayout(horizontalLayout_13);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_16 = new QLabel(frame_4);
        label_16->setObjectName(QStringLiteral("label_16"));

        verticalLayout_5->addWidget(label_16);

        textEdit = new QTextEdit(frame_4);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout_5->addWidget(textEdit);


        verticalLayout_8->addLayout(verticalLayout_5);


        gridLayout_7->addLayout(verticalLayout_8, 1, 0, 1, 1);

        frame_5 = new QFrame(frame_4);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_5);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(-1, 200, -1, -1);
        pushButton_5 = new QPushButton(frame_5);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout_6->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(frame_5);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout_6->addWidget(pushButton_6);


        gridLayout_7->addWidget(frame_5, 1, 1, 1, 1);

        label_10->raise();
        label_11->raise();
        label_13->raise();
        label_14->raise();
        label_15->raise();
        label_12->raise();
        label_16->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        lineEdit_3->raise();
        lineEdit_4->raise();
        lineEdit_6->raise();
        label_17->raise();
        textEdit->raise();
        frame_5->raise();
        label_18->raise();
        label_19->raise();
        label_17->raise();

        horizontalLayout_6->addWidget(frame_4);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 2);

        gridLayout_6->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        admin->addTab(books, QString());
        users = new QWidget();
        users->setObjectName(QStringLiteral("users"));
        horizontalLayout_15 = new QHBoxLayout(users);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        widget_2 = new QWidget(users);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_14 = new QHBoxLayout(widget_2);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        searchUsers = new QLineEdit(widget_2);
        searchUsers->setObjectName(QStringLiteral("searchUsers"));

        horizontalLayout_14->addWidget(searchUsers);

        searchButton = new QPushButton(widget_2);
        searchButton->setObjectName(QStringLiteral("searchButton"));

        horizontalLayout_14->addWidget(searchButton);


        verticalLayout_7->addWidget(widget_2);

        usersTable = new QTableWidget(users);
        if (usersTable->columnCount() < 4)
            usersTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        usersTable->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        usersTable->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        usersTable->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        usersTable->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        usersTable->setObjectName(QStringLiteral("usersTable"));
        usersTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        usersTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        usersTable->setSortingEnabled(true);
        usersTable->horizontalHeader()->setStretchLastSection(true);
        usersTable->verticalHeader()->setVisible(false);
        usersTable->verticalHeader()->setCascadingSectionResizes(false);
        usersTable->verticalHeader()->setStretchLastSection(false);

        verticalLayout_7->addWidget(usersTable);


        horizontalLayout_15->addLayout(verticalLayout_7);

        frame_6 = new QFrame(users);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_11 = new QVBoxLayout(frame_6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_22 = new QLabel(frame_6);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_4->addWidget(label_22);

        lineEdit_12 = new QLineEdit(frame_6);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));

        horizontalLayout_4->addWidget(lineEdit_12);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 4);

        verticalLayout_11->addLayout(horizontalLayout_4);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        label_23 = new QLabel(frame_6);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_23->addWidget(label_23);

        lineEdit_13 = new QLineEdit(frame_6);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));

        horizontalLayout_23->addWidget(lineEdit_13);

        horizontalLayout_23->setStretch(0, 1);
        horizontalLayout_23->setStretch(1, 4);

        verticalLayout_11->addLayout(horizontalLayout_23);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        label_24 = new QLabel(frame_6);
        label_24->setObjectName(QStringLiteral("label_24"));

        horizontalLayout_24->addWidget(label_24);

        lineEdit_14 = new QLineEdit(frame_6);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));

        horizontalLayout_24->addWidget(lineEdit_14);

        horizontalLayout_24->setStretch(0, 1);
        horizontalLayout_24->setStretch(1, 4);

        verticalLayout_11->addLayout(horizontalLayout_24);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        label_40 = new QLabel(frame_6);
        label_40->setObjectName(QStringLiteral("label_40"));

        horizontalLayout_25->addWidget(label_40);

        lineEdit_15 = new QLineEdit(frame_6);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));

        horizontalLayout_25->addWidget(lineEdit_15);

        horizontalLayout_25->setStretch(0, 1);
        horizontalLayout_25->setStretch(1, 4);

        verticalLayout_11->addLayout(horizontalLayout_25);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        label_41 = new QLabel(frame_6);
        label_41->setObjectName(QStringLiteral("label_41"));

        horizontalLayout_26->addWidget(label_41);

        lineEdit_16 = new QLineEdit(frame_6);
        lineEdit_16->setObjectName(QStringLiteral("lineEdit_16"));

        horizontalLayout_26->addWidget(lineEdit_16);

        horizontalLayout_26->setStretch(0, 1);
        horizontalLayout_26->setStretch(1, 4);

        verticalLayout_11->addLayout(horizontalLayout_26);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        label_42 = new QLabel(frame_6);
        label_42->setObjectName(QStringLiteral("label_42"));

        horizontalLayout_27->addWidget(label_42);

        lineEdit_17 = new QLineEdit(frame_6);
        lineEdit_17->setObjectName(QStringLiteral("lineEdit_17"));

        horizontalLayout_27->addWidget(lineEdit_17);

        horizontalLayout_27->setStretch(0, 1);
        horizontalLayout_27->setStretch(1, 4);

        verticalLayout_11->addLayout(horizontalLayout_27);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        label_43 = new QLabel(frame_6);
        label_43->setObjectName(QStringLiteral("label_43"));

        horizontalLayout_28->addWidget(label_43);

        lineEdit_18 = new QLineEdit(frame_6);
        lineEdit_18->setObjectName(QStringLiteral("lineEdit_18"));

        horizontalLayout_28->addWidget(lineEdit_18);

        horizontalLayout_28->setStretch(0, 1);
        horizontalLayout_28->setStretch(1, 4);

        verticalLayout_11->addLayout(horizontalLayout_28);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        pushButton_4 = new QPushButton(frame_6);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_16->addWidget(pushButton_4);

        pushButton_2 = new QPushButton(frame_6);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_16->addWidget(pushButton_2);


        verticalLayout_11->addLayout(horizontalLayout_16);


        horizontalLayout_15->addWidget(frame_6);

        admin->addTab(users, QString());
        usersTable->raise();
        frame_6->raise();
        frame_6->raise();
        usersTable->raise();
        widget_2->raise();
        usersTable->raise();
        pushButton_2->raise();
        pushButton_4->raise();
        lent = new QWidget();
        lent->setObjectName(QStringLiteral("lent"));
        gridLayout_2 = new QGridLayout(lent);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        CartInfos = new QTableWidget(lent);
        if (CartInfos->columnCount() < 5)
            CartInfos->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        CartInfos->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        CartInfos->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        CartInfos->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        CartInfos->setHorizontalHeaderItem(3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        CartInfos->setHorizontalHeaderItem(4, __qtablewidgetitem13);
        CartInfos->setObjectName(QStringLiteral("CartInfos"));
        CartInfos->setStyleSheet(QStringLiteral("text-align:center;"));
        CartInfos->setEditTriggers(QAbstractItemView::NoEditTriggers);
        CartInfos->setSelectionBehavior(QAbstractItemView::SelectRows);
        CartInfos->horizontalHeader()->setCascadingSectionResizes(false);
        CartInfos->horizontalHeader()->setStretchLastSection(true);
        CartInfos->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(CartInfos, 1, 1, 1, 1);

        frame_2 = new QFrame(lent);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setMinimumSize(QSize(281, 91));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        formLayout_2 = new QFormLayout(frame_2);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        newCart = new QRadioButton(frame_2);
        newCart->setObjectName(QStringLiteral("newCart"));
        newCart->setChecked(true);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, newCart);

        doneCart = new QRadioButton(frame_2);
        doneCart->setObjectName(QStringLiteral("doneCart"));
        doneCart->setChecked(false);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, doneCart);

        acceptedCart = new QRadioButton(frame_2);
        acceptedCart->setObjectName(QStringLiteral("acceptedCart"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, acceptedCart);

        infringeCart = new QRadioButton(frame_2);
        infringeCart->setObjectName(QStringLiteral("infringeCart"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, infringeCart);

        lendingCart = new QRadioButton(frame_2);
        lendingCart->setObjectName(QStringLiteral("lendingCart"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, lendingCart);


        gridLayout_2->addWidget(frame_2, 0, 0, 1, 1);

        frame_3 = new QFrame(lent);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setMinimumSize(QSize(231, 253));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        formLayout_3 = new QFormLayout(frame_3);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label = new QLabel(frame_3);
        label->setObjectName(QStringLiteral("label"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, label);

        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_2);

        bookName = new QLabel(frame_3);
        bookName->setObjectName(QStringLiteral("bookName"));

        formLayout_3->setWidget(3, QFormLayout::SpanningRole, bookName);

        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_3->setWidget(5, QFormLayout::SpanningRole, label_5);

        capacity = new QLabel(frame_3);
        capacity->setObjectName(QStringLiteral("capacity"));

        formLayout_3->setWidget(6, QFormLayout::FieldRole, capacity);

        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_3->setWidget(7, QFormLayout::SpanningRole, label_3);

        readerName = new QLabel(frame_3);
        readerName->setObjectName(QStringLiteral("readerName"));

        formLayout_3->setWidget(8, QFormLayout::SpanningRole, readerName);

        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_3->setWidget(10, QFormLayout::SpanningRole, label_6);

        recipient = new QLabel(frame_3);
        recipient->setObjectName(QStringLiteral("recipient"));

        formLayout_3->setWidget(12, QFormLayout::SpanningRole, recipient);

        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_3->setWidget(14, QFormLayout::LabelRole, label_4);

        status = new QLabel(frame_3);
        status->setObjectName(QStringLiteral("status"));

        formLayout_3->setWidget(15, QFormLayout::SpanningRole, status);


        gridLayout_2->addWidget(frame_3, 1, 0, 1, 1);

        frame = new QFrame(lent);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(40);
        gridLayout_3->setVerticalSpacing(6);
        gridLayout_3->setContentsMargins(40, -1, 200, -1);
        accept = new QPushButton(frame);
        accept->setObjectName(QStringLiteral("accept"));
        accept->setStyleSheet(QLatin1String("height: 25px;\n"
"width: 50px;"));

        gridLayout_3->addWidget(accept, 0, 0, 1, 1);

        done = new QPushButton(frame);
        done->setObjectName(QStringLiteral("done"));
        done->setStyleSheet(QLatin1String("height: 25px;\n"
"width: 50px;"));

        gridLayout_3->addWidget(done, 0, 1, 1, 1);

        send = new QPushButton(frame);
        send->setObjectName(QStringLiteral("send"));
        send->setStyleSheet(QLatin1String("height: 25px;\n"
"width: 50px;"));

        gridLayout_3->addWidget(send, 1, 0, 1, 1);

        infringe = new QPushButton(frame);
        infringe->setObjectName(QStringLiteral("infringe"));
        infringe->setStyleSheet(QLatin1String("height: 25px;\n"
"width: 50px;"));

        gridLayout_3->addWidget(infringe, 1, 1, 1, 1);


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
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        Agree = new QPushButton(NewRegistrations);
        Agree->setObjectName(QStringLiteral("Agree"));

        horizontalLayout_3->addWidget(Agree);

        Deny = new QPushButton(NewRegistrations);
        Deny->setObjectName(QStringLiteral("Deny"));

        horizontalLayout_3->addWidget(Deny);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 3);

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
        registrationTable->horizontalHeader()->setStretchLastSection(true);
        registrationTable->verticalHeader()->setVisible(false);

        gridLayout_4->addWidget(registrationTable, 1, 0, 1, 1);

        admin->addTab(NewRegistrations, QString());

        gridLayout_8->addWidget(admin, 0, 0, 1, 1);

        Admin->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Admin);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Admin->setStatusBar(statusbar);

        retranslateUi(Admin);

        admin->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QMainWindow *Admin)
    {
        Admin->setWindowTitle(QApplication::translate("Admin", "MainWindow", 0));
        changeInfo->setText(QApplication::translate("Admin", "S\341\273\255a th\303\264ng tin", 0));
        remove->setText(QApplication::translate("Admin", "X\303\263a", 0));
        changePass->setText(QApplication::translate("Admin", "\304\220\341\273\225i m\341\272\255t kh\341\272\251u", 0));
        QTableWidgetItem *___qtablewidgetitem = staffTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Admin", "M\303\243 nh\303\242n vi\303\252n", 0));
        QTableWidgetItem *___qtablewidgetitem1 = staffTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Admin", "T\303\240i kho\341\272\243n", 0));
        QTableWidgetItem *___qtablewidgetitem2 = staffTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Admin", "H\341\273\215 v\303\240 t\303\252n", 0));
        search->setTitle(QApplication::translate("Admin", "T\303\254m ki\341\272\277m", 0));
        name_2->setText(QApplication::translate("Admin", "Theo t\303\252n: ", 0));
        id_2->setText(QApplication::translate("Admin", "Theo m\303\243", 0));
        staffInfo->setTitle(QApplication::translate("Admin", "Th\303\264ng tin nh\303\242n vi\303\252n", 0));
        staffID->setText(QApplication::translate("Admin", "M\303\243 nh\303\242n vi\303\252n:", 0));
        s_id->setText(QString());
        staffName->setText(QApplication::translate("Admin", "T\303\252n nh\303\242n vi\303\252n:", 0));
        s_name->setText(QString());
        startDate->setText(QApplication::translate("Admin", "B\341\272\257t \304\221\341\272\247u l\303\240m vi\341\273\207c t\341\273\253:", 0));
        s_DoP->setText(QString());
        label_7->setText(QApplication::translate("Admin", "Gi\341\273\233i t\303\255nh: ", 0));
        s_sex->setText(QString());
        label_8->setText(QApplication::translate("Admin", "Email:", 0));
        s_email->setText(QString());
        label_9->setText(QApplication::translate("Admin", "\304\220\341\273\213a ch\341\273\211:", 0));
        s_add->setText(QString());
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
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("Admin", "M\303\243 s\303\241ch", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("Admin", "T\341\273\261a s\303\241ch", 0));
        pushButton->setText(QApplication::translate("Admin", "Th\303\252m", 0));
        label_10->setText(QApplication::translate("Admin", "T\303\252n:", 0));
        label_11->setText(QApplication::translate("Admin", "T\303\241c gi\341\272\243:", 0));
        label_14->setText(QApplication::translate("Admin", "M\303\243:", 0));
        label_15->setText(QApplication::translate("Admin", "S\341\273\221 l\306\260\341\273\243ng:", 0));
        label_13->setText(QApplication::translate("Admin", "Nh\303\240 xu\341\272\245t b\341\272\243n:", 0));
        label_12->setText(QApplication::translate("Admin", "Chuy\303\252n m\341\273\245c:", 0));
        label_17->setText(QString());
        label_18->setText(QApplication::translate("Admin", "\304\220\303\243 cho m\306\260\341\273\243n:", 0));
        label_19->setText(QString());
        label_20->setText(QApplication::translate("Admin", "Hi\341\273\207n c\303\262n:", 0));
        label_21->setText(QString());
        label_16->setText(QApplication::translate("Admin", "S\306\241 l\306\260\341\273\243c:", 0));
        pushButton_5->setText(QApplication::translate("Admin", "S\341\273\255a", 0));
        pushButton_6->setText(QApplication::translate("Admin", "X\303\263a", 0));
        admin->setTabText(admin->indexOf(books), QApplication::translate("Admin", "Qu\341\272\243n l\303\275 s\303\241ch", 0));
        searchUsers->setPlaceholderText(QApplication::translate("Admin", "T\303\254m ki\341\272\277m", 0));
        searchButton->setText(QApplication::translate("Admin", "T\303\254m", 0));
        QTableWidgetItem *___qtablewidgetitem5 = usersTable->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("Admin", "M\303\243 s\341\273\221", 0));
        QTableWidgetItem *___qtablewidgetitem6 = usersTable->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("Admin", "T\303\240i kho\341\272\243n", 0));
        QTableWidgetItem *___qtablewidgetitem7 = usersTable->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("Admin", "H\341\273\215 v\303\240 t\303\252n", 0));
        QTableWidgetItem *___qtablewidgetitem8 = usersTable->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("Admin", "T\303\254nh tr\341\272\241ng", 0));
        label_22->setText(QApplication::translate("Admin", "H\341\273\215 v\303\240 t\303\252n:", 0));
        label_23->setText(QApplication::translate("Admin", "Gi\341\273\233i t\303\255nh:", 0));
        label_24->setText(QApplication::translate("Admin", "Ng\303\240y sinh:", 0));
        label_40->setText(QApplication::translate("Admin", "Email:", 0));
        label_41->setText(QApplication::translate("Admin", "Ng\303\240y tham gia:", 0));
        label_42->setText(QApplication::translate("Admin", "\304\220\341\273\213a ch\341\273\211:", 0));
        label_43->setText(QApplication::translate("Admin", "T\303\254nh tr\341\272\241ng:", 0));
        pushButton_4->setText(QApplication::translate("Admin", "\304\220\341\273\225i m\341\272\255t kh\341\272\251u", 0));
        pushButton_2->setText(QApplication::translate("Admin", "S\341\273\255a", 0));
        admin->setTabText(admin->indexOf(users), QApplication::translate("Admin", "Qu\341\272\243n l\303\275 \304\221\341\273\231c gi\341\272\243", 0));
        QTableWidgetItem *___qtablewidgetitem9 = CartInfos->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("Admin", "M\303\243 phi\341\272\277u", 0));
        QTableWidgetItem *___qtablewidgetitem10 = CartInfos->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("Admin", "M\303\243 s\303\241ch", 0));
        QTableWidgetItem *___qtablewidgetitem11 = CartInfos->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("Admin", "M\303\243 ng\306\260\341\273\235i d\303\271ng", 0));
        QTableWidgetItem *___qtablewidgetitem12 = CartInfos->horizontalHeaderItem(4);
        ___qtablewidgetitem12->setText(QApplication::translate("Admin", "Th\341\273\235i h\341\272\241n", 0));
        newCart->setText(QApplication::translate("Admin", "Phi\341\272\277u m\306\260\341\273\243n m\341\273\233i", 0));
        doneCart->setText(QApplication::translate("Admin", "Phi\341\272\277u \304\221\303\243 tr\341\272\243 \304\221\303\272ng h\341\272\241n", 0));
        acceptedCart->setText(QApplication::translate("Admin", "Phi\341\272\277u \304\221\303\243 ch\341\272\245p nh\341\272\255n", 0));
        infringeCart->setText(QApplication::translate("Admin", "Phi\341\272\277u vi ph\341\272\241m", 0));
        lendingCart->setText(QApplication::translate("Admin", "Phi\341\272\277u \304\221ang cho m\306\260\341\273\243n", 0));
        label->setText(QApplication::translate("Admin", "Th\303\264ng tin chi ti\341\272\277t", 0));
        label_2->setText(QApplication::translate("Admin", "T\341\273\261a s\303\241ch:", 0));
        bookName->setText(QString());
        label_5->setText(QApplication::translate("Admin", "S\341\273\221 l\306\260\341\273\243ng t\341\273\223n kho:", 0));
        capacity->setText(QString());
        label_3->setText(QApplication::translate("Admin", "T\303\252n ng\306\260\341\273\235i m\306\260\341\273\243n:", 0));
        readerName->setText(QString());
        label_6->setText(QApplication::translate("Admin", "X\303\241c nh\341\272\255n l\341\272\247n cu\341\273\221i b\341\273\237i", 0));
        recipient->setText(QString());
        label_4->setText(QApplication::translate("Admin", "T\303\254nh tr\341\272\241ng:", 0));
        status->setText(QString());
        accept->setText(QApplication::translate("Admin", "Ch\341\272\245p nh\341\272\255n", 0));
        done->setText(QApplication::translate("Admin", "\304\220\303\243 tr\341\272\243 \304\221\303\272ng h\341\272\241n", 0));
        send->setText(QApplication::translate("Admin", "Cho m\306\260\341\273\243n", 0));
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
