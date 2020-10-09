#include<iostream>
#include <unistd.h>
using namespace std;

/*
取余：也叫做取模运算
小数不能取余运算
除数不能为0
*/

int main()
{
    //取余运算，除数不能为0；
    int a = 10;
    int b = 0;
    //cout<<"a % b ="<<a%b<<endl;

    //小数不能取余运算
    double c = 5.34;
    double d = 1.43;
    //cout<<"c % d ="<<c%d<<endl;

    int a1 = 8;
    int b1 = -3;
    cout<<"a1 % b1 ="<<a1%b1<<endl;
    cout<<"a1 % b1 ="<<(-a1)%(-b1)<<endl;



    pause();
    return 0;
}