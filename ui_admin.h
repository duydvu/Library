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
    QTableView *staff;
    QWidget *customize;
    QPushButton *changeInfo;
    QPushButton *add;
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
    QWidget *books;
    QWidget *widget;
    QWidget *users;
    QWidget *widget_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLineEdit *searchUsers;
    QPushButton *searchButton;
    QTableWidget *usersTable;
    QWidget *lent;
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
        staff = new QTableView(staffs);
        staff->setObjectName(QStringLiteral("staff"));
        staff->setGeometry(QRect(10, 100, 461, 441));
        customize = new QWidget(staffs);
        customize->setObjectName(QStringLiteral("customize"));
        customize->setGeometry(QRect(10, 10, 461, 61));
        changeInfo = new QPushButton(customize);
        changeInfo->setObjectName(QStringLiteral("changeInfo"));
        changeInfo->setGeometry(QRect(20, 20, 75, 23));
        add = new QPushButton(customize);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(130, 20, 75, 23));
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
        admin->addTab(staffs, QString());
        books = new QWidget();
        books->setObjectName(QStringLiteral("books"));
        widget = new QWidget(books);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 20, 511, 51));
        admin->addTab(books, QString());
        users = new QWidget();
        users->setObjectName(QStringLiteral("users"));
        widget_2 = new QWidget(users);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(10, 10, 771, 61));
        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 20, 75, 23));
        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 20, 75, 23));
        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(200, 20, 75, 23));
        pushButton_4 = new QPushButton(widget_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(290, 20, 75, 23));
        searchUsers = new QLineEdit(widget_2);
        searchUsers->setObjectName(QStringLiteral("searchUsers"));
        searchUsers->setGeometry(QRect(400, 20, 231, 31));
        searchButton = new QPushButton(widget_2);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(640, 20, 75, 23));
        usersTable = new QTableWidget(users);
        if (usersTable->columnCount() < 7)
            usersTable->setColumnCount(7);
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
        add->setText(QApplication::translate("Admin", "Th\303\252m", 0));
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
        admin->setTabText(admin->indexOf(books), QApplication::translate("Admin", "Qu\341\272\243n l\303\275 s\303\241ch", 0));
        pushButton->setText(QApplication::translate("Admin", "Th\303\252m", 0));
        pushButton_2->setText(QApplication::translate("Admin", "S\341\273\255a", 0));
        pushButton_3->setText(QApplication::translate("Admin", "X\303\263a", 0));
        pushButton_4->setText(QApplication::translate("Admin", "\304\220\341\273\225i m\341\272\255t kh\341\272\251u", 0));
        searchUsers->setPlaceholderText(QApplication::translate("Admin", "T\303\254m ki\341\272\277m", 0));
        searchButton->setText(QApplication::translate("Admin", "T\303\254m", 0));
        QTableWidgetItem *___qtablewidgetitem = usersTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Admin", "M\303\243 s\341\273\221", 0));
        QTableWidgetItem *___qtablewidgetitem1 = usersTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Admin", "H\341\273\215 v\303\240 t\303\252n", 0));
        QTableWidgetItem *___qtablewidgetitem2 = usersTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Admin", "\304\220\341\273\213a ch\341\273\211", 0));
        QTableWidgetItem *___qtablewidgetitem3 = usersTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Admin", "Ng\303\240y sinh", 0));
        QTableWidgetItem *___qtablewidgetitem4 = usersTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Admin", "Email", 0));
        QTableWidgetItem *___qtablewidgetitem5 = usersTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Admin", "Gi\341\273\233i t\303\255nh", 0));
        QTableWidgetItem *___qtablewidgetitem6 = usersTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("Admin", "Ng\303\240y tham gia", 0));
        admin->setTabText(admin->indexOf(users), QApplication::translate("Admin", "Qu\341\272\243n l\303\275 ng\306\260\341\273\235i d\303\271ng", 0));
        admin->setTabText(admin->indexOf(lent), QApplication::translate("Admin", "Qu\341\272\243n l\303\275 m\306\260\341\273\243n tr\341\272\243", 0));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
