#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include <QMainWindow>
#include "data.h"

namespace Ui {
class librarian;
}

class librarian : public QMainWindow
{
    Q_OBJECT

public:
    explicit librarian(QWidget *parent = 0);
    ~librarian();

signals:
    void closed();

private slots:
    void on_Agree_clicked();

    void on_Deny_clicked();

    void on_newCart_clicked();

    void on_acceptedCart_clicked();

    void on_lendingCart_clicked();

    void on_doneCart_clicked();

    void on_infringeCart_clicked();

    void on_CartInfos_cellClicked(int row, int column);

    void on_accept_clicked();

    void on_send_clicked();

    void on_done_clicked();

    void on_infringe_clicked();

    void on_searchButton_clicked();

    void on_usersTable_cellClicked(int row, int column);

    void on_pushButton_4_clicked();

    void ReaderPassChange();

    void on_pushButton_2_clicked();

    void on_r_done_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void ChangePass();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_searchBook_returnPressed();

    void on_category_currentIndexChanged(int index);

    void on_bookTable_cellClicked(int row, int column);

    void on_removeUser_clicked();

private:
    Ui::librarian *ui;
    QSharedPointer<Password> pa;

    void closeEvent (QCloseEvent *event);

    void regisTable();
};

#endif // LIBRARIAN_H
