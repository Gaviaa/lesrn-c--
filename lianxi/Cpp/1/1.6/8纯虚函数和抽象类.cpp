#include<iostream>
using namespace std;
//抽象层
//有纯虚函数的类叫抽象类，不能实例化对象
class ruler
{
public:
//纯虚函数
    virtual int getnum(int a,int b);
};
//实现层
class plus_ruler :public ruler
{
public:
    virtual int getnum(int a,int b)
    {
        return a+b;
    }
};
class miux_ruler :public ruler
{
public:
    virtual int getnum(int a,int b)
    {
        return a-b;
    }
};
//业务层
int doLogin(ruler*cal)
{
    int a=10;
    int b=20;
    int ret=cal->getnum(a,b);
    return ret;
}
void test()
{
    
    ruler *r=NULL;
    r=new plus_ruler; 
    cout<<doLogin(r)<<endl;
    delete r;
    r=new miux_ruler;
    cout<<doLogin(r)<<endl;
    delete r;
}
int main()
{
    test();
    return 0;
}