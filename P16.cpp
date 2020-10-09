#include<iostream>
#include <unistd.h>
using namespace std;

/*
运算符
*/

int main()
{
    int  a = 10;
    int b = 3;

    cout<<"a + b = "<<a+b<<endl;
    cout<<"a - b = "<<a-b<<endl;
    cout<<"a * b = "<<a*b<<endl;
    cout<<"a / b = "<<a/b<<endl;//int类型是整数，将小数部分去除，而不是四舍五入

    double c = 5.23;
    double d = 3.9;
    cout<<"c / d = "<<c/d<<endl;//除数不能为0

    pause();
    return 0;
}