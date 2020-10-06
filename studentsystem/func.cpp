#include "func.h"
#include "student.h"
#include <string>

using namespace std;

CStudent stu[1000];
CStudent Stu(string s)
{
    CStudent stu;
    string stemp[1000];
    int k=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=' ')
        {
            stemp[k]+=s[i];
        }
        else
        {
            ++k;
        }
    }
    stu.No=atoi(stemp[0].c_str());
    stu.Name=stemp[1];
    stu.Gender=stemp[2];
    stu.Age=stemp[3];
    stu.Phone=stemp[4];
    stu.Address=stemp[5];
    return stu;
}

int SelectAllA()
{
    CStudent num[10000];
    fstream afile("Macintosh HD\\Users\\zhaowenyuan\\Desktop\\studentsystem\\student.dat");
    int k=0;
    string s;
    while(getline(afile,s))
    {
        num[k++]=Stu(s);
    }
    return k;
}

void CFunction::Browsestu(void)
{

    int k=SelectAllA();//读A文件到内存
    int i;
    cout<<"  学号          "<<"  姓名 "<<"    年龄 "<<"性别 "<<"联系方式      "<<"地址       "<<endl;
    for(i=0;i<k;i++)
    {
        cout<<"  "<<stu[i].No <<" ";
        cout<<"  "<<stu[i].Name<<" ";
        cout<<"  "<<stu[i].Age<<" ";
        cout<<"  "<<stu[i].Gender<<" ";
        cout<<"  "<<stu[i].Phone<<" ";
        cout<<"  "<<stu[i].Address<<endl;
    }
}

void CFunction::Insertstu(void)
{
        ofstream afile;
        int n,i;
        cout<<"请输入学生个数:";
        cin>>n;
        for(i=0;i<n;i++)
        {

            cout<<"输入学号:";
            cin>>stu[i].No;

            cout<<"输入姓名:";
            cin>>stu[i].Name;

            cout<<"输入年龄:";
            cin>>stu[i].Age;

            cout<<"输入性别:";
            cin>>stu[i].Gender;

            cout<<"输入电话:";
            cin>>stu[i].Phone;

            cout<<"输入地址:";
            cin>>stu[i].Address;
        }
        for(i=0;i<n;i++)
        {
            afile.open("Macintosh HD\\Users\\zhaowenyuan\\Desktop\\studentsystem\\student.dat",ios::out|ios::app);
            afile <<stu[i].No <<"   "<<stu[i].Name<<"   "
                  <<stu[i].Age<<"   "<<stu[i].Gender<<"   "
                  <<stu[i].Phone<<"   "<<stu[i].Address<<endl;
            afile.close();
        }
}

void CFunction::Selectstu(void)
{
        int k=SelectAllA();//读A文件到内存
        string No;
        cout<<"请输入查询学号:";
        cin>>No;
        cout<<" 学号  "<<" 姓名  "<<" 年龄  "<<" 性别  "<<"  联系方式  "<<" 地址  "<<endl;
        int ok=0;
        for(int i=0;i<k;i++){
            if(stu[i].No==No)
            {
                ok=1;
                cout<<"  "<<stu[i].No <<" ";
                cout<<"  "<<stu[i].Name<<" ";
                cout<<"  "<<stu[i].Age<<" ";
                cout<<"  "<<stu[i].Gender<<" ";
                cout<<"  "<<stu[i].Phone<<" ";
                cout<<"  "<<stu[i].Address<<endl;
                break;
            }
        }
        if(ok==0) cout<<" 不存在这个人,请查对后在输入!"<<endl;
}

void CFunction::Delectstu(void)
{
        string num;
        cout<<"请输入删除的学号:";
        cin>>num;
        int k=SelectAllA();
        ofstream afile;
        afile.open("Macintosh HD\\Users\\zhaowenyuan\\Desktop\\studentsystem\\student.dat",ios::out);//写的方式写入文件
        for(int i=0;i<k;i++)
        {
            if(stu[i].No!=num)
            {
                afile<<stu[i].No <<"   "<<stu[i].Name<<"   "
                     <<stu[i].Age<<"   "<<stu[i].Gender<<"   "
                     <<stu[i].Phone<<"   "<<stu[i].Address<<endl;
            }
        }
        afile.close();//关闭文件

        cout<<"删除成功!"<<endl;
}

void CFunction::Updatestu(void)
{
    string No;
    cout<<"请输入修改的学号:";
    cin>>No;
    int k=SelectAllA();
    ofstream afile;
    afile.open("Macintosh HD\\Users\\zhaowenyuan\\Desktop\\studentsystem\\student.dat",ios::out);//读写的方式写入文件
    for(int i=0;i<k;i++){
        //cout<<stub[i].stunum<<endl;
        if(stu[i].No==No)
        {

            cout<<"输入姓名:";
            string name;
            cin>>name;
            stu[i].Name=name;

            cout<<"输入年龄:";
            string age;
            cin>>age;
            stu[i].Age=age;


            cout<<"输入性别:";
            string sex;
            cin>>sex;
            stu[i].Gender=sex;

            cout<<"输入联系方式:";
            string phone;
            cin>>phone;
            stu[i].Phone=phone;

            cout<<"输入地址:";
            string address;
            cin>>address;
            stu[i].Address=address;
        }
        afile<<stu[i].No <<"   "<<stu[i].Name<<"   "
             <<stu[i].Age<<"   "<<stu[i].Gender<<"   "
             <<stu[i].Phone<<"   "<<stu[i].Address<<endl;
    }
    cout<<"修改成功！"<<endl;
    afile.close();//关闭文件
}
