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
#include <QtWidgets/QComboBox>
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
    QComboBox *AccountComboBox;
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
        AccountLabel->setGeometry(QRect(370, 10, 231, 31));
        AccountLabel->setStyleSheet(QStringLiteral("font: 63 12pt \"Myriad Pro Light\";"));
        AccountLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AccountComboBox = new QComboBox(centralWidget);
        AccountComboBox->setObjectName(QStringLiteral("AccountComboBox"));
        AccountComboBox->setGeometry(QRect(548, 50, 161, 31));
        AccountComboBox->setStyleSheet(QLatin1String("#AccountComboBox \n"
"{\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	font: 63 12pt \"Myriad Pro Light\";\n"
"	background: #ddd;\n"
"	color: #222;\n"
"	outline: none;\n"
"	padding-left: 5px\n"
"}\n"
"#AccountComboBox:hover \n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(157, 157, 157, 255), stop:0.99435 rgba(241, 241, 241, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        MainWindow->setCentralWidget(centralWidget);
        AccountLabel->raise();
        FindBooksButton->raise();
        SignInButton->raise();
        SignUpButton->raise();
        FindBooksEdit->raise();
        AccountComboBox->raise();
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

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
        FindBooksButton->setText(QApplication::translate("MainWindow", "T\303\254m", 0));
        SignInButton->setText(QApplication::translate("MainWindow", "\304\220\304\203ng nh\341\272\255p", 0));
        SignUpButton->setText(QApplication::translate("MainWindow", "\304\220\304\203ng k\303\275", 0));
        AccountLabel->setText(QString());
        AccountComboBox->clear();
        AccountComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Trang c\303\241 nh\303\242n", 0)
         << QApplication::translate("MainWindow", "Xem th\303\264ng b\303\241o", 0)
         << QApplication::translate("MainWindow", "\304\220\304\203ng xu\341\272\245t", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
