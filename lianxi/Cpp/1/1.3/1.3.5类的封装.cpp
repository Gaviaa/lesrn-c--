// 封装是把属性（变量）和方法（函数）封装到一个类中，然后给这些数据赋予权限
// 权限有三种：public、protected、private   类内部可以访问所有权限，类外部只能访问public权限
//类的默认权限是private
#include <iostream>
using namespace std;
class Maker
{
public:
    void set(string Name, int Id)
    {
        name = Name;
        id = Id;
    }
    void printMaker()
    {
        cout << "name:" << name << endl;
        cout << "id:" << id << endl;
    }

private:
    unsigned int id;
    string name;

protected: // protected是保护权限，只有子类可以访问
    int a;
};
class son : public Maker // 子类继承父类
{
public:
    void func()
    {
        // 下面这个a是从父类复制过来的
        a = 10; // 子类可以访问父类的保护权限
    }
    void getS()
    {
        cout << "son_a=" << a << endl;
    }

public:
};
void test()
{
    Maker m; // m是对象
    m.set("gavia", 2308211691);
    m.printMaker();
    son s;
    s.func();
    s.getS();
}
int main()
{
    test();
    return 0;
}