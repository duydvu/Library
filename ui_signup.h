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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *NameEdit;
    QLineEdit *PasswordEdit;
    QLineEdit *ReenterPassword;
    QGroupBox *role;
    QHBoxLayout *horizontalLayout;
    QRadioButton *reader;
    QRadioButton *librarian;
    QPushButton *SignUpButton;

    void setupUi(QDialog *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName(QStringLiteral("SignUp"));
        SignUp->resize(408, 390);
        SignUp->setMinimumSize(QSize(408, 390));
        SignUp->setMaximumSize(QSize(408, 408));
        SignUp->setStyleSheet(QLatin1String("background: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 64, 46, 255), stop:1 rgba(0, 118, 191, 255));\n"
"font: 15pt \"Myriad Pro Cond\";"));
        verticalLayout = new QVBoxLayout(SignUp);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(40, 20, 40, 40);
        label = new QLabel(SignUp);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("background: none;\n"
"image: url(Images/logup.png);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        NameEdit = new QLineEdit(SignUp);
        NameEdit->setObjectName(QStringLiteral("NameEdit"));
        NameEdit->setStyleSheet(QLatin1String("height: 35px;\n"
"border: none;\n"
"border-radius: 5px;\n"
"padding-left: 10px;\n"
"background: white;\n"
"font: 15pt \"Myriad Pro Cond\";"));

        verticalLayout->addWidget(NameEdit);

        PasswordEdit = new QLineEdit(SignUp);
        PasswordEdit->setObjectName(QStringLiteral("PasswordEdit"));
        PasswordEdit->setStyleSheet(QLatin1String("height: 35px;\n"
"border: none;\n"
"border-radius: 5px;\n"
"padding-left: 10px;\n"
"background: white;\n"
"font: 15pt \"Myriad Pro Cond\";"));
        PasswordEdit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(PasswordEdit);

        ReenterPassword = new QLineEdit(SignUp);
        ReenterPassword->setObjectName(QStringLiteral("ReenterPassword"));
        ReenterPassword->setStyleSheet(QLatin1String("height: 35px;\n"
"border: none;\n"
"border-radius: 5px;\n"
"padding-left: 10px;\n"
"background: white;\n"
"font: 15pt \"Myriad Pro Cond\";"));
        ReenterPassword->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(ReenterPassword);

        role = new QGroupBox(SignUp);
        role->setObjectName(QStringLiteral("role"));
        role->setStyleSheet(QLatin1String("background: none;\n"
"color: #fff;\n"
"height: 40px;"));
        role->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        role->setFlat(false);
        horizontalLayout = new QHBoxLayout(role);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        reader = new QRadioButton(role);
        reader->setObjectName(QStringLiteral("reader"));
        reader->setAutoExclusive(true);

        horizontalLayout->addWidget(reader);

        librarian = new QRadioButton(role);
        librarian->setObjectName(QStringLiteral("librarian"));
        librarian->setAutoExclusive(true);

        horizontalLayout->addWidget(librarian);


        verticalLayout->addWidget(role);

        SignUpButton = new QPushButton(SignUp);
        SignUpButton->setObjectName(QStringLiteral("SignUpButton"));
        SignUpButton->setCursor(QCursor(Qt::PointingHandCursor));
        SignUpButton->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"	height: 35px;\n"
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
        SignUpButton->setFlat(false);

        verticalLayout->addWidget(SignUpButton);

        verticalLayout->setStretch(0, 4);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);
        verticalLayout->setStretch(4, 1);
        verticalLayout->setStretch(5, 1);
        QWidget::setTabOrder(NameEdit, PasswordEdit);
        QWidget::setTabOrder(PasswordEdit, ReenterPassword);
        QWidget::setTabOrder(ReenterPassword, reader);
        QWidget::setTabOrder(reader, librarian);
        QWidget::setTabOrder(librarian, SignUpButton);

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QDialog *SignUp)
    {
        SignUp->setWindowTitle(QApplication::translate("SignUp", "Dialog", 0));
        label->setText(QString());
        NameEdit->setPlaceholderText(QApplication::translate("SignUp", "T\303\252n \304\221\304\203ng nh\341\272\255p", 0));
        PasswordEdit->setPlaceholderText(QApplication::translate("SignUp", "M\341\272\255t kh\341\272\251u", 0));
        ReenterPassword->setPlaceholderText(QApplication::translate("SignUp", "Nh\341\272\255p l\341\272\241i m\341\272\255t kh\341\272\251u", 0));
        role->setTitle(QApplication::translate("SignUp", "\304\220\304\203ng k\303\275 v\341\273\233i vai tr\303\262", 0));
        reader->setText(QApplication::translate("SignUp", "\304\220\341\273\231c gi\341\272\243", 0));
        librarian->setText(QApplication::translate("SignUp", "Th\341\273\247 th\306\260", 0));
        SignUpButton->setText(QApplication::translate("SignUp", "\304\220\304\203ng k\303\275", 0));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
