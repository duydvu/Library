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

protected:

    void resizeEvent(QResizeEvent* event);

private slots:
    void on_searchButton_clicked();

    void on_changeButton_clicked();

    void on_bookTable_cellClicked(int row, int column);

    void on_bookBorrow_clicked();

    void on_send_clicked();

    void on_cancel_clicked();

    void on_borInfo_cellClicked(int row, int column);

    void on_changePass_clicked();

    void ChangePass();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_readerTab_currentChanged(int index);

private:
    Ui::reader *ui;
    QSharedPointer<Password> pa;
    QSharedPointer<QGraphicsScene> ptr_scene;
    QLinkedList<cartinfo> myCartInfos;
    QLinkedList<cartinfo>::iterator currentCart;

    void closeEvent (QCloseEvent *event);

};

#endif // READER_H
