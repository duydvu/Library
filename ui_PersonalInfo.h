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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_personalinfo
{
public:
    QLabel *PersonalInfo;
    QLabel *name_2;
    QLineEdit *name;
    QLabel *dateOfBirth_2;
    QDateEdit *dateOfBirth;
    QLabel *address_2;
    QLabel *email_2;
    QPushButton *Done;
    QGroupBox *Sex;
    QRadioButton *male;
    QRadioButton *female;
    QLineEdit *address;
    QLineEdit *email;

    void setupUi(QDialog *personalinfo)
    {
        if (personalinfo->objectName().isEmpty())
            personalinfo->setObjectName(QStringLiteral("personalinfo"));
        personalinfo->resize(400, 431);
        PersonalInfo = new QLabel(personalinfo);
        PersonalInfo->setObjectName(QStringLiteral("PersonalInfo"));
        PersonalInfo->setGeometry(QRect(150, 20, 141, 16));
        name_2 = new QLabel(personalinfo);
        name_2->setObjectName(QStringLiteral("name_2"));
        name_2->setGeometry(QRect(40, 50, 61, 16));
        name = new QLineEdit(personalinfo);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(40, 70, 311, 31));
        name->setStyleSheet(QLatin1String("border-width: 0px;\n"
"border-radius: 12px;\n"
"background-color: white;\n"
"padding-left: 12px;\n"
"font-size: 14px;\n"
"font: 63 12pt \"Myriad Pro Light\";"));
        name->setReadOnly(false);
        dateOfBirth_2 = new QLabel(personalinfo);
        dateOfBirth_2->setObjectName(QStringLiteral("dateOfBirth_2"));
        dateOfBirth_2->setGeometry(QRect(40, 160, 101, 16));
        dateOfBirth = new QDateEdit(personalinfo);
        dateOfBirth->setObjectName(QStringLiteral("dateOfBirth"));
        dateOfBirth->setGeometry(QRect(210, 180, 141, 22));
        dateOfBirth->setDate(QDate(1998, 1, 1));
        address_2 = new QLabel(personalinfo);
        address_2->setObjectName(QStringLiteral("address_2"));
        address_2->setGeometry(QRect(40, 210, 101, 16));
        email_2 = new QLabel(personalinfo);
        email_2->setObjectName(QStringLiteral("email_2"));
        email_2->setGeometry(QRect(40, 270, 101, 16));
        Done = new QPushButton(personalinfo);
        Done->setObjectName(QStringLiteral("Done"));
        Done->setGeometry(QRect(140, 350, 111, 41));
        Sex = new QGroupBox(personalinfo);
        Sex->setObjectName(QStringLiteral("Sex"));
        Sex->setGeometry(QRect(40, 110, 311, 51));
        male = new QRadioButton(Sex);
        male->setObjectName(QStringLiteral("male"));
        male->setGeometry(QRect(60, 20, 82, 17));
        male->setCheckable(true);
        male->setChecked(false);
        male->setAutoRepeat(false);
        female = new QRadioButton(Sex);
        female->setObjectName(QStringLiteral("female"));
        female->setGeometry(QRect(190, 20, 82, 17));
        female->setAutoRepeat(false);
        address = new QLineEdit(personalinfo);
        address->setObjectName(QStringLiteral("address"));
        address->setGeometry(QRect(40, 230, 301, 31));
        email = new QLineEdit(personalinfo);
        email->setObjectName(QStringLiteral("email"));
        email->setGeometry(QRect(40, 290, 301, 31));
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
        name_2->setText(QApplication::translate("personalinfo", "H\341\273\215 v\303\240 t\303\252n:", 0));
        name->setText(QString());
        name->setPlaceholderText(QString());
        dateOfBirth_2->setText(QApplication::translate("personalinfo", "Ng\303\240y sinh:", 0));
        address_2->setText(QApplication::translate("personalinfo", "\304\220\341\273\213a ch\341\273\211:", 0));
        email_2->setText(QApplication::translate("personalinfo", "E-mail", 0));
        Done->setText(QApplication::translate("personalinfo", "Ho\303\240n t\341\272\245t", 0));
        Sex->setTitle(QApplication::translate("personalinfo", "Gi\341\273\233i t\303\255nh", 0));
        male->setText(QApplication::translate("personalinfo", "Nam", 0));
        female->setText(QApplication::translate("personalinfo", "N\341\273\257", 0));
    } // retranslateUi

};

namespace Ui {
    class personalinfo: public Ui_personalinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONALINFO_H
