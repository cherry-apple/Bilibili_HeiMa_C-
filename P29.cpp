#include<iostream>
#include <unistd.h>
using namespace std;

/*
三目运算符
*/

int main()
{
    int a = 10;
    int b = 20;
    int c;
    c = a > b ? a:b;
    cout<<"c = :"<<c<<endl;

    //三目运算符返回的是变量，而不是值
    a > b ? a : b = 100;
    cout<<a<<endl;
    cout<<b<<endl;


    cout<<"Hello World_h"<<endl;

    pause();
    return 0;
}