#include<vector>
#include<iostream>
using namespace  std;
#include<algorithm>

void myPrint(int val)
{
    cout<<val<<endl;
}

void test0()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    // for (vector<int>::iterator it = v.begin() ; it != v.end() ;it++)
    // {
    //     cout << *  it<<endl;
    // }

    for_each(v.begin(),v.end(),myPrint);
}

int main()
{
    test0();
    
    
    return 0;
}