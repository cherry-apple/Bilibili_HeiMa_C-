#include<iostream>
#include <unistd.h>
using namespace std;

/*
声明字符串型的两种风格：
1.char 变量名[] = “字符串值”
2.string 变量名 = “字符串值”

*/
int main()
{
    string str1 ="hello world";
    cout<<str1<<endl;
    
    pause();
    return 0;
}