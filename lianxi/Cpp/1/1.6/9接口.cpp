#include<iostream>
using namespace std;
//抽象类
class Father
{
private:
public:
    virtual void func1()=0;//接口声明
    virtual void func2(int a)=0;
    virtual void func1(int a,int b)=0;

};
class son:public Father
{
    public:
    virtual void func1() //接口的实现
    {

    }
    virtual void func2(int a)
    {

    }
    virtual void func1(int a,int b)
    {

    }
};
void test()
{
    son s;
    s.func1();
}
int main()
{
    test();
    return 0;
}
