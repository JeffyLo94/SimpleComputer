#ifndef SAVE_H
#define SAVE_H

#include <QDialog>
#include <QFile>
#include <QTextStream>

using namespace std;

namespace Ui {
class save;
}

class save : public QDialog
{
    Q_OBJECT

public:
    explicit save(QWidget *parent = 0);
    save(QWidget *parent, QString* ar);
    ~save();

private slots:
    void on_okBtn_clicked();

private:
    Ui::save *ui;
    QString* mem;
};

#endif // SAVE_H
