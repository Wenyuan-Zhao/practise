#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "func.h"
#include "menu.h"
#include "student.h"
using namespace std;
int main()
{
    CFunction student;
    int key;
    while(1)
    {
    mainwindow();
        cout<<"输入访问序号:";
        cin>>key;
        while(key<0||key>5)
        {
        cout<<"输入错误,请重新输入:";
        cin>>key;
        }
     switch (key)
     {
     case 1:
             student.Browsestu();
     break;
     case 2:
             student.Insertstu();
     break;
     case 3:
             student.Selectstu();
     break;
     case 4:
             student.Delectstu();
     break;
     case 5:
             student.Updatestu();
     break;
     default:
             exit(1);
     }
     cout <<" Press any key to continue.." <<endl;
     cin.get();
    }
}
