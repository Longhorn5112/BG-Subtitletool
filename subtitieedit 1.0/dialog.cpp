#include "dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupui(this);
}

Dialog::~Dialog()
{
    delete ui;
}
