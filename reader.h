#ifndef READER_H
#define READER_H

#include <QMainWindow>

namespace Ui {
class reader;
}

class reader : public QMainWindow
{
    Q_OBJECT

public:
    explicit reader(QWidget *parent = 0);
    ~reader();

private:
    Ui::reader *ui;
};

#endif // READER_H
