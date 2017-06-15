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

private:
    Ui::librarian *ui;

    void closeEvent (QCloseEvent *event);
};

#endif // LIBRARIAN_H
