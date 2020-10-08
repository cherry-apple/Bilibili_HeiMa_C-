#include<iostream>
#include <unistd.h>
using namespace std;

/*
布尔数据类型：
1即真，0即假。
非0的数字即代表真。
*/

int main()
{
    bool flag1 = true;
    cout<<flag1<<endl;
    bool flag2 = false;
    cout<<flag2<<endl;
    cout<<"size of true is :"<<sizeof(bool)<<endl;

    pause();
    return 0;
}