#include <iostream>
using namespace std;

class Father
{
public:
    static void func()
    {
        cout<<"Father func()"<<endl;
    }
    static void func(int a)
    {
        cout<<"Father func(int a)"<<endl;
    }
    static void func(int a,int b)
    {
        cout<<"Father func(int a,int b)"<<endl;
    }
public:
    static int mA;
};
int Father::mA = 10;
class Son : public ::Father
{
    public:
    static void func()
    {
        cout<<"Son func()"<<endl;
    }
public:
static int mB;
};
int Son::mB=20;
void test()
{
    Son s;
    cout << s.mA << endl;
    cout << s.mB << endl;
    s.func();
    s.Father::func(10);
    s.Father::func(10,20);
}
int main()
{
    test();
    return 0;
}