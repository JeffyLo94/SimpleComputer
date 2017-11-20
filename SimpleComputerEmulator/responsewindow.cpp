#include "responsewindow.h"
#include "ui_responsewindow.h"

responsewindow::responsewindow(QWidget *parent, int requestType) :
    QDialog(parent),
    ui(new Ui::responsewindow)
{
    QString text;

    // Creates UI
    ui->setupUi(this);

    // Switches based on response type given based on the button that was clicked
    switch(requestType)
    {
        case MEM_ZERO_EXCEPTION     : text = "Memory 00 cannot be changed";
                                      this->setWindowTitle("Memory 00 Warning");
                                      break;
        case EMPTY_IN_CARD          : text = "EARLY TERMINATION\nERROR: Empty Input Card Encountered";
                                      this->setWindowTitle("ERROR: Empty Input Card");
                                      break;
        case NORMAL_TERMINATION     : text = "Program Terminated Normally";
                                      this->setWindowTitle("Normal Termination");
                                      break;
        case EMPTY_MEMORY           : text = "ERROR: Memory location being fetched is empty";
                                      this->setWindowTitle("ERROR: Empty Memory Fetch");
                                      break;
        default                     : break;
    }

    // Displays text in the window
    ui->label->setText(text);
    // Enables word wrapping within label
    ui->label->setWordWrap(true);
    // Centers the text in the window
    ui->label->setAlignment(Qt::AlignCenter);
}

responsewindow::~responsewindow()
{
    delete ui;
}

void responsewindow::on_okay_clicked()
{
    // Closes current window
    this->close();
}
