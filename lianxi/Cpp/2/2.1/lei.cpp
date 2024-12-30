//类模板作为函数参数
#include <iostream>
#include <string>
using namespace std;
template <class NameType,class AgeType>
class Maker
{
public:
    Maker(NameType name, AgeType age)
    {
        this->name = name;
        this->age = age;
    }
    void print()
    {
        cout << "姓名：" << name << " 年龄：" << age << endl;
    }
public:
    NameType name;
    AgeType age;
};
void func(Maker<string,int> &m)//1.指定传入的参数类型
{
    m.print();
}
template <class T1,class T2>
void func2(Maker<T1,T2>&m)//2.模板参数化
{
    m.print();
}
template <class T>
void func3(T &m)//3
{
    m.print();
}
void test01()
{
    Maker<string,int> m("张三", 10);
    func(m);
    func2(m);
    func3(m);
}
int main()
{
    test01();
    return 0;
}