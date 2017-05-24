#ifndef PERSONALINFO_H
#define PERSONALINFO_H
#include "user.h"
#include <QDialog>

namespace Ui {
class personalinfo;
}

class personalinfo : public QDialog
{
    Q_OBJECT

public:
    explicit personalinfo(QWidget *parent = 0);
    ~personalinfo();
    User getUser();
private slots:


    void on_pushButton_clicked();

private:
    Ui::personalinfo *ui;
};

#endif // PERSONALINFO_H
