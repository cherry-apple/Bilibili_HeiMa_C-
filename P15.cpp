#include<iostream>
#include <unistd.h>
using namespace std;

/*
语法： cin>>
*/

int main()
{
    //int、浮点型、字符型、字符串、布尔型的输入方式相同
    string str1 = "hello";
    cout<<"str1的值为："<<str1<<endl;
    cout<<"请输入想给str1赋的值："<<endl;
    cin>>str1;
    cout<<"str1赋值后为："<<str1<<"\n"<<endl;

    bool flag1 = true;//bool类型非0即为真，但当赋值为小数，计算机会识别成0
    cout<<"flag1的值为："<<flag1<<endl;
    cout<<"请输入想给flag1赋的值："<<endl;
    cin>>flag1;
    cout<<"flag1赋值后为："<<flag1<<endl;
    pause();
    return 0;
}