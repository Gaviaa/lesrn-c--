#include <iostream>
using namespace std;

int main()
{
    // 普通引用
    int a = 10;
    int &b = a; //&b是a的引用，b是a的别名,不是取地址
    b = 100;    // 给b赋值，相当于给a赋值

    // int &ref=100;这是错误的
    const int &ref = 100; // 加const后，编译器处理方式：直接将100放入到常量区，然后ref引用了这个数，但是不可以通过ref修改
    // bool类型定义的变量只有true和false两种值，0和1，bool类型变量在内存中占1个字节
    bool is = 0;
    if (is)
    {
        cout << "真" << endl;
    }
    else
    {
        cout << "假" << endl;
    }

    return EXIT_SUCCESS;
}