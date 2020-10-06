#include<iostream>
#include <unistd.h>
using namespace std;

/*
1.标识符不能是关键字
2.标识符由下划线、字母、数字组成
3.下划线不能由数字开头
    为了避免出现语言上的歧义：如果121可以是数字，也可以是变量名（标识符），那就增加了文法分析器的工作难度
4.标识符区分大小写
给变量起名的时候，最好做到见名知义
*/
int main()
{
    cout<<"Hello World_hrh"<<endl;
    pause();
    return 0;
}