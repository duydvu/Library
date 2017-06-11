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

private:
    Ui::librarian *ui;

    void closeEvent (QCloseEvent *event);
};

#endif // LIBRARIAN_H
