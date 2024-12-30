#include<iostream>
using namespace std;
//一个类如果重载了函数调用符号，那么这个类实例化出的对象也叫仿函数
//其作用：1.方便代码维护 2.方便有权限调用函数 3、作为算法的策略
class Maker
{
public:
    Maker()
    {
        this->name="gavia";
    }
    void printMaker()
    {
        cout<<name+" you are handsome!"<<endl;
    }
    //重载函数调用符号
    void operator()()
    {
        cout<<"hello"<<endl;
    }
    void operator()(int v1,int v2)
    {
        cout<<v1+v2<<endl;
    }
public:
    string name;
};
void test ()
{
    Maker func;
    func();  //看起来像函数，其实func是对象
    func(10,20);
    func.printMaker();
}
int main()
{
    test();
    return 0;
}