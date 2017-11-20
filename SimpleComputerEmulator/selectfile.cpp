#include "selectfile.h"
#include "ui_selectfile.h"

selectFile::selectFile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::selectFile)
{
    ui->setupUi(this);
}

selectFile::~selectFile()
{
    delete ui;
}

void selectFile::on_okBtn_clicked()
{
    QString file = ui->lineEdit->text();
    emit send(file);
    this->close();
}

void selectFile::on_cancelBtn_clicked()
{
    this->close();
}
