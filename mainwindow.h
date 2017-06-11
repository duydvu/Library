#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "signin.h"
#include "signup.h"
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

private slots:

    void resizeEvent(QResizeEvent* event);

    void on_FindBooksButton_clicked();

    void on_SignInButton_clicked();

    void logIn();

    void logOut();

    void createAccount();

    void on_SignUpButton_clicked();

    void createUser();

    void on_BooksTable_cellClicked(int row, int column);

private:
    Ui::MainWindow *ui;
    SignIn* s;
    SignUp* su;
    personalinfo* pi;
    Admin* ad;
    librarian* li;
    reader* re;


    void loadBooksFile();
    void loadAccountsFile();
    void loadUsersFile();
    void loadTempAccountsFile();
    void loadTempUsersFile();

    void closeEvent (QCloseEvent *event);
    void saveBooksFile();
    void saveAccountsFile();
    void saveUsersFile();
    void saveTempAccountsFile();
    void saveTempUsersFile();
};

#endif // MAINWINDOW_H
