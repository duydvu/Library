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
#include <QtWidgets/QComboBox>
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
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_librarian
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QTabWidget *fyfu11212;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *tableWidget_2;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_7;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_27;
    QTextBrowser *textBrowser_4;
    QWidget *tab_6;
    QGridLayout *gridLayout_11;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_11;
    QComboBox *category;
    QTableWidget *tableWidget_3;
    QPushButton *pushButton;
    QFrame *frame_5;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_10;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_22;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_23;
    QLineEdit *lineEdit_7;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_24;
    QLineEdit *lineEdit_8;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_25;
    QLineEdit *lineEdit_9;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_26;
    QLineEdit *lineEdit_10;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_33;
    QLabel *label_34;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_35;
    QLabel *label_36;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_37;
    QLabel *label_38;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_39;
    QTextEdit *textEdit_2;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_10;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *searchUsers;
    QPushButton *searchButton;
    QTableWidget *usersTable;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLineEdit *lineEdit_12;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_8;
    QLineEdit *lineEdit_13;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_9;
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
    QHBoxLayout *horizontalLayout_29;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QWidget *tabsecond;
    QGridLayout *gridLayout_5;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QRadioButton *newCart;
    QRadioButton *doneCart;
    QRadioButton *acceptedCart;
    QRadioButton *infringeCart;
    QRadioButton *lendingCart;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QPushButton *accept;
    QPushButton *done;
    QPushButton *send;
    QPushButton *infringe;
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
    QTableWidget *CartInfos;
    QWidget *newRegistration;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_22;
    QPushButton *Agree;
    QPushButton *Deny;
    QSpacerItem *horizontalSpacer;
    QTableWidget *registrationTable;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *librarian)
    {
        if (librarian->objectName().isEmpty())
            librarian->setObjectName(QStringLiteral("librarian"));
        librarian->resize(908, 623);
        centralwidget = new QWidget(librarian);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        fyfu11212 = new QTabWidget(centralwidget);
        fyfu11212->setObjectName(QStringLiteral("fyfu11212"));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalLayout_3 = new QVBoxLayout(tab_5);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tableWidget_2 = new QTableWidget(tab_5);
        if (tableWidget_2->columnCount() < 6)
            tableWidget_2->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (tableWidget_2->rowCount() < 1)
            tableWidget_2->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem6);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->verticalHeader()->setStretchLastSection(true);

        verticalLayout_3->addWidget(tableWidget_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox_7 = new QGroupBox(tab_5);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
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

        horizontalLayout->addWidget(groupBox_7);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_27 = new QLabel(tab_5);
        label_27->setObjectName(QStringLiteral("label_27"));

        verticalLayout_2->addWidget(label_27);

        textBrowser_4 = new QTextBrowser(tab_5);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));

        verticalLayout_2->addWidget(textBrowser_4);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 10);
        fyfu11212->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        gridLayout_11 = new QGridLayout(tab_6);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lineEdit_11 = new QLineEdit(tab_6);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));

        verticalLayout_4->addWidget(lineEdit_11);

        category = new QComboBox(tab_6);
        category->setObjectName(QStringLiteral("category"));

        verticalLayout_4->addWidget(category);

        tableWidget_3 = new QTableWidget(tab_6);
        if (tableWidget_3->columnCount() < 2)
            tableWidget_3->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));
        tableWidget_3->horizontalHeader()->setStretchLastSection(true);
        tableWidget_3->verticalHeader()->setVisible(false);

        verticalLayout_4->addWidget(tableWidget_3);

        pushButton = new QPushButton(tab_6);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_4->addWidget(pushButton);


        horizontalLayout_6->addLayout(verticalLayout_4);

        frame_5 = new QFrame(tab_6);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        gridLayout_9 = new QGridLayout(frame_5);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_22 = new QLabel(frame_5);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setMinimumSize(QSize(101, 16));

        horizontalLayout_14->addWidget(label_22);

        lineEdit_5 = new QLineEdit(frame_5);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        horizontalLayout_14->addWidget(lineEdit_5);


        gridLayout_10->addLayout(horizontalLayout_14, 0, 0, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_23 = new QLabel(frame_5);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setMinimumSize(QSize(101, 16));

        horizontalLayout_15->addWidget(label_23);

        lineEdit_7 = new QLineEdit(frame_5);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        horizontalLayout_15->addWidget(lineEdit_7);


        gridLayout_10->addLayout(horizontalLayout_15, 0, 1, 1, 1);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_24 = new QLabel(frame_5);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setMinimumSize(QSize(101, 16));

        horizontalLayout_16->addWidget(label_24);

        lineEdit_8 = new QLineEdit(frame_5);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        horizontalLayout_16->addWidget(lineEdit_8);


        gridLayout_10->addLayout(horizontalLayout_16, 1, 0, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_25 = new QLabel(frame_5);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setMinimumSize(QSize(101, 16));

        horizontalLayout_17->addWidget(label_25);

        lineEdit_9 = new QLineEdit(frame_5);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        horizontalLayout_17->addWidget(lineEdit_9);


        gridLayout_10->addLayout(horizontalLayout_17, 1, 1, 1, 1);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_26 = new QLabel(frame_5);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setMinimumSize(QSize(101, 16));

        horizontalLayout_18->addWidget(label_26);

        lineEdit_10 = new QLineEdit(frame_5);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));

        horizontalLayout_18->addWidget(lineEdit_10);


        gridLayout_10->addLayout(horizontalLayout_18, 2, 0, 1, 1);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_33 = new QLabel(frame_5);
        label_33->setObjectName(QStringLiteral("label_33"));

        horizontalLayout_19->addWidget(label_33);

        label_34 = new QLabel(frame_5);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setMinimumSize(QSize(128, 16));

        horizontalLayout_19->addWidget(label_34);


        gridLayout_10->addLayout(horizontalLayout_19, 2, 1, 1, 1);


        gridLayout_9->addLayout(gridLayout_10, 0, 0, 1, 2);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        label_35 = new QLabel(frame_5);
        label_35->setObjectName(QStringLiteral("label_35"));

        horizontalLayout_20->addWidget(label_35);

        label_36 = new QLabel(frame_5);
        label_36->setObjectName(QStringLiteral("label_36"));

        horizontalLayout_20->addWidget(label_36);


        verticalLayout_9->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        label_37 = new QLabel(frame_5);
        label_37->setObjectName(QStringLiteral("label_37"));

        horizontalLayout_21->addWidget(label_37);

        label_38 = new QLabel(frame_5);
        label_38->setObjectName(QStringLiteral("label_38"));

        horizontalLayout_21->addWidget(label_38);


        verticalLayout_9->addLayout(horizontalLayout_21);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_39 = new QLabel(frame_5);
        label_39->setObjectName(QStringLiteral("label_39"));

        verticalLayout_7->addWidget(label_39);

        textEdit_2 = new QTextEdit(frame_5);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));

        verticalLayout_7->addWidget(textEdit_2);


        verticalLayout_9->addLayout(verticalLayout_7);


        gridLayout_9->addLayout(verticalLayout_9, 1, 0, 1, 1);

        frame_7 = new QFrame(frame_5);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        verticalLayout_10 = new QVBoxLayout(frame_7);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(-1, 200, -1, -1);
        pushButton_7 = new QPushButton(frame_7);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        verticalLayout_10->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(frame_7);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        verticalLayout_10->addWidget(pushButton_8);


        gridLayout_9->addWidget(frame_7, 1, 1, 1, 1);


        horizontalLayout_6->addWidget(frame_5);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 2);

        gridLayout_11->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        fyfu11212->addTab(tab_6, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        horizontalLayout_3 = new QHBoxLayout(tab_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_2 = new QWidget(tab_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_4 = new QHBoxLayout(widget_2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        searchUsers = new QLineEdit(widget_2);
        searchUsers->setObjectName(QStringLiteral("searchUsers"));

        horizontalLayout_4->addWidget(searchUsers);

        searchButton = new QPushButton(widget_2);
        searchButton->setObjectName(QStringLiteral("searchButton"));

        horizontalLayout_4->addWidget(searchButton);


        verticalLayout->addWidget(widget_2);

        usersTable = new QTableWidget(tab_3);
        if (usersTable->columnCount() < 4)
            usersTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        usersTable->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        usersTable->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        usersTable->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        usersTable->setHorizontalHeaderItem(3, __qtablewidgetitem12);
        usersTable->setObjectName(QStringLiteral("usersTable"));
        usersTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        usersTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        usersTable->setSortingEnabled(true);
        usersTable->horizontalHeader()->setStretchLastSection(true);
        usersTable->verticalHeader()->setVisible(false);
        usersTable->verticalHeader()->setCascadingSectionResizes(false);
        usersTable->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(usersTable);


        horizontalLayout_3->addLayout(verticalLayout);

        frame_4 = new QFrame(tab_3);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_11 = new QVBoxLayout(frame_4);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_7 = new QLabel(frame_4);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_2->addWidget(label_7);

        lineEdit_12 = new QLineEdit(frame_4);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_12);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 4);

        verticalLayout_11->addLayout(horizontalLayout_2);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        label_8 = new QLabel(frame_4);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_23->addWidget(label_8);

        lineEdit_13 = new QLineEdit(frame_4);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setReadOnly(true);

        horizontalLayout_23->addWidget(lineEdit_13);

        horizontalLayout_23->setStretch(0, 1);
        horizontalLayout_23->setStretch(1, 4);

        verticalLayout_11->addLayout(horizontalLayout_23);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        label_9 = new QLabel(frame_4);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_24->addWidget(label_9);

        lineEdit_14 = new QLineEdit(frame_4);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));
        lineEdit_14->setReadOnly(true);

        horizontalLayout_24->addWidget(lineEdit_14);

        horizontalLayout_24->setStretch(0, 1);
        horizontalLayout_24->setStretch(1, 4);

        verticalLayout_11->addLayout(horizontalLayout_24);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        label_40 = new QLabel(frame_4);
        label_40->setObjectName(QStringLiteral("label_40"));

        horizontalLayout_25->addWidget(label_40);

        lineEdit_15 = new QLineEdit(frame_4);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));
        lineEdit_15->setReadOnly(true);

        horizontalLayout_25->addWidget(lineEdit_15);

        horizontalLayout_25->setStretch(0, 1);
        horizontalLayout_25->setStretch(1, 4);

        verticalLayout_11->addLayout(horizontalLayout_25);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        label_41 = new QLabel(frame_4);
        label_41->setObjectName(QStringLiteral("label_41"));

        horizontalLayout_26->addWidget(label_41);

        lineEdit_16 = new QLineEdit(frame_4);
        lineEdit_16->setObjectName(QStringLiteral("lineEdit_16"));
        lineEdit_16->setReadOnly(true);

        horizontalLayout_26->addWidget(lineEdit_16);

        horizontalLayout_26->setStretch(0, 1);
        horizontalLayout_26->setStretch(1, 4);

        verticalLayout_11->addLayout(horizontalLayout_26);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        label_42 = new QLabel(frame_4);
        label_42->setObjectName(QStringLiteral("label_42"));

        horizontalLayout_27->addWidget(label_42);

        lineEdit_17 = new QLineEdit(frame_4);
        lineEdit_17->setObjectName(QStringLiteral("lineEdit_17"));
        lineEdit_17->setReadOnly(true);

        horizontalLayout_27->addWidget(lineEdit_17);

        horizontalLayout_27->setStretch(0, 1);
        horizontalLayout_27->setStretch(1, 4);

        verticalLayout_11->addLayout(horizontalLayout_27);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        label_43 = new QLabel(frame_4);
        label_43->setObjectName(QStringLiteral("label_43"));

        horizontalLayout_28->addWidget(label_43);

        lineEdit_18 = new QLineEdit(frame_4);
        lineEdit_18->setObjectName(QStringLiteral("lineEdit_18"));
        lineEdit_18->setReadOnly(true);

        horizontalLayout_28->addWidget(lineEdit_18);

        horizontalLayout_28->setStretch(0, 1);
        horizontalLayout_28->setStretch(1, 4);

        verticalLayout_11->addLayout(horizontalLayout_28);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName(QStringLiteral("horizontalLayout_29"));
        pushButton_4 = new QPushButton(frame_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_29->addWidget(pushButton_4);

        pushButton_2 = new QPushButton(frame_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_29->addWidget(pushButton_2);


        verticalLayout_11->addLayout(horizontalLayout_29);


        horizontalLayout_3->addWidget(frame_4);

        fyfu11212->addTab(tab_3, QString());
        tabsecond = new QWidget();
        tabsecond->setObjectName(QStringLiteral("tabsecond"));
        gridLayout_5 = new QGridLayout(tabsecond);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        frame_2 = new QFrame(tabsecond);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        newCart = new QRadioButton(frame_2);
        newCart->setObjectName(QStringLiteral("newCart"));
        newCart->setChecked(true);

        gridLayout_2->addWidget(newCart, 0, 0, 1, 1);

        doneCart = new QRadioButton(frame_2);
        doneCart->setObjectName(QStringLiteral("doneCart"));
        doneCart->setChecked(false);

        gridLayout_2->addWidget(doneCart, 0, 1, 1, 1);

        acceptedCart = new QRadioButton(frame_2);
        acceptedCart->setObjectName(QStringLiteral("acceptedCart"));

        gridLayout_2->addWidget(acceptedCart, 1, 0, 1, 1);

        infringeCart = new QRadioButton(frame_2);
        infringeCart->setObjectName(QStringLiteral("infringeCart"));

        gridLayout_2->addWidget(infringeCart, 1, 1, 1, 1);

        lendingCart = new QRadioButton(frame_2);
        lendingCart->setObjectName(QStringLiteral("lendingCart"));

        gridLayout_2->addWidget(lendingCart, 2, 0, 1, 1);


        gridLayout_5->addWidget(frame_2, 0, 0, 1, 1);

        frame = new QFrame(tabsecond);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(-1, -1, 300, -1);
        accept = new QPushButton(frame);
        accept->setObjectName(QStringLiteral("accept"));

        gridLayout_3->addWidget(accept, 0, 0, 1, 1);

        done = new QPushButton(frame);
        done->setObjectName(QStringLiteral("done"));

        gridLayout_3->addWidget(done, 0, 1, 1, 1);

        send = new QPushButton(frame);
        send->setObjectName(QStringLiteral("send"));

        gridLayout_3->addWidget(send, 1, 0, 1, 1);

        infringe = new QPushButton(frame);
        infringe->setObjectName(QStringLiteral("infringe"));

        gridLayout_3->addWidget(infringe, 1, 1, 1, 1);


        gridLayout_5->addWidget(frame, 0, 1, 1, 1);

        frame_3 = new QFrame(tabsecond);
        frame_3->setObjectName(QStringLiteral("frame_3"));
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

        gridLayout_5->addWidget(frame_3, 1, 0, 1, 1);

        CartInfos = new QTableWidget(tabsecond);
        if (CartInfos->columnCount() < 5)
            CartInfos->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        CartInfos->setHorizontalHeaderItem(0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        CartInfos->setHorizontalHeaderItem(1, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        CartInfos->setHorizontalHeaderItem(2, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        CartInfos->setHorizontalHeaderItem(3, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        CartInfos->setHorizontalHeaderItem(4, __qtablewidgetitem17);
        CartInfos->setObjectName(QStringLiteral("CartInfos"));
        CartInfos->setStyleSheet(QStringLiteral("text-align:center;"));
        CartInfos->setEditTriggers(QAbstractItemView::NoEditTriggers);
        CartInfos->horizontalHeader()->setCascadingSectionResizes(false);
        CartInfos->horizontalHeader()->setStretchLastSection(true);
        CartInfos->verticalHeader()->setVisible(false);

        gridLayout_5->addWidget(CartInfos, 1, 1, 1, 1);

        gridLayout_5->setRowStretch(0, 1);
        gridLayout_5->setRowStretch(1, 4);
        gridLayout_5->setColumnStretch(0, 1);
        gridLayout_5->setColumnStretch(1, 2);
        fyfu11212->addTab(tabsecond, QString());
        newRegistration = new QWidget();
        newRegistration->setObjectName(QStringLiteral("newRegistration"));
        gridLayout_8 = new QGridLayout(newRegistration);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        Agree = new QPushButton(newRegistration);
        Agree->setObjectName(QStringLiteral("Agree"));

        horizontalLayout_22->addWidget(Agree);

        Deny = new QPushButton(newRegistration);
        Deny->setObjectName(QStringLiteral("Deny"));

        horizontalLayout_22->addWidget(Deny);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer);

        horizontalLayout_22->setStretch(0, 1);
        horizontalLayout_22->setStretch(1, 1);
        horizontalLayout_22->setStretch(2, 3);

        gridLayout_8->addLayout(horizontalLayout_22, 0, 0, 1, 1);

        registrationTable = new QTableWidget(newRegistration);
        if (registrationTable->columnCount() < 9)
            registrationTable->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(2, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(3, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(4, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(5, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(6, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(7, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        registrationTable->setHorizontalHeaderItem(8, __qtablewidgetitem26);
        registrationTable->setObjectName(QStringLiteral("registrationTable"));
        registrationTable->horizontalHeader()->setStretchLastSection(true);
        registrationTable->verticalHeader()->setVisible(false);

        gridLayout_8->addWidget(registrationTable, 1, 0, 1, 1);

        fyfu11212->addTab(newRegistration, QString());

        gridLayout->addWidget(fyfu11212, 0, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 1);

        librarian->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(librarian);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        librarian->setStatusBar(statusbar);

        retranslateUi(librarian);

        fyfu11212->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(librarian);
    } // setupUi

    void retranslateUi(QMainWindow *librarian)
    {
        librarian->setWindowTitle(QApplication::translate("librarian", "MainWindow", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("librarian", "M\303\243", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("librarian", "H\341\273\215 T\303\252n", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("librarian", "Gi\341\273\233i t\303\255nh", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("librarian", "Ng\303\240y sinh", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("librarian", "Email", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("librarian", "S\304\220T", 0));
        groupBox_7->setTitle(QApplication::translate("librarian", "H\341\273\243p \304\221\341\273\223ng", 0));
        label_28->setText(QApplication::translate("librarian", "T\303\263m t\341\272\257t h\341\273\243p \304\221\341\273\223ng \304\221\303\243 k\303\275", 0));
        label_29->setText(QApplication::translate("librarian", "B\341\272\257t \304\221\341\272\247u l\303\240m vi\341\273\207c t\341\273\253", 0));
        label_30->setText(QApplication::translate("librarian", "Th\341\273\235i h\341\272\241n h\341\273\243p \304\221\341\273\223ng", 0));
        label_31->setText(QApplication::translate("librarian", "V\341\273\213 tr\303\255", 0));
        label_32->setText(QApplication::translate("librarian", "M\341\273\251c l\306\260\306\241ng", 0));
        label_27->setText(QApplication::translate("librarian", "Nh\341\272\257c nh\341\273\237 t\341\273\253 Admin", 0));
        fyfu11212->setTabText(fyfu11212->indexOf(tab_5), QApplication::translate("librarian", "Th\303\264ng tin c\303\241 nh\303\242n", 0));
        category->clear();
        category->insertItems(0, QStringList()
         << QApplication::translate("librarian", "T\341\272\245t c\341\272\243", 0)
         << QApplication::translate("librarian", "B\303\241ch khoa to\303\240n th\306\260", 0)
         << QApplication::translate("librarian", "Ch\303\242m bi\341\272\277m", 0)
         << QApplication::translate("librarian", "Du l\341\273\213ch", 0)
         << QApplication::translate("librarian", "\304\220\341\273\213a l\303\275", 0)
         << QApplication::translate("librarian", "H\303\240nh \304\221\341\273\231ng v\303\240 phi\303\252u l\306\260u", 0)
         << QApplication::translate("librarian", "Huy\341\273\201n b\303\255", 0)
         << QApplication::translate("librarian", "Khoa h\341\273\215c", 0)
         << QApplication::translate("librarian", "Khoa h\341\273\215c vi\341\273\205n t\306\260\341\273\237ng", 0)
         << QApplication::translate("librarian", "K\341\273\213ch", 0)
         << QApplication::translate("librarian", "Kinh d\341\273\213", 0)
         << QApplication::translate("librarian", "Kinh t\341\272\277", 0)
         << QApplication::translate("librarian", "L\303\243ng m\341\272\241n", 0)
         << QApplication::translate("librarian", "L\341\273\213ch s\341\273\255", 0)
         << QApplication::translate("librarian", "Ngh\341\273\207 thu\341\272\255t", 0)
         << QApplication::translate("librarian", "Nh\341\272\255t k\303\275", 0)
         << QApplication::translate("librarian", "S\303\241ch n\341\272\245u \304\203n", 0)
         << QApplication::translate("librarian", "S\341\273\251c kh\341\273\217e", 0)
         << QApplication::translate("librarian", "T\341\272\241p ch\303\255", 0)
         << QApplication::translate("librarian", "Th\306\241", 0)
         << QApplication::translate("librarian", "Ti\341\273\203u s\341\273\255", 0)
         << QApplication::translate("librarian", "To\303\241n", 0)
         << QApplication::translate("librarian", "T\303\264n gi\303\241o", 0)
         << QApplication::translate("librarian", "Ch\303\255nh tr\341\273\213", 0)
         << QApplication::translate("librarian", "Tr\341\272\273 em", 0)
         << QApplication::translate("librarian", "Truy\341\273\207n tranh", 0)
         << QApplication::translate("librarian", "T\341\273\253 \304\221i\341\273\203n", 0)
        );
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("librarian", "M\303\243 s\303\241ch", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("librarian", "T\341\273\261a s\303\241ch", 0));
        pushButton->setText(QApplication::translate("librarian", "Th\303\252m", 0));
        label_22->setText(QApplication::translate("librarian", "T\303\252n:", 0));
        label_23->setText(QApplication::translate("librarian", "T\303\241c gi\341\272\243:", 0));
        label_24->setText(QApplication::translate("librarian", "M\303\243:", 0));
        label_25->setText(QApplication::translate("librarian", "S\341\273\221 l\306\260\341\273\243ng:", 0));
        label_26->setText(QApplication::translate("librarian", "Nh\303\240 xu\341\272\245t b\341\272\243n:", 0));
        label_33->setText(QApplication::translate("librarian", "Chuy\303\252n m\341\273\245c:", 0));
        label_34->setText(QString());
        label_35->setText(QApplication::translate("librarian", "\304\220\303\243 cho m\306\260\341\273\243n:", 0));
        label_36->setText(QString());
        label_37->setText(QApplication::translate("librarian", "Hi\341\273\207n c\303\262n:", 0));
        label_38->setText(QString());
        label_39->setText(QApplication::translate("librarian", "S\306\241 l\306\260\341\273\243c:", 0));
        pushButton_7->setText(QApplication::translate("librarian", "S\341\273\255a", 0));
        pushButton_8->setText(QApplication::translate("librarian", "X\303\263a", 0));
        fyfu11212->setTabText(fyfu11212->indexOf(tab_6), QApplication::translate("librarian", "Qu\341\272\243n l\303\275 s\303\241ch", 0));
        searchUsers->setPlaceholderText(QApplication::translate("librarian", "T\303\254m ki\341\272\277m", 0));
        searchButton->setText(QApplication::translate("librarian", "T\303\254m", 0));
        QTableWidgetItem *___qtablewidgetitem8 = usersTable->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("librarian", "M\303\243 s\341\273\221", 0));
        QTableWidgetItem *___qtablewidgetitem9 = usersTable->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("librarian", "T\303\240i kho\341\272\243n", 0));
        QTableWidgetItem *___qtablewidgetitem10 = usersTable->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("librarian", "H\341\273\215 v\303\240 t\303\252n", 0));
        QTableWidgetItem *___qtablewidgetitem11 = usersTable->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("librarian", "T\303\254nh tr\341\272\241ng", 0));
        label_7->setText(QApplication::translate("librarian", "H\341\273\215 v\303\240 t\303\252n:", 0));
        label_8->setText(QApplication::translate("librarian", "Gi\341\273\233i t\303\255nh:", 0));
        label_9->setText(QApplication::translate("librarian", "Ng\303\240y sinh:", 0));
        label_40->setText(QApplication::translate("librarian", "Email:", 0));
        label_41->setText(QApplication::translate("librarian", "Ng\303\240y tham gia:", 0));
        label_42->setText(QApplication::translate("librarian", "\304\220\341\273\213a ch\341\273\211:", 0));
        label_43->setText(QApplication::translate("librarian", "T\303\254nh tr\341\272\241ng:", 0));
        pushButton_4->setText(QApplication::translate("librarian", "\304\220\341\273\225i m\341\272\255t kh\341\272\251u", 0));
        pushButton_2->setText(QApplication::translate("librarian", "S\341\273\255a", 0));
        fyfu11212->setTabText(fyfu11212->indexOf(tab_3), QApplication::translate("librarian", "Qu\341\272\243n l\303\275 ng\306\260\341\273\235i d\303\271ng", 0));
        newCart->setText(QApplication::translate("librarian", "Phi\341\272\277u m\306\260\341\273\243n m\341\273\233i", 0));
        doneCart->setText(QApplication::translate("librarian", "Phi\341\272\277u \304\221\303\243 tr\341\272\243 \304\221\303\272ng h\341\272\241n", 0));
        acceptedCart->setText(QApplication::translate("librarian", "Phi\341\272\277u \304\221\303\243 ch\341\272\245p nh\341\272\255n", 0));
        infringeCart->setText(QApplication::translate("librarian", "Phi\341\272\277u vi ph\341\272\241m", 0));
        lendingCart->setText(QApplication::translate("librarian", "Phi\341\272\277u \304\221ang cho m\306\260\341\273\243n", 0));
        accept->setText(QApplication::translate("librarian", "Ch\341\272\245p nh\341\272\255n", 0));
        done->setText(QApplication::translate("librarian", "\304\220\303\243 tr\341\272\243 \304\221\303\272ng h\341\272\241n", 0));
        send->setText(QApplication::translate("librarian", "Cho m\306\260\341\273\243n", 0));
        infringe->setText(QApplication::translate("librarian", "Vi ph\341\272\241m", 0));
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
        QTableWidgetItem *___qtablewidgetitem12 = CartInfos->horizontalHeaderItem(1);
        ___qtablewidgetitem12->setText(QApplication::translate("librarian", "M\303\243 phi\341\272\277u", 0));
        QTableWidgetItem *___qtablewidgetitem13 = CartInfos->horizontalHeaderItem(2);
        ___qtablewidgetitem13->setText(QApplication::translate("librarian", "M\303\243 s\303\241ch", 0));
        QTableWidgetItem *___qtablewidgetitem14 = CartInfos->horizontalHeaderItem(3);
        ___qtablewidgetitem14->setText(QApplication::translate("librarian", "M\303\243 ng\306\260\341\273\235i d\303\271ng", 0));
        QTableWidgetItem *___qtablewidgetitem15 = CartInfos->horizontalHeaderItem(4);
        ___qtablewidgetitem15->setText(QApplication::translate("librarian", "Th\341\273\235i h\341\272\241n", 0));
        fyfu11212->setTabText(fyfu11212->indexOf(tabsecond), QApplication::translate("librarian", "Qu\341\272\243n l\303\275 m\306\260\341\273\243n tr\341\272\243", 0));
        Agree->setText(QApplication::translate("librarian", "Ch\341\272\245p nh\341\272\255n", 0));
        Deny->setText(QApplication::translate("librarian", "T\341\273\253 ch\341\273\221i", 0));
        QTableWidgetItem *___qtablewidgetitem16 = registrationTable->horizontalHeaderItem(1);
        ___qtablewidgetitem16->setText(QApplication::translate("librarian", "T\303\240i kho\341\272\243n", 0));
        QTableWidgetItem *___qtablewidgetitem17 = registrationTable->horizontalHeaderItem(2);
        ___qtablewidgetitem17->setText(QApplication::translate("librarian", "Vai tr\303\262", 0));
        QTableWidgetItem *___qtablewidgetitem18 = registrationTable->horizontalHeaderItem(3);
        ___qtablewidgetitem18->setText(QApplication::translate("librarian", "H\341\273\215 v\303\240 t\303\252n", 0));
        QTableWidgetItem *___qtablewidgetitem19 = registrationTable->horizontalHeaderItem(4);
        ___qtablewidgetitem19->setText(QApplication::translate("librarian", "Ng\303\240y \304\221\304\203ng k\303\275", 0));
        QTableWidgetItem *___qtablewidgetitem20 = registrationTable->horizontalHeaderItem(5);
        ___qtablewidgetitem20->setText(QApplication::translate("librarian", "Gi\341\273\233i t\303\255nh", 0));
        QTableWidgetItem *___qtablewidgetitem21 = registrationTable->horizontalHeaderItem(6);
        ___qtablewidgetitem21->setText(QApplication::translate("librarian", "Ng\303\240y sinh", 0));
        QTableWidgetItem *___qtablewidgetitem22 = registrationTable->horizontalHeaderItem(7);
        ___qtablewidgetitem22->setText(QApplication::translate("librarian", "Email", 0));
        QTableWidgetItem *___qtablewidgetitem23 = registrationTable->horizontalHeaderItem(8);
        ___qtablewidgetitem23->setText(QApplication::translate("librarian", "\304\220\341\273\213a ch\341\273\211", 0));
        fyfu11212->setTabText(fyfu11212->indexOf(newRegistration), QApplication::translate("librarian", "Qu\341\272\243n l\303\275 \304\221\304\203ng k\303\275 m\341\273\233i", 0));
    } // retranslateUi

};

namespace Ui {
    class librarian: public Ui_librarian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARIAN_H
