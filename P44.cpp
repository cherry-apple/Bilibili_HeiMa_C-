#include<iostream>
#include <unistd.h>
using namespace std;

/*
5只小猪称体重
*/

int main()
{
    int arr1[] = {40,90,30,60,70};
    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        if (max<=arr1[i])
        {
            max = arr1[i];//更新最大值
        }
        
    }
    cout<<max<<endl;

    pause();
    return 0;
}