#include<iostream>
using namespace std;

class Father
{
public:
    Father()
    {
        a=10;
    }
    void func()
    {
        cout<<"Father's func"<<endl;
    }
public:
 int a;
};
class Son:public::Father
{
public:
    Son()
    {
        a=20;
    }
    void func()
    {
        cout<<"Son's func"<<endl;
    }
public:
int a;
};
void test()
{
    Son s;
    cout<<s.a<<endl;
    cout<<sizeof(Son)<<endl;//8,说明有两个int
    cout<<s.Father::a<<endl;
    s.func();
    s.Father::func();
}
//
int main()
{
    test();
    return 0;
}