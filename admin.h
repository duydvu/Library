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

private:
    Ui::Admin *ui;

    void closeEvent (QCloseEvent *event);
};

#endif // ADMIN_H
