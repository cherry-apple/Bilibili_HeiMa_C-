#include<iostream>
#include <unistd.h>
using namespace std;

/*
常量：程序中不可更改的数据
C++中两种定义常量的方式：
1.#define 宏常量
    通常在文件头定义，表示一个常量。
2.const修饰的变量
    通常在变量前加关键字const修饰，修饰该变量为常量，不可更改。
*/

#define week 7
int main()
{
    //week = 8 报错，宏修饰的变量不能被修改
    cout<<"一周有："<<week<<"天"<< endl;

    //const修饰的变量不能被修改
    const int month = 12; 
    cout<<"一年有："<<month<<"个月"<< endl;
    pause();
    return 0;
}