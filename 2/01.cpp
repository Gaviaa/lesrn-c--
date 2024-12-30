//函数模板
#include<iostream>
using namespace std;
template<class T>//声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用数据类型
void mySwap(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}
//测试
void test01()
{
    int a=10;
    int b=20;
    char c='c';
    char d='d';
    mySwap(a,b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    mySwap(c,d);
    cout<<"c="<<c<<endl;
    cout<<"d="<<d<<endl;
}
int main()
{
    test01();
    return 0;
}