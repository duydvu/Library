/********************************************************************************
** Form generated from reading UI file 'password.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORD_H
#define UI_PASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Password
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLineEdit *pass1;
    QLineEdit *pass2;
    QLabel *result;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *accept;
    QPushButton *cancel;

    void setupUi(QDialog *Password)
    {
        if (Password->objectName().isEmpty())
            Password->setObjectName(QStringLiteral("Password"));
        Password->resize(400, 300);
        Password->setStyleSheet(QStringLiteral("background-color: #1DE9B6;"));
        gridLayout = new QGridLayout(Password);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(30, 60, 30, 0);
        pass1 = new QLineEdit(Password);
        pass1->setObjectName(QStringLiteral("pass1"));
        pass1->setStyleSheet(QLatin1String("height: 40px;\n"
"border: none;\n"
"border-radius: 5px;\n"
"background-color: #fff;\n"
"font: 15pt \"Myriad Pro Cond\";"));
        pass1->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(pass1);

        pass2 = new QLineEdit(Password);
        pass2->setObjectName(QStringLiteral("pass2"));
        pass2->setStyleSheet(QLatin1String("height: 40px;\n"
"border: none;\n"
"border-radius: 5px;\n"
"background-color: #fff;\n"
"font: 15pt \"Myriad Pro Cond\";"));
        pass2->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(pass2);

        result = new QLabel(Password);
        result->setObjectName(QStringLiteral("result"));
        result->setStyleSheet(QStringLiteral("font: 15pt \"Myriad Pro Cond\";"));
        result->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(result);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);

        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        frame = new QFrame(Password);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(150, -1, -1, -1);
        accept = new QPushButton(frame);
        accept->setObjectName(QStringLiteral("accept"));
        accept->setStyleSheet(QLatin1String("#accept \n"
"{\n"
"	height: 30px;\n"
"	border-radius: 4px;\n"
"	border: none;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"	background: #6A1B9A;\n"
"	color: #fff;\n"
"	outline: none;\n"
"}\n"
"#accept:hover \n"
"{\n"
"	background: #8E24AA;\n"
"}\n"
"#accept:pressed \n"
"{\n"
"	padding-top: 2px;\n"
"}"));

        horizontalLayout->addWidget(accept);

        cancel = new QPushButton(frame);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setStyleSheet(QLatin1String("#cancel \n"
"{\n"
"	height: 30px;\n"
"	border-radius: 4px;\n"
"	border: none;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"	background: #6A1B9A;\n"
"	color: #fff;\n"
"	outline: none;\n"
"}\n"
"#cancel:hover \n"
"{\n"
"	background: #8E24AA;\n"
"}\n"
"#cancel:pressed \n"
"{\n"
"	padding-top: 2px;\n"
"}"));

        horizontalLayout->addWidget(cancel);


        gridLayout->addWidget(frame, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 6);
        gridLayout->setRowStretch(1, 1);

        retranslateUi(Password);

        QMetaObject::connectSlotsByName(Password);
    } // setupUi

    void retranslateUi(QDialog *Password)
    {
        Password->setWindowTitle(QApplication::translate("Password", "Dialog", 0));
        pass1->setPlaceholderText(QApplication::translate("Password", "M\341\272\255t kh\341\272\251u m\341\273\233i", 0));
        pass2->setPlaceholderText(QApplication::translate("Password", "Nh\341\272\255p l\341\272\241i m\341\272\255t kh\341\272\251u m\341\273\233i", 0));
        result->setText(QString());
        accept->setText(QApplication::translate("Password", "Ch\341\272\245p nh\341\272\255n", 0));
        cancel->setText(QApplication::translate("Password", "H\341\273\247y", 0));
    } // retranslateUi

};

namespace Ui {
    class Password: public Ui_Password {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORD_H
