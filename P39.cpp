#include<iostream>
#include <unistd.h>
using namespace std;

/*
break语句：
1.在switch中，终止case并跳出switch
2.跳出当前循环
3.跳出最近的内循环
*/

int main()
{
    //嵌套循环的跳出
    for (int j = 0; j < 10; j++)//i和j要区分
    {
        for (int i = 0; i < 10; i++)
        {
            if (i==5)//只画5个星星
            {
                break; //仅退出内层循环
            }
            
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"输出结束"<<endl;
    cout<<"Hello World_h"<<endl;

    pause();
    return 0;
}