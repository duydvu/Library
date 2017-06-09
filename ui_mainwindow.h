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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *SignInButton;
    QFrame *MainBar;
    QLineEdit *FindBooksEdit;
    QPushButton *FindBooksButton;
    QPushButton *SignUpButton;
    QLabel *AccountLabel;
    QTableWidget *BooksTable;
    QLabel *quantity;
    QLabel *quantity_2;
    QTextBrowser *intro;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(721, 546);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(255,255,255)"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SignInButton = new QPushButton(centralWidget);
        SignInButton->setObjectName(QStringLiteral("SignInButton"));
        SignInButton->setGeometry(QRect(500, 20, 101, 31));
        SignInButton->setCursor(QCursor(Qt::PointingHandCursor));
        SignInButton->setStyleSheet(QLatin1String("#SignInButton \n"
"{\n"
"	border: 1px solid darkgray;\n"
"	border-radius: 5px;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #eee, stop: 0.4 #ddd,\n"
"                                stop: 0.5 #d8d8d8, stop: 1.0 #ddd);\n"
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
        MainBar = new QFrame(centralWidget);
        MainBar->setObjectName(QStringLiteral("MainBar"));
        MainBar->setGeometry(QRect(0, 0, 721, 101));
        MainBar->setStyleSheet(QStringLiteral("background: #00BCFF;"));
        MainBar->setFrameShape(QFrame::StyledPanel);
        MainBar->setFrameShadow(QFrame::Raised);
        FindBooksEdit = new QLineEdit(MainBar);
        FindBooksEdit->setObjectName(QStringLiteral("FindBooksEdit"));
        FindBooksEdit->setGeometry(QRect(60, 20, 411, 41));
        FindBooksEdit->setStyleSheet(QLatin1String("#FindBooksEdit {\n"
"	border: none;\n"
"	border-radius: 5px;\n"
"	padding-left: 10px;\n"
"	background: white;\n"
"}"));
        FindBooksButton = new QPushButton(MainBar);
        FindBooksButton->setObjectName(QStringLiteral("FindBooksButton"));
        FindBooksButton->setGeometry(QRect(380, 20, 91, 41));
        FindBooksButton->setCursor(QCursor(Qt::PointingHandCursor));
        FindBooksButton->setStyleSheet(QLatin1String("#FindBooksButton{\n"
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
        SignUpButton = new QPushButton(MainBar);
        SignUpButton->setObjectName(QStringLiteral("SignUpButton"));
        SignUpButton->setGeometry(QRect(610, 20, 101, 31));
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
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(157, 157, 157, 255), stop:0.99435 rgba(241, 241, 241, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        AccountLabel = new QLabel(MainBar);
        AccountLabel->setObjectName(QStringLiteral("AccountLabel"));
        AccountLabel->setGeometry(QRect(480, 20, 231, 31));
        AccountLabel->setStyleSheet(QLatin1String("font: 63 12pt \"Myriad Pro Light\";\n"
"background: none;"));
        AccountLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AccountLabel->raise();
        FindBooksEdit->raise();
        FindBooksButton->raise();
        SignUpButton->raise();
        BooksTable = new QTableWidget(centralWidget);
        BooksTable->setObjectName(QStringLiteral("BooksTable"));
        BooksTable->setEnabled(true);
        BooksTable->setGeometry(QRect(20, 130, 481, 391));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BooksTable->sizePolicy().hasHeightForWidth());
        BooksTable->setSizePolicy(sizePolicy);
        BooksTable->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        BooksTable->setStyleSheet(QLatin1String("QWidget {\n"
"    background-color: #333333;\n"
"    color: #fffff8;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #646464;\n"
"    padding: 4px;\n"
"    border: 1px solid #fffff8;\n"
"    font-size: 12pt;\n"
"	height: 30px;\n"
"}\n"
"\n"
"QTableWidget {\n"
"    gridline-color: #fffff8;\n"
"    font-size: 12pt;\n"
"}\n"
"\n"
"QTableWidget QTableCornerButton::section {\n"
"    background-color: #646464;\n"
"    border: 1px solid #fffff8;\n"
"}"));
        BooksTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        BooksTable->setSortingEnabled(false);
        BooksTable->setColumnCount(0);
        BooksTable->horizontalHeader()->setCascadingSectionResizes(false);
        BooksTable->verticalHeader()->setVisible(false);
        BooksTable->verticalHeader()->setCascadingSectionResizes(false);
        quantity = new QLabel(centralWidget);
        quantity->setObjectName(QStringLiteral("quantity"));
        quantity->setGeometry(QRect(580, 500, 47, 13));
        quantity_2 = new QLabel(centralWidget);
        quantity_2->setObjectName(QStringLiteral("quantity_2"));
        quantity_2->setGeometry(QRect(520, 500, 47, 13));
        intro = new QTextBrowser(centralWidget);
        intro->setObjectName(QStringLiteral("intro"));
        intro->setGeometry(QRect(515, 130, 191, 361));
        MainWindow->setCentralWidget(centralWidget);
        MainBar->raise();
        SignInButton->raise();
        BooksTable->raise();
        quantity->raise();
        quantity_2->raise();
        intro->raise();
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(FindBooksEdit, FindBooksButton);
        QWidget::setTabOrder(FindBooksButton, SignInButton);
        QWidget::setTabOrder(SignInButton, SignUpButton);

        retranslateUi(MainWindow);
        QObject::connect(FindBooksEdit, SIGNAL(returnPressed()), FindBooksButton, SLOT(click()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        SignInButton->setText(QApplication::translate("MainWindow", "\304\220\304\203ng nh\341\272\255p", 0));
#ifndef QT_NO_TOOLTIP
        FindBooksButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>T\303\254m s\303\241ch</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        FindBooksButton->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>T\303\254m s\303\241ch</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        FindBooksButton->setText(QApplication::translate("MainWindow", "T\303\254m s\303\241ch", 0));
        SignUpButton->setText(QApplication::translate("MainWindow", "\304\220\304\203ng k\303\275", 0));
        AccountLabel->setText(QString());
        quantity->setText(QString());
        quantity_2->setText(QApplication::translate("MainWindow", "S\341\273\221 l\306\260\341\273\243ng", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
