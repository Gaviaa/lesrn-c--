#include<iostream>
using namespace std;

class Maker
{
public:
    Maker()
    {
        a=0;
    }
    void Seta(int val)
    {
        this->a=val;
    }
   operator bool() //重载bool类型
    {
        if(a<=0)
        {
            return false;
        }
        return true;
    }
public:
    int a;
};
void iftest(Maker &m)
{
    if(m)
    {
        cout<<"真"<<endl;
    }
    else
    {
        cout<<"假"<<endl;
    }
}

void test()
{
    Maker m;
    iftest(m);
    m.Seta(50);
    iftest(m); 
}

int main()
{
     test();
     return 0;
}