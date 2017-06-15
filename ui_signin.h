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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SignIn
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *AccountEdit;
    QLineEdit *PasswordEdit;
    QPushButton *LogInButton;
    QLabel *ResultLabel;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SignIn)
    {
        if (SignIn->objectName().isEmpty())
            SignIn->setObjectName(QStringLiteral("SignIn"));
        SignIn->resize(480, 360);
        horizontalLayout_2 = new QHBoxLayout(SignIn);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(30);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(40, 0, 40, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        AccountEdit = new QLineEdit(SignIn);
        AccountEdit->setObjectName(QStringLiteral("AccountEdit"));
        AccountEdit->setMinimumSize(QSize(152, 30));
        AccountEdit->setStyleSheet(QLatin1String("height: 30px;\n"
"border-width: 0px;\n"
"border-radius: 16px;\n"
"background-color: white;\n"
"padding-left: 12px;\n"
"font: 15pt \"Myriad Pro Cond\";"));

        verticalLayout->addWidget(AccountEdit);

        PasswordEdit = new QLineEdit(SignIn);
        PasswordEdit->setObjectName(QStringLiteral("PasswordEdit"));
        PasswordEdit->setMinimumSize(QSize(152, 30));
        PasswordEdit->setStyleSheet(QLatin1String("height: 30px;\n"
"border-width: 0px;\n"
"border-radius: 16px;\n"
"background-color: white;\n"
"padding-left: 12px;\n"
"font: 15pt \"Myriad Pro Cond\";"));
        PasswordEdit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(PasswordEdit);

        LogInButton = new QPushButton(SignIn);
        LogInButton->setObjectName(QStringLiteral("LogInButton"));
        LogInButton->setMinimumSize(QSize(152, 30));
        LogInButton->setCursor(QCursor(Qt::PointingHandCursor));
        LogInButton->setStyleSheet(QLatin1String("#LogInButton \n"
"{\n"
"	height:30px;\n"
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

        verticalLayout->addWidget(LogInButton);

        ResultLabel = new QLabel(SignIn);
        ResultLabel->setObjectName(QStringLiteral("ResultLabel"));
        ResultLabel->setStyleSheet(QLatin1String("height: 30px;\n"
"text-align: center;\n"
"font: 63 12pt \"Myriad Pro Light\";"));
        ResultLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(ResultLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(1, 2);
        verticalLayout->setStretch(2, 2);
        verticalLayout->setStretch(3, 2);
        verticalLayout->setStretch(4, 2);
        verticalLayout->setStretch(5, 1);

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
