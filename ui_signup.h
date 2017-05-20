/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QPushButton *SignUpButton;
    QLineEdit *NameEdit;
    QLineEdit *PasswordEdit;

    void setupUi(QDialog *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName(QStringLiteral("SignUp"));
        SignUp->resize(400, 300);
        SignUpButton = new QPushButton(SignUp);
        SignUpButton->setObjectName(QStringLiteral("SignUpButton"));
        SignUpButton->setGeometry(QRect(140, 140, 131, 31));
        SignUpButton->setStyleSheet(QLatin1String("#SignUpButton{\n"
"	font: 63 12pt \"Myriad Pro Light\";\n"
"	border-radius: 5px;\n"
"	background: #ddd;\n"
"}\n"
"#SignUpButton:hover {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(157, 157, 157, 255), stop:0.99435 rgba(241, 241, 241, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        SignUpButton->setFlat(false);
        NameEdit = new QLineEdit(SignUp);
        NameEdit->setObjectName(QStringLiteral("NameEdit"));
        NameEdit->setGeometry(QRect(90, 40, 231, 31));
        NameEdit->setStyleSheet(QLatin1String("border-width: 0px;\n"
"border-radius: 12px;\n"
"background-color: white;\n"
"padding-left: 12px;\n"
"font-size: 14px;\n"
"font: 63 12pt \"Myriad Pro Light\";"));
        PasswordEdit = new QLineEdit(SignUp);
        PasswordEdit->setObjectName(QStringLiteral("PasswordEdit"));
        PasswordEdit->setGeometry(QRect(90, 90, 231, 31));
        PasswordEdit->setStyleSheet(QLatin1String("border-width: 0px;\n"
"border-radius: 12px;\n"
"background-color: white;\n"
"padding-left: 12px;\n"
"font-size: 14px;\n"
"font: 63 12pt \"Myriad Pro Light\";"));
        PasswordEdit->setEchoMode(QLineEdit::Password);
        QWidget::setTabOrder(NameEdit, PasswordEdit);
        QWidget::setTabOrder(PasswordEdit, SignUpButton);

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QDialog *SignUp)
    {
        SignUp->setWindowTitle(QApplication::translate("SignUp", "Dialog", 0));
        SignUpButton->setText(QApplication::translate("SignUp", "\304\220\304\203ng k\303\275", 0));
        NameEdit->setPlaceholderText(QApplication::translate("SignUp", "T\303\252n \304\221\304\203ng nh\341\272\255p", 0));
        PasswordEdit->setPlaceholderText(QApplication::translate("SignUp", "M\341\272\255t kh\341\272\251u", 0));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
