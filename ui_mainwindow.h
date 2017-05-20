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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *FindBooksButton;
    QPushButton *SignInButton;
    QPushButton *SignUpButton;
    QLineEdit *FindBooksEdit;
    QLabel *AccountLabel;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(720, 560);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(255,255,255)"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        FindBooksButton = new QPushButton(centralWidget);
        FindBooksButton->setObjectName(QStringLiteral("FindBooksButton"));
        FindBooksButton->setGeometry(QRect(360, 130, 81, 31));
        FindBooksButton->setStyleSheet(QLatin1String("#FindBooksButton{\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	font: 63 12pt \"Myriad Pro Light\";\n"
"	background-color: #ddd;\n"
"	color: #222;\n"
"	outline: none;\n"
"}\n"
"#FindBooksButton:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(157, 157, 157, 255), stop:0.99435 rgba(241, 241, 241, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        SignInButton = new QPushButton(centralWidget);
        SignInButton->setObjectName(QStringLiteral("SignInButton"));
        SignInButton->setGeometry(QRect(500, 10, 101, 31));
        SignInButton->setCursor(QCursor(Qt::PointingHandCursor));
        SignInButton->setStyleSheet(QLatin1String("#SignInButton \n"
"{\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	font: 63 12pt \"Myriad Pro Light\";\n"
"	background-color: #ddd;\n"
"	color: #222;\n"
"	outline: none;\n"
"}\n"
"#SignInButton:hover \n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(157, 157, 157, 255), stop:0.99435 rgba(241, 241, 241, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        SignUpButton = new QPushButton(centralWidget);
        SignUpButton->setObjectName(QStringLiteral("SignUpButton"));
        SignUpButton->setGeometry(QRect(610, 10, 101, 31));
        SignUpButton->setCursor(QCursor(Qt::PointingHandCursor));
        SignUpButton->setStyleSheet(QLatin1String("#SignUpButton \n"
"{\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	font: 63 12pt \"Myriad Pro Light\";\n"
"	background-color: #ddd;\n"
"	color: #222;\n"
"	outline: none;\n"
"}\n"
"#SignUpButton:hover \n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(157, 157, 157, 255), stop:0.99435 rgba(241, 241, 241, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        FindBooksEdit = new QLineEdit(centralWidget);
        FindBooksEdit->setObjectName(QStringLiteral("FindBooksEdit"));
        FindBooksEdit->setGeometry(QRect(50, 130, 291, 31));
        AccountLabel = new QLabel(centralWidget);
        AccountLabel->setObjectName(QStringLiteral("AccountLabel"));
        AccountLabel->setGeometry(QRect(480, 10, 231, 31));
        AccountLabel->setStyleSheet(QStringLiteral("font: 63 12pt \"Myriad Pro Light\";"));
        AccountLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        MainWindow->setCentralWidget(centralWidget);
        AccountLabel->raise();
        FindBooksButton->raise();
        SignInButton->raise();
        SignUpButton->raise();
        FindBooksEdit->raise();
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        FindBooksButton->setText(QApplication::translate("MainWindow", "T\303\254m", 0));
        SignInButton->setText(QApplication::translate("MainWindow", "\304\220\304\203ng nh\341\272\255p", 0));
        SignUpButton->setText(QApplication::translate("MainWindow", "\304\220\304\203ng k\303\275", 0));
        AccountLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
