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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_6;

    void setupUi(QWidget *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QStringLiteral("About"));
        About->resize(647, 408);
        About->setStyleSheet(QLatin1String("font: 15pt \"Myriad Pro Cond\";\n"
"color: #fff;\n"
"background: url(Images/Background.jpg) no-repeat center center;"));
        horizontalLayout = new QHBoxLayout(About);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        frame_2 = new QFrame(About);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setStyleSheet(QStringLiteral("background: rgba(0,0,0,80);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("background: none;image: url(Libpro.ico);"));

        verticalLayout->addWidget(label);

        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("background: none;margin-bottom: 10px;"));
        label_3->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout->addWidget(label_3);

        verticalLayout->setStretch(0, 5);
        verticalLayout->setStretch(1, 1);

        horizontalLayout->addWidget(frame_2);

        frame = new QFrame(About);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral("background: rgba(0,0,0,80);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("margin-top: 40px;\n"
"font: 30pt \"Lobster\";\n"
"color: #0277BD;\n"
"background: none;"));

        verticalLayout_2->addWidget(label_2);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("background: none;"));

        verticalLayout_2->addWidget(label_4);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("background: none;"));

        verticalLayout_2->addWidget(label_7);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("background: none;"));

        verticalLayout_2->addWidget(label_5);

        label_8 = new QLabel(frame);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QStringLiteral("background: none;font: 14pt \".Vn3DH\";"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_8);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QStringLiteral("background: none;"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_6);


        horizontalLayout->addWidget(frame);


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
        label_5->setText(QString());
        label_8->setText(QApplication::translate("About", "DNT Group", 0));
        label_6->setText(QApplication::translate("About", "Tr\306\260\341\273\235ng \304\220H B\303\241ch Khoa TP.HCM, c\306\241 s\341\273\237 D\304\251 An", 0));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
