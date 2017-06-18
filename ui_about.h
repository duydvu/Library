/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;

    void setupUi(QWidget *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QStringLiteral("About"));
        About->resize(647, 408);
        About->setStyleSheet(QLatin1String("font: 15pt \"Myriad Pro Cond\";\n"
"background-color: #1DE9B6;"));
        gridLayout = new QGridLayout(About);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(About);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("image: url(Libpro.ico);"));

        verticalLayout->addWidget(label);

        label_3 = new QLabel(About);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 1);

        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(About);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("margin-top: 40px;\n"
"font: 30pt \"Lobster\";\n"
"color: #0277BD;"));

        verticalLayout_2->addWidget(label_2);

        label_4 = new QLabel(About);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_7 = new QLabel(About);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(About);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QStringLiteral("font: 14pt \".Vn3DH\";"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_8);

        label_5 = new QLabel(About);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_6 = new QLabel(About);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_6);

        horizontalLayout->setStretch(0, 5);

        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QWidget *About)
    {
        About->setWindowTitle(QApplication::translate("About", "About LIBPRO", 0));
        label->setText(QString());
        label_3->setText(QApplication::translate("About", "Release Build 18-06-2017", 0));
        label_2->setText(QApplication::translate("About", "LIBPRO", 0));
        label_4->setText(QApplication::translate("About", "Ph\341\272\247n m\341\273\201m qu\341\272\243n l\303\275 th\306\260 vi\341\273\207n h\303\240ng \304\221\341\272\247u!", 0));
        label_7->setText(QApplication::translate("About", "S\341\272\243n ph\341\272\251m thu\341\273\231c v\341\273\201: Nh\303\263m 2 l\341\273\233p L02 - B\341\273\231 m\303\264n KTLT", 0));
        label_8->setText(QApplication::translate("About", "DNT Group", 0));
        label_5->setText(QString());
        label_6->setText(QApplication::translate("About", "Tr\306\260\341\273\235ng \304\220H B\303\241ch Khoa TP.HCM, c\306\241 s\341\273\237 D\304\251 An", 0));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
