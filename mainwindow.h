#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "signin.h"
#include "signup.h"
#include "PersonalInfo.h"

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

    void getAccount();

    void createAccount();

    void on_SignUpButton_clicked();

    void createUser();

    void on_BooksTable_cellClicked(int row, int column);

private:
    Ui::MainWindow *ui;
    SignIn* s;
    SignUp* su;
    personalinfo* pi;



    void loadBooksFile();
    void loadAccountFile();
    void loadUserFile();
    void loadTempAccountFile();
    void loadTempUserFile();

    void closeEvent (QCloseEvent *event);
    void saveBooksFile();
    void saveAccountFile();
    void saveUserFile();
    void saveTempAccountFile();
    void saveTempUserFile();
};

#endif // MAINWINDOW_H
