#include <stdio.h>
#include "computer.h"

int main(int argc, char * argv[])
{
    int a   = 0;
    int b   = 0;
    int sum = 0;

    CComputer Computer;
    Computer.OutputStr("Input the first number:");
    a  = Computer.InputInt();
    Computer.OutputStr("Input the second number:");
    b  = Computer.InputInt();

    sum = Computer.add(a, b);
    Computer.OutputResult(a, "+", b, "=", sum);

    sum = Computer.sub(a, b);
    Computer.OutputResult(a, "-", b, "=", sum);

    sum = Computer.mul(a, b);
    Computer.OutputResult(a, "*", b, "=", sum);

    sum = Computer.div(a, b);
    Computer.OutputResult(a, "/", b, "=", sum);

    getchar();
    getchar();
    return 0;
}

