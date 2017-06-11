#include "admin.h"
#include "ui_admin.h"

Admin::Admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
    setWindowTitle("Libpro");
    Admin::setWindowState(Qt::WindowMaximized);
}

Admin::~Admin()
{
    delete ui;
}

void Admin::closeEvent (QCloseEvent *event)
{
    emit closed();
    event->accept();
}
