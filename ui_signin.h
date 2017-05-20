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

    void setupUi(QDialog *SignIn)
    {
        if (SignIn->objectName().isEmpty())
            SignIn->setObjectName(QStringLiteral("SignIn"));
        SignIn->resize(400, 300);
        AccountEdit = new QLineEdit(SignIn);
        AccountEdit->setObjectName(QStringLiteral("AccountEdit"));
        AccountEdit->setGeometry(QRect(30, 40, 341, 41));
        AccountEdit->setStyleSheet(QLatin1String("border-width: 0px;\n"
"border-radius: 12px;\n"
"background-color: white;\n"
"padding-left: 12px;\n"
"font-size: 14px;"));
        PasswordEdit = new QLineEdit(SignIn);
        PasswordEdit->setObjectName(QStringLiteral("PasswordEdit"));
        PasswordEdit->setGeometry(QRect(30, 100, 341, 41));
        PasswordEdit->setStyleSheet(QLatin1String("border-width: 0px;\n"
"border-radius: 12px;\n"
"background-color: white;\n"
"padding-left: 12px;\n"
"font-size: 14px"));
        PasswordEdit->setEchoMode(QLineEdit::Password);
        LogInButton = new QPushButton(SignIn);
        LogInButton->setObjectName(QStringLiteral("LogInButton"));
        LogInButton->setGeometry(QRect(30, 160, 341, 41));
        LogInButton->setStyleSheet(QLatin1String("#LogInButton \n"
"{\n"
"	border-width: 0px;\n"
"	border-radius: 10px;\n"
"	font: 63 12pt \"Myriad Pro Light\";\n"
"	background-color: #03FF9B;\n"
"	color: white;\n"
"	outline: none;\n"
"}\n"
"#LogInButton:hover \n"
"{\n"
"	background-color: #01E58A;\n"
"}"));
        LogInButton->setFlat(false);
        ResultLabel = new QLabel(SignIn);
        ResultLabel->setObjectName(QStringLiteral("ResultLabel"));
        ResultLabel->setGeometry(QRect(30, 220, 341, 41));
        ResultLabel->setStyleSheet(QLatin1String("text-align: center;\n"
"font: 63 12pt \"Myriad Pro Light\";"));
        ResultLabel->setAlignment(Qt::AlignCenter);

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
    } // retranslateUi

};

namespace Ui {
    class SignIn: public Ui_SignIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
