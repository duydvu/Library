/********************************************************************************
** Form generated from reading UI file 'librarian.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARIAN_H
#define UI_LIBRARIAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_librarian
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTabWidget *fyfu11212;
    QWidget *tab;
    QGroupBox *groupBox_4;
    QTextBrowser *textBrowser_8;
    QGroupBox *groupBox_5;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QGroupBox *groupBox_6;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QWidget *tab_4;
    QGroupBox *groupBox;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QTableWidget *tableWidget;
    QTextBrowser *textBrowser_7;
    QWidget *tab_5;
    QTextBrowser *textBrowser_4;
    QLabel *label_27;
    QTableWidget *tableWidget_2;
    QGroupBox *groupBox_7;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QWidget *tab_6;
    QGroupBox *groupBox_2;
    QToolButton *toolButton_5;
    QToolButton *toolButton_6;
    QToolButton *toolButton_7;
    QTableWidget *tableWidget_3;
    QWidget *tab_3;
    QGroupBox *groupBox_3;
    QToolButton *toolButton_9;
    QToolButton *toolButton_10;
    QGroupBox *groupBox_8;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QTableWidget *tableWidget_4;
    QTextBrowser *textBrowser_6;
    QWidget *tabsecond;
    QFrame *frame_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *bookName;
    QLabel *label_3;
    QLabel *readerName;
    QLabel *label_4;
    QLabel *status;
    QLabel *label_5;
    QLabel *recipient;
    QLabel *label_6;
    QLabel *capacity;
    QFrame *frame;
    QPushButton *accept;
    QPushButton *send;
    QPushButton *done;
    QPushButton *infringe;
    QFrame *frame_2;
    QRadioButton *newCart;
    QRadioButton *lendingCart;
    QRadioButton *doneCart;
    QRadioButton *infringeCart;
    QRadioButton *acceptedCart;
    QTableWidget *CartInfos;
    QWidget *newRegistration;
    QPushButton *Deny;
    QTableWidget *registrationTable;
    QPushButton *Agree;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *librarian)
    {
        if (librarian->objectName().isEmpty())
            librarian->setObjectName(QStringLiteral("librarian"));
        librarian->resize(908, 623);
        centralwidget = new QWidget(librarian);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 891, 591));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        fyfu11212 = new QTabWidget(gridLayoutWidget);
        fyfu11212->setObjectName(QStringLiteral("fyfu11212"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(30, 20, 451, 321));
        textBrowser_8 = new QTextBrowser(groupBox_4);
        textBrowser_8->setObjectName(QStringLiteral("textBrowser_8"));
        textBrowser_8->setGeometry(QRect(10, 40, 431, 271));
        groupBox_5 = new QGroupBox(tab);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(490, 30, 231, 161));
        label_16 = new QLabel(groupBox_5);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 20, 55, 16));
        label_17 = new QLabel(groupBox_5);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 40, 55, 16));
        label_18 = new QLabel(groupBox_5);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 60, 55, 16));
        label_19 = new QLabel(groupBox_5);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 80, 55, 16));
        label_20 = new QLabel(groupBox_5);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(10, 100, 55, 16));
        label_21 = new QLabel(groupBox_5);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(10, 120, 55, 16));
        groupBox_6 = new QGroupBox(tab);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(490, 200, 231, 161));
        label_22 = new QLabel(groupBox_6);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(10, 30, 55, 16));
        label_23 = new QLabel(groupBox_6);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(10, 50, 55, 16));
        label_24 = new QLabel(groupBox_6);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(10, 70, 55, 16));
        label_25 = new QLabel(groupBox_6);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(10, 90, 55, 16));
        label_26 = new QLabel(groupBox_6);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(10, 110, 55, 16));
        fyfu11212->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        groupBox = new QGroupBox(tab_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 30, 451, 71));
        toolButton_2 = new QToolButton(groupBox);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setGeometry(QRect(10, 10, 121, 22));
        toolButton_3 = new QToolButton(groupBox);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setGeometry(QRect(180, 10, 121, 22));
        toolButton_4 = new QToolButton(groupBox);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        toolButton_4->setGeometry(QRect(350, 10, 101, 22));
        tableWidget = new QTableWidget(tab_4);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidget->rowCount() < 8)
            tableWidget->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem12);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(30, 130, 371, 192));
        textBrowser_7 = new QTextBrowser(tab_4);
        textBrowser_7->setObjectName(QStringLiteral("textBrowser_7"));
        textBrowser_7->setGeometry(QRect(460, 130, 256, 192));
        fyfu11212->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        textBrowser_4 = new QTextBrowser(tab_5);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(470, 90, 256, 192));
        label_27 = new QLabel(tab_5);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(480, 60, 131, 16));
        tableWidget_2 = new QTableWidget(tab_5);
        if (tableWidget_2->columnCount() < 6)
            tableWidget_2->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem18);
        if (tableWidget_2->rowCount() < 1)
            tableWidget_2->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem19);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(15, 20, 431, 71));
        groupBox_7 = new QGroupBox(tab_5);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(20, 110, 431, 241));
        label_28 = new QLabel(groupBox_7);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(124, 30, 161, 20));
        label_29 = new QLabel(groupBox_7);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(30, 70, 151, 16));
        label_30 = new QLabel(groupBox_7);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(30, 100, 55, 16));
        label_31 = new QLabel(groupBox_7);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(30, 130, 55, 16));
        label_32 = new QLabel(groupBox_7);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(30, 160, 111, 16));
        fyfu11212->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        groupBox_2 = new QGroupBox(tab_6);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(50, 10, 451, 71));
        toolButton_5 = new QToolButton(groupBox_2);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        toolButton_5->setGeometry(QRect(10, 10, 121, 22));
        toolButton_6 = new QToolButton(groupBox_2);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));
        toolButton_6->setGeometry(QRect(180, 10, 121, 22));
        toolButton_7 = new QToolButton(groupBox_2);
        toolButton_7->setObjectName(QStringLiteral("toolButton_7"));
        toolButton_7->setGeometry(QRect(350, 10, 101, 22));
        tableWidget_3 = new QTableWidget(tab_6);
        if (tableWidget_3->columnCount() < 8)
            tableWidget_3->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(3, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(4, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(5, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(6, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(7, __qtablewidgetitem27);
        if (tableWidget_3->rowCount() < 8)
            tableWidget_3->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(0, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(1, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(2, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(3, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(4, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(5, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(6, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(7, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget_3->setItem(0, 2, __qtablewidgetitem36);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(50, 70, 671, 281));
        fyfu11212->addTab(tab_6, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        groupBox_3 = new QGroupBox(tab_3);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 10, 751, 51));
        toolButton_9 = new QToolButton(groupBox_3);
        toolButton_9->setObjectName(QStringLiteral("toolButton_9"));
        toolButton_9->setGeometry(QRect(20, 10, 121, 22));
        toolButton_10 = new QToolButton(groupBox_3);
        toolButton_10->setObjectName(QStringLiteral("toolButton_10"));
        toolButton_10->setGeometry(QRect(160, 10, 121, 22));
        groupBox_8 = new QGroupBox(tab_3);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 80, 161, 181));
        lineEdit = new QLineEdit(groupBox_8);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(12, 30, 131, 22));
        pushButton_2 = new QPushButton(groupBox_8);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(22, 60, 111, 28));
        tableWidget_4 = new QTableWidget(tab_3);
        if (tableWidget_4->columnCount() < 8)
            tableWidget_4->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(0, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(1, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(2, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(3, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(4, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(5, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(6, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(7, __qtablewidgetitem44);
        tableWidget_4->setObjectName(QStringLiteral("tableWidget_4"));
        tableWidget_4->setGeometry(QRect(180, 80, 581, 261));
        textBrowser_6 = new QTextBrowser(tab_3);
        textBrowser_6->setObjectName(QStringLiteral("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(10, 480, 461, 41));
        fyfu11212->addTab(tab_3, QString());
        tabsecond = new QWidget();
        tabsecond->setObjectName(QStringLiteral("tabsecond"));
        frame_3 = new QFrame(tabsecond);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(10, 140, 261, 411));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 20, 91, 31));
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 51, 16));
        bookName = new QLabel(frame_3);
        bookName->setObjectName(QStringLiteral("bookName"));
        bookName->setGeometry(QRect(30, 90, 191, 21));
        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 150, 91, 16));
        readerName = new QLabel(frame_3);
        readerName->setObjectName(QStringLiteral("readerName"));
        readerName->setGeometry(QRect(30, 180, 191, 21));
        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 280, 71, 21));
        status = new QLabel(frame_3);
        status->setObjectName(QStringLiteral("status"));
        status->setGeometry(QRect(30, 310, 131, 21));
        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 120, 91, 16));
        recipient = new QLabel(frame_3);
        recipient->setObjectName(QStringLiteral("recipient"));
        recipient->setGeometry(QRect(30, 240, 131, 21));
        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 210, 121, 21));
        capacity = new QLabel(frame_3);
        capacity->setObjectName(QStringLiteral("capacity"));
        capacity->setGeometry(QRect(110, 120, 61, 21));
        frame = new QFrame(tabsecond);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(370, 10, 491, 121));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        accept = new QPushButton(frame);
        accept->setObjectName(QStringLiteral("accept"));
        accept->setGeometry(QRect(40, 20, 111, 31));
        send = new QPushButton(frame);
        send->setObjectName(QStringLiteral("send"));
        send->setGeometry(QRect(40, 70, 111, 31));
        done = new QPushButton(frame);
        done->setObjectName(QStringLiteral("done"));
        done->setGeometry(QRect(260, 20, 101, 31));
        infringe = new QPushButton(frame);
        infringe->setObjectName(QStringLiteral("infringe"));
        infringe->setGeometry(QRect(260, 70, 101, 31));
        frame_2 = new QFrame(tabsecond);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 10, 351, 121));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        newCart = new QRadioButton(frame_2);
        newCart->setObjectName(QStringLiteral("newCart"));
        newCart->setGeometry(QRect(20, 20, 101, 17));
        newCart->setChecked(true);
        lendingCart = new QRadioButton(frame_2);
        lendingCart->setObjectName(QStringLiteral("lendingCart"));
        lendingCart->setGeometry(QRect(20, 80, 131, 17));
        doneCart = new QRadioButton(frame_2);
        doneCart->setObjectName(QStringLiteral("doneCart"));
        doneCart->setGeometry(QRect(180, 20, 131, 17));
        doneCart->setChecked(false);
        infringeCart = new QRadioButton(frame_2);
        infringeCart->setObjectName(QStringLiteral("infringeCart"));
        infringeCart->setGeometry(QRect(180, 50, 101, 17));
        acceptedCart = new QRadioButton(frame_2);
        acceptedCart->setObjectName(QStringLiteral("acceptedCart"));
        acceptedCart->setGeometry(QRect(20, 50, 121, 17));
        CartInfos = new QTableWidget(tabsecond);
        if (CartInfos->columnCount() < 5)
            CartInfos->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        CartInfos->setHorizontalHeaderItem(0, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        CartInfos->setHorizontalHeaderItem(1, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        CartInfos->setHorizontalHeaderItem(2, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        CartInfos->setHorizontalHeaderItem(3, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        CartInfos->setHorizontalHeaderItem(4, __qtablewidgetitem49);
        CartInfos->setObjectName(QStringLiteral("CartInfos"));
        CartInfos->setGeometry(QRect(295, 141, 571, 411));
        CartInfos->setStyleSheet(QStringLiteral("text-align:center;"));
        CartInfos->setEditTriggers(QAbstractItemView::NoEditTriggers);
        CartInfos->horizontalHeader()->setCascadingSectionResizes(false);
        CartInfos->horizontalHeader()->setStretchLastSection(true);
        CartInfos->verticalHeader()->setVisible(false);
        fyfu11212->addTab(tabsecond, QString());
        newRegistration = new QWidget();
        newRegistration->setObjectName(QStringLiteral("newRegistration"));
        Deny = new QPushButton(newRegistration);
        Deny->setObjectName(QStringLiteral("Deny"));
        Deny->setGeometry(QRect(40, 60, 75, 23));
        registrationTable = new QTableWidget(newRegistration);
        if (registrationTable->columnCount() < 5)
            registrationTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(0, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(1, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(2, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(3, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(4, __qtablewidgetitem54);
        registrationTable->setObjectName(QStringLiteral("registrationTable"));
        registrationTable->setGeometry(QRect(0, 100, 781, 441));
        registrationTable->horizontalHeader()->setStretchLastSection(true);
        registrationTable->verticalHeader()->setVisible(false);
        Agree = new QPushButton(newRegistration);
        Agree->setObjectName(QStringLiteral("Agree"));
        Agree->setGeometry(QRect(40, 10, 75, 23));
        fyfu11212->addTab(newRegistration, QString());

        gridLayout->addWidget(fyfu11212, 0, 0, 1, 1);

        librarian->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(librarian);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        librarian->setStatusBar(statusbar);

        retranslateUi(librarian);

        fyfu11212->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(librarian);
    } // setupUi

    void retranslateUi(QMainWindow *librarian)
    {
        librarian->setWindowTitle(QApplication::translate("librarian", "MainWindow", 0));
        groupBox_4->setTitle(QApplication::translate("librarian", "B\341\272\243n tin", 0));
        groupBox_5->setTitle(QApplication::translate("librarian", "S\303\241ch m\341\273\233i", 0));
        label_16->setText(QApplication::translate("librarian", "1.", 0));
        label_17->setText(QApplication::translate("librarian", "2.", 0));
        label_18->setText(QApplication::translate("librarian", "3.", 0));
        label_19->setText(QApplication::translate("librarian", "4.", 0));
        label_20->setText(QApplication::translate("librarian", "5.", 0));
        label_21->setText(QApplication::translate("librarian", "6.", 0));
        groupBox_6->setTitle(QApplication::translate("librarian", "Y\303\252u th\303\255ch nh\341\272\245t", 0));
        label_22->setText(QApplication::translate("librarian", "1.", 0));
        label_23->setText(QApplication::translate("librarian", "2.", 0));
        label_24->setText(QApplication::translate("librarian", "3.", 0));
        label_25->setText(QApplication::translate("librarian", "4.", 0));
        label_26->setText(QApplication::translate("librarian", "5.", 0));
        fyfu11212->setTabText(fyfu11212->indexOf(tab), QApplication::translate("librarian", "Trang ch\341\273\247", 0));
        groupBox->setTitle(QString());
        toolButton_2->setText(QApplication::translate("librarian", "Th\303\252m", 0));
        toolButton_3->setText(QApplication::translate("librarian", "S\341\273\255a", 0));
        toolButton_4->setText(QApplication::translate("librarian", "X\303\263a", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("librarian", "M\303\243", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("librarian", "Chuy\303\252n m\341\273\245c", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("librarian", "Chuy\303\252n m\341\273\245c con", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("librarian", "Next", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("librarian", "1", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("librarian", "2", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("librarian", "3", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("librarian", "4", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem8->setText(QApplication::translate("librarian", "5", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem9->setText(QApplication::translate("librarian", "6", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem10->setText(QApplication::translate("librarian", "7", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem11->setText(QApplication::translate("librarian", "8", 0));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

        fyfu11212->setTabText(fyfu11212->indexOf(tab_4), QApplication::translate("librarian", "Th\306\260 vi\341\273\207n s\303\241ch", 0));
        label_27->setText(QApplication::translate("librarian", "Nh\341\272\257c nh\341\273\237 t\341\273\253 Admin", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QApplication::translate("librarian", "M\303\243", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QApplication::translate("librarian", "H\341\273\215 T\303\252n", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem14->setText(QApplication::translate("librarian", "Gi\341\273\233i t\303\255nh", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem15->setText(QApplication::translate("librarian", "Ng\303\240y sinh", 0));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem16->setText(QApplication::translate("librarian", "Email", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem17->setText(QApplication::translate("librarian", "S\304\220T", 0));
        groupBox_7->setTitle(QApplication::translate("librarian", "H\341\273\243p \304\221\341\273\223ng", 0));
        label_28->setText(QApplication::translate("librarian", "T\303\263m t\341\272\257t h\341\273\243p \304\221\341\273\223ng \304\221\303\243 k\303\275", 0));
        label_29->setText(QApplication::translate("librarian", "B\341\272\257t \304\221\341\272\247u l\303\240m vi\341\273\207c t\341\273\253", 0));
        label_30->setText(QApplication::translate("librarian", "Th\341\273\235i h\341\272\241n h\341\273\243p \304\221\341\273\223ng", 0));
        label_31->setText(QApplication::translate("librarian", "V\341\273\213 tr\303\255", 0));
        label_32->setText(QApplication::translate("librarian", "M\341\273\251c l\306\260\306\241ng", 0));
        fyfu11212->setTabText(fyfu11212->indexOf(tab_5), QApplication::translate("librarian", "Th\303\264ng tin c\303\241 nh\303\242n", 0));
        groupBox_2->setTitle(QString());
        toolButton_5->setText(QApplication::translate("librarian", "Th\303\252m", 0));
        toolButton_6->setText(QApplication::translate("librarian", "S\341\273\255a", 0));
        toolButton_7->setText(QApplication::translate("librarian", "X\303\263a", 0));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem18->setText(QApplication::translate("librarian", "M\303\243", 0));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem19->setText(QApplication::translate("librarian", "Chuy\303\252n m\341\273\245c", 0));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem20->setText(QApplication::translate("librarian", "Next", 0));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem21->setText(QApplication::translate("librarian", "Nh\303\240 xu\341\272\245t b\341\272\243n", 0));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_3->horizontalHeaderItem(4);
        ___qtablewidgetitem22->setText(QApplication::translate("librarian", "Ng\303\240y nh\341\272\255p", 0));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_3->horizontalHeaderItem(5);
        ___qtablewidgetitem23->setText(QApplication::translate("librarian", "T\341\273\225ng s\341\273\221", 0));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_3->horizontalHeaderItem(6);
        ___qtablewidgetitem24->setText(QApplication::translate("librarian", "\304\220\303\243 cho m\306\260\341\273\243n", 0));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget_3->horizontalHeaderItem(7);
        ___qtablewidgetitem25->setText(QApplication::translate("librarian", "Hi\341\273\207n c\303\262n", 0));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget_3->verticalHeaderItem(0);
        ___qtablewidgetitem26->setText(QApplication::translate("librarian", "1", 0));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget_3->verticalHeaderItem(1);
        ___qtablewidgetitem27->setText(QApplication::translate("librarian", "2", 0));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget_3->verticalHeaderItem(2);
        ___qtablewidgetitem28->setText(QApplication::translate("librarian", "3", 0));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget_3->verticalHeaderItem(3);
        ___qtablewidgetitem29->setText(QApplication::translate("librarian", "4", 0));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget_3->verticalHeaderItem(4);
        ___qtablewidgetitem30->setText(QApplication::translate("librarian", "5", 0));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget_3->verticalHeaderItem(5);
        ___qtablewidgetitem31->setText(QApplication::translate("librarian", "6", 0));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget_3->verticalHeaderItem(6);
        ___qtablewidgetitem32->setText(QApplication::translate("librarian", "7", 0));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget_3->verticalHeaderItem(7);
        ___qtablewidgetitem33->setText(QApplication::translate("librarian", "8", 0));

        const bool __sortingEnabled1 = tableWidget_3->isSortingEnabled();
        tableWidget_3->setSortingEnabled(false);
        tableWidget_3->setSortingEnabled(__sortingEnabled1);

        fyfu11212->setTabText(fyfu11212->indexOf(tab_6), QApplication::translate("librarian", "Qu\341\272\243n l\303\275 s\303\241ch", 0));
        groupBox_3->setTitle(QString());
        toolButton_9->setText(QApplication::translate("librarian", "S\341\273\255a", 0));
        toolButton_10->setText(QApplication::translate("librarian", "X\303\263a", 0));
        groupBox_8->setTitle(QApplication::translate("librarian", "T\303\254m ki\341\272\277m \304\221\341\273\231c gi\341\272\243", 0));
        pushButton_2->setText(QApplication::translate("librarian", "Search", 0));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget_4->horizontalHeaderItem(0);
        ___qtablewidgetitem34->setText(QApplication::translate("librarian", "M\303\243", 0));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget_4->horizontalHeaderItem(1);
        ___qtablewidgetitem35->setText(QApplication::translate("librarian", "T\303\240i kho\341\272\243n", 0));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget_4->horizontalHeaderItem(2);
        ___qtablewidgetitem36->setText(QApplication::translate("librarian", "H\341\273\215 T\303\252n", 0));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget_4->horizontalHeaderItem(3);
        ___qtablewidgetitem37->setText(QApplication::translate("librarian", "Gi\341\273\233i t\303\255nh", 0));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget_4->horizontalHeaderItem(4);
        ___qtablewidgetitem38->setText(QApplication::translate("librarian", "Ng\303\240y sinh", 0));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget_4->horizontalHeaderItem(5);
        ___qtablewidgetitem39->setText(QApplication::translate("librarian", "Email", 0));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget_4->horizontalHeaderItem(6);
        ___qtablewidgetitem40->setText(QApplication::translate("librarian", "Ng\303\240y tham gia", 0));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget_4->horizontalHeaderItem(7);
        ___qtablewidgetitem41->setText(QApplication::translate("librarian", "T\303\254nh tr\341\272\241ng", 0));
        textBrowser_6->setHtml(QApplication::translate("librarian", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.8pt;\">Th\303\264ng tin t\303\241c gi\341\272\243</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.8pt;\">T\303\241c quy\341\273\201n</span></p></body></html>", 0));
        fyfu11212->setTabText(fyfu11212->indexOf(tab_3), QApplication::translate("librarian", "Qu\341\272\243n l\303\275 ng\306\260\341\273\235i d\303\271ng", 0));
        label->setText(QApplication::translate("librarian", "Th\303\264ng tin chi ti\341\272\277t", 0));
        label_2->setText(QApplication::translate("librarian", "T\341\273\261a s\303\241ch:", 0));
        bookName->setText(QString());
        label_3->setText(QApplication::translate("librarian", "T\303\252n ng\306\260\341\273\235i m\306\260\341\273\243n:", 0));
        readerName->setText(QString());
        label_4->setText(QApplication::translate("librarian", "T\303\254nh tr\341\272\241ng:", 0));
        status->setText(QString());
        label_5->setText(QApplication::translate("librarian", "S\341\273\221 l\306\260\341\273\243ng t\341\273\223n kho", 0));
        recipient->setText(QString());
        label_6->setText(QApplication::translate("librarian", "X\303\241c nh\341\272\255n l\341\272\247n cu\341\273\221i b\341\273\237i", 0));
        capacity->setText(QString());
        accept->setText(QApplication::translate("librarian", "Ch\341\272\245p nh\341\272\255n", 0));
        send->setText(QApplication::translate("librarian", "Cho m\306\260\341\273\243n", 0));
        done->setText(QApplication::translate("librarian", "\304\220\303\243 tr\341\272\243 \304\221\303\272ng h\341\272\241n", 0));
        infringe->setText(QApplication::translate("librarian", "Vi ph\341\272\241m", 0));
        newCart->setText(QApplication::translate("librarian", "Phi\341\272\277u m\306\260\341\273\243n m\341\273\233i", 0));
        lendingCart->setText(QApplication::translate("librarian", "Phi\341\272\277u \304\221ang cho m\306\260\341\273\243n", 0));
        doneCart->setText(QApplication::translate("librarian", "Phi\341\272\277u \304\221\303\243 tr\341\272\243 \304\221\303\272ng h\341\272\241n", 0));
        infringeCart->setText(QApplication::translate("librarian", "Phi\341\272\277u vi ph\341\272\241m", 0));
        acceptedCart->setText(QApplication::translate("librarian", "Phi\341\272\277u \304\221\303\243 ch\341\272\245p nh\341\272\255n", 0));
        QTableWidgetItem *___qtablewidgetitem42 = CartInfos->horizontalHeaderItem(1);
        ___qtablewidgetitem42->setText(QApplication::translate("librarian", "M\303\243 phi\341\272\277u", 0));
        QTableWidgetItem *___qtablewidgetitem43 = CartInfos->horizontalHeaderItem(2);
        ___qtablewidgetitem43->setText(QApplication::translate("librarian", "M\303\243 s\303\241ch", 0));
        QTableWidgetItem *___qtablewidgetitem44 = CartInfos->horizontalHeaderItem(3);
        ___qtablewidgetitem44->setText(QApplication::translate("librarian", "M\303\243 ng\306\260\341\273\235i d\303\271ng", 0));
        QTableWidgetItem *___qtablewidgetitem45 = CartInfos->horizontalHeaderItem(4);
        ___qtablewidgetitem45->setText(QApplication::translate("librarian", "Th\341\273\235i h\341\272\241n", 0));
        fyfu11212->setTabText(fyfu11212->indexOf(tabsecond), QApplication::translate("librarian", "Qu\341\272\243n l\303\275 m\306\260\341\273\243n tr\341\272\243", 0));
        Deny->setText(QApplication::translate("librarian", "T\341\273\253 ch\341\273\221i", 0));
        QTableWidgetItem *___qtablewidgetitem46 = registrationTable->horizontalHeaderItem(1);
        ___qtablewidgetitem46->setText(QApplication::translate("librarian", "T\303\240i kho\341\272\243n", 0));
        QTableWidgetItem *___qtablewidgetitem47 = registrationTable->horizontalHeaderItem(2);
        ___qtablewidgetitem47->setText(QApplication::translate("librarian", "Vai tr\303\262", 0));
        QTableWidgetItem *___qtablewidgetitem48 = registrationTable->horizontalHeaderItem(3);
        ___qtablewidgetitem48->setText(QApplication::translate("librarian", "H\341\273\215 v\303\240 t\303\252n", 0));
        QTableWidgetItem *___qtablewidgetitem49 = registrationTable->horizontalHeaderItem(4);
        ___qtablewidgetitem49->setText(QApplication::translate("librarian", "Ng\303\240y \304\221\304\203ng k\303\275", 0));
        Agree->setText(QApplication::translate("librarian", "Ch\341\272\245p nh\341\272\255n", 0));
        fyfu11212->setTabText(fyfu11212->indexOf(newRegistration), QApplication::translate("librarian", "Qu\341\272\243n l\303\275 \304\221\304\203ng k\303\275 m\341\273\233i", 0));
    } // retranslateUi

};

namespace Ui {
    class librarian: public Ui_librarian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARIAN_H
