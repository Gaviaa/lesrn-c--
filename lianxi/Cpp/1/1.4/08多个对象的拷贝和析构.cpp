#include<iostream>
using namespace std;

class BWM
{
public:
    BWM(int a)
    {
        cout << "BWM()构造" << "a="<<a<<endl;
    }
    ~BWM()
    {
        cout << "BWM()析构" << endl;
    }
};
class Buick
{
public:
    Buick ()
    {
        cout << "Buick()构造" << endl;
    }
    ~Buick()
    {
        cout << "Buick()析构" << endl;
    }
};
class Maker
{
public:
    Maker():bwm(10) //初始化列表:只能写在构造函数中，初始化列表先于构造函数执行
    //如果使用初始化列表，那么所有构造函数都要写在初始化列表
    {
        cout << "Maker()构造" << endl;
    }
    ~Maker()
    {
        cout << "Maker()析构" << endl;
    }
private:
    BWM bwm; //成员对象
    Buick buick;
};
//如果类有成员对象，那么先调用成员对象的构造函数，再调用自身的构造函数，析构函数的顺序与构造函数相反
//成员对象的构造函数调用顺序与成员对象在类中的声明顺序一致
void test01()
{
    Maker m;
}
//初始化列表是调用成员对象的指定的构造函数
void test02()
{
    Maker m;
}

int main()
{
    test02();
    return 0;
}