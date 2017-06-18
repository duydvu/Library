#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>
#include "data.h"

namespace Ui {
class Admin;
}

class Admin : public QMainWindow
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = 0);
    ~Admin();

signals:
    void closed();

private slots:
    void on_searchButton_clicked();

    void on_Agree_clicked();

    void on_Deny_clicked();

    void on_CartInfos_cellClicked(int row, int column);

    void on_newCart_clicked();

    void on_acceptedCart_clicked();

    void on_lendingCart_clicked();

    void on_doneCart_clicked();

    void on_infringeCart_clicked();

    void on_accept_clicked();

    void on_send_clicked();

    void on_done_clicked();

    void on_infringe_clicked();

    void on_name_returnPressed();

    void on_id_returnPressed();

    void on_staffTable_cellClicked(int row, int column);

private:
    Ui::Admin *ui;

    void closeEvent (QCloseEvent *event);

    void regisTable();
};

#endif // ADMIN_H
