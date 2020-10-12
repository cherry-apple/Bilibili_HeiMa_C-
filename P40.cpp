#include<iostream>
#include <unistd.h>
using namespace std;

/*
continue语句
在循环语句中，跳过本次循环中未执行的语句，直接进行下一次循环
*/
int main()
{
    for (int j = 0; j < 10; j++)//i和j要区分
    {
        if (j==9)//下次循环是j=10,但是并不是直接执行，还是要先判断，所以不会因为continue出现死循环。
            {
                cout<<"* ";
                cout<<endl;
                continue;
            }
            
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