#ifndef HELPSCREEN_H
#define HELPSCREEN_H

#include <QDialog>

namespace Ui {
class helpScreen;
}

class helpScreen : public QDialog
{
    Q_OBJECT

public:
    explicit helpScreen(QWidget *parent = 0);
    ~helpScreen();

private:
    Ui::helpScreen *ui;
};

#endif // HELPSCREEN_H
