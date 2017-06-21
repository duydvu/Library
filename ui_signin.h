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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SignIn
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *AccountEdit;
    QLineEdit *PasswordEdit;
    QPushButton *LogInButton;
    QLabel *ResultLabel;

    void setupUi(QDialog *SignIn)
    {
        if (SignIn->objectName().isEmpty())
            SignIn->setObjectName(QStringLiteral("SignIn"));
        SignIn->resize(464, 360);
        SignIn->setStyleSheet(QLatin1String("background: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 64, 46, 255), stop:1 rgba(0, 118, 191, 255));\n"
"font: 15pt \"Myriad Pro Cond\";"));
        horizontalLayout_2 = new QHBoxLayout(SignIn);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(60, 20, 60, 20);
        label = new QLabel(SignIn);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("image: url(Images/login.png);\n"
"background: none;"));

        verticalLayout->addWidget(label);

        AccountEdit = new QLineEdit(SignIn);
        AccountEdit->setObjectName(QStringLiteral("AccountEdit"));
        AccountEdit->setMinimumSize(QSize(152, 30));
        AccountEdit->setStyleSheet(QLatin1String("height: 40px;\n"
"border: none;\n"
"border-radius: 5px;\n"
"padding-left: 10px;\n"
"background: white;\n"
"font: 15pt \"Myriad Pro Cond\";"));

        verticalLayout->addWidget(AccountEdit);

        PasswordEdit = new QLineEdit(SignIn);
        PasswordEdit->setObjectName(QStringLiteral("PasswordEdit"));
        PasswordEdit->setMinimumSize(QSize(152, 30));
        PasswordEdit->setStyleSheet(QLatin1String("height: 40px;\n"
"border: none;\n"
"border-radius: 5px;\n"
"padding-left: 10px;\n"
"background: white;\n"
"font: 15pt \"Myriad Pro Cond\";"));
        PasswordEdit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(PasswordEdit);

        LogInButton = new QPushButton(SignIn);
        LogInButton->setObjectName(QStringLiteral("LogInButton"));
        LogInButton->setMinimumSize(QSize(152, 30));
        LogInButton->setCursor(QCursor(Qt::PointingHandCursor));
        LogInButton->setStyleSheet(QLatin1String("#LogInButton \n"
"{\n"
"	height:40px;\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"	background: #00BFA5;\n"
"	color: #eee;\n"
"	outline: none;\n"
"	font-weight: bold;\n"
"}\n"
"#LogInButton:hover \n"
"{\n"
"	background-color: #1DE9B6;\n"
"}"));
        LogInButton->setFlat(false);

        verticalLayout->addWidget(LogInButton);

        ResultLabel = new QLabel(SignIn);
        ResultLabel->setObjectName(QStringLiteral("ResultLabel"));
        ResultLabel->setStyleSheet(QLatin1String("height: 30px;\n"
"text-align: center;\n"
"font: 12pt \"Myriad Pro Light\";\n"
"background: none;"));
        ResultLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(ResultLabel);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);
        verticalLayout->setStretch(4, 1);

        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout->setStretch(0, 5);

        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(SignIn);

        LogInButton->setDefault(false);


        QMetaObject::connectSlotsByName(SignIn);
    } // setupUi

    void retranslateUi(QDialog *SignIn)
    {
        SignIn->setWindowTitle(QApplication::translate("SignIn", "Dialog", 0));
        label->setText(QString());
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
