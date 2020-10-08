#include<iostream>
#include <unistd.h>
using namespace std;

/*

*/
int main()
{
    float a = 3.14f;//如果不加f后缀，会默认成double类型，再转换成float，一般会加个f后缀。
    cout<<"a = "<<a<<endl;
    cout<<"sizeof a = "<<sizeof(a)<<endl;
    cout<<"sizeof float = "<<sizeof(float)<<endl;
    cout<<"sizeof double = "<<sizeof(double)<<endl;

    //默认情况下，只显示小数点后5位，所以26535不显示
    float b = 3.1415926535;
    double c = 3.1415926535;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;

    //科学计数法
    float f1 =3e3;
    cout<<"f1 = "<<f1<<endl;
    float f2 =3e-3;
    cout<<"f2 = "<<f2<<endl;
    
    pause();
    return 0;
}