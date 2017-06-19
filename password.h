#ifndef PASSWORD_H
#define PASSWORD_H

#include <QDialog>
#include <QString>

namespace Ui {
class Password;
}

class Password : public QDialog
{
    Q_OBJECT

public:
    explicit Password(QWidget *parent = 0);
    ~Password();

    QString getPass();

private slots:

    void on_accept_clicked();

    void on_cancel_clicked();

private:
    Ui::Password *ui;
    QString password;
};

#endif // PASSWORD_H
