#ifndef READER_H
#define READER_H

#include <QMainWindow>
#include "data.h"

namespace Ui {
class reader;
}

class reader : public QMainWindow
{
    Q_OBJECT

public:
    explicit reader(QWidget *parent = 0);
    ~reader();

signals:
    void closed();

private:
    Ui::reader *ui;

    void closeEvent (QCloseEvent *event);
};

#endif // READER_H
