#include<iostream>
#include <unistd.h>
using namespace std;

/*
goto语句
执行到goto语句的时候，会跳转到标记的位置
*/

int main()
{
    //goto语句
    cout<<"1.xxxxxx"<<endl;
    cout<<"2.xxxxxx"<<endl;
    goto flag;
    cout<<"3.xxxxxx"<<endl;
    cout<<"4.xxxxxx"<<endl;
    flag:
    cout<<"5.xxxxxx"<<endl;
    cout<<"6.xxxxxx"<<endl;

    pause();
    return 0;
}