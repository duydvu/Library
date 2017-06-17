/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Search;
    QPushButton *SignInButton;
    QPushButton *SignUpButton;
    QPushButton *Help;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QFrame *MainBar;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Back;
    QLineEdit *FindBooksEdit;
    QComboBox *Category;
    QPushButton *FindBooksButton;
    QHBoxLayout *horizontalLayout;
    QTableWidget *BooksTable;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QGraphicsView *bookView;
    QTextBrowser *intro;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(800, 591);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setStyleSheet(QStringLiteral("border: none;"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1055, 771));
        scrollAreaWidgetContents->setStyleSheet(QStringLiteral("border: none;"));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setStyleSheet(QLatin1String("background: url(Images/Background.png) no-repeat center center;\n"
"background-color: #1DE9B6;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(800, -1, -1, -1);
        Search = new QPushButton(frame_2);
        Search->setObjectName(QStringLiteral("Search"));
        Search->setCursor(QCursor(Qt::PointingHandCursor));
        Search->setStyleSheet(QLatin1String("#Search \n"
"{\n"
"	height: 30px;\n"
"	border-radius: 4px;\n"
"	border: none;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"	background: #6A1B9A;\n"
"	color: #fff;\n"
"	outline: none;\n"
"}\n"
"#Search:hover \n"
"{\n"
"	background: #8E24AA;\n"
"}\n"
"#Search:pressed \n"
"{\n"
"	padding-top: 2px;\n"
"}"));

        horizontalLayout_3->addWidget(Search);

        SignInButton = new QPushButton(frame_2);
        SignInButton->setObjectName(QStringLiteral("SignInButton"));
        SignInButton->setCursor(QCursor(Qt::PointingHandCursor));
        SignInButton->setStyleSheet(QLatin1String("#SignInButton \n"
"{\n"
"	height: 30px;\n"
"	border-radius: 4px;\n"
"	border: none;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"	background: #6A1B9A;\n"
"	color: #fff;\n"
"	outline: none;\n"
"}\n"
"#SignInButton:hover \n"
"{\n"
"	background: #8E24AA;\n"
"}\n"
"#SignInButton:pressed \n"
"{\n"
"	padding-top: 2px;\n"
"}"));

        horizontalLayout_3->addWidget(SignInButton);

        SignUpButton = new QPushButton(frame_2);
        SignUpButton->setObjectName(QStringLiteral("SignUpButton"));
        SignUpButton->setCursor(QCursor(Qt::PointingHandCursor));
        SignUpButton->setStyleSheet(QLatin1String("#SignUpButton \n"
"{\n"
"	height: 30px;\n"
"	border-radius: 4px;\n"
"	border: none;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"	background: #6A1B9A;\n"
"	color: #fff;\n"
"	outline: none;\n"
"}\n"
"#SignUpButton:hover \n"
"{\n"
"	background: #8E24AA;\n"
"}\n"
"#SignUpButton:pressed \n"
"{\n"
"	padding-top: 2px;\n"
"}"));

        horizontalLayout_3->addWidget(SignUpButton);

        Help = new QPushButton(frame_2);
        Help->setObjectName(QStringLiteral("Help"));
        Help->setCursor(QCursor(Qt::PointingHandCursor));
        Help->setStyleSheet(QLatin1String("#Help \n"
"{\n"
"	height: 30px;\n"
"	border-radius: 4px;\n"
"	border: none;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"	background: #6A1B9A;\n"
"	color: #fff;\n"
"	outline: none;\n"
"}\n"
"#Help:hover \n"
"{\n"
"	background: #8E24AA;\n"
"}\n"
"#Help:pressed \n"
"{\n"
"	padding-top: 2px;\n"
"}"));

        horizontalLayout_3->addWidget(Help);


        verticalLayout_3->addLayout(horizontalLayout_3);

        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font: 40pt \"Lobster\";\n"
"\n"
"background: none;"));
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_3->addWidget(label_2);

        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("font: 60pt \"Lobster\";\n"
"color: #0277BD;\n"
"background: none;"));
        label_3->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_3->addWidget(label_3);

        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("font: 30pt \"Lobster\";\n"
"color: #fff;\n"
"background: none;"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_4);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 2);
        verticalLayout_3->setStretch(2, 2);
        verticalLayout_3->setStretch(3, 1);

        verticalLayout_2->addWidget(frame_2);

        MainBar = new QFrame(frame);
        MainBar->setObjectName(QStringLiteral("MainBar"));
        MainBar->setStyleSheet(QStringLiteral("background: #1DE9B6;"));
        MainBar->setFrameShape(QFrame::StyledPanel);
        MainBar->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(MainBar);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Back = new QPushButton(MainBar);
        Back->setObjectName(QStringLiteral("Back"));
        Back->setCursor(QCursor(Qt::PointingHandCursor));
        Back->setStyleSheet(QLatin1String("#Back{\n"
"	height: 40px;\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	background-color: #C62828;\n"
"	color: #222;\n"
"	outline: none;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"}\n"
"#Back:hover{\n"
"	background-color: #E53935;\n"
"}"));

        horizontalLayout_2->addWidget(Back);

        FindBooksEdit = new QLineEdit(MainBar);
        FindBooksEdit->setObjectName(QStringLiteral("FindBooksEdit"));
        FindBooksEdit->setMinimumSize(QSize(242, 30));
        FindBooksEdit->setStyleSheet(QLatin1String("#FindBooksEdit {\n"
"	height: 40px;\n"
"	border: none;\n"
"	border-radius: 5px;\n"
"	padding-left: 10px;\n"
"	background: white;\n"
"}"));

        horizontalLayout_2->addWidget(FindBooksEdit);

        Category = new QComboBox(MainBar);
        Category->setObjectName(QStringLiteral("Category"));
        Category->setStyleSheet(QLatin1String("#Category{\n"
"	height: 40px;\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	background-color: #448AFF;\n"
"	color: #fff;\n"
"	outline: none;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"}\n"
"QComboBox:editable {\n"
"    background: white;\n"
"}\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                 stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"}\n"
"\n"
"/* QComboBox gets the \"on\" state when the popup is open */\n"
"QComboBox:!editable:on, QComboBox::drop-down:editable:on {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #D3D3D3, stop: 0.4 #D8D8D8,\n"
"                                stop: 0.5 #DDDDDD, stop: 1.0 #E1E1E1);\n"
"}\n"
"\n"
"QComboBox:on { /* shift the text when the popup opens */\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"}\n"
"\n"
"QComboBox"
                        "::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;\n"
"\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid; /* just a single line */\n"
"    border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"\n"
"\n"
"QComboBox::down-arrow:on { /* shift the arrow when popup is open */\n"
"    top: 1px;\n"
"    left: 1px;\n"
"}"));

        horizontalLayout_2->addWidget(Category);

        FindBooksButton = new QPushButton(MainBar);
        FindBooksButton->setObjectName(QStringLiteral("FindBooksButton"));
        FindBooksButton->setCursor(QCursor(Qt::PointingHandCursor));
        FindBooksButton->setStyleSheet(QLatin1String("#FindBooksButton{\n"
"	height: 40px;\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	background: #6A1B9A;\n"
"	color: #fff;\n"
"	outline: none;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"}\n"
"#FindBooksButton:hover \n"
"{\n"
"	background: #8E24AA;\n"
"}"));

        horizontalLayout_2->addWidget(FindBooksButton);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 12);
        horizontalLayout_2->setStretch(2, 3);
        horizontalLayout_2->setStretch(3, 2);
        FindBooksButton->raise();
        FindBooksEdit->raise();
        Back->raise();
        Category->raise();

        verticalLayout_2->addWidget(MainBar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        BooksTable = new QTableWidget(frame);
        if (BooksTable->columnCount() < 5)
            BooksTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        BooksTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        BooksTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        BooksTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        BooksTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        BooksTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        BooksTable->setObjectName(QStringLiteral("BooksTable"));
        BooksTable->setMinimumSize(QSize(493, 427));
        BooksTable->setStyleSheet(QLatin1String("QHeaderView::section {\n"
"    background-color: #6A1B9A;\n"
"	padding: 4px;\n"
"    border: 1px solid #fff;\n"
"	color: #fff;\n"
"    font-size: 15pt;\n"
"	font-family: \"Myriad Pro Cond\";\n"
"}\n"
"\n"
"QTableWidget {\n"
"	background-color: #eee;\n"
"    gridline-color: #fffff8;\n"
"    font-size: 12pt;\n"
"}\n"
"\n"
"QTableWidget QTableCornerButton::section {\n"
"    background-color: #646464;\n"
"    border: 1px solid #fffff8;\n"
"}\n"
""));
        BooksTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        BooksTable->setSortingEnabled(true);
        BooksTable->setWordWrap(false);
        BooksTable->horizontalHeader()->setStretchLastSection(true);
        BooksTable->verticalHeader()->setVisible(true);

        horizontalLayout->addWidget(BooksTable);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setStyleSheet(QStringLiteral("background: #fff;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(frame_3);
        label->setObjectName(QStringLiteral("label"));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QStringLiteral("font: 15pt \"Myriad Pro Cond\";"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label);

        bookView = new QGraphicsView(frame_3);
        bookView->setObjectName(QStringLiteral("bookView"));
        bookView->setStyleSheet(QStringLiteral("border: none;"));

        verticalLayout_4->addWidget(bookView);

        intro = new QTextBrowser(frame_3);
        intro->setObjectName(QStringLiteral("intro"));
        intro->setMinimumSize(QSize(0, 0));
        intro->setStyleSheet(QStringLiteral("font: 15pt \"Myriad Pro Cond\";"));

        verticalLayout_4->addWidget(intro);


        horizontalLayout->addWidget(frame_3);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout_2->setStretch(0, 1);

        verticalLayout->addWidget(frame);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(FindBooksEdit, FindBooksButton);
        QWidget::setTabOrder(FindBooksButton, BooksTable);
        QWidget::setTabOrder(BooksTable, scrollArea);

        retranslateUi(MainWindow);
        QObject::connect(FindBooksEdit, SIGNAL(returnPressed()), FindBooksButton, SLOT(click()));
        QObject::connect(FindBooksEdit, SIGNAL(textChanged(QString)), FindBooksButton, SLOT(click()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        Search->setText(QApplication::translate("MainWindow", "T\303\254m s\303\241ch", 0));
        SignInButton->setText(QApplication::translate("MainWindow", "\304\220\304\203ng nh\341\272\255p", 0));
        SignUpButton->setText(QApplication::translate("MainWindow", "\304\220\304\203ng k\303\275", 0));
        Help->setText(QApplication::translate("MainWindow", "Tr\341\273\243 gi\303\272p", 0));
        label_2->setText(QApplication::translate("MainWindow", "Ch\303\240o m\341\273\253ng \304\221\341\272\277n v\341\273\233i", 0));
        label_3->setText(QApplication::translate("MainWindow", "LIBRO", 0));
        label_4->setText(QApplication::translate("MainWindow", "Th\306\260 vi\341\273\207n Khoa KH & KT M\303\241y t\303\255nh", 0));
        Back->setText(QString());
        Category->clear();
        Category->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Kinh d\341\273\213", 0)
         << QApplication::translate("MainWindow", "Tr\341\272\273 em", 0)
         << QApplication::translate("MainWindow", "Khoa h\341\273\215c", 0)
        );
#ifndef QT_NO_TOOLTIP
        FindBooksButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>T\303\254m s\303\241ch</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        FindBooksButton->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>T\303\254m s\303\241ch</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        FindBooksButton->setText(QApplication::translate("MainWindow", "T\303\254m", 0));
        QTableWidgetItem *___qtablewidgetitem = BooksTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "T\341\273\261a s\303\241ch", 0));
        QTableWidgetItem *___qtablewidgetitem1 = BooksTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "T\303\241c gi\341\272\243", 0));
        QTableWidgetItem *___qtablewidgetitem2 = BooksTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Th\341\273\203 lo\341\272\241i", 0));
        QTableWidgetItem *___qtablewidgetitem3 = BooksTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Nh\303\240 xu\341\272\245t b\341\272\243n", 0));
        QTableWidgetItem *___qtablewidgetitem4 = BooksTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "T\303\254nh tr\341\272\241ng", 0));
        label->setText(QApplication::translate("MainWindow", "Gi\341\273\233i thi\341\273\207u", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
