//函数重载是允许函数名相同
//函数重载的条件：函数名相同，参数列表不同（参数个数，参数类型，参数顺序）
//函数重载的目的：提高函数的复用性
#include<iostream>
using namespace std ;
//参数个数不同
void func()
{
    cout<<"func()"<<endl;
}
void func(int a)
{
    cout<<"func(int a)"<<endl;
}
//参数类型不同
void func(double a)
{
    cout<<"func(double a)"<<endl;
}
//参数顺序不同
void func(int a,double b)
{
    cout<<"func(int a,double b)"<<endl;
}
void func(double a,int b)
{
    cout<<"func(double a,int b)"<<endl;
}
//函数重载碰到默认参数
void myfunc(int a,int b = 10)
{
    cout<<"func(int a,int b = 10)"<<endl;
}
void myfunc(int a)
{
    cout<<"func(int a)"<<endl;
}
void myfunc(int a)
{
    cout<<"myfunc(int a)"<<endl;
}
void myfunc(int a,int b)
{
    cout<<"myfunc(int a,int b)"<<endl;
}
void test01()
{
    //myfunc(10);//二义性,不知道调用哪个
    myfunc(10,20);
}
int main()
{
    char a = 'a';
    func();
    func(10);
    func(3.14);
    func(10,3.14);
    func(a); //char类型会自动转换为int类型，调用func(int a)
    return 0;
}