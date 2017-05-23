/********************************************************************************
** Form generated from reading UI file 'signin.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_H
#define UI_SIGNIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SignIn
{
public:
    QLineEdit *AccountEdit;
    QLineEdit *PasswordEdit;
    QPushButton *LogInButton;
    QLabel *ResultLabel;
    QComboBox *RoleComboBox;

    void setupUi(QDialog *SignIn)
    {
        if (SignIn->objectName().isEmpty())
            SignIn->setObjectName(QStringLiteral("SignIn"));
        SignIn->resize(481, 364);
        AccountEdit = new QLineEdit(SignIn);
        AccountEdit->setObjectName(QStringLiteral("AccountEdit"));
        AccountEdit->setGeometry(QRect(70, 40, 341, 41));
        AccountEdit->setStyleSheet(QLatin1String("border-width: 0px;\n"
"border-radius: 16px;\n"
"background-color: white;\n"
"padding-left: 12px;\n"
"font: 15pt \"Myriad Pro Cond\";"));
        PasswordEdit = new QLineEdit(SignIn);
        PasswordEdit->setObjectName(QStringLiteral("PasswordEdit"));
        PasswordEdit->setGeometry(QRect(70, 100, 341, 41));
        PasswordEdit->setStyleSheet(QLatin1String("border-width: 0px;\n"
"border-radius: 16px;\n"
"background-color: white;\n"
"padding-left: 12px;\n"
"font: 15pt \"Myriad Pro Cond\";"));
        PasswordEdit->setEchoMode(QLineEdit::Password);
        LogInButton = new QPushButton(SignIn);
        LogInButton->setObjectName(QStringLiteral("LogInButton"));
        LogInButton->setGeometry(QRect(70, 220, 341, 41));
        LogInButton->setCursor(QCursor(Qt::PointingHandCursor));
        LogInButton->setStyleSheet(QLatin1String("#LogInButton \n"
"{\n"
"	border-width: 0px;\n"
"	border-radius: 16px;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"	background: #00ff80;\n"
"	color: #555;\n"
"	outline: none;\n"
"	font-weight: bold;\n"
"}\n"
"#LogInButton:hover \n"
"{\n"
"	background-color: #66ffb2;\n"
"	color: #000;\n"
"}"));
        LogInButton->setFlat(false);
        ResultLabel = new QLabel(SignIn);
        ResultLabel->setObjectName(QStringLiteral("ResultLabel"));
        ResultLabel->setGeometry(QRect(70, 290, 341, 41));
        ResultLabel->setStyleSheet(QLatin1String("text-align: center;\n"
"font: 63 12pt \"Myriad Pro Light\";"));
        ResultLabel->setAlignment(Qt::AlignCenter);
        RoleComboBox = new QComboBox(SignIn);
        RoleComboBox->setObjectName(QStringLiteral("RoleComboBox"));
        RoleComboBox->setGeometry(QRect(70, 160, 341, 41));
        RoleComboBox->setCursor(QCursor(Qt::PointingHandCursor));
        RoleComboBox->setStyleSheet(QLatin1String("#RoleComboBox \n"
"{\n"
"	border: 1px solid darkgray;\n"
"	border-radius: 16px;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"	color: #222;\n"
"	outline: none;\n"
"	padding-left: 20px;\n"
"	font-weight: bold;\n"
"}\n"
"#RoleComboBox:!editable, #RoleComboBox::drop-down:editable {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #eee, stop: 0.4 #ddd,\n"
"                                stop: 0.5 #d8d8d8, stop: 1.0 #ddd);\n"
"}\n"
"#RoleComboBox:!editable:on, #RoleComboBox::drop-down:editable:on {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #e9e9e9, stop: 0.4 #D8D8D8,\n"
"                                stop: 0.5 #DDDDDD, stop: 1.0 #e9e9e9);\n"
"	outline: none;\n"
"}\n"
"\n"
"#RoleComboBox:on {\n"
"    padding-top: 3px;\n"
"    padding-left: 20px;\n"
"}\n"
"\n"
"#RoleComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 30px;\n"
"   	bord"
                        "er-left: 2px solid darkgray;\n"
"}\n"
"#RoleComboBox::down-arrow {\n"
"    image: url(images/drop_down.png);\n"
"}\n"
"\n"
"#RoleComboBox::down-arrow:on { \n"
"    top: 1px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    border: 1px solid darkgray;\n"
"    color: black;\n"
"    selection-background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #111, stop: 1 #555);\n"
"	background: white;\n"
"	outline: none;\n"
"	padding-left: 20px;\n"
"}"));

        retranslateUi(SignIn);

        LogInButton->setDefault(false);


        QMetaObject::connectSlotsByName(SignIn);
    } // setupUi

    void retranslateUi(QDialog *SignIn)
    {
        SignIn->setWindowTitle(QApplication::translate("SignIn", "Dialog", 0));
        AccountEdit->setPlaceholderText(QApplication::translate("SignIn", "T\303\252n t\303\240i kho\341\272\243n", 0));
        PasswordEdit->setPlaceholderText(QApplication::translate("SignIn", "M\341\272\255t kh\341\272\251u", 0));
        LogInButton->setText(QApplication::translate("SignIn", "\304\220\304\203ng nh\341\272\255p", 0));
        ResultLabel->setText(QString());
        RoleComboBox->clear();
        RoleComboBox->insertItems(0, QStringList()
         << QApplication::translate("SignIn", "Vai tr\303\262...", 0)
         << QApplication::translate("SignIn", "\304\220\341\273\231c gi\341\272\243", 0)
         << QApplication::translate("SignIn", "Th\341\273\247 th\306\260", 0)
         << QApplication::translate("SignIn", "Admin", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class SignIn: public Ui_SignIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
