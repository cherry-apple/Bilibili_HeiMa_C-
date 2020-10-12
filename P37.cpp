#include<iostream>
#include <unistd.h>
using namespace std;

/*
嵌套循环
*/

int main()
{
    for (int j = 0; j < 10; j++)//i和j要区分
    {
        for (int i = 0; i < 10; i++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"输出结束"<<endl;

    pause();
    return 0;
}