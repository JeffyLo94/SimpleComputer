#include "SimpleComputer.h"
#include <QDebug>

SimpleComputer::SimpleComputer(){
    mem = new QString[100];
    mem[0] = "001";
    in = new QString[15];
    out = new QString[15];
    pCount = 0;
    accum = 0;
    iReg = 0;
    inIterator = 0;
    outIterator = 0;
    isHalt = false;
}

SimpleComputer::~SimpleComputer(){
    delete mem;
    delete in;
    delete out;
}

//MUTATORS
void SimpleComputer::setPCount(int value){
    pCount = value;
}
void SimpleComputer::setAccum(int value){
    accum = value;
}

void SimpleComputer::setIReg(int value){
    iReg = value;
}

void SimpleComputer::setMemRegister(int registerNum, QString value){
    mem[registerNum] = value;
}

void SimpleComputer::setInCard(int cardNum, QString value){
    in[cardNum] = value;
}

void SimpleComputer::setOutCard(int cardNum, QString value){
    out[cardNum] = value;
}

void SimpleComputer::resetAll(){
    pCount = 0;
    accum = 0;
    iReg = 0;
    delete mem;
    mem = new QString[100];
    mem[0] = "001";
    delete in;
    in = new QString[15];
    delete out;
    out = new QString[15];
    isHalt = false;
}

void SimpleComputer::runProgram(){
    do{
        step();
    }while(!isHalt);
}

void SimpleComputer::step(){
    if(!isHalt){
        //Read Instructions
        QString instructions = mem[pCount];
        if(instructions == ""){
            isHalt = true;
            // Declares new response window
            responsewindow* response;
            response = new responsewindow(NULL, EMPTY_MEMORY);
            // Displays window
            response->show();
        }
        else{
            //Load Instructions to iReg
            iReg = instructions.toInt();
            //Interpret and Execute Instructions
            int opCode = (instructions.left(1)).toInt();
            int destination = (instructions.right(2)).toInt();
            switch(opCode){
                case INP:
                    {
                        qDebug() << "Input to " << destination;
                        qDebug() << "Inputing from card: " << inIterator;
                        QString fromIn = getInCard(inIterator++);
                        if(fromIn != ""){
                            mem[destination] = fromIn;
                            qDebug() << "Input Value of: " << mem[destination];
                            pCount++;
                        }
                        else{
                            isHalt = true;
                            // Declares new response window
                            responsewindow* response;
                            response = new responsewindow(NULL, EMPTY_IN_CARD);
                            // Displays window
                            response->show();
                        }
                        break;
                    }
                case OUT:
                    {
                        qDebug() << "Output to " << destination;
                        QString toOut = mem[destination];
                        setOutCard(outIterator++, toOut);
                        pCount++;
                        break;
                    }
                case ADD:
                    {
                        qDebug() << "Adding from " << destination;
                        accum += mem[destination].toInt();
                        pCount++;
                        break;
                    }
                case SUB:
                    {
                        qDebug() << "Subtracting from" << destination;
                        accum -= mem[destination].toInt();
                        pCount++;
                        break;
                    }
                case LDA:
                    {
                        qDebug() << "Loading from to " << destination;
                        int toLoad = mem[destination].toInt();
                        setAccum(toLoad);
                        pCount++;
                        break;
                    }
                case STA:
                    {
                        qDebug() << "Stoaring from to " << destination;
                        QString toStore = getAccum();
                        mem[destination] = toStore;
                        pCount++;
                        break;
                    }
                case JMP:
                    {
                        qDebug() << "Jumping to " << destination;
                        int temp;
                        temp = getPCount().toInt()+1;
                        qDebug() << "pCount value stored to 99: " << temp;
                        mem[99] = QString::number(temp);
                        setPCount(destination);
                        break;
                    }
                case TAC:
                    {
                        qDebug() << "Testing possible jump to" << destination;
                        if(accum < 0){
                            setPCount(destination);
                            qDebug() << "accum is negative: Jumping to " << destination;
                        }
                        else{
                            pCount++;
                        }
                        break;
                    }
                case SHF:
                    {
                        qDebug() << "Shifting values: " << destination;
                        int lShift = destination / 10;
                        int rShift = destination % 10;
                        //Shift Left
                        if(lShift != 0){
                            for(int i = 0; i < lShift; i++){
                                accum *= 10;
                            }
                        }
                        //Grabs 4 numbers for rShift prep
                        accum %= 10000;
                        //Shift Right
                        if(rShift != 0){
                            for(int i = 0; i < rShift; i++){
                                accum /= 10;
                            }
                        }
                        //Guarantees accumulator is 3 digits
                        accum %= 1000;
                        pCount++;
                        break;
                    }
                case HLT:
                    {
                        qDebug() << "HALTING, PC = " << destination;
                        setPCount(destination);
                        isHalt = true;
                        // Declares new response window
                        responsewindow* response;
                        response = new responsewindow(NULL, NORMAL_TERMINATION);
                        // Displays window
                        response->show();
                        break;
                    }
                default:    qDebug() << "ERROR - opCode undefined. OpCode: " << opCode << " destination: " << destination;
                            break;
            }
        }
    }
}

void SimpleComputer::resetCPU(){
    pCount = 0;
    accum = 0;
    iReg = 0;
}

void SimpleComputer::setInIterator(int num){
    inIterator = num;
    qDebug() << "Input Set to: " << num;
}

void SimpleComputer::setOutIterator(int num){
    outIterator = num;
}

void SimpleComputer::clearInCards(){
    delete in;
    in = new QString[15];
}

void SimpleComputer::clearOutCards(){
    delete out;
    out = new QString[15];
}

void SimpleComputer::setIsHalt(bool status){
    isHalt = status;
}

//Accessors
QString SimpleComputer::getPCount(){
    return QString::number(pCount);
}

QString SimpleComputer::getAccum(){
    QString value;
    QString negSign;
    int temp;
    //Formatting accumulator look
    if(accum < 0){
        negSign = "-";
        temp = abs(accum);
    }
    else{
        negSign="";
        temp = accum;
    }
    if(temp < 10){
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
    return value;
}

QString SimpleComputer::getIReg(){
    return QString::number(iReg);
}

QString SimpleComputer::getMemReg(int registerNum){
    return mem[registerNum];
}

QString SimpleComputer::getInCard(int cardNum){
    return in[cardNum];
}

QString SimpleComputer::getOutCard(int cardNum){
    return out[cardNum];
}

bool SimpleComputer::halted(){
    return isHalt;
}
