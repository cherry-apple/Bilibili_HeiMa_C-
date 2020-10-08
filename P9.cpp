#include<iostream>
#include <unistd.h>
using namespace std;

/*
sizeof关键字的用途是统计数据类型所占空间的大小
语法：sizeof（数据类型/变量）
*/
int main()
{
    int a = 23;
    cout<<"short类型所占空间大小为："<<sizeof(short)<<endl;
    cout<<"int类型所占空间大小为："<<sizeof(int)<<endl;
    cout<<"long类型所占空间大小为："<<sizeof(long)<<endl;
    cout<<"long long类型所占空间大小为："<<sizeof(long long)<<endl;
    cout<<"变量a所占空间大小为："<<sizeof(a)<<endl;
    pause();
    return 0;
}