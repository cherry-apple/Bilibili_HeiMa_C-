#include<iostream>
#include <unistd.h>
using namespace std;

/*
switch 语句
缺点：switch语句只能为整型或者字符型，不能为一个区间
优点：执行效率高，结构清晰
case里面如果没有break，就会一直往下执行
*/

//电影打分
int main()
{
    cout<<"请给电影打分："<<endl;
    int score = 0;
    
    cin>>score;
    cout<<"电影分数为："<<score<<endl;


    switch(score)
    {
        case 10:
        cout<<"您认为是经典电影"<<endl;
        break;//跳出当前分支

        case 9:
        cout<<"您认为是经典电影"<<endl;
        break;

        case 8:
        cout<<"您认为电影很好"<<endl;
        break;

        case 7:
        cout<<"您认为电影很好"<<endl;
        break;

        case 6:
        cout<<"您认为电影一般"<<endl;
        break;

        case 5:
        cout<<"您认为电影一般"<<endl;
        break;

        default:
        cout<<"您认为电影很差"<<endl;
        break;
    }



    pause();
    return 0;
}