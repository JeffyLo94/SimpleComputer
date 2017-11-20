#include "save.h"
#include "ui_save.h"

save::save(QWidget *parent, QString* ar) :
    QDialog(parent),
    ui(new Ui::save)
{
    ui->setupUi(this);
    mem = new QString[100];
    for(int i = 0; i < 100; i++)
    {
        mem[i] = ar[i];
    }
}

save::~save()
{
    delete ui;
}

void save::on_okBtn_clicked()
{
    QString temp = "";
   if(ui->lineEdit->text() != "")
   {
       temp = ui->lineEdit->text() + ".txt";

       QFile file(temp);
       QTextStream fileStream(&file);

       file.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Truncate);

       for(int i = 0; i < 100; i++)
       {
           fileStream << mem[i] << endl;
       }

       file.close();
   }
   this->close();
}
