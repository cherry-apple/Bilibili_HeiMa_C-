#include<iostream>
#include <unistd.h>
using namespace std;

/*
数据类型的声明意义，就是给变量分配合适的内存空间。

*/
int main()
{
    //short的表示范围在-32768～32767，所以会显示的不一样
    short num1 = 32768;
    cout<<"num1 = "<<num1<< endl;

    //short的表示范围在-32768～32767,所以可以显示
    int num2 = 32768;
    cout<<"num2 = "<<num2<< endl;

    //short的表示范围在-32768～32767
    long num3 = 32768;
    cout<<"num3 = "<<num3<< endl;

    //short的表示范围在-32768～32767
    long long num4 = 32768;
    cout<<"num4 = "<<num4<< endl;

    pause();
    return 0;
}