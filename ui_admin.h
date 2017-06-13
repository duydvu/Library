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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QWidget *centralwidget;
    QTabWidget *admin;
    QWidget *main;
    QWidget *staffs;
    QWidget *customize;
    QPushButton *changeInfo;
    QPushButton *remove;
    QPushButton *changePass;
    QGroupBox *search;
    QLineEdit *name;
    QLineEdit *id;
    QLabel *name_2;
    QLabel *id_2;
    QGroupBox *staffInfo;
    QLabel *staffID;
    QLabel *staffName;
    QLabel *startDate;
    QLabel *payDate;
    QLabel *label_7;
    QTableWidget *tableWidget;
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
    QWidget *NewRegistrations;
    QTableWidget *registrationTable;
    QPushButton *Agree;
    QPushButton *Deny;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName(QStringLiteral("Admin"));
        Admin->resize(800, 600);
        centralwidget = new QWidget(Admin);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        admin = new QTabWidget(centralwidget);
        admin->setObjectName(QStringLiteral("admin"));
        admin->setGeometry(QRect(0, 0, 801, 591));
        main = new QWidget();
        main->setObjectName(QStringLiteral("main"));
        admin->addTab(main, QString());
        staffs = new QWidget();
        staffs->setObjectName(QStringLiteral("staffs"));
        customize = new QWidget(staffs);
        customize->setObjectName(QStringLiteral("customize"));
        customize->setGeometry(QRect(10, 10, 461, 61));
        changeInfo = new QPushButton(customize);
        changeInfo->setObjectName(QStringLiteral("changeInfo"));
        changeInfo->setGeometry(QRect(20, 20, 75, 23));
        remove = new QPushButton(customize);
        remove->setObjectName(QStringLiteral("remove"));
        remove->setGeometry(QRect(240, 20, 75, 23));
        changePass = new QPushButton(customize);
        changePass->setObjectName(QStringLiteral("changePass"));
        changePass->setGeometry(QRect(350, 20, 75, 23));
        search = new QGroupBox(staffs);
        search->setObjectName(QStringLiteral("search"));
        search->setGeometry(QRect(480, 10, 311, 181));
        name = new QLineEdit(search);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(20, 60, 271, 31));
        id = new QLineEdit(search);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(20, 130, 271, 31));
        name_2 = new QLabel(search);
        name_2->setObjectName(QStringLiteral("name_2"));
        name_2->setGeometry(QRect(20, 30, 47, 13));
        id_2 = new QLabel(search);
        id_2->setObjectName(QStringLiteral("id_2"));
        id_2->setGeometry(QRect(20, 100, 47, 13));
        staffInfo = new QGroupBox(staffs);
        staffInfo->setObjectName(QStringLiteral("staffInfo"));
        staffInfo->setGeometry(QRect(480, 200, 311, 341));
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
        tableWidget = new QTableWidget(staffs);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 80, 461, 461));
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
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        usersTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        usersTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        usersTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        usersTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        usersTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        usersTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        usersTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        usersTable->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        usersTable->setHorizontalHeaderItem(8, __qtablewidgetitem8);
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
        admin->addTab(lent, QString());
        NewRegistrations = new QWidget();
        NewRegistrations->setObjectName(QStringLiteral("NewRegistrations"));
        registrationTable = new QTableWidget(NewRegistrations);
        if (registrationTable->columnCount() < 5)
            registrationTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(4, __qtablewidgetitem13);
        registrationTable->setObjectName(QStringLiteral("registrationTable"));
        registrationTable->setGeometry(QRect(10, 120, 781, 441));
        registrationTable->horizontalHeader()->setStretchLastSection(true);
        registrationTable->verticalHeader()->setVisible(false);
        Agree = new QPushButton(NewRegistrations);
        Agree->setObjectName(QStringLiteral("Agree"));
        Agree->setGeometry(QRect(50, 20, 75, 23));
        Deny = new QPushButton(NewRegistrations);
        Deny->setObjectName(QStringLiteral("Deny"));
        Deny->setGeometry(QRect(50, 70, 75, 23));
        admin->addTab(NewRegistrations, QString());
        Admin->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Admin);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Admin->setStatusBar(statusbar);

        retranslateUi(Admin);
        QObject::connect(searchUsers, SIGNAL(textChanged(QString)), searchButton, SLOT(click()));

        admin->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QMainWindow *Admin)
    {
        Admin->setWindowTitle(QApplication::translate("Admin", "MainWindow", 0));
        admin->setTabText(admin->indexOf(main), QApplication::translate("Admin", "Trang ch\341\273\247", 0));
        changeInfo->setText(QApplication::translate("Admin", "S\341\273\255a th\303\264ng tin", 0));
        remove->setText(QApplication::translate("Admin", "X\303\263a", 0));
        changePass->setText(QApplication::translate("Admin", "\304\220\341\273\225i m\341\272\255t kh\341\272\251u", 0));
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
        QTableWidgetItem *___qtablewidgetitem = usersTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Admin", "M\303\243 s\341\273\221", 0));
        QTableWidgetItem *___qtablewidgetitem1 = usersTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Admin", "T\303\240i kho\341\272\243n", 0));
        QTableWidgetItem *___qtablewidgetitem2 = usersTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Admin", "H\341\273\215 v\303\240 t\303\252n", 0));
        QTableWidgetItem *___qtablewidgetitem3 = usersTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Admin", "\304\220\341\273\213a ch\341\273\211", 0));
        QTableWidgetItem *___qtablewidgetitem4 = usersTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Admin", "Ng\303\240y sinh", 0));
        QTableWidgetItem *___qtablewidgetitem5 = usersTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Admin", "Email", 0));
        QTableWidgetItem *___qtablewidgetitem6 = usersTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("Admin", "Gi\341\273\233i t\303\255nh", 0));
        QTableWidgetItem *___qtablewidgetitem7 = usersTable->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("Admin", "Ng\303\240y tham gia", 0));
        QTableWidgetItem *___qtablewidgetitem8 = usersTable->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("Admin", "T\303\254nh tr\341\272\241ng", 0));
        admin->setTabText(admin->indexOf(users), QApplication::translate("Admin", "Qu\341\272\243n l\303\275 ng\306\260\341\273\235i d\303\271ng", 0));
        admin->setTabText(admin->indexOf(lent), QApplication::translate("Admin", "Qu\341\272\243n l\303\275 m\306\260\341\273\243n tr\341\272\243", 0));
        QTableWidgetItem *___qtablewidgetitem9 = registrationTable->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("Admin", "T\303\240i kho\341\272\243n", 0));
        QTableWidgetItem *___qtablewidgetitem10 = registrationTable->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("Admin", "Vai tr\303\262", 0));
        QTableWidgetItem *___qtablewidgetitem11 = registrationTable->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("Admin", "H\341\273\215 v\303\240 t\303\252n", 0));
        QTableWidgetItem *___qtablewidgetitem12 = registrationTable->horizontalHeaderItem(4);
        ___qtablewidgetitem12->setText(QApplication::translate("Admin", "Ng\303\240y \304\221\304\203ng k\303\275", 0));
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
