#include "fileselector.h"
#include "ui_fileselector.h"

FileSelector::FileSelector(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FileSelector)
{
    ui->setupUi(this);
}

FileSelector::~FileSelector()
{
    delete ui;
}
