// 运算符重载是对已有的运算符重新定义，赋予其另一种功能，以适应不同的数据类型
// 目的是让语法更加简洁
// 统一名字 operator
#include <iostream>
using namespace std;

class Maker
{
    // friend Maker operator+(Maker &p1, Maker &p2);
    friend void Print(Maker &m);

public:
    Maker(int ID, int Age)
    {
        this->id = ID;
        this->age = Age;
    }
    // 成员函数方式，只需要一个参数，这个参数是加号的右边
    Maker operator+(Maker &m)
    {
        Maker temp(this->id + m.id, this->age + m.age); // 加号左边参数变为了this指针
        return temp;
    }

private:
    int id;
    int age;
};
/* // 全局方式
Maker operator+(Maker &p1, Maker &p2)
{
    Maker temp(p1.id + p2.id, p1.age + p2.age);
    return temp;
} */
void Print(Maker &m)
{
    cout << m.id << ",";
    cout << m.age << endl;
}
//同类型对象相加
void test()
{
    Maker m1(1, 20);
    Print(m1);
    Maker m2(2, 30);
    Print(m2);
    // 编译器看到两个对象相加，那么编译器会去找有没有叫operator+的函数
    Maker m3 = m1 + m2; // 不重载无法直接相加
    Print(m3);
    Maker m4 = m1 + m2 + m3; // 连加也成立
    Print(m4);
}
int main()
{
    test();
    return 0;
}