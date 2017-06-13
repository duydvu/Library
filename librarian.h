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

private:
    Ui::librarian *ui;

    void closeEvent (QCloseEvent *event);
};

#endif // LIBRARIAN_H
