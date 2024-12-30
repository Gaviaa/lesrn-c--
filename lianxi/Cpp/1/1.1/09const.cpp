#include <iostream>
using namespace std;
const int a = 10; // 没有内存，const修饰的变量叫常量，常量必须初始化，且不能修改
                  // C中可以使用别的文件的全局变量，需要extern声明，C++中不行
void test01()
{
    // a = 20;//全局const变量不能直接修改
    int *p_1 = (int *)&a;
    // *p_1 = 20; // 也不可以通过指针间接修改，.c中也不可以
    cout << a << endl; // 编译阶段，编译器：cout << 10 << endl;
                       // 发生了常量折叠
}
void test()//
{
    int e = 10;
    const int f = e;//用变量给const变量编译器不会进行优化，可以通过指针间接修改
    int *p_2 = (int *)&f;
    *p_2 = 20; // 可以通过指针间接修改
    cout << "f=" << f << endl;
}
struct Maker//结构体中的const变量不会被优化
{
    Maker()
    {
        g=200;
    }
    int g;
};
void test02()
{
    const Maker m;
    cout<<"g="<<m.g<<endl;
    int *p_3 = (int *)&m;
    *p_3 = 300;
    cout<<"g="<<m.g<<endl;
}
int main()
{

    test01();
    test();//用变量给const变量编译器不会进行优化，可以通过指针间接修改
    test02();//结构体中的const变量不会被优化
    // volatile const int b = 30;//取消编译器优化
    const int b = 30; // 栈区
    // b = 40;//const修饰的变量不能直接修改
    int *p = (int *)&b; // c中可以通过指针修改
    *p = 40;            // 不能修改，.c中可以
    cout << b << endl;  // 编译器：cout << 30 << endl;输出结果为30，因为C++中编译器会对const修饰的变量进行优化
                        // 取消优化为volatile const int b = 30;
    cout << *p << endl;
    cout << "b的地址" << &b << endl;
    cout << "p的地址" << p << endl;
    // 终端编译指令：g++ -o 09const 09const.cpp
    return 0;
}