#include<iostream>
#include <unistd.h>
using namespace std;

/*
while循环
写循环的时候一定要避免死循环
*/

int main()
{
    int num1 = 0;
    while (num1 <=9)
    {
        cout<<num1++<<endl;

    }

    pause();
    return 0;
}