#ifndef RESPONSEWINDOW_H
#define RESPONSEWINDOW_H

#include <QDialog>

enum responseType {
    MEM_ZERO_EXCEPTION,
    EMPTY_IN_CARD,
    NORMAL_TERMINATION,
    EMPTY_MEMORY
};

namespace Ui {
class responsewindow;
}

class responsewindow : public QDialog
{
    Q_OBJECT

public:
    explicit responsewindow(QWidget *parent = 0);

    responsewindow(QWidget *parent, int requestType);

    ~responsewindow();

private slots:
    void on_okay_clicked();

private:
    Ui::responsewindow *ui;
};

#endif // RESPONSEWINDOW_H
