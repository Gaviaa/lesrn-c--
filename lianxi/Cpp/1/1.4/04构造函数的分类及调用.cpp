#include <iostream>
using namespace std;
class Maker
{
public:
    // 按照参数分类：有参、无参
    Maker()
    {
        cout << "无参构造函数" << endl;
    }
    Maker(int a)
    {
        cout << "有参构造函数" << endl;
    }
    // 按照类型分类：普通构造函数、拷贝构造函数
    Maker(const Maker &m)
    {
        cout << "拷贝构造函数" << endl;
    }

private:
    int a;
};
void test01()
{
    Maker m;              // 调用无参构造函数
    Maker m1(10);         // 调用有参构造函数
    Maker m2(m1);         // 调用拷贝构造函数
    //不常用
    Maker m4 = Maker(10); // 调用有参构造函数
    Maker m3 = m2;        // 调用拷贝构造函数
    Maker m5 = 10;        // 调用有参构造函数
    Maker m6;        
     m6 = m5; // 调用无参构造函数
}
int main()
{
    test01();
    return 0;
}