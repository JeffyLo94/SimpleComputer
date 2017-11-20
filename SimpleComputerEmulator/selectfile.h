#ifndef SELECTFILE_H
#define SELECTFILE_H

#include <QDialog>

namespace Ui {
class selectFile;
}

class selectFile : public QDialog
{
    Q_OBJECT

public:
    explicit selectFile(QWidget *parent = 0);
    ~selectFile();

private slots:
    void on_okBtn_clicked();

    void on_cancelBtn_clicked();

signals:
    void send(QString path);

private:
    Ui::selectFile *ui;
};

#endif // SELECTFILE_H
