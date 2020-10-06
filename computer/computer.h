#ifndef COMPUTER_H
#define COMPUTER_H
#include "input.h"
#include "output.h"
#include "cpu.h"
#include <iostream>

class CComputer
{
public:
    int InputInt(void);

    void OutputStr(char str[]);

    int add(int a, int b);
    int sub(int a, int b);
    int mul(int a, int b);
    int div(int a, int b);

    void OutputResult(int a, char * str1, int b, char * str2, int c);

private:
    CCpu m_Cpu;
    COutput m_Output;
    CInput m_Input;
};

#endif // COMPUTER_H
