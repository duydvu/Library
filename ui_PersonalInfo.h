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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_personalinfo
{
public:
    QLabel *label;
    QFrame *line;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *name;
    QFrame *line_2;
    QLineEdit *CMND;
    QLabel *label_4;
    QFrame *line_3;
    QLabel *label_5;
    QRadioButton *male;
    QRadioButton *female;
    QFrame *line_4;
    QLabel *label_6;
    QDateEdit *dateEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *personalinfo)
    {
        if (personalinfo->objectName().isEmpty())
            personalinfo->setObjectName(QStringLiteral("personalinfo"));
        personalinfo->resize(400, 375);
        label = new QLabel(personalinfo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 20, 141, 16));
        line = new QFrame(personalinfo);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(40, 80, 311, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(personalinfo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 70, 61, 16));
        label_3 = new QLabel(personalinfo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 90, 221, 16));
        name = new QLineEdit(personalinfo);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(40, 90, 311, 31));
        name->setStyleSheet(QLatin1String("border-width: 0px;\n"
"border-radius: 12px;\n"
"background-color: white;\n"
"padding-left: 12px;\n"
"font-size: 14px;\n"
"font: 63 12pt \"Myriad Pro Light\";"));
        name->setReadOnly(false);
        line_2 = new QFrame(personalinfo);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(40, 250, 311, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        CMND = new QLineEdit(personalinfo);
        CMND->setObjectName(QStringLiteral("CMND"));
        CMND->setGeometry(QRect(40, 270, 311, 31));
        CMND->setStyleSheet(QLatin1String("border-width: 0px;\n"
"border-radius: 12px;\n"
"background-color: white;\n"
"padding-left: 12px;\n"
"font-size: 14px;\n"
"font: 63 12pt \"Myriad Pro Light\";"));
        CMND->setReadOnly(false);
        label_4 = new QLabel(personalinfo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 240, 101, 16));
        line_3 = new QFrame(personalinfo);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(40, 140, 311, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(personalinfo);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 130, 101, 16));
        male = new QRadioButton(personalinfo);
        male->setObjectName(QStringLiteral("male"));
        male->setGeometry(QRect(70, 150, 82, 17));
        female = new QRadioButton(personalinfo);
        female->setObjectName(QStringLiteral("female"));
        female->setGeometry(QRect(200, 150, 82, 17));
        line_4 = new QFrame(personalinfo);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(40, 190, 311, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(personalinfo);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 180, 101, 16));
        dateEdit = new QDateEdit(personalinfo);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(210, 210, 141, 22));
        dateEdit->setDate(QDate(1998, 1, 1));
        pushButton = new QPushButton(personalinfo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 320, 111, 41));

        retranslateUi(personalinfo);

        QMetaObject::connectSlotsByName(personalinfo);
    } // setupUi

    void retranslateUi(QDialog *personalinfo)
    {
        personalinfo->setWindowTitle(QApplication::translate("personalinfo", "Dialog", 0));
        label->setText(QApplication::translate("personalinfo", "Th\303\264ng Tin c\303\241 nh\303\242n", 0));
        label_2->setText(QApplication::translate("personalinfo", "H\341\273\215 v\303\240 t\303\252n:", 0));
        label_3->setText(QString());
        name->setText(QString());
        name->setPlaceholderText(QString());
        CMND->setText(QString());
        CMND->setPlaceholderText(QString());
        label_4->setText(QApplication::translate("personalinfo", "Ch\341\273\251ng minh th\306\260:", 0));
        label_5->setText(QApplication::translate("personalinfo", "Gi\341\273\233i t\303\255nh:", 0));
        male->setText(QApplication::translate("personalinfo", "Nam", 0));
        female->setText(QApplication::translate("personalinfo", "N\341\273\257", 0));
        label_6->setText(QApplication::translate("personalinfo", "Ng\303\240y sinh:", 0));
        pushButton->setText(QApplication::translate("personalinfo", "Ho\303\240n t\341\272\245t", 0));
    } // retranslateUi

};

namespace Ui {
    class personalinfo: public Ui_personalinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONALINFO_H
