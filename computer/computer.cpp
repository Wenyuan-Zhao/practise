#include <iostream>
#include "computer.h"

int CComputer::InputInt(void)
{
    return m_Input.InputInt();
}

void CComputer::OutputStr(char *str)
{
    m_Output.PrintStr(str);
}

int CComputer::add(int a, int b)
{
    return m_Cpu.add(a,b);
}

int CComputer::sub(int a,int b)
{
    return m_Cpu.sub(a,b);
}
int CComputer::mul(int a,int b)
{
    return m_Cpu.mul(a,b);
}
int CComputer::div(int a,int b)
{
    return m_Cpu.div(a,b);
}

void CComputer::OutputResult(int a, char *str1, int b, char *str2, int c)
{
    char str[100];
    sprintf(str, "%d %s %d %s %d.\n", a, str1, b, str2, c);
    m_Output.PrintStr(str);
}
