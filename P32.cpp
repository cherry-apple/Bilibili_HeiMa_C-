#include<iostream>
#include <unistd.h>
using namespace std;
#include<ctime>
/*
数字猜大小
*/

int main()
{
    srand((unsigned int)time(NULL));//引入随机数种子
    int num = rand()%100 +1;//生成0～99的数
    cout<<num<<endl;

    int val = 0;//玩家输入的数据
    bool flag = 1;

    while (flag)
    {
        cout<<"请输入你猜测的数字："<<endl;
        cin>>val;
        if (val>num)
        {
            cout<<"猜得太大"<<endl;
            /* code */
        }
        else if (val<num)
        {
            cout<<"猜得太小"<<endl;
            }
        else
        {
            cout<<"你猜对了"<<endl;
            flag = 0;
        }
    }
    cout<<"游戏结束"<<endl;
        

        
        


        
        cout<<"Hello World_h"<<endl;

        pause();
        return 0;
}