#include<iostream>
using namespace std;

class Maker
{
public:
    Maker()
    {
    }
public:
    static int a;//静态成员变量生命周期为整个程序，作用域为类内部
                    //静态成员变量必须在类外初始化
                    //静态成员变量属于类，不属于对象，是所有对象共享的

};
int Maker::a=100;//静态成员变量必须在类外初始化
void test()
{
    
    cout<<Maker::a<<endl;//用类名访问静态成员变量
    Maker m;
    cout<<m.a<<endl;
}
class Maker2
{
public:
    Maker2()
    {
    }
    static void setA(int a) //静态成员函数只能访问静态成员变量
    {
         cout<<"a2="<<a2<<endl;
        a2=a;    
        cout<<"a2="<<a2<<endl;
    }
public:
    static int a2;
};
int Maker2::a2=200;//静态成员变量必须在类外初始化
void test2()
{
    Maker2::setA(300);
    cout<<Maker2::a2<<endl;
}
class Maker3
{
public:
    Maker3()
    {
        b=2;
    }
    static void func() //静态成员函数只能访问静态成员变量
    {
        cout<<"a3="<<a3<<endl; 
    }
    int b;
private:
    static int a3;
};
int Maker3::a3=300;//静态成员变量必须在类外初始化
void test3()
{
    Maker3 m;
    cout<<m.b<<endl;
    m.func();
    Maker3::func();
}
class Maker4
{
public:
    const static int a4=400;//const修饰的静态成员变量最好在类内初始化
    const  static int b4;
};
 const int Maker4::b4=500;//类外也可以初始化
 class Maker5
{
public:
    void func()
    {
        cout<<"a5="<<a5<<endl;//普通成员函数可以访问静态成员变量
    }
public:
     static int a5;
    
};
int Maker5::a5=600;//静态成员变量必须在类外初始化
void test5()
{
    Maker5 m;
    m.func();
}
int main()
{
    test5();
    return 0;
}