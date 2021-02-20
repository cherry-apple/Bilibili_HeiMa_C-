#include<iostream>
#include<vector>
using namespace std;

class Person
{
private:
    
public:
    string m_name;
    int m_age;
    Person(string name, int age);
};
Person::Person(string name, int age)
{
    this->m_age = age;
    this->m_name = name;

}

void test0()
{
    vector<Person>v;
    Person p1("zhangsan",15);
    Person p2("lisi",19);
    Person p3("wangwu",21);
    Person p4("zhaoliu",23);

    
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    for (vector<Person>::iterator it = v.begin(); it != v.end();it++)
    {
        cout<<"name: "<<(*it).m_name<<"\t"<<"age "<<(*it).m_age<<endl;
    }
     for(vector<Person>::iterator it = v.begin(); it != v.end();it++)
        {
            cout<<"name: "<<it->m_name<<"\t"<<"age "<<it->m_age<<endl;
        }
}
   
void test1()
{
    vector<Person*>v;
    Person p1("zhangsan",15);
    Person p2("lisi",19);
    Person p3("wangwu",21);
    Person p4("zhaoliu",23);

    
    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);

    for (vector<Person *>::iterator it = v.begin()  ; it != v.end();it++ )
    {
        cout<<"name: "<<(*it)->m_name<<"\t age"<<(*it)->m_age<<endl;
    }
    
}

int main()
{
    test0();
    test1();

    cout<<"Hello world"<<endl;
    return 0;
}
