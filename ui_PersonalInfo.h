/********************************************************************************
** Form generated from reading UI file 'PersonalInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONALINFO_H
#define UI_PERSONALINFO_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
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

class Ui_personalinfo
{
public:
    QVBoxLayout *verticalLayout_4;
    QLabel *PersonalInfo;
    QVBoxLayout *verticalLayout_3;
    QLabel *name_2;
    QLineEdit *name;
    QGroupBox *Sex;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *male;
    QRadioButton *female;
    QHBoxLayout *horizontalLayout;
    QLabel *dateOfBirth_2;
    QDateEdit *dateOfBirth;
    QVBoxLayout *verticalLayout;
    QLabel *address_2;
    QLineEdit *address;
    QVBoxLayout *verticalLayout_2;
    QLabel *email_2;
    QLineEdit *email;
    QPushButton *Done;

    void setupUi(QDialog *personalinfo)
    {
        if (personalinfo->objectName().isEmpty())
            personalinfo->setObjectName(QStringLiteral("personalinfo"));
        personalinfo->resize(418, 518);
        personalinfo->setStyleSheet(QLatin1String("background: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 64, 46, 255), stop:1 rgba(0, 118, 191, 255));\n"
"font: 15pt \"Myriad Pro Cond\";\n"
"color: #fff;"));
        verticalLayout_4 = new QVBoxLayout(personalinfo);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(40, 40, 40, 40);
        PersonalInfo = new QLabel(personalinfo);
        PersonalInfo->setObjectName(QStringLiteral("PersonalInfo"));
        PersonalInfo->setStyleSheet(QLatin1String("font-size: 20pt;\n"
"background: none;\n"
"font-weight: bold;"));
        PersonalInfo->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(PersonalInfo);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        name_2 = new QLabel(personalinfo);
        name_2->setObjectName(QStringLiteral("name_2"));
        name_2->setStyleSheet(QStringLiteral("background: none;"));

        verticalLayout_3->addWidget(name_2);

        name = new QLineEdit(personalinfo);
        name->setObjectName(QStringLiteral("name"));
        name->setStyleSheet(QLatin1String("height: 35px;\n"
"border: none;\n"
"border-radius: 5px;\n"
"padding-left: 10px;\n"
"background: white;\n"
"font: 15pt \"Myriad Pro Cond\";\n"
"color: #333;"));
        name->setReadOnly(false);

        verticalLayout_3->addWidget(name);


        verticalLayout_4->addLayout(verticalLayout_3);

        Sex = new QGroupBox(personalinfo);
        Sex->setObjectName(QStringLiteral("Sex"));
        Sex->setStyleSheet(QStringLiteral("background: none;"));
        horizontalLayout_2 = new QHBoxLayout(Sex);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        male = new QRadioButton(Sex);
        male->setObjectName(QStringLiteral("male"));
        male->setCheckable(true);
        male->setChecked(false);
        male->setAutoRepeat(false);

        horizontalLayout_2->addWidget(male);

        female = new QRadioButton(Sex);
        female->setObjectName(QStringLiteral("female"));
        female->setAutoRepeat(false);

        horizontalLayout_2->addWidget(female);


        verticalLayout_4->addWidget(Sex);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        dateOfBirth_2 = new QLabel(personalinfo);
        dateOfBirth_2->setObjectName(QStringLiteral("dateOfBirth_2"));
        dateOfBirth_2->setStyleSheet(QStringLiteral("background: none;"));

        horizontalLayout->addWidget(dateOfBirth_2);

        dateOfBirth = new QDateEdit(personalinfo);
        dateOfBirth->setObjectName(QStringLiteral("dateOfBirth"));
        dateOfBirth->setStyleSheet(QLatin1String("background: none;\n"
"height: 35px;\n"
"color: #333;"));
        dateOfBirth->setDate(QDate(1998, 1, 1));

        horizontalLayout->addWidget(dateOfBirth);


        verticalLayout_4->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        address_2 = new QLabel(personalinfo);
        address_2->setObjectName(QStringLiteral("address_2"));
        address_2->setStyleSheet(QStringLiteral("background: none;"));

        verticalLayout->addWidget(address_2);

        address = new QLineEdit(personalinfo);
        address->setObjectName(QStringLiteral("address"));
        address->setStyleSheet(QLatin1String("height: 35px;\n"
"border: none;\n"
"border-radius: 5px;\n"
"padding-left: 10px;\n"
"background: white;\n"
"font: 15pt \"Myriad Pro Cond\";\n"
"color: #333;"));

        verticalLayout->addWidget(address);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        email_2 = new QLabel(personalinfo);
        email_2->setObjectName(QStringLiteral("email_2"));
        email_2->setStyleSheet(QStringLiteral("background: none;"));

        verticalLayout_2->addWidget(email_2);

        email = new QLineEdit(personalinfo);
        email->setObjectName(QStringLiteral("email"));
        email->setStyleSheet(QLatin1String("height: 35px;\n"
"border: none;\n"
"border-radius: 5px;\n"
"padding-left: 10px;\n"
"background: white;\n"
"font: 15pt \"Myriad Pro Cond\";\n"
"color: #333;"));

        verticalLayout_2->addWidget(email);


        verticalLayout_4->addLayout(verticalLayout_2);

        Done = new QPushButton(personalinfo);
        Done->setObjectName(QStringLiteral("Done"));
        Done->setCursor(QCursor(Qt::PointingHandCursor));
        Done->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"	margin-top: 5px;\n"
"	height: 35px;\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"	background-color: #00BFA5;\n"
"	color: #eee;\n"
"	outline: none;\n"
"	font-weight: bold;\n"
"}\n"
"QPushButton:hover \n"
"{\n"
"	background-color: #1DE9B6;\n"
"}"));

        verticalLayout_4->addWidget(Done);

        QWidget::setTabOrder(name, male);
        QWidget::setTabOrder(male, female);
        QWidget::setTabOrder(female, dateOfBirth);

        retranslateUi(personalinfo);

        QMetaObject::connectSlotsByName(personalinfo);
    } // setupUi

    void retranslateUi(QDialog *personalinfo)
    {
        personalinfo->setWindowTitle(QApplication::translate("personalinfo", "Dialog", 0));
        PersonalInfo->setText(QApplication::translate("personalinfo", "Th\303\264ng Tin c\303\241 nh\303\242n", 0));
        name_2->setText(QApplication::translate("personalinfo", "H\341\273\215 v\303\240 t\303\252n :", 0));
        name->setText(QString());
        name->setPlaceholderText(QString());
        Sex->setTitle(QApplication::translate("personalinfo", "Gi\341\273\233i t\303\255nh", 0));
        male->setText(QApplication::translate("personalinfo", "Nam", 0));
        female->setText(QApplication::translate("personalinfo", "N\341\273\257", 0));
        dateOfBirth_2->setText(QApplication::translate("personalinfo", "Ng\303\240y sinh :", 0));
        address_2->setText(QApplication::translate("personalinfo", "\304\220\341\273\213a ch\341\273\211 :", 0));
        email_2->setText(QApplication::translate("personalinfo", "E-mail :", 0));
        Done->setText(QApplication::translate("personalinfo", "Ho\303\240n t\341\272\245t", 0));
    } // retranslateUi

};

namespace Ui {
    class personalinfo: public Ui_personalinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONALINFO_H
