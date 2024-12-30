#include <iostream>
using namespace std;
// 空类的大小为1,因为编译器从内存更好区分对象
class Maker
{
};
void test() // 空类的大小为1
{
    Maker m;
    cout << sizeof(m) << endl;
}
class Maker2
{
public:
    void func() // 非静态成员函数不占用类大小
    {
        b = 20;
        cout << "b=" << b << endl;
    }
    static void func2() // 静态成员函数不占用类大小
    {
    }
    static int a; // 静态成员变量不占用类大小
    int b;        // 普通成员变量占用类大小
};
int Maker2::a = 100;
void test2()
{
    cout << sizeof(Maker2) << endl;
    Maker2 m;
    m.func();
    cout << sizeof(m) << endl;
}
int main()
{
    test2();
    return 0;
}