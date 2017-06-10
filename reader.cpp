#include "reader.h"
#include "ui_reader.h"

reader::reader(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::reader)
{
    ui->setupUi(this);
}

reader::~reader()
{
    delete ui;
}
