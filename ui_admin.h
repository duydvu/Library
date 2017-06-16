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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
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
    QLabel *staffID;
    QLabel *staffName;
    QLabel *startDate;
    QLabel *payDate;
    QLabel *label_7;
    QWidget *books;
    QWidget *widget;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QTableView *tableView;
    QWidget *users;
    QWidget *widget_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLineEdit *searchUsers;
    QPushButton *searchButton;
    QTableWidget *usersTable;
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
    QTableWidget *registrationTable;
    QPushButton *Agree;
    QPushButton *Deny;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName(QStringLiteral("Admin"));
        Admin->resize(914, 618);
        centralwidget = new QWidget(Admin);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
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
        staffID = new QLabel(staffInfo);
        staffID->setObjectName(QStringLiteral("staffID"));
        staffID->setGeometry(QRect(20, 20, 81, 21));
        staffName = new QLabel(staffInfo);
        staffName->setObjectName(QStringLiteral("staffName"));
        staffName->setGeometry(QRect(20, 50, 81, 21));
        startDate = new QLabel(staffInfo);
        startDate->setObjectName(QStringLiteral("startDate"));
        startDate->setGeometry(QRect(20, 80, 101, 21));
        payDate = new QLabel(staffInfo);
        payDate->setObjectName(QStringLiteral("payDate"));
        payDate->setGeometry(QRect(20, 110, 171, 21));
        label_7 = new QLabel(staffInfo);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 140, 47, 16));

        verticalLayout_2->addWidget(staffInfo);

        verticalLayout_2->setStretch(0, 2);
        verticalLayout_2->setStretch(1, 3);

        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 2);
        admin->addTab(staffs, QString());
        books = new QWidget();
        books->setObjectName(QStringLiteral("books"));
        widget = new QWidget(books);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 20, 511, 51));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 75, 23));
        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(110, 10, 75, 23));
        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(210, 10, 75, 23));
        tableView = new QTableView(books);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 80, 256, 192));
        admin->addTab(books, QString());
        users = new QWidget();
        users->setObjectName(QStringLiteral("users"));
        widget_2 = new QWidget(users);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(10, 10, 771, 61));
        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 20, 75, 23));
        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(140, 20, 75, 23));
        pushButton_4 = new QPushButton(widget_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(230, 20, 75, 23));
        searchUsers = new QLineEdit(widget_2);
        searchUsers->setObjectName(QStringLiteral("searchUsers"));
        searchUsers->setGeometry(QRect(330, 20, 301, 31));
        searchButton = new QPushButton(widget_2);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(640, 20, 75, 23));
        usersTable = new QTableWidget(users);
        if (usersTable->columnCount() < 9)
            usersTable->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        usersTable->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        usersTable->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        usersTable->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        usersTable->setHorizontalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        usersTable->setHorizontalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        usersTable->setHorizontalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        usersTable->setHorizontalHeaderItem(6, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        usersTable->setHorizontalHeaderItem(7, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        usersTable->setHorizontalHeaderItem(8, __qtablewidgetitem11);
        usersTable->setObjectName(QStringLiteral("usersTable"));
        usersTable->setGeometry(QRect(10, 81, 771, 481));
        usersTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        usersTable->setSortingEnabled(true);
        usersTable->horizontalHeader()->setStretchLastSection(true);
        usersTable->verticalHeader()->setVisible(false);
        usersTable->verticalHeader()->setCascadingSectionResizes(false);
        usersTable->verticalHeader()->setStretchLastSection(false);
        admin->addTab(users, QString());
        lent = new QWidget();
        lent->setObjectName(QStringLiteral("lent"));
        gridLayout_2 = new QGridLayout(lent);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        CartInfos = new QTableWidget(lent);
        if (CartInfos->columnCount() < 5)
            CartInfos->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        CartInfos->setHorizontalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        CartInfos->setHorizontalHeaderItem(1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        CartInfos->setHorizontalHeaderItem(2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        CartInfos->setHorizontalHeaderItem(3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        CartInfos->setHorizontalHeaderItem(4, __qtablewidgetitem16);
        CartInfos->setObjectName(QStringLiteral("CartInfos"));
        CartInfos->setStyleSheet(QStringLiteral("text-align:center;"));
        CartInfos->setEditTriggers(QAbstractItemView::NoEditTriggers);
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
        registrationTable = new QTableWidget(NewRegistrations);
        if (registrationTable->columnCount() < 5)
            registrationTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(2, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(3, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(4, __qtablewidgetitem21);
        registrationTable->setObjectName(QStringLiteral("registrationTable"));
        registrationTable->setGeometry(QRect(10, 120, 551, 441));
        registrationTable->horizontalHeader()->setStretchLastSection(true);
        registrationTable->verticalHeader()->setVisible(false);
        Agree = new QPushButton(NewRegistrations);
        Agree->setObjectName(QStringLiteral("Agree"));
        Agree->setGeometry(QRect(190, 60, 75, 23));
        Deny = new QPushButton(NewRegistrations);
        Deny->setObjectName(QStringLiteral("Deny"));
        Deny->setGeometry(QRect(50, 70, 75, 23));
        admin->addTab(NewRegistrations, QString());

        gridLayout->addWidget(admin, 0, 0, 1, 1);

        Admin->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Admin);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Admin->setStatusBar(statusbar);

        retranslateUi(Admin);
        QObject::connect(searchUsers, SIGNAL(textChanged(QString)), searchButton, SLOT(click()));

        admin->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QMainWindow *Admin)
    {
        Admin->setWindowTitle(QApplication::translate("Admin", "MainWindow", 0));
        changeInfo->setText(QApplication::translate("Admin", "S\341\273\255a th\303\264ng tin", 0));
        remove->setText(QApplication::translate("Admin", "X\303\263a", 0));
        changePass->setText(QApplication::translate("Admin", "\304\220\341\273\225i m\341\272\255t kh\341\272\251u", 0));
        QTableWidgetItem *___qtablewidgetitem = staffTable->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QApplication::translate("Admin", "M\303\243 nh\303\242n vi\303\252n", 0));
        QTableWidgetItem *___qtablewidgetitem1 = staffTable->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("Admin", "H\341\273\215 v\303\240 t\303\252n", 0));
        search->setTitle(QApplication::translate("Admin", "T\303\254m ki\341\272\277m", 0));
        name_2->setText(QApplication::translate("Admin", "Theo t\303\252n: ", 0));
        id_2->setText(QApplication::translate("Admin", "Theo m\303\243", 0));
        staffInfo->setTitle(QApplication::translate("Admin", "Th\303\264ng tin nh\303\242n vi\303\252n", 0));
        staffID->setText(QApplication::translate("Admin", "M\303\243 nh\303\242n vi\303\252n:", 0));
        staffName->setText(QApplication::translate("Admin", "T\303\252n nh\303\242n vi\303\252n:", 0));
        startDate->setText(QApplication::translate("Admin", "B\341\272\257t \304\221\341\272\247u l\303\240m vi\341\273\207c t\341\273\253:", 0));
        payDate->setText(QApplication::translate("Admin", "C\303\262n XX ng\303\240y n\341\273\257a \304\221\306\260\341\273\243c l\304\251nh l\306\260\306\241ng", 0));
        label_7->setText(QApplication::translate("Admin", "Ca tr\341\273\261c:", 0));
        admin->setTabText(admin->indexOf(staffs), QApplication::translate("Admin", "Qu\341\272\243n l\303\275 nh\303\242n vi\303\252n", 0));
        pushButton->setText(QApplication::translate("Admin", "Th\303\252m", 0));
        pushButton_5->setText(QApplication::translate("Admin", "S\341\273\255a", 0));
        pushButton_6->setText(QApplication::translate("Admin", "X\303\263a", 0));
        admin->setTabText(admin->indexOf(books), QApplication::translate("Admin", "Qu\341\272\243n l\303\275 s\303\241ch", 0));
        pushButton_2->setText(QApplication::translate("Admin", "S\341\273\255a", 0));
        pushButton_3->setText(QApplication::translate("Admin", "X\303\263a", 0));
        pushButton_4->setText(QApplication::translate("Admin", "\304\220\341\273\225i m\341\272\255t kh\341\272\251u", 0));
        searchUsers->setPlaceholderText(QApplication::translate("Admin", "T\303\254m ki\341\272\277m", 0));
        searchButton->setText(QApplication::translate("Admin", "T\303\254m", 0));
        QTableWidgetItem *___qtablewidgetitem2 = usersTable->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("Admin", "M\303\243 s\341\273\221", 0));
        QTableWidgetItem *___qtablewidgetitem3 = usersTable->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("Admin", "T\303\240i kho\341\272\243n", 0));
        QTableWidgetItem *___qtablewidgetitem4 = usersTable->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("Admin", "H\341\273\215 v\303\240 t\303\252n", 0));
        QTableWidgetItem *___qtablewidgetitem5 = usersTable->horizontalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("Admin", "\304\220\341\273\213a ch\341\273\211", 0));
        QTableWidgetItem *___qtablewidgetitem6 = usersTable->horizontalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("Admin", "Ng\303\240y sinh", 0));
        QTableWidgetItem *___qtablewidgetitem7 = usersTable->horizontalHeaderItem(5);
        ___qtablewidgetitem7->setText(QApplication::translate("Admin", "Email", 0));
        QTableWidgetItem *___qtablewidgetitem8 = usersTable->horizontalHeaderItem(6);
        ___qtablewidgetitem8->setText(QApplication::translate("Admin", "Gi\341\273\233i t\303\255nh", 0));
        QTableWidgetItem *___qtablewidgetitem9 = usersTable->horizontalHeaderItem(7);
        ___qtablewidgetitem9->setText(QApplication::translate("Admin", "Ng\303\240y tham gia", 0));
        QTableWidgetItem *___qtablewidgetitem10 = usersTable->horizontalHeaderItem(8);
        ___qtablewidgetitem10->setText(QApplication::translate("Admin", "T\303\254nh tr\341\272\241ng", 0));
        admin->setTabText(admin->indexOf(users), QApplication::translate("Admin", "Qu\341\272\243n l\303\275 ng\306\260\341\273\235i d\303\271ng", 0));
        QTableWidgetItem *___qtablewidgetitem11 = CartInfos->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("Admin", "M\303\243 phi\341\272\277u", 0));
        QTableWidgetItem *___qtablewidgetitem12 = CartInfos->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QApplication::translate("Admin", "M\303\243 s\303\241ch", 0));
        QTableWidgetItem *___qtablewidgetitem13 = CartInfos->horizontalHeaderItem(3);
        ___qtablewidgetitem13->setText(QApplication::translate("Admin", "M\303\243 ng\306\260\341\273\235i d\303\271ng", 0));
        QTableWidgetItem *___qtablewidgetitem14 = CartInfos->horizontalHeaderItem(4);
        ___qtablewidgetitem14->setText(QApplication::translate("Admin", "Th\341\273\235i h\341\272\241n", 0));
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
        QTableWidgetItem *___qtablewidgetitem15 = registrationTable->horizontalHeaderItem(1);
        ___qtablewidgetitem15->setText(QApplication::translate("Admin", "T\303\240i kho\341\272\243n", 0));
        QTableWidgetItem *___qtablewidgetitem16 = registrationTable->horizontalHeaderItem(2);
        ___qtablewidgetitem16->setText(QApplication::translate("Admin", "Vai tr\303\262", 0));
        QTableWidgetItem *___qtablewidgetitem17 = registrationTable->horizontalHeaderItem(3);
        ___qtablewidgetitem17->setText(QApplication::translate("Admin", "H\341\273\215 v\303\240 t\303\252n", 0));
        QTableWidgetItem *___qtablewidgetitem18 = registrationTable->horizontalHeaderItem(4);
        ___qtablewidgetitem18->setText(QApplication::translate("Admin", "Ng\303\240y \304\221\304\203ng k\303\275", 0));
        Agree->setText(QApplication::translate("Admin", "Ch\341\272\245p nh\341\272\255n", 0));
        Deny->setText(QApplication::translate("Admin", "T\341\273\253 ch\341\273\221i", 0));
        admin->setTabText(admin->indexOf(NewRegistrations), QApplication::translate("Admin", "Qu\341\272\243n l\303\275 \304\221\304\203ng k\303\275 m\341\273\233i", 0));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
