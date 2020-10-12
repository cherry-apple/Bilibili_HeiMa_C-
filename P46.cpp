#include<iostream>
#include <unistd.h>
using namespace std;

/*
冒泡排序
*/

int main()
{
    
    int arr1[] = {4,2,8,0,5,7,1,3,9};
    int num = sizeof(arr1)/sizeof(arr1[0]);//统计数字个数
    cout<<"the number of arr1[] is :"<<num<<endl;
    cout<<endl;

    
    //原数组排序
    cout<<"the initial of arr1[] is :"<<endl;
    for (int i = 0; i < num; i++)
    {
        cout<<arr1[i]<<" ";
        
    }
    cout<<endl;


    //冒泡排序
    for (int j = num; j > 0; j--)
    {
        bool flag = 1;
        for (int i = 1; i <= j; i++)//不能i=0开始，不然在判断中使用i+1,会有错误
    {
        if (arr1[i-1]>arr1[i])
        {
        //交换
        int temp = arr1[i-1];
        arr1[i-1] = arr1[i];
        arr1[i] = temp;
        flag = 0;
        }
    }
    if (flag)
        {
            break;
        }
    }
    cout<<endl;
    
    
    //排序后数组
    cout<<"the last of arr1[] is :"<<endl;
    for (int i = 0; i < num; i++)
    {
        cout<<arr1[i]<<" ";
        
    }
    cout<<endl;
    
    pause();
    return 0;
}