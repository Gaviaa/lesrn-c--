#include<iostream>
using namespace std;
int myFunc(int a,int b=0)//b=0是默认参数,默认参数必须从右往左设置,如果函数声明有默认参数，函数实现就不能有默认参数
                            //.h和.cpp不能重复设置默认参数
{
    return a+b;
}
void test01()
{
    //函数的默认参数的作用
    //当函数调用时，如果有默认参数，可以不用传递参数，如果传递了参数，则覆盖默认参数
    cout<<myFunc(10)<<endl;
    cout<<myFunc(10,20)<<endl;
}
//函数占位参数,占位参数也可以有默认参数 void func(int a,int=20)
void func(int a,int)//占位参数，调用时必须传入一个参数，但是不需要使用
{
    cout<<"func调用"<<endl;
}
void test02()
{
    func(10,20);
}
int main()
{
    test01();
    test02();
    return EXIT_SUCCESS;
}