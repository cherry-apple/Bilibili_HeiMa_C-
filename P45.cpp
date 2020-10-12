#include<iostream>
#include <unistd.h>
using namespace std;

/*
元素逆置
*/

int main()
{
    //输出原数组
    int arr1[] = {1,2,3,4,5};
    for (int i = 0; i < 5; i++)
    {
        cout<<arr1[i];
    }
    cout<<endl;
    
    //逆置操作
    int star = 0;
    int end = sizeof(arr1)/sizeof(arr1[0])-1;//end应该是4而不是5
    cout<<end<<endl;

    while (star < end)
    {
        int temp = arr1[star];
        arr1[star] = arr1[end];
        arr1[end] = temp;
        star++;
        end--;
    }

    //检验是否逆置
    for (int i = 0; i < 5; i++)
    {
        cout<<arr1[i];
    }
    cout<<endl;

    

    pause();
    return 0;
}