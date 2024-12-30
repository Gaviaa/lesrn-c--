#include <iostream>
using namespace std;

class Father
{
public:
    int a;
private:
    int b;
protected:
    int c;
};
class son1:public Father  //公有继承
{
public:
    void func()
    {
        a=100;
        c;
        cout<<a<<endl;
    }

};
class son2:private Father
{
public:
    void func()
    {
        a;
        c;
        cout<<a<<endl;
    }
};
class son3:protected Father
{
public:
    void func()
    {
        a=1000;
        c;
        cout<<a<<endl;
    }
};
void test()
{
    son2 s;
}
int main()
{
    
}
