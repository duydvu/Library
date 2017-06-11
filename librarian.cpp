#include "librarian.h"
#include "ui_librarian.h"

librarian::librarian(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::librarian)
{
    ui->setupUi(this);
    setWindowTitle("Libpro");
    librarian::setWindowState(Qt::WindowMaximized);
}

librarian::~librarian()
{
    delete ui;
}

void librarian::closeEvent (QCloseEvent *event)
{
    emit closed();
    event->accept();
}
