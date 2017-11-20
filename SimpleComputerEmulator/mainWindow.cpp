#include "mainWindow.h"
#include "ui_mainWindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->UpdateMemoryRegisters();
    this->ClearCPU();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::TestLoadMemoryRegisters(){
    int cell = 35;
    qDebug() << computer.getMemReg(35);
    computer.setMemRegister(cell++, "040");
    computer.setMemRegister(cell++, "440");
    computer.setMemRegister(cell++, "300");
    computer.setMemRegister(cell++, "540");
    computer.setMemRegister(cell++, "900");

    cell = 35;
    qDebug() << computer.getMemReg(35);
    ui->mem_35->setText( computer.getMemReg(cell++) );
    ui->mem_36->setText( computer.getMemReg(cell++) );
    ui->mem_37->setText( computer.getMemReg(cell++) );
    ui->mem_38->setText( computer.getMemReg(cell++) );
    ui->mem_39->setText( computer.getMemReg(cell++) );
}

void MainWindow::UpdateMemoryRegisters(){
    int cell = 0;
    ui->mem_00->setText( computer.getMemReg(cell++) );
    ui->mem_1->setText( computer.getMemReg(cell++) );
    ui->mem_2->setText( computer.getMemReg(cell++) );
    ui->mem_3->setText( computer.getMemReg(cell++) );
    ui->mem_4->setText( computer.getMemReg(cell++) );
    ui->mem_5->setText( computer.getMemReg(cell++) );
    ui->mem_6->setText( computer.getMemReg(cell++) );
    ui->mem_7->setText( computer.getMemReg(cell++) );
    ui->mem_8->setText( computer.getMemReg(cell++) );
    ui->mem_9->setText( computer.getMemReg(cell++) );
    ui->mem_10->setText( computer.getMemReg(cell++) );
    ui->mem_11->setText( computer.getMemReg(cell++) );
    ui->mem_12->setText( computer.getMemReg(cell++) );
    ui->mem_13->setText( computer.getMemReg(cell++) );
    ui->mem_14->setText( computer.getMemReg(cell++) );
    ui->mem_15->setText( computer.getMemReg(cell++) );
    ui->mem_16->setText( computer.getMemReg(cell++) );
    ui->mem_17->setText( computer.getMemReg(cell++) );
    ui->mem_18->setText( computer.getMemReg(cell++) );
    ui->mem_19->setText( computer.getMemReg(cell++) );
    ui->mem_20->setText( computer.getMemReg(cell++) );
    ui->mem_21->setText( computer.getMemReg(cell++) );
    ui->mem_22->setText( computer.getMemReg(cell++) );
    ui->mem_23->setText( computer.getMemReg(cell++) );
    ui->mem_24->setText( computer.getMemReg(cell++) );
    ui->mem_25->setText( computer.getMemReg(cell++) );
    ui->mem_26->setText( computer.getMemReg(cell++) );
    ui->mem_27->setText( computer.getMemReg(cell++) );
    ui->mem_28->setText( computer.getMemReg(cell++) );
    ui->mem_29->setText( computer.getMemReg(cell++) );
    ui->mem_30->setText( computer.getMemReg(cell++) );
    ui->mem_31->setText( computer.getMemReg(cell++) );
    ui->mem_32->setText( computer.getMemReg(cell++) );
    ui->mem_33->setText( computer.getMemReg(cell++) );
    ui->mem_34->setText( computer.getMemReg(cell++) );
    ui->mem_35->setText( computer.getMemReg(cell++) );
    ui->mem_36->setText( computer.getMemReg(cell++) );
    ui->mem_37->setText( computer.getMemReg(cell++) );
    ui->mem_38->setText( computer.getMemReg(cell++) );
    ui->mem_39->setText( computer.getMemReg(cell++) );
    ui->mem_40->setText( computer.getMemReg(cell++) );
    ui->mem_41->setText( computer.getMemReg(cell++) );
    ui->mem_42->setText( computer.getMemReg(cell++) );
    ui->mem_43->setText( computer.getMemReg(cell++) );
    ui->mem_44->setText( computer.getMemReg(cell++) );
    ui->mem_45->setText( computer.getMemReg(cell++) );
    ui->mem_46->setText( computer.getMemReg(cell++) );
    ui->mem_47->setText( computer.getMemReg(cell++) );
    ui->mem_48->setText( computer.getMemReg(cell++) );
    ui->mem_49->setText( computer.getMemReg(cell++) );
    ui->mem_50->setText( computer.getMemReg(cell++) );
    ui->mem_51->setText( computer.getMemReg(cell++) );
    ui->mem_52->setText( computer.getMemReg(cell++) );
    ui->mem_53->setText( computer.getMemReg(cell++) );
    ui->mem_54->setText( computer.getMemReg(cell++) );
    ui->mem_55->setText( computer.getMemReg(cell++) );
    ui->mem_56->setText( computer.getMemReg(cell++) );
    ui->mem_57->setText( computer.getMemReg(cell++) );
    ui->mem_58->setText( computer.getMemReg(cell++) );
    ui->mem_59->setText( computer.getMemReg(cell++) );
    ui->mem_60->setText( computer.getMemReg(cell++) );
    ui->mem_61->setText( computer.getMemReg(cell++) );
    ui->mem_62->setText( computer.getMemReg(cell++) );
    ui->mem_63->setText( computer.getMemReg(cell++) );
    ui->mem_64->setText( computer.getMemReg(cell++) );
    ui->mem_65->setText( computer.getMemReg(cell++) );
    ui->mem_66->setText( computer.getMemReg(cell++) );
    ui->mem_67->setText( computer.getMemReg(cell++) );
    ui->mem_68->setText( computer.getMemReg(cell++) );
    ui->mem_69->setText( computer.getMemReg(cell++) );
    ui->mem_70->setText( computer.getMemReg(cell++) );
    ui->mem_71->setText( computer.getMemReg(cell++) );
    ui->mem_72->setText( computer.getMemReg(cell++) );
    ui->mem_73->setText( computer.getMemReg(cell++) );
    ui->mem_74->setText( computer.getMemReg(cell++) );
    ui->mem_75->setText( computer.getMemReg(cell++) );
    ui->mem_76->setText( computer.getMemReg(cell++) );
    ui->mem_77->setText( computer.getMemReg(cell++) );
    ui->mem_78->setText( computer.getMemReg(cell++) );
    ui->mem_79->setText( computer.getMemReg(cell++) );
    ui->mem_80->setText( computer.getMemReg(cell++) );
    ui->mem_81->setText( computer.getMemReg(cell++) );
    ui->mem_82->setText( computer.getMemReg(cell++) );
    ui->mem_83->setText( computer.getMemReg(cell++) );
    ui->mem_84->setText( computer.getMemReg(cell++) );
    ui->mem_85->setText( computer.getMemReg(cell++) );
    ui->mem_86->setText( computer.getMemReg(cell++) );
    ui->mem_87->setText( computer.getMemReg(cell++) );
    ui->mem_88->setText( computer.getMemReg(cell++) );
    ui->mem_89->setText( computer.getMemReg(cell++) );
    ui->mem_90->setText( computer.getMemReg(cell++) );
    ui->mem_91->setText( computer.getMemReg(cell++) );
    ui->mem_92->setText( computer.getMemReg(cell++) );
    ui->mem_93->setText( computer.getMemReg(cell++) );
    ui->mem_94->setText( computer.getMemReg(cell++) );
    ui->mem_95->setText( computer.getMemReg(cell++) );
    ui->mem_96->setText( computer.getMemReg(cell++) );
    ui->mem_97->setText( computer.getMemReg(cell++) );
    ui->mem_98->setText( computer.getMemReg(cell++) );
    ui->mem_99->setText( computer.getMemReg(cell++) );
}

void MainWindow::ClearCPU(){
    ui->accumulator->setText("");
    ui->iReg->setText("");
    ui->pCount->setText("00");
}

void MainWindow::UpdateCPU(){
    //Set Accumuluator UI
    qDebug() << "UI CPU Update - Emmulator returns: " << computer.getAccum();
    if( computer.getAccum() == "0"){
        ui->accumulator->setText("");
    }
    else{
        ui->accumulator->setText(computer.getAccum());
    }
    //Set IReg UI
    if( computer.getIReg() == "0"){
        ui->iReg->setText("");
    }
    else{
        ui->iReg->setText( computer.getIReg() );
    }
    //SetPCount UI
    if( computer.getPCount() == "0"){
        ui->pCount->setText( "00" );
    }
    else{
        ui->pCount->setText( computer.getPCount() );
    }
}

void MainWindow::UpdateOutput(){
    ui->output_1->setText(computer.getOutCard(0));
    ui->output_2->setText(computer.getOutCard(1));
    ui->output_3->setText(computer.getOutCard(2));
    ui->output_4->setText(computer.getOutCard(3));
    ui->output_5->setText(computer.getOutCard(4));
    ui->output_6->setText(computer.getOutCard(5));
    ui->output_7->setText(computer.getOutCard(6));
    ui->output_8->setText(computer.getOutCard(7));
    ui->output_9->setText(computer.getOutCard(8));
    ui->output_10->setText(computer.getOutCard(9));
    ui->output_11->setText(computer.getOutCard(10));
    ui->output_12->setText(computer.getOutCard(11));
    ui->output_13->setText(computer.getOutCard(12));
    ui->output_14->setText(computer.getOutCard(13));
    ui->output_15->setText(computer.getOutCard(14));
}

QString MainWindow::inputNumFix(QString in){
    QString value;
    QString negSign;
    int temp;

    if(in.contains(".")||in.contains(",")){
        temp = 0;
    }
    else{
        temp = in.toInt();
    }

    if(temp < 0){
        negSign = "-";
        temp = abs(temp);
        qDebug()<< temp << endl;
    }
    else{
        negSign="";
    }

    if(in == ""){
        value = "";
    }
    else if(temp < 10){
        value = "00" + QString::number(temp);
    }
    else if(temp < 100){
        value = "0" + QString::number(temp);
    }
    else if(temp > 999){
        temp = temp % 1000;
        value = QString::number(temp);
    }
    else{
        value = QString::number(temp);
    }
    value = negSign.append(value);

    qDebug() << "Value: " << value;
    return value;
}

//Signals & Slots
void MainWindow::on_memLoadBtn_clicked()
{
    TestLoadMemoryRegisters();
}

void MainWindow::on_clrBtn_clicked()
{
    computer.resetAll();
    this->UpdateMemoryRegisters();
    this->UpdateCPU();
    ui->accumulator->setText("");
    //Clearn Input
    ui->input_1->setText("");
    ui->input_2->setText("");
    ui->input_3->setText("");
    ui->input_4->setText("");
    ui->input_5->setText("");
    ui->input_6->setText("");
    ui->input_7->setText("");
    ui->input_8->setText("");
    ui->input_9->setText("");
    ui->input_10->setText("");
    ui->input_11->setText("");
    ui->input_12->setText("");
    ui->input_13->setText("");
    ui->input_14->setText("");
    ui->input_15->setText("");
    //Clear Output
    ui->output_1->setText("");
    ui->output_2->setText("");
    ui->output_3->setText("");
    ui->output_4->setText("");
    ui->output_5->setText("");
    ui->output_6->setText("");
    ui->output_7->setText("");
    ui->output_8->setText("");
    ui->output_9->setText("");
    ui->output_10->setText("");
    ui->output_11->setText("");
    ui->output_12->setText("");
    ui->output_13->setText("");
    ui->output_14->setText("");
    ui->output_15->setText("");
}

void MainWindow::on_stepBtn_clicked()
{
    computer.setIsHalt(false);
    computer.step();
    this->UpdateMemoryRegisters();
    this->UpdateCPU();
    this->UpdateOutput();
}

void MainWindow::on_runBtn_clicked()
{
    computer.setIsHalt(false);
    computer.runProgram();
    this->UpdateMemoryRegisters();
    this->UpdateCPU();
    this->UpdateOutput();
}

void MainWindow::on_pCount_editingFinished()
{
    QString arg1 = ui->pCount->text();
    qDebug() << "Value for pCount: " << arg1.toInt();
    computer.setPCount( arg1.toInt() );
    this->UpdateCPU();
}

void MainWindow::on_input_1_editingFinished()
{
    QString arg1 = ui->input_1->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->input_1->setText(temp);
    computer.setInCard(0, temp);
}

void MainWindow::on_input_2_editingFinished()
{
    QString arg1 = ui->input_2->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->input_2->setText(temp);
    computer.setInCard(1, temp);
}

void MainWindow::on_input_3_editingFinished()
{
    QString arg1 = ui->input_3->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->input_3->setText(temp);
    computer.setInCard(2, temp);
}

void MainWindow::on_input_4_editingFinished()
{
    QString arg1 = ui->input_4->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->input_4->setText(temp);
    computer.setInCard(3, temp);
}

void MainWindow::on_input_5_editingFinished()
{
    QString arg1 = ui->input_5->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->input_5->setText(temp);
    computer.setInCard(4, temp);
}

void MainWindow::on_input_6_editingFinished()
{
    QString arg1 = ui->input_6->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->input_6->setText(temp);
    computer.setInCard(5, temp);
}

void MainWindow::on_input_7_editingFinished()
{
    QString arg1 = ui->input_7->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->input_7->setText(temp);
    computer.setInCard(6, temp);
}

void MainWindow::on_input_8_editingFinished()
{
    QString arg1 = ui->input_8->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->input_8->setText(temp);
    computer.setInCard(7, temp);
}

void MainWindow::on_input_9_editingFinished()
{
    QString arg1 = ui->input_9->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->input_9->setText(temp);
    computer.setInCard(8, temp);
}

void MainWindow::on_input_10_editingFinished()
{
    QString arg1 = ui->input_10->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->input_10->setText(temp);
    computer.setInCard(9, temp);
}

void MainWindow::on_input_11_editingFinished()
{
    QString arg1 = ui->input_11->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->input_11->setText(temp);
    computer.setInCard(10, temp);
}

void MainWindow::on_input_12_editingFinished()
{
    QString arg1 = ui->input_12->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->input_12->setText(temp);
    computer.setInCard(11, temp);
}

void MainWindow::on_input_13_editingFinished()
{
    QString arg1 = ui->input_13->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->input_13->setText(temp);
    computer.setInCard(12, temp);
}

void MainWindow::on_input_14_editingFinished(){
    QString arg1 = ui->input_14->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->input_14->setText(temp);
    computer.setInCard(13, temp);
}

void MainWindow::on_input_15_editingFinished()
{
    QString arg1 = ui->input_15->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->input_15->setText(temp);
    computer.setInCard(14, temp);
}

void MainWindow::on_mem_00_editingFinished()
{
    //Outputs Warning message
    // Declares new response window
    responsewindow* response;
    response = new responsewindow(NULL, MEM_ZERO_EXCEPTION);
    // Displays window
    response->show();

    //Resets mem text
    ui->mem_00->setText("001");
}

void MainWindow::on_mem_1_editingFinished()
{
    QString arg1 = ui->mem_1->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_1->setText(temp);
    computer.setMemRegister(1, temp);
}

void MainWindow::on_mem_2_editingFinished()
{
    QString arg1 = ui->mem_2->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_2->setText(temp);
    computer.setMemRegister(2, temp);
}

void MainWindow::on_mem_3_editingFinished()
{
    QString arg1 = ui->mem_3->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_3->setText(temp);
    computer.setMemRegister(3, temp);
}

void MainWindow::on_mem_4_editingFinished()
{
    QString arg1 = ui->mem_4->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_4->setText(temp);
    computer.setMemRegister(4, temp);
}

void MainWindow::on_mem_5_editingFinished()
{
    QString arg1 = ui->mem_5->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_5->setText(temp);
    computer.setMemRegister(5, temp);
}

void MainWindow::on_mem_6_editingFinished()
{
    QString arg1 = ui->mem_6->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_6->setText(temp);
    computer.setMemRegister(6, temp);
}

void MainWindow::on_mem_7_editingFinished()
{
    QString arg1 = ui->mem_7->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_7->setText(temp);
    computer.setMemRegister(7, temp);
}

void MainWindow::on_mem_8_editingFinished()
{
    QString arg1 = ui->mem_8->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_8->setText(temp);
    computer.setMemRegister(8, temp);
}

void MainWindow::on_mem_9_editingFinished()
{
    QString arg1 = ui->mem_9->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_9->setText(temp);
    computer.setMemRegister(9, temp);
}

void MainWindow::on_mem_10_editingFinished()
{
    QString arg1 = ui->mem_10->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_10->setText(temp);
    computer.setMemRegister(10, temp);
}

void MainWindow::on_mem_11_editingFinished()
{
    QString arg1 = ui->mem_11->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_11->setText(temp);
    computer.setMemRegister(11, temp);
}

void MainWindow::on_mem_12_editingFinished()
{
    QString arg1 = ui->mem_12->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_12->setText(temp);
    computer.setMemRegister(12, temp);
}

void MainWindow::on_mem_13_editingFinished()
{
    QString arg1 = ui->mem_13->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_13->setText(temp);
    computer.setMemRegister(13, temp);
}

void MainWindow::on_mem_14_editingFinished()
{
    QString arg1 = ui->mem_14->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_14->setText(temp);
    computer.setMemRegister(14, temp);
}

void MainWindow::on_mem_15_editingFinished()
{
    QString arg1 = ui->mem_15->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_15->setText(temp);
    computer.setMemRegister(15, temp);
}

void MainWindow::on_mem_16_editingFinished()
{
    QString arg1 = ui->mem_16->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_16->setText(temp);
    computer.setMemRegister(16, temp);
}

void MainWindow::on_mem_17_editingFinished()
{
    QString arg1 = ui->mem_17->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_17->setText(temp);
    computer.setMemRegister(17, temp);
}

void MainWindow::on_mem_18_editingFinished()
{
    QString arg1 = ui->mem_18->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_18->setText(temp);
    computer.setMemRegister(18, temp);
}

void MainWindow::on_mem_19_editingFinished()
{
    QString arg1 = ui->mem_19->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_19->setText(temp);
    computer.setMemRegister(19, temp);
}

void MainWindow::on_mem_20_editingFinished()
{
    QString arg1 = ui->mem_20->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_20->setText(temp);
    computer.setMemRegister(20, temp);
}

void MainWindow::on_mem_21_editingFinished()
{
    QString arg1 = ui->mem_21->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_21->setText(temp);
    computer.setMemRegister(21, temp);
}

void MainWindow::on_mem_22_editingFinished()
{
    QString arg1 = ui->mem_22->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_22->setText(temp);
    computer.setMemRegister(22, temp);
}

void MainWindow::on_mem_23_editingFinished()
{
    QString arg1 = ui->mem_23->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_23->setText(temp);
    computer.setMemRegister(23, temp);
}

void MainWindow::on_mem_24_editingFinished()
{
    QString arg1 = ui->mem_24->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_24->setText(temp);
    computer.setMemRegister(24, temp);
}

void MainWindow::on_mem_25_editingFinished()
{
    QString arg1 = ui->mem_25->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_25->setText(temp);
    computer.setMemRegister(25, temp);
}

void MainWindow::on_mem_26_editingFinished()
{
    QString arg1 = ui->mem_26->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_26->setText(temp);
    computer.setMemRegister(26, temp);
}

void MainWindow::on_mem_27_editingFinished()
{
    QString arg1 = ui->mem_27->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_27->setText(temp);
    computer.setMemRegister(27, temp);
}

void MainWindow::on_mem_28_editingFinished()
{
    QString arg1 = ui->mem_28->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_28->setText(temp);
    computer.setMemRegister(28, temp);
}

void MainWindow::on_mem_29_editingFinished()
{
    QString arg1 = ui->mem_29->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_29->setText(temp);
    computer.setMemRegister(29, temp);
}

void MainWindow::on_mem_30_editingFinished()
{
    QString arg1 = ui->mem_30->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_30->setText(temp);
    computer.setMemRegister(30, temp);
}

void MainWindow::on_mem_31_editingFinished()
{
    QString arg1 = ui->mem_31->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_31->setText(temp);
    computer.setMemRegister(31, temp);
}

void MainWindow::on_mem_32_editingFinished()
{
    QString arg1 = ui->mem_32->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_32->setText(temp);
    computer.setMemRegister(32, temp);
}

void MainWindow::on_mem_33_editingFinished()
{
    QString arg1 = ui->mem_33->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_33->setText(temp);
    computer.setMemRegister(33, temp);
}

void MainWindow::on_mem_34_editingFinished()
{
    QString arg1 = ui->mem_34->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_34->setText(temp);
    computer.setMemRegister(34, temp);
}

void MainWindow::on_mem_35_editingFinished()
{
    QString arg1 = ui->mem_35->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_35->setText(temp);
    computer.setMemRegister(35, temp);
}

void MainWindow::on_mem_36_editingFinished()
{
    QString arg1 = ui->mem_36->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_36->setText(temp);
    computer.setMemRegister(36, temp);
}

void MainWindow::on_mem_37_editingFinished()
{
    QString arg1 = ui->mem_37->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_37->setText(temp);
    computer.setMemRegister(37, temp);
}

void MainWindow::on_mem_38_editingFinished()
{
    QString arg1 = ui->mem_38->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_38->setText(temp);
    computer.setMemRegister(38, temp);
}

void MainWindow::on_mem_39_editingFinished()
{
    QString arg1 = ui->mem_39->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_39->setText(temp);
    computer.setMemRegister(39, temp);
}

void MainWindow::on_mem_40_editingFinished()
{
    QString arg1 = ui->mem_40->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_40->setText(temp);
    computer.setMemRegister(40, temp);
}

void MainWindow::on_mem_41_editingFinished()
{
    QString arg1 = ui->mem_41->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_41->setText(temp);
    computer.setMemRegister(41, temp);
}

void MainWindow::on_mem_42_editingFinished()
{
    QString arg1 = ui->mem_42->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_42->setText(temp);
    computer.setMemRegister(42, temp);
}

void MainWindow::on_mem_43_editingFinished()
{
    QString arg1 = ui->mem_43->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_43->setText(temp);
    computer.setMemRegister(43, temp);
}

void MainWindow::on_mem_44_editingFinished()
{
    QString arg1 = ui->mem_44->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_44->setText(temp);
    computer.setMemRegister(44, temp);
}

void MainWindow::on_mem_45_editingFinished()
{
    QString arg1 = ui->mem_45->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_45->setText(temp);
    computer.setMemRegister(45, temp);
}

void MainWindow::on_mem_46_editingFinished()
{
    QString arg1 = ui->mem_46->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_46->setText(temp);
    computer.setMemRegister(46, temp);
}

void MainWindow::on_mem_47_editingFinished()
{
    QString arg1 = ui->mem_47->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_47->setText(temp);
    computer.setMemRegister(47, temp);
}

void MainWindow::on_mem_48_editingFinished()
{
    QString arg1 = ui->mem_48->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_48->setText(temp);
    computer.setMemRegister(48, temp);
}

void MainWindow::on_mem_49_editingFinished()
{
    QString arg1 = ui->mem_49->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_49->setText(temp);
    computer.setMemRegister(49, temp);
}

void MainWindow::on_mem_50_editingFinished()
{
    QString arg1 = ui->mem_50->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_50->setText(temp);
    computer.setMemRegister(50, temp);
}

void MainWindow::on_mem_51_editingFinished()
{
    QString arg1 = ui->mem_51->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_51->setText(temp);
    computer.setMemRegister(51, temp);}

void MainWindow::on_mem_52_editingFinished()
{
    QString arg1 = ui->mem_52->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_52->setText(temp);
    computer.setMemRegister(52, temp);
}

void MainWindow::on_mem_53_editingFinished()
{
    QString arg1 = ui->mem_53->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_53->setText(temp);
    computer.setMemRegister(53, temp);
}

void MainWindow::on_mem_54_editingFinished()
{
    QString arg1 = ui->mem_54->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_54->setText(temp);
    computer.setMemRegister(54, temp);
}

void MainWindow::on_mem_55_editingFinished()
{
    QString arg1 = ui->mem_55->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_55->setText(temp);
    computer.setMemRegister(55, temp);
}

void MainWindow::on_mem_56_editingFinished()
{
    QString arg1 = ui->mem_56->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_56->setText(temp);
    computer.setMemRegister(56, temp);
}

void MainWindow::on_mem_57_editingFinished()
{
    QString arg1 = ui->mem_57->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_57->setText(temp);
    computer.setMemRegister(57, temp);}

void MainWindow::on_mem_58_editingFinished()
{
    QString arg1 = ui->mem_58->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_58->setText(temp);
    computer.setMemRegister(58, temp);
}

void MainWindow::on_mem_59_editingFinished()
{
    QString arg1 = ui->mem_59->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_59->setText(temp);
    computer.setMemRegister(59, temp);
}

void MainWindow::on_mem_60_editingFinished()
{
    QString arg1 = ui->mem_60->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_60->setText(temp);
    computer.setMemRegister(60, temp);
}

void MainWindow::on_mem_61_editingFinished()
{
    QString arg1 = ui->mem_61->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_61->setText(temp);
    computer.setMemRegister(61, temp);
}

void MainWindow::on_mem_62_editingFinished()
{
    QString arg1 = ui->mem_62->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_62->setText(temp);
    computer.setMemRegister(62, temp);
}

void MainWindow::on_mem_63_editingFinished()
{
    QString arg1 = ui->mem_63->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_63->setText(temp);
    computer.setMemRegister(63, temp);
}

void MainWindow::on_mem_64_editingFinished()
{
    QString arg1 = ui->mem_64->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_64->setText(temp);
    computer.setMemRegister(64, temp);
}

void MainWindow::on_mem_65_editingFinished()
{
    QString arg1 = ui->mem_65->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_65->setText(temp);
    computer.setMemRegister(65, temp);
}

void MainWindow::on_mem_66_editingFinished()
{
    QString arg1 = ui->mem_66->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_66->setText(temp);
    computer.setMemRegister(66, temp);
}

void MainWindow::on_mem_67_editingFinished()
{
    QString arg1 = ui->mem_67->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_67->setText(temp);
    computer.setMemRegister(67, temp);
}

void MainWindow::on_mem_68_editingFinished()
{
    QString arg1 = ui->mem_68->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_68->setText(temp);
    computer.setMemRegister(68, temp);
}

void MainWindow::on_mem_69_editingFinished()
{
    QString arg1 = ui->mem_69->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_69->setText(temp);
    computer.setMemRegister(69, temp);
}

void MainWindow::on_mem_70_editingFinished()
{
    QString arg1 = ui->mem_70->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_70->setText(temp);
    computer.setMemRegister(70, temp);
}

void MainWindow::on_mem_71_editingFinished()
{
    QString arg1 = ui->mem_71->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_71->setText(temp);
    computer.setMemRegister(71, temp);
}

void MainWindow::on_mem_72_editingFinished()
{
    QString arg1 = ui->mem_72->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_72->setText(temp);
    computer.setMemRegister(72, temp);
}

void MainWindow::on_mem_73_editingFinished()
{
    QString arg1 = ui->mem_73->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_73->setText(temp);
    computer.setMemRegister(73, temp);
}

void MainWindow::on_mem_74_editingFinished()
{
    QString arg1 = ui->mem_74->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_74->setText(temp);
    computer.setMemRegister(74, temp);}

void MainWindow::on_mem_75_editingFinished()
{
    QString arg1 = ui->mem_75->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_75->setText(temp);
    computer.setMemRegister(75, temp);}

void MainWindow::on_mem_76_editingFinished()
{
    QString arg1 = ui->mem_76->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_76->setText(temp);
    computer.setMemRegister(76, temp);}

void MainWindow::on_mem_77_editingFinished()
{
    QString arg1 = ui->mem_77->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_77->setText(temp);
    computer.setMemRegister(77, temp);}

void MainWindow::on_mem_78_editingFinished()
{
    QString arg1 = ui->mem_78->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_78->setText(temp);
    computer.setMemRegister(78, temp);}

void MainWindow::on_mem_79_editingFinished()
{
    QString arg1 = ui->mem_79->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_79->setText(temp);
    computer.setMemRegister(79, temp);}

void MainWindow::on_mem_80_editingFinished()
{
    QString arg1 = ui->mem_80->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_80->setText(temp);
    computer.setMemRegister(80, temp);
}

void MainWindow::on_mem_81_editingFinished()
{
    QString arg1 = ui->mem_81->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_81->setText(temp);
    computer.setMemRegister(81, temp);}

void MainWindow::on_mem_82_editingFinished()
{
    QString arg1 = ui->mem_82->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_82->setText(temp);
    computer.setMemRegister(82, temp);}

void MainWindow::on_mem_83_editingFinished()
{
    QString arg1 = ui->mem_83->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_83->setText(temp);
    computer.setMemRegister(83, temp);}

void MainWindow::on_mem_84_editingFinished()
{
    QString arg1 = ui->mem_84->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_84->setText(temp);
    computer.setMemRegister(84, temp);}

void MainWindow::on_mem_85_editingFinished()
{
    QString arg1 = ui->mem_85->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_85->setText(temp);
    computer.setMemRegister(85, temp);}

void MainWindow::on_mem_86_editingFinished()
{
    QString arg1 = ui->mem_86->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_86->setText(temp);
    computer.setMemRegister(86, temp);}

void MainWindow::on_mem_87_editingFinished()
{
    QString arg1 = ui->mem_87->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_87->setText(temp);
    computer.setMemRegister(87, temp);}

void MainWindow::on_mem_88_editingFinished()
{
    QString arg1 = ui->mem_88->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_88->setText(temp);
    computer.setMemRegister(88, temp);}

void MainWindow::on_mem_89_editingFinished()
{
    QString arg1 = ui->mem_89->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_89->setText(temp);
    computer.setMemRegister(89, temp);}

void MainWindow::on_mem_90_editingFinished()
{
    QString arg1 = ui->mem_90->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_90->setText(temp);
    computer.setMemRegister(90, temp);
}

void MainWindow::on_mem_91_editingFinished()
{
    QString arg1 = ui->mem_91->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_91->setText(temp);
    computer.setMemRegister(91, temp);}

void MainWindow::on_mem_92_editingFinished()
{
    QString arg1 = ui->mem_92->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_92->setText(temp);
    computer.setMemRegister(92, temp);}

void MainWindow::on_mem_93_editingFinished()
{
    QString arg1 = ui->mem_93->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_93->setText(temp);
    computer.setMemRegister(93, temp);}

void MainWindow::on_mem_94_editingFinished()
{
    QString arg1 = ui->mem_94->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_94->setText(temp);
    computer.setMemRegister(94, temp);}

void MainWindow::on_mem_95_editingFinished()
{
    QString arg1 = ui->mem_95->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_95->setText(temp);
    computer.setMemRegister(95, temp);}

void MainWindow::on_mem_96_editingFinished()
{
    QString arg1 = ui->mem_96->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_96->setText(temp);
    computer.setMemRegister(96, temp);
}

void MainWindow::on_mem_97_editingFinished()
{
    QString arg1 = ui->mem_97->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_97->setText(temp);
    computer.setMemRegister(97, temp);
}

void MainWindow::on_mem_98_editingFinished()
{
    QString arg1 = ui->mem_98->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_98->setText(temp);
    computer.setMemRegister(98, temp);}

void MainWindow::on_mem_99_editingFinished()
{
    QString arg1 = ui->mem_99->text();
    QString temp;
    temp = inputNumFix(arg1);
    ui->mem_99->setText(temp);
    computer.setMemRegister(99, temp);
}

void MainWindow::on_clrCpuBtn_clicked()
{
    computer.resetCPU();
    this->UpdateCPU();
    ui->accumulator->setText("");
}

void MainWindow::on_rstInBtn_clicked()
{
    computer.setInIterator(0);
    qDebug() << "Reset Input" << endl;
}

void MainWindow::on_clrInBtn_clicked()
{
    computer.clearInCards();
    ui->input_1->setText("");
    ui->input_2->setText("");
    ui->input_3->setText("");
    ui->input_4->setText("");
    ui->input_5->setText("");
    ui->input_6->setText("");
    ui->input_7->setText("");
    ui->input_8->setText("");
    ui->input_9->setText("");
    ui->input_10->setText("");
    ui->input_11->setText("");
    ui->input_12->setText("");
    ui->input_13->setText("");
    ui->input_14->setText("");
    ui->input_15->setText("");
}

void MainWindow::on_clrOutBtn_clicked()
{
    computer.setOutIterator(0);
    computer.clearOutCards();
    ui->output_1->setText("");
    ui->output_2->setText("");
    ui->output_3->setText("");
    ui->output_4->setText("");
    ui->output_5->setText("");
    ui->output_6->setText("");
    ui->output_7->setText("");
    ui->output_8->setText("");
    ui->output_9->setText("");
    ui->output_10->setText("");
    ui->output_11->setText("");
    ui->output_12->setText("");
    ui->output_13->setText("");
    ui->output_14->setText("");
    ui->output_15->setText("");
}

void MainWindow::on_saveBtn_clicked()
{
    QString temp[100];
    for(int i = 0; i < 100; i++)
    {
        temp[i] = computer.getMemReg(i);
    }
    save *save1 = new save(NULL, temp);
    save1->show();
}

void MainWindow::on_loadBtn_clicked()
{
    selectFile *load = new selectFile();
    connect(load, SIGNAL(send(QString)), this, SLOT(read(QString)));
    load->show();
}

void MainWindow::read(QString path){
    computer.resetAll();
    if(path != ""){
        QFile file(path);
        QTextStream stream(&file);

        if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QMessageBox::information(0,"Critical Failure","Input file has failed to load");
        }
        else
        {
            for(int i = 0; i < 100; i++)
            {
                computer.setMemRegister(i, stream.readLine());
            }
        }
    }
    this->UpdateMemoryRegisters();
}


void MainWindow::on_helpBtn_clicked()
{
    helpScreen* hlp = new helpScreen();
    hlp->show();
}
