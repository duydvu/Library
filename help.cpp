#include "help.h"
#include "ui_help.h"

Help::Help(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Help)
{
    ui->setupUi(this);
    this->setWindowTitle("Trợ giúp");
}

Help::~Help()
{
    delete ui;
}
