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
    QLabel *label;
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
        Password->setStyleSheet(QStringLiteral("background: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 64, 46, 255), stop:1 rgba(0, 118, 191, 255));"));
        gridLayout = new QGridLayout(Password);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(30, 20, 30, 0);
        label = new QLabel(Password);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("background: none;\n"
"height: 50px;\n"
"image: url(Images/pass.png);"));

        verticalLayout->addWidget(label);

        pass1 = new QLineEdit(Password);
        pass1->setObjectName(QStringLiteral("pass1"));
        pass1->setStyleSheet(QLatin1String("height: 40px;\n"
"border: none;\n"
"border-radius: 5px;\n"
"background-color: #fff;\n"
"font: 15pt \"Myriad Pro Cond\";\n"
"padding-left: 10px;"));
        pass1->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(pass1);

        pass2 = new QLineEdit(Password);
        pass2->setObjectName(QStringLiteral("pass2"));
        pass2->setStyleSheet(QLatin1String("height: 40px;\n"
"border: none;\n"
"border-radius: 5px;\n"
"background-color: #fff;\n"
"font: 15pt \"Myriad Pro Cond\";\n"
"padding-left: 10px;"));
        pass2->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(pass2);

        result = new QLabel(Password);
        result->setObjectName(QStringLiteral("result"));
        result->setStyleSheet(QLatin1String("font: 15pt \"Myriad Pro Cond\";\n"
"background: none;"));
        result->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(result);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);

        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        frame = new QFrame(Password);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral("background: none;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(150, -1, -1, -1);
        accept = new QPushButton(frame);
        accept->setObjectName(QStringLiteral("accept"));
        accept->setCursor(QCursor(Qt::OpenHandCursor));
        accept->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"	height: 30px;\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"	background: #00BFA5;\n"
"	color: #eee;\n"
"	outline: none;\n"
"	font-weight: bold;\n"
"}\n"
"QPushButton:hover \n"
"{\n"
"	background-color: #1DE9B6;\n"
"}"));

        horizontalLayout->addWidget(accept);

        cancel = new QPushButton(frame);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setCursor(QCursor(Qt::PointingHandCursor));
        cancel->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"	height: 30px;\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"	background: #00BFA5;\n"
"	color: #eee;\n"
"	outline: none;\n"
"	font-weight: bold;\n"
"}\n"
"QPushButton:hover \n"
"{\n"
"	background-color: #1DE9B6;\n"
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
        label->setText(QString());
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
