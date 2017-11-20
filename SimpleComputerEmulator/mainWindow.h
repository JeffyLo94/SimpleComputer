#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QMessageBox>
#include "SimpleComputer.h"
#include "responsewindow.h"
#include "save.h"
#include "selectfile.h"
#include "helpscreen.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void TestLoadMemoryRegisters();
    void UpdateMemoryRegisters();
    void ClearCPU();
    void UpdateCPU();
    void UpdateOutput();
    QString inputNumFix(QString in);

private slots:
    void on_memLoadBtn_clicked();

    void on_clrBtn_clicked();

    void on_stepBtn_clicked();

    void on_runBtn_clicked();

    void on_pCount_editingFinished();

    //INPUT CARD SLOTS
    void on_input_1_editingFinished();

    void on_input_2_editingFinished();

    void on_input_3_editingFinished();

    void on_input_4_editingFinished();

    void on_input_5_editingFinished();

    void on_input_6_editingFinished();

    void on_input_7_editingFinished();

    void on_input_8_editingFinished();

    void on_input_9_editingFinished();

    void on_input_10_editingFinished();

    void on_input_11_editingFinished();

    void on_input_12_editingFinished();

    void on_input_13_editingFinished();

    void on_input_14_editingFinished();

    void on_input_15_editingFinished();

    //MEMORY REG SLOTS
    void on_mem_00_editingFinished();

    void on_mem_1_editingFinished();

    void on_mem_2_editingFinished();

    void on_mem_3_editingFinished();

    void on_mem_4_editingFinished();

    void on_mem_5_editingFinished();

    void on_mem_6_editingFinished();

    void on_mem_7_editingFinished();

    void on_mem_8_editingFinished();

    void on_mem_9_editingFinished();

    void on_mem_10_editingFinished();

    void on_mem_11_editingFinished();

    void on_mem_12_editingFinished();

    void on_mem_13_editingFinished();

    void on_mem_14_editingFinished();

    void on_mem_15_editingFinished();

    void on_mem_16_editingFinished();

    void on_mem_17_editingFinished();

    void on_mem_18_editingFinished();

    void on_mem_19_editingFinished();

    void on_mem_20_editingFinished();

    void on_mem_21_editingFinished();

    void on_mem_22_editingFinished();

    void on_mem_23_editingFinished();

    void on_mem_24_editingFinished();

    void on_mem_25_editingFinished();

    void on_mem_26_editingFinished();

    void on_mem_27_editingFinished();

    void on_mem_28_editingFinished();

    void on_mem_29_editingFinished();

    void on_mem_30_editingFinished();

    void on_mem_31_editingFinished();

    void on_mem_32_editingFinished();

    void on_mem_33_editingFinished();

    void on_mem_34_editingFinished();

    void on_mem_35_editingFinished();

    void on_mem_36_editingFinished();

    void on_mem_37_editingFinished();

    void on_mem_38_editingFinished();

    void on_mem_39_editingFinished();

    void on_mem_40_editingFinished();

    void on_mem_41_editingFinished();

    void on_mem_42_editingFinished();

    void on_mem_43_editingFinished();

    void on_mem_44_editingFinished();

    void on_mem_45_editingFinished();

    void on_mem_46_editingFinished();

    void on_mem_47_editingFinished();

    void on_mem_48_editingFinished();

    void on_mem_49_editingFinished();

    void on_mem_50_editingFinished();

    void on_mem_51_editingFinished();

    void on_mem_52_editingFinished();

    void on_mem_53_editingFinished();

    void on_mem_54_editingFinished();

    void on_mem_55_editingFinished();

    void on_mem_56_editingFinished();

    void on_mem_57_editingFinished();

    void on_mem_58_editingFinished();

    void on_mem_59_editingFinished();

    void on_mem_60_editingFinished();

    void on_mem_61_editingFinished();

    void on_mem_62_editingFinished();

    void on_mem_63_editingFinished();

    void on_mem_64_editingFinished();

    void on_mem_65_editingFinished();

    void on_mem_66_editingFinished();

    void on_mem_67_editingFinished();

    void on_mem_68_editingFinished();

    void on_mem_69_editingFinished();

    void on_mem_70_editingFinished();

    void on_mem_71_editingFinished();

    void on_mem_72_editingFinished();

    void on_mem_73_editingFinished();

    void on_mem_74_editingFinished();

    void on_mem_75_editingFinished();

    void on_mem_76_editingFinished();

    void on_mem_77_editingFinished();

    void on_mem_78_editingFinished();

    void on_mem_79_editingFinished();

    void on_mem_80_editingFinished();

    void on_mem_81_editingFinished();

    void on_mem_82_editingFinished();

    void on_mem_83_editingFinished();

    void on_mem_84_editingFinished();

    void on_mem_85_editingFinished();

    void on_mem_86_editingFinished();

    void on_mem_87_editingFinished();

    void on_mem_88_editingFinished();

    void on_mem_89_editingFinished();

    void on_mem_90_editingFinished();

    void on_mem_91_editingFinished();

    void on_mem_92_editingFinished();

    void on_mem_93_editingFinished();

    void on_mem_94_editingFinished();

    void on_mem_95_editingFinished();

    void on_mem_96_editingFinished();

    void on_mem_97_editingFinished();

    void on_mem_98_editingFinished();

    void on_mem_99_editingFinished();

    //Other UI Buttons
    void on_clrCpuBtn_clicked();

    void on_rstInBtn_clicked();

    void on_clrInBtn_clicked();

    void on_clrOutBtn_clicked();

    void on_saveBtn_clicked();

    void on_loadBtn_clicked();

    void read(QString path);

    void on_helpBtn_clicked();

private:
    Ui::MainWindow *ui;
    SimpleComputer computer;
};

#endif // MAINWINDOW_H
