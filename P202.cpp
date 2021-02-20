#include<iostream>
#include<string>
using namespace std;
#include<vector>

void vectorPrint(vector<int> & v)
{
    for (vector<int>::iterator it = v.begin();it != v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    

}

void test0()
{
    vector<int> v0;
    for (int i = 0; i < 100; i++)
    {
        v0.push_back(i);
    }
    
    vectorPrint(v0);
    cout<<v0.capacity()<<endl;
    cout<<v0.size()<<endl;

    v0.resize(3);
    cout<<v0.capacity()<<endl;
    cout<<v0.size()<<endl;

    vector<int>(v0).swap(v0);
    vectorPrint(v0);
    cout<<v0.capacity()<<endl;
    cout<<v0.size()<<endl;
}

int main()
{
    test0();
    cout<<"Hello World_h"<<endl;
    return 0;
}