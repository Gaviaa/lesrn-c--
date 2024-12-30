#include<iostream>
using namespace std;
#include"myarr.hpp"

class Maker
{
public:
    Maker()
    {
    }
    Maker(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
public:
    string name;
    int age;
};
void PrintMaker(MyArray<Maker>&m)
{
    for(int i=0;i<m.getSize();i++)
    {
        cout<<"Name:"<<m[i].name<<" Age:"<<m[i].age<<endl;
    }
}
void test()
{
    MyArray<Maker> room601(5);
    Maker m1("DJH",23);
    Maker m2("JL",25);
    Maker m3("LHC",23);
    Maker m4("PA",22);
    room601.Push_Back(m1);
    room601.Push_Back(m2);
    room601.Push_Back(m3);
    room601.Push_Back(m4);
    PrintMaker(room601);
    cout<<"----------------"<<endl;
    MyArray<Maker> room602(room601);//调用拷贝构造
    Maker m5("ZJ",24);//这里的m5不会被room601接收,因为room601的容量已经满了
    room602.Push_Back(m5);
    PrintMaker(room602);
    cout<<"----------------"<<endl;
    room602.Pop_Back();
    PrintMaker(room602);
    
}

int main()
{
    test();
    return 0;
}