#include <iostream>
#include "input.h"

int CInput::InputInt(void)
{
    int a = 0;

    scanf("%d", &a);
    return a;
}

int CInput::InputInt(char tip[])
{
    int a = 0;

    printf("%s", tip);
    scanf("%d", &a);
    return a;
}
