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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
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
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *SignInButton;
    QPushButton *SignUpButton;
    QLabel *label_5;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QLineEdit *mainSearch;
    QPushButton *Search;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *About;
    QPushButton *Help;
    QWidget *tab_4;
    QGridLayout *gridLayout_2;
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
    QLabel *bookName;
    QGraphicsView *bookView;
    QTextBrowser *intro;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(800, 591);
        MainWindow->setMinimumSize(QSize(720, 560));
        MainWindow->setStyleSheet(QStringLiteral("background: url(Images/Background.jpg) no-repeat center center;"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QLatin1String("QScrollBar:vertical {\n"
"      	border: 1px solid #999999;\n"
"       	background: rgba(0,0,0,80);\n"
"       	width: 10px;    \n"
"        margin: 0px 0px 0px 0px;\n"
"		border:none;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"        background: rgba(0,0,0,80);\n"
"        min-height: 0px;\n"
"border-radius: 3px;\n"
"}\n"
"QScrollBar::add-line:vertical {\n"
"       background: rgba(0,0,0,80);\n"
"        height: 0px;\n"
"        subcontrol-position: bottom;\n"
"        subcontrol-origin: margin;\n"
"border-radius: 3px;\n"
"}\n"
"QScrollBar::sub-line:vertical {\n"
"        background: rgba(0,0,0,80);\n"
"       height: 0 px;\n"
"       subcontrol-position: top;\n"
"       subcontrol-origin: margin;\n"
"border-radius: 3px;\n"
"}"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(18);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout_3->setContentsMargins(9, 18, 9, -1);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        SignInButton = new QPushButton(tab_3);
        SignInButton->setObjectName(QStringLiteral("SignInButton"));
        SignInButton->setCursor(QCursor(Qt::PointingHandCursor));
        SignInButton->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"	height: 40px;\n"
"	width: 120px;\n"
"	border-radius: 4px;\n"
"	border: none;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"	background: rgba(255,255,255,80);\n"
"	color: #fff;\n"
"	outline: none;\n"
"}\n"
"QPushButton:hover \n"
"{\n"
"	background: rgba(227,242,253,80);\n"
"}\n"
"#Search:pressed \n"
"{\n"
"	padding-top: 2px;\n"
"}"));

        horizontalLayout_3->addWidget(SignInButton);

        SignUpButton = new QPushButton(tab_3);
        SignUpButton->setObjectName(QStringLiteral("SignUpButton"));
        SignUpButton->setCursor(QCursor(Qt::PointingHandCursor));
        SignUpButton->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"	height: 40px;\n"
"	width: 120px;\n"
"	border-radius: 4px;\n"
"	border: none;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"	background: rgba(255,255,255,80);\n"
"	color: #fff;\n"
"	outline: none;\n"
"}\n"
"QPushButton:hover \n"
"{\n"
"	background: rgba(227,242,253,80);\n"
"}\n"
"#Search:pressed \n"
"{\n"
"	padding-top: 2px;\n"
"}"));

        horizontalLayout_3->addWidget(SignUpButton);

        horizontalLayout_3->setStretch(0, 3);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 1);

        verticalLayout_3->addLayout(horizontalLayout_3);

        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("background: none;"));

        verticalLayout_3->addWidget(label_5);

        widget_2 = new QWidget(tab_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setStyleSheet(QStringLiteral("background: rgba(0,0,0,100);"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font: 30pt \"Lobster\";\n"
"color: rgba(255,255,255,255);\n"
"background: none;\n"
"margin: 0;\n"
"margin-top: 20px;"));
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("font: 45pt \"Lobster\";\n"
"color: #0277BD;\n"
"background: none;\n"
"margin: 0;\n"
"margin-bottom: 20px;"));
        label_3->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_2->addWidget(label_3);

        widget = new QWidget(widget_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("background: none;"));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(188, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        mainSearch = new QLineEdit(widget);
        mainSearch->setObjectName(QStringLiteral("mainSearch"));
        mainSearch->setMinimumSize(QSize(0, 40));
        mainSearch->setMaximumSize(QSize(16777215, 40));
        mainSearch->setStyleSheet(QLatin1String("height: 40px;\n"
"border-radius: 10px;\n"
"padding-left: 10px;\n"
"background: rgba(255,255,255,255);\n"
"font: 20pt \"Myriad Pro Cond\";\n"
"/*margin: 0 100px 0 100px;/*"));
        mainSearch->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(mainSearch);

        Search = new QPushButton(widget);
        Search->setObjectName(QStringLiteral("Search"));
        Search->setCursor(QCursor(Qt::PointingHandCursor));
        Search->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"	height: 40px;\n"
"	width: 120px;\n"
"	border-radius: 4px;\n"
"	border: none;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"	background: rgba(255,255,255,80);\n"
"	color: #fff;\n"
"	outline: none;\n"
"}\n"
"QPushButton:hover \n"
"{\n"
"	background: rgba(227,242,253,80);\n"
"}\n"
"#Search:pressed \n"
"{\n"
"	padding-top: 2px;\n"
"}"));

        horizontalLayout_4->addWidget(Search);

        horizontalSpacer_2 = new QSpacerItem(188, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        horizontalLayout_4->setStretch(0, 2);
        horizontalLayout_4->setStretch(1, 4);
        horizontalLayout_4->setStretch(2, 1);
        horizontalLayout_4->setStretch(3, 1);

        verticalLayout_2->addWidget(widget);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("font: 15pt \"Lobster\";\n"
"color: #fff;\n"
"background: none;\n"
"margin: 20px 0 20px 0;"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);


        verticalLayout_3->addWidget(widget_2);

        widget_3 = new QWidget(tab_3);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setStyleSheet(QStringLiteral("background: none;"));
        horizontalLayout_5 = new QHBoxLayout(widget_3);
        horizontalLayout_5->setSpacing(18);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(9, -1, -1, -1);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        About = new QPushButton(widget_3);
        About->setObjectName(QStringLiteral("About"));
        About->setCursor(QCursor(Qt::PointingHandCursor));
        About->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"	height: 40px;\n"
"	width: 120px;\n"
"	border-radius: 4px;\n"
"	border: none;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"	background: rgba(255,255,255,80);\n"
"	color: #fff;\n"
"	outline: none;\n"
"}\n"
"QPushButton:hover \n"
"{\n"
"	background: rgba(227,242,253,80);\n"
"}\n"
"#Search:pressed \n"
"{\n"
"	padding-top: 2px;\n"
"}"));

        horizontalLayout_5->addWidget(About);

        Help = new QPushButton(widget_3);
        Help->setObjectName(QStringLiteral("Help"));
        Help->setCursor(QCursor(Qt::PointingHandCursor));
        Help->setStyleSheet(QLatin1String("QPushButton \n"
"{\n"
"	height: 40px;\n"
"	width: 120px;\n"
"	border-radius: 4px;\n"
"	border: none;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"	background: rgba(255,255,255,80);\n"
"	color: #fff;\n"
"	outline: none;\n"
"}\n"
"QPushButton:hover \n"
"{\n"
"	background: rgba(227,242,253,80);\n"
"}\n"
"#Search:pressed \n"
"{\n"
"	padding-top: 2px;\n"
"}"));

        horizontalLayout_5->addWidget(Help);

        horizontalLayout_5->setStretch(0, 3);
        horizontalLayout_5->setStretch(1, 1);
        horizontalLayout_5->setStretch(2, 1);

        verticalLayout_3->addWidget(widget_3);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 2);
        verticalLayout_3->setStretch(2, 4);
        verticalLayout_3->setStretch(3, 2);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tab_4->setStyleSheet(QStringLiteral("background: none;"));
        gridLayout_2 = new QGridLayout(tab_4);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(10);
        gridLayout_2->setContentsMargins(10, 10, 10, 10);
        MainBar = new QFrame(tab_4);
        MainBar->setObjectName(QStringLiteral("MainBar"));
        MainBar->setStyleSheet(QStringLiteral("background: rgba(0,0,0,80);"));
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
"	background: rgba(244,67,54,150);\n"
"	color: #222;\n"
"	outline: none;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"}\n"
"#Back:hover{\n"
"	background-color: rgba(239,83,80,150);\n"
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
        Category->setStyleSheet(QLatin1String("QComboBox{	\n"
"	height: 40px;\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	background: rgba(68,138,255,200);\n"
"	color: #fff;\n"
"	outline: none;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"}\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    border: 2px solid darkgray;\n"
"    color: #fff;\n"
"	background: rgba(68,138,255,200);\n"
"    selection-background-color:qlineargradient(spread:reflect, x1:0, y1:0.614, x2:1, y2:0.585, stop:0 rgba(0, 109, 255, 205), stop:1 rgba(48, 212, 155, 227));\n"
"	outline: none;\n"
"}\n"
"\n"
"\n"
"QComboBox:on { /* shift the text when the popup opens */\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"}\n"
"\n"
"\n"
"QComboBox::drop-down {\n"
"    width: 0px;\n"
"    border: none\n"
"}"));
        Category->setMaxVisibleItems(20);

        horizontalLayout_2->addWidget(Category);

        FindBooksButton = new QPushButton(MainBar);
        FindBooksButton->setObjectName(QStringLiteral("FindBooksButton"));
        FindBooksButton->setCursor(QCursor(Qt::PointingHandCursor));
        FindBooksButton->setStyleSheet(QLatin1String("#FindBooksButton{\n"
"	height: 40px;\n"
"	border-width: 0px;\n"
"	border-radius: 5px;\n"
"	background: rgba(106,27,154,150);\n"
"	color: #fff;\n"
"	outline: none;\n"
"	font: 15pt \"Myriad Pro Cond\";\n"
"}\n"
"#FindBooksButton:hover \n"
"{\n"
"	background: rgba(142,36,170,150);\n"
"}"));

        horizontalLayout_2->addWidget(FindBooksButton);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 10);
        horizontalLayout_2->setStretch(2, 3);
        horizontalLayout_2->setStretch(3, 2);
        FindBooksButton->raise();
        FindBooksEdit->raise();
        Back->raise();
        Category->raise();

        gridLayout_2->addWidget(MainBar, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        BooksTable = new QTableWidget(tab_4);
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
"    background: rgba(106,27,154,200);\n"
"	padding: 4px;\n"
"    border: 1px solid #fff;\n"
"	color: #fff;\n"
"    font-size: 15pt;\n"
"	font-family: \"Myriad Pro Cond\";\n"
"}\n"
"\n"
"QTableWidget {\n"
"	background: rgba(238,238,238,200);\n"
"    gridline-color: #fffff8;\n"
"    font-size: 12pt;\n"
"}\n"
"\n"
"QTableWidget QTableCornerButton::section {\n"
"    background: #646464;\n"
"    border: 1px solid #fffff8;\n"
"}\n"
""));
        BooksTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        BooksTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        BooksTable->setSortingEnabled(true);
        BooksTable->setWordWrap(false);
        BooksTable->horizontalHeader()->setHighlightSections(false);
        BooksTable->horizontalHeader()->setStretchLastSection(true);
        BooksTable->verticalHeader()->setVisible(false);

        horizontalLayout->addWidget(BooksTable);

        frame_3 = new QFrame(tab_4);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setStyleSheet(QStringLiteral("background: rgba(0,0,0,150);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(frame_3);
        label->setObjectName(QStringLiteral("label"));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QLatin1String("font: 15pt \"Myriad Pro Cond\";\n"
"background: none;\n"
"color: #fff;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label);

        bookName = new QLabel(frame_3);
        bookName->setObjectName(QStringLiteral("bookName"));
        bookName->setStyleSheet(QLatin1String("background: none;font: 25pt \"Myriad Pro Cond\";\n"
"color: #fff;"));
        bookName->setAlignment(Qt::AlignCenter);
        bookName->setWordWrap(true);

        verticalLayout_4->addWidget(bookName);

        bookView = new QGraphicsView(frame_3);
        bookView->setObjectName(QStringLiteral("bookView"));
        bookView->setStyleSheet(QLatin1String("border: none;\n"
"background: rgba(0,0,0,0);"));

        verticalLayout_4->addWidget(bookView);

        intro = new QTextBrowser(frame_3);
        intro->setObjectName(QStringLiteral("intro"));
        intro->setMinimumSize(QSize(0, 0));
        intro->setStyleSheet(QLatin1String("background: rgba(0,0,0,0);\n"
"color: #fff;\n"
"font: 15pt \"Myriad Pro Cond\";"));

        verticalLayout_4->addWidget(intro);


        horizontalLayout->addWidget(frame_3);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 2);

        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        QWidget::setTabOrder(FindBooksEdit, FindBooksButton);

        retranslateUi(MainWindow);
        QObject::connect(FindBooksEdit, SIGNAL(returnPressed()), FindBooksButton, SLOT(click()));
        QObject::connect(FindBooksEdit, SIGNAL(textChanged(QString)), FindBooksButton, SLOT(click()));
        QObject::connect(Category, SIGNAL(currentIndexChanged(QString)), FindBooksButton, SLOT(click()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        SignInButton->setText(QApplication::translate("MainWindow", "\304\220\304\203ng nh\341\272\255p", 0));
        SignUpButton->setText(QApplication::translate("MainWindow", "\304\220\304\203ng k\303\275", 0));
        label_5->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Ch\303\240o m\341\273\253ng \304\221\341\272\277n v\341\273\233i", 0));
        label_3->setText(QApplication::translate("MainWindow", "LIBRO", 0));
        mainSearch->setPlaceholderText(QApplication::translate("MainWindow", "B\341\272\241n mu\341\273\221n t\303\254m s\303\241ch g\303\254...", 0));
        Search->setText(QApplication::translate("MainWindow", "T\303\254m s\303\241ch", 0));
        label_4->setText(QApplication::translate("MainWindow", "Think of life as a good book.\n"
"The further we get into it,\n"
" the more it begins to come together and makes sense.", 0));
        About->setText(QApplication::translate("MainWindow", "About", 0));
        Help->setText(QApplication::translate("MainWindow", "Tr\341\273\243 gi\303\272p", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Tab 1", 0));
        Back->setText(QString());
        Category->clear();
        Category->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "T\341\272\245t c\341\272\243", 0)
         << QApplication::translate("MainWindow", "B\303\241ch khoa to\303\240n th\306\260", 0)
         << QApplication::translate("MainWindow", "Ch\303\242m bi\341\272\277m", 0)
         << QApplication::translate("MainWindow", "Du l\341\273\213ch", 0)
         << QApplication::translate("MainWindow", "\304\220\341\273\213a l\303\275", 0)
         << QApplication::translate("MainWindow", "H\303\240nh \304\221\341\273\231ng v\303\240 phi\303\252u l\306\260u", 0)
         << QApplication::translate("MainWindow", "Huy\341\273\201n b\303\255", 0)
         << QApplication::translate("MainWindow", "Khoa h\341\273\215c", 0)
         << QApplication::translate("MainWindow", "Khoa h\341\273\215c vi\341\273\205n t\306\260\341\273\237ng", 0)
         << QApplication::translate("MainWindow", "K\341\273\213ch", 0)
         << QApplication::translate("MainWindow", "Kinh d\341\273\213", 0)
         << QApplication::translate("MainWindow", "Kinh t\341\272\277", 0)
         << QApplication::translate("MainWindow", "L\303\243ng m\341\272\241n", 0)
         << QApplication::translate("MainWindow", "L\341\273\213ch s\341\273\255", 0)
         << QApplication::translate("MainWindow", "Ngh\341\273\207 thu\341\272\255t", 0)
         << QApplication::translate("MainWindow", "Nh\341\272\255t k\303\275", 0)
         << QApplication::translate("MainWindow", "S\303\241ch n\341\272\245u \304\203n", 0)
         << QApplication::translate("MainWindow", "S\341\273\251c kh\341\273\217e", 0)
         << QApplication::translate("MainWindow", "T\341\272\241p ch\303\255", 0)
         << QApplication::translate("MainWindow", "Th\306\241", 0)
         << QApplication::translate("MainWindow", "Ti\341\273\203u s\341\273\255", 0)
         << QApplication::translate("MainWindow", "To\303\241n", 0)
         << QApplication::translate("MainWindow", "T\303\264n gi\303\241o v\303\240 ch\303\255nh tr\341\273\213", 0)
         << QApplication::translate("MainWindow", "Tr\341\272\273 em", 0)
         << QApplication::translate("MainWindow", "Truy\341\273\207n tranh", 0)
         << QApplication::translate("MainWindow", "T\341\273\253 \304\221i\341\273\203n", 0)
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
        bookName->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Tab 2", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
