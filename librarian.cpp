#include "librarian.h"
#include "ui_librarian.h"

librarian::librarian(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::librarian)
{
    ui->setupUi(this);
}

librarian::~librarian()
{
    delete ui;
}
