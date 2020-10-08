#include<iostream>
#include <unistd.h>
using namespace std;

/*
字符型变量注意事项：
创建字符型变量，要使用单引号，双引号是字符串。
字符型变量，只能有一个字符。
字符型变量只占一个字节。
字符型变量不是把字符放到内存中存储，而是把对应的asc码放入存储单元。
*/

/*
asc码：
0-31是控制字符。
32-126是键盘上的字符。
*/
int main()
{
    char ch = 'abc';//char型只保存最后一个值c
    cout<<ch<<endl;
    cout<<"ch的值是："<<ch<<endl;
    cout<<"ch变量的大小是："<<sizeof(ch)<<endl;
    cout<<"字符行变量的大小是："<<sizeof(char)<<endl;
    cout<<"a的asc码值是："<<int(ch)<<endl;

    pause();
    return 0;
}