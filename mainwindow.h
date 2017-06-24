#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "signin.h"
#include "signup.h"
#include "help.h"
#include "about.h"
#include "PersonalInfo.h"
#include "admin.h"
#include "librarian.h"
#include "reader.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:

    void resizeEvent(QResizeEvent* event);

private slots:

    void on_FindBooksButton_clicked();

    void on_SignInButton_clicked();

    void logIn();

    void logOut();

    void createAccount();

    void on_SignUpButton_clicked();

    void createUser();

    void on_BooksTable_cellClicked(int row, int column);

    void on_Search_clicked();

    void on_Back_clicked();

    void on_Help_clicked();

    void on_About_clicked();

    void on_mainSearch_returnPressed();

signals:

    void sigShowEvent();

private:
    Ui::MainWindow *ui;
    QSharedPointer<SignIn> s;
    QSharedPointer<SignUp> su;
    QSharedPointer<Help> he;
    QSharedPointer<About> ab;
    QSharedPointer<personalinfo> pi;
    QSharedPointer<Admin> ad;
    QSharedPointer<librarian> li;
    QSharedPointer<reader> re;
    QSharedPointer<QGraphicsScene> ptr_scene;


    void loadBooksFile();
    void loadAccountsFile();
    void loadUsersFile();
    void loadTempAccountsFile();
    void loadTempUsersFile();
    void loadCartInfosFile();

    void closeEvent (QCloseEvent *event);
    void saveBooksFile();
    void saveAccountsFile();
    void saveUsersFile();
    void saveTempAccountsFile();
    void saveTempUsersFile();
    void saveCartInfosFile();
};

#endif // MAINWINDOW_H
