#include<iostream>
#include <unistd.h>
using namespace std;

/*
乘法口诀表
*/

int main()
{
    for (int j = 1; j < 10; j++)
    {
        for (int i = 1; i <= j; i++)
    {
        cout<<i<<"*"<<j<<"="<<i*j<<"\t";
    }
    cout<<endl;
    }


    pause();
    return 0;
}