#include <iostream>
using namespace std;

class Father
{
public:
    Father()
    {
        cout<<"Father构造函数"<<endl;
    }
    ~Father()
    {
        cout<<"Father析构函数"<<endl;
    }
};
class Son:public::Father
{
public:
    Son()
    {
        cout<<"Son构造函数"<<endl;
    }
    ~Son()
    {
        cout<<"Son析构函数"<<endl;
    }
    int a;
};
//先调用父类构造函数，再调用本身的构造函数，析构函数反之
void test()
{
    Son s;
    s.a;
}
class A
{
public:
    A()
    {
        cout<<"A构造函数"<<endl;
    }
    ~A()
    {
        cout<<"A析构函数"<<endl;
    }
public:
    Son s;
};
class B
{
public:
    B()
    {
        cout<<"B构造函数"<<endl;
    }
    ~B()
    {
        cout<<"B析构函数"<<endl;
    }

};
class C
{
public:
    C()
    {
        cout<<"C构造函数"<<endl;
    }
    ~C()
    {
        cout<<"C析构函数"<<endl;
    }
public:

};
class D:public::A
{
public:
    D()
    {
        cout<<"D构造函数"<<endl;
    }
    ~D()
    {
        cout<<"D析构函数"<<endl;
    }
public:
    B b;
    C c;
};
void test01()
{
    D d; //A构造函数、B构造函数、C构造函数、D构造函数、D析构函数、C析构函数、B析构函数、A析构函数
    /* d.b;
    d.c; */

}
int main()
{
    test01();
    return 0;
}