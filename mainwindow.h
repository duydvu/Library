#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "signin.h"
#include "signup.h"
#include "book.h"

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

    void on_AccountComboBox_currentIndexChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    SignIn* s;
    SignUp* su;
    void loadBooksFile();
    void loadAccountFile();
};

#endif // MAINWINDOW_H
