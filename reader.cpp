#include "reader.h"
#include "ui_reader.h"

reader::reader(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::reader)
{
    ui->setupUi(this);
    setWindowTitle("Libpro");
    reader::setWindowState(Qt::WindowMaximized);
}

reader::~reader()
{
    delete ui;
}

void reader::closeEvent (QCloseEvent *event)
{
    emit closed();
    event->accept();
}
