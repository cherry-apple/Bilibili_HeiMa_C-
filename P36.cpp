#include<iostream>
#include <unistd.h>
using namespace std;

/*
敲桌子
*/

int main()
{
    for ( int i = 0; i < 100; i++)
    {
        if ((i%7==0)||(i%10==7)||(i/10==7))
        {
            cout<<"敲桌子数为："<<i<<endl;
        }
        else
        {
            /* code */
        }
        
    }
    
    pause();
    return 0;
}