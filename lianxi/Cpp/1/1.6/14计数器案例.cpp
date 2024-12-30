#include<iostream>
using namespace std;

class rule
{
public:
    virtual double getNum(double a,double b)=0;
};
class rule_add:public rule
{
public:
    virtual double getNum(double a,double b)
    {
        return a+b;
    }
};
class rule_minux:public rule
{
public:
    virtual double getNum(double a,double b)
    {
        return a-b;
    }
};
class rule_take:public rule
{
public:
    virtual double getNum(double a,double b)
    {
        return a*b;
    }
};
class rule_division:public rule
{
public:
    virtual double getNum(double a,double b)
    {
        if(b==0)
        {
            cout<<"除数不能为0"<<endl;
            return -1;
        }
        long double c=a/b;
        return  c;
    }
};

void test()
{
    int a,b,c;
    double d;
    rule *r=NULL;
    r=new rule_add;
    a=r->getNum(10,40);
    r=new rule_minux;
    b=r->getNum(10,40);
    r=new rule_take;
    c=r->getNum(10,40);
    r=new rule_division;
    d=r->getNum(2,4);
    cout<<a<<endl;
     cout<<b<<endl;
     cout<<c<<endl;
     cout<<d <<endl;
     delete r;
}
int main()
{
    test();
    return 0;
}