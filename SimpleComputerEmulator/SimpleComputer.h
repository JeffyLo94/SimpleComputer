#ifndef SIMPLECOMPUTER_H
#define SIMPLECOMPUTER_H

#include <QString>
#include "responsewindow.h"
using namespace std;

class SimpleComputer
{
public:
    SimpleComputer();
    ~SimpleComputer();

    //mutators
    void setPCount(int value);
    void setAccum(int value);
    void setIReg(int value);
    void setMemRegister(int registerNum, QString value);
    void setInCard(int cardNum, QString value);
    void setOutCard(int cardNum, QString value);
    void resetAll();
    void runProgram();
    void step();
    void resetCPU();
    void setInIterator(int num);
    void setOutIterator(int num);
    void clearInCards();
    void clearOutCards();
    void setIsHalt(bool status);

    //accessors
    QString getPCount();
    QString getAccum();
    QString getIReg();
    QString getMemReg(int registerNum);
    QString getInCard(int cardNum);
    QString getOutCard(int cardNum);
    bool    halted();

    enum opCodes{
        INP,
        OUT,
        ADD,
        SUB,
        LDA,
        STA,
        JMP,
        TAC,
        SHF,
        HLT
    };
//TODO - May have to change all variables to QString for output purposes
private:
    int         pCount; //Program Counter Variable
    int         accum;  //Accumulator Variable
    int         iReg;   //Instruction Register Variable
    QString*    mem;    //Memory Spaces
    QString*    in;     //Input Cards
    QString*    out;    //Output Cards
    int         inIterator;
    int         outIterator;
    int         tempValue;
    bool        isHalt;
};

#endif // SIMPLECOMPUTER_H
