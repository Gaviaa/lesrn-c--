#include <iostream>
using namespace std;

class Maker
{
public:
    Maker()
    {
        cout << "无参构造函数" << endl;
    }
    Maker(int a)
    {
        cout << "有参构造函数" << endl;
    }
    Maker(const Maker &m)
    {
        cout << "拷贝构造函数" << endl;
    }
    ~Maker()
    {
        cout << "析构函数" << endl;
    }
};
// 1.对象以值传递的方式给函数参数传值
void func(Maker m) // Maker m = m1;调用拷贝构造函数
{
}
void test01()
{
    Maker m1;
    func(m1);
}
// 2.用一个已有的对象初始化一个新对象
void test02()
{
    Maker m1;
    Maker m2(m1);
}
// 3.函数的局部对象以值传递的方式从函数返回
Maker func2()
{
    Maker m;
    cout << "局部对象的地址" << &m << endl;
    return m; //
}
void test03()
{
    Maker m1 = func2();
    cout << "test03中的局部对象的地址" << &m1 << endl;
}
int main()
{
    test03();
    return 0;
}