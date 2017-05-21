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
#include <QtWidgets/QFrame>
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
    QPushButton *SignInButton;
    QFrame *MainBar;
    QLineEdit *FindBooksEdit;
    QPushButton *FindBooksButton;
    QPushButton *SignUpButton;
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
        SignInButton = new QPushButton(centralWidget);
        SignInButton->setObjectName(QStringLiteral("SignInButton"));
        SignInButton->setGeometry(QRect(500, 20, 101, 31));
        SignInButton->setCursor(QCursor(Qt::PointingHandCursor));
        SignInButton->setStyleSheet(QLatin1String("#SignInButton \n"
"{\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"	background-color: #ddd;\n"
"	color: #222;\n"
"	outline: none;\n"
"}\n"
"#SignInButton:hover \n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(157, 157, 157, 255), stop:0.99435 rgba(241, 241, 241, 255), stop:1 rgba(255, 255, 255, 255));\n"
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
"	background-color: #ddd;\n"
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
"	background-color: #ddd;\n"
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
        AccountComboBox = new QComboBox(MainBar);
        AccountComboBox->setObjectName(QStringLiteral("AccountComboBox"));
        AccountComboBox->setGeometry(QRect(550, 60, 161, 31));
        AccountComboBox->setCursor(QCursor(Qt::PointingHandCursor));
        AccountComboBox->setStyleSheet(QLatin1String("#AccountComboBox \n"
"{\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"	background: #ddd;\n"
"	color: #222;\n"
"	outline: none;\n"
"	padding-left: 5px\n"
"}\n"
"#AccountComboBox:editable {\n"
"    background: white;\n"
"}\n"
"#AccountComboBox:!editable, #AccountComboBox::drop-down:editable {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                 stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"}\n"
"#AccountComboBox:!editable:on, #AccountComboBox::drop-down:editable:on {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #D3D3D3, stop: 0.4 #D8D8D8,\n"
"                                stop: 0.5 #DDDDDD, stop: 1.0 #E1E1E1);\n"
"	outline: none;\n"
"}\n"
"\n"
"#AccountComboBox:on {\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"}\n"
"\n"
"#AccountComboBox::drop-down {\n"
"    subcontrol-origin:"
                        " padding;\n"
"    subcontrol-position: top right;\n"
"    width: 25px;\n"
"\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid; \n"
"    border-top-right-radius: 3px;\n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"#AccountComboBox::down-arrow {\n"
"    image: url(images/drop_down.png);\n"
"}\n"
"\n"
"#AccountComboBox::down-arrow:on { \n"
"    top: 1px;\n"
"    left: 1px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    border: 2px solid darkgray;\n"
"    color: black;\n"
"    selection-background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #111, stop: 1 #333);\n"
"	background: white;\n"
"}"));
        AccountLabel->raise();
        FindBooksEdit->raise();
        FindBooksButton->raise();
        AccountComboBox->raise();
        SignUpButton->raise();
        MainWindow->setCentralWidget(centralWidget);
        MainBar->raise();
        SignInButton->raise();
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
        AccountComboBox->clear();
        AccountComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "...", 0)
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
