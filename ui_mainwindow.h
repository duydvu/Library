/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QFrame *MainBar;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *FindBooksEdit;
    QPushButton *FindBooksButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *SignInButton;
    QPushButton *SignUpButton;
    QHBoxLayout *horizontalLayout;
    QTableWidget *BooksTable;
    QTextBrowser *intro;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(749, 564);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(255,255,255)"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 729, 524));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        MainBar = new QFrame(scrollAreaWidgetContents);
        MainBar->setObjectName(QStringLiteral("MainBar"));
        MainBar->setStyleSheet(QStringLiteral("background: #00BCFF;"));
        MainBar->setFrameShape(QFrame::StyledPanel);
        MainBar->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(MainBar);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        FindBooksEdit = new QLineEdit(MainBar);
        FindBooksEdit->setObjectName(QStringLiteral("FindBooksEdit"));
        FindBooksEdit->setMinimumSize(QSize(242, 30));
        FindBooksEdit->setStyleSheet(QLatin1String("#FindBooksEdit {\n"
"	height: 40px;\n"
"	border: none;\n"
"	border-radius: 5px;\n"
"	padding-left: 10px;\n"
"	background: white;\n"
"}"));

        horizontalLayout_2->addWidget(FindBooksEdit);

        FindBooksButton = new QPushButton(MainBar);
        FindBooksButton->setObjectName(QStringLiteral("FindBooksButton"));
        FindBooksButton->setCursor(QCursor(Qt::PointingHandCursor));
        FindBooksButton->setStyleSheet(QLatin1String("#FindBooksButton{\n"
"	height: 40px;\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	background-color: #eee;\n"
"	color: #222;\n"
"	outline: none;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"}\n"
"#FindBooksButton:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(157, 157, 157, 255), stop:0.99435 rgba(241, 241, 241, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));

        horizontalLayout_2->addWidget(FindBooksButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        SignInButton = new QPushButton(MainBar);
        SignInButton->setObjectName(QStringLiteral("SignInButton"));
        SignInButton->setCursor(QCursor(Qt::PointingHandCursor));
        SignInButton->setStyleSheet(QLatin1String("#SignInButton \n"
"{\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"	background-color: #eee;\n"
"	color: #222;\n"
"	outline: none;\n"
"}\n"
"#SignInButton:hover \n"
"{\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #e9e9e9, stop: 0.4 #D8D8D8,\n"
"                                stop: 0.5 #DDDDDD, stop: 1.0 #e9e9e9);\n"
"}\n"
"#SignInButton:pressed \n"
"{\n"
"	padding-top: 2px;\n"
"}"));

        horizontalLayout_2->addWidget(SignInButton);

        SignUpButton = new QPushButton(MainBar);
        SignUpButton->setObjectName(QStringLiteral("SignUpButton"));
        SignUpButton->setCursor(QCursor(Qt::PointingHandCursor));
        SignUpButton->setStyleSheet(QLatin1String("#SignUpButton \n"
"{\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"	background-color: #eee;\n"
"	color: #222;\n"
"	outline: none;\n"
"}\n"
"#SignUpButton:hover \n"
"{\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #e9e9e9, stop: 0.4 #D8D8D8,\n"
"                                stop: 0.5 #DDDDDD, stop: 1.0 #e9e9e9);\n"
"}\n"
"#SignUpButton:pressed \n"
"{\n"
"	padding-top: 2px;\n"
"}"));

        horizontalLayout_2->addWidget(SignUpButton);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(3, 1);
        horizontalLayout_2->setStretch(4, 1);
        SignUpButton->raise();
        SignInButton->raise();
        FindBooksButton->raise();
        FindBooksEdit->raise();

        verticalLayout->addWidget(MainBar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        BooksTable = new QTableWidget(scrollAreaWidgetContents);
        if (BooksTable->columnCount() < 5)
            BooksTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        BooksTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        BooksTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        BooksTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        BooksTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        BooksTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        BooksTable->setObjectName(QStringLiteral("BooksTable"));
        BooksTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        BooksTable->setSortingEnabled(true);
        BooksTable->setWordWrap(false);
        BooksTable->horizontalHeader()->setStretchLastSection(true);
        BooksTable->verticalHeader()->setVisible(false);

        horizontalLayout->addWidget(BooksTable);

        intro = new QTextBrowser(scrollAreaWidgetContents);
        intro->setObjectName(QStringLiteral("intro"));

        horizontalLayout->addWidget(intro);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 4);
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(FindBooksEdit, SIGNAL(returnPressed()), FindBooksButton, SLOT(click()));
        QObject::connect(FindBooksEdit, SIGNAL(textChanged(QString)), FindBooksButton, SLOT(click()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
#ifndef QT_NO_TOOLTIP
        FindBooksButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>T\303\254m s\303\241ch</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        FindBooksButton->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>T\303\254m s\303\241ch</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        FindBooksButton->setText(QApplication::translate("MainWindow", "T\303\254m s\303\241ch", 0));
        SignInButton->setText(QApplication::translate("MainWindow", "\304\220\304\203ng nh\341\272\255p", 0));
        SignUpButton->setText(QApplication::translate("MainWindow", "\304\220\304\203ng k\303\275", 0));
        QTableWidgetItem *___qtablewidgetitem = BooksTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "STT", 0));
        QTableWidgetItem *___qtablewidgetitem1 = BooksTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "T\341\273\261a s\303\241ch", 0));
        QTableWidgetItem *___qtablewidgetitem2 = BooksTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "T\303\241c gi\341\272\243", 0));
        QTableWidgetItem *___qtablewidgetitem3 = BooksTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Nh\303\240 xu\341\272\245t b\341\272\243n", 0));
        QTableWidgetItem *___qtablewidgetitem4 = BooksTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "T\303\254nh tr\341\272\241ng", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
