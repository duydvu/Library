#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include <QMainWindow>

namespace Ui {
class librarian;
}

class librarian : public QMainWindow
{
    Q_OBJECT

public:
    explicit librarian(QWidget *parent = 0);
    ~librarian();

private:
    Ui::librarian *ui;
};

#endif // LIBRARIAN_H
