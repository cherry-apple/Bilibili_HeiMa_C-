#include<iostream>
#include <unistd.h>
using namespace std;

/*
数组：
1.数组中的每个元素，数据类型相同
2.在内存中连续的空间
3.定义数组的时候，必须有初始长度
4.从0开始
*/

int main()
{
    int arr1[5] = {10,20,30};//不赋值的默认为0
    for (int i = 0; i < 5; i++)
    {
       cout<<arr1[i]<<endl;
    }
    
    cout<<"size of arr1 : "<<sizeof(arr1)<<endl;
    cout<<"size of arr1[0] : "<<sizeof(arr1[0])<<endl;
    cout<<"元素个数 : "<<sizeof(arr1)/sizeof(arr1[0])<<endl;

    //查看地址
    cout<<arr1<<endl;//获取数组在内存中的首地址
    cout<<&arr1[0]<<endl;//获取第一个元素在内存中的地址,需要用取址符“&”
    cout<<&arr1[1]<<endl;//获取第一个元素在内存中的地址,需要用取址符“&”
    
    pause();
    return 0;
}