#include<iostream>
#include <unistd.h>
using namespace std;

/*
求水仙花数
*/

int main()
{
    int num = 100;
    do
    {
        int a,b,c;
        a = num%10;
        b = num/10%10;
        c = num/100;
        if (num == a*a*a + b*b*b +c*c*c)
        {
            cout<<num<<endl;
        }

        num++;
        
    } while (num<1000);
    
    cout<<"Hello World_h"<<endl;

    pause();
    return 0;
}