#include<iostream>
#include<string>
using namespace std;
#include<deque>


void dequePrint(const deque<int> v)
{
    for (deque<int>::const_iterator it = v.begin();it != v.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}

void test0()
{
    deque<int> t0;
    for (int i = 0; i < 10; i++)
    {
        t0.push_back(i);
    }
    dequePrint(t0);
    cout<<endl;

     deque<int>::iterator it = t0.begin();
    // printf("%p\n",it);
    // cout<<endl;
    // it++;
    // printf("%p\n",it);
    // cout<<endl;

    printf("%p\n",t0.begin());
    cout<<endl;
    t0.begin()++;
    printf("%p\n",t0.begin());
    cout<<endl;

    cout<<t0[3]<<endl;
    dequePrint(t0);//0123456789

    t0.erase(it);
    dequePrint(t0);//123456789

    t0.erase(it);
    dequePrint(t0);//23456789

    it++;
    t0.erase(it);
    dequePrint(t0);//2456789

    // t0.erase();
    // dequePrint(t0);
    // cout<<endl;

    // cout<<t0.begin()<<endl;

}

int main()
{
    deque<int> t1;
    for (int i = 0; i < 10; i++)
    {
        t1.push_back(i);
    }
    dequePrint(t1);

    deque<int>::iterator it = t1.begin();
    printf("%p\n",it);
    it++;
    printf("%p\n",it);
    t1.erase(it);
    dequePrint(t1);


    test0();
    cout<<"Hello World_h"<<endl;
    return 0;
}