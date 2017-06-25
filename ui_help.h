/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Help
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QTextBrowser *textBrowser_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QTextBrowser *textBrowser_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QTextBrowser *textBrowser_4;

    void setupUi(QWidget *Help)
    {
        if (Help->objectName().isEmpty())
            Help->setObjectName(QStringLiteral("Help"));
        Help->resize(757, 456);
        Help->setMinimumSize(QSize(757, 456));
        Help->setMaximumSize(QSize(757, 456));
        Help->setStyleSheet(QLatin1String("font: 15pt \"Myriad Pro Cond\";\n"
"background: url(Images/Background.jpg) no-repeat center center;\n"
"color: #fff;"));
        gridLayout = new QGridLayout(Help);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Help);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Myriad Pro Cond"));
        font.setPointSize(25);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(true);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("font: 25pt \"Myriad Pro Cond\";\n"
"background: none;"));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(Help);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("background: none;"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(Help);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(93, 75));
        label_3->setStyleSheet(QLatin1String("border-width: 0px;\n"
"border-right: 5px solid rgba(0,0,0,160);\n"
"border-top-left-radius: 20px;\n"
"background-color: rgba(0,0,0,80);\n"
"color: #fff;"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        textBrowser = new QTextBrowser(Help);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        QFont font1;
        font1.setFamily(QStringLiteral("Myriad Pro Cond"));
        font1.setPointSize(15);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        textBrowser->setFont(font1);
        textBrowser->setStyleSheet(QLatin1String("background: rgba(255,255,255,150);\n"
"border: none;\n"
"border-top-right-radius: 20px;\n"
"color: #000;"));

        horizontalLayout->addWidget(textBrowser);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 4);

        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_4 = new QLabel(Help);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(92, 74));
        label_4->setStyleSheet(QLatin1String("border-width: 0px;\n"
"border-right: 5px solid rgba(0,0,0,160);\n"
"background-color: rgba(0,0,0,80);\n"
"color: #fff;"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);


        horizontalLayout_2->addLayout(verticalLayout_2);

        textBrowser_2 = new QTextBrowser(Help);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setStyleSheet(QLatin1String("background: rgba(255,255,255,150);\n"
"border: none;\n"
"color: #000;"));

        horizontalLayout_2->addWidget(textBrowser_2);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 4);

        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_7 = new QLabel(Help);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(92, 75));
        label_7->setStyleSheet(QLatin1String("border-width: 0px;\n"
"border-right: 5px solid rgba(0,0,0,160);\n"
"background-color: rgba(0,0,0,80);\n"
"color: #fff;"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_7);


        horizontalLayout_3->addLayout(verticalLayout_3);

        textBrowser_3 = new QTextBrowser(Help);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setStyleSheet(QLatin1String("background: rgba(255,255,255,150);\n"
"border: none;\n"
"color: #000;"));

        horizontalLayout_3->addWidget(textBrowser_3);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 4);

        gridLayout->addLayout(horizontalLayout_3, 4, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_9 = new QLabel(Help);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(92, 75));
        label_9->setStyleSheet(QLatin1String("border-width: 0px;\n"
"border-right: 5px solid rgba(0,0,0,160);\n"
"border-bottom-left-radius: 20px;\n"
"background-color: rgba(0,0,0,80);\n"
"color: #fff;"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_9);


        horizontalLayout_4->addLayout(verticalLayout_4);

        textBrowser_4 = new QTextBrowser(Help);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));
        textBrowser_4->setFont(font1);
        textBrowser_4->setStyleSheet(QLatin1String("background: rgba(255,255,255,150);\n"
"border: none;\n"
"border-bottom-right-radius: 20px;\n"
"color: #000;"));

        horizontalLayout_4->addWidget(textBrowser_4);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 4);

        gridLayout->addLayout(horizontalLayout_4, 5, 0, 1, 1);


        retranslateUi(Help);

        QMetaObject::connectSlotsByName(Help);
    } // setupUi

    void retranslateUi(QWidget *Help)
    {
        Help->setWindowTitle(QApplication::translate("Help", "Help", 0));
        label->setText(QApplication::translate("Help", "TR\341\273\242 GI\303\232P", 0));
        label_2->setText(QApplication::translate("Help", "V\341\273\233i LIBPRO, b\341\272\241n c\303\263 th\341\273\203: ", 0));
        label_3->setText(QApplication::translate("Help", "T\303\254m ki\341\272\277m s\303\241ch", 0));
        textBrowser->setHtml(QApplication::translate("Help", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Myriad Pro Cond'; font-size:15pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt;\">Ch\341\273\211 c\341\272\247n nh\341\272\255p th\303\264ng tin v\303\240o c\341\273\255a s\341\273\225 t\303\254m ki\341\272\277m v\303\240 nh\341\272\245n &quot;T\303\254m&quot; \304\221\341\273\203 t\303\254m ki\341\272\277m s\303\241ch b\341\272\241n mong mu\341\273\221n tr\306\260\341\273\233c khi \304\221\304\203ng k\303\275 m\306\260\341\273\243n.</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("Help", "\304\220\304\203ng nh\341\272\255p", 0));
        textBrowser_2->setHtml(QApplication::translate("Help", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Myriad Pro Cond'; font-size:15pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt;\">\304\220\304\203ng nh\341\272\255p theo t\303\240i kho\341\272\243n \304\221\306\260\341\273\243c cung c\341\272\245p, t\303\271y theo ki\341\273\203u t\303\240i kho\341\272\243n \304\221\303\243 \304\221\306\260\341\273\243c c\341\272\245p s\341\272\275 xu\341\272\245t hi\341\273\207n c\341\273\255a s\341\273\225 h\341\273\231p tho\341\272\241i t\306\260\306\241ng \341\273\251ng.</span></p></body></html>", 0));
        label_7->setText(QApplication::translate("Help", "\304\220\304\203ng k\303\275", 0));
        textBrowser_3->setHtml(QApplication::translate("Help", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Myriad Pro Cond'; font-size:15pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt;\">Nh\341\272\255p th\303\264ng tin c\341\272\247n thi\341\272\277t \304\221\341\273\203 \304\221\304\203ng k\303\275 l\303\240m \304\221\341\273\231c gi\341\272\243 hay th\341\273\247 th\306\260.</span></p></body></html>", 0));
        label_9->setText(QApplication::translate("Help", "Th\303\264ng tin", 0));
        textBrowser_4->setHtml(QApplication::translate("Help", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Myriad Pro Cond'; font-size:15pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt;\">Th\303\264ng tin c\341\272\247n thi\341\272\277t v\341\273\201 ph\341\272\247n m\341\273\201m, ng\306\260\341\273\235i ph\303\241t tri\341\273\203n,...</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Help: public Ui_Help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
