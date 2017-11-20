#include "helpscreen.h"
#include "ui_helpscreen.h"

helpScreen::helpScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::helpScreen)
{
    ui->setupUi(this);
}

helpScreen::~helpScreen()
{
    delete ui;
}
