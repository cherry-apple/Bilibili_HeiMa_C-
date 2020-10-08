#include<iostream>
#include <unistd.h>
using namespace std;

/*
转义字符
*/
int main()
{
    //换行符 \n
    cout<<"1Hello World_h\n"<<endl;
    
    //反斜杠  
    cout<<"2Hello World_h\\"<<endl;

    //水平制表符 \t 输出有对齐的效果，用空格输出不是对齐的。
    cout<<"3\tHello World_h"<<endl;
    cout<<"33333\tHello World_h"<<endl;
    cout<<"333\tHello World_h"<<endl;


    cout<<"Hello World_h"<<endl;

    pause();
    return 0;
}