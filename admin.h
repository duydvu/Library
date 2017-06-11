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

private:
    Ui::Admin *ui;

    void closeEvent (QCloseEvent *event);
};

#endif // ADMIN_H
