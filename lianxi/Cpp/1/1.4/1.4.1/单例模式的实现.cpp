// 单例模式类似任务管理器，只能有一个实例，一个类只能实例化一个对象
#include <iostream>
using namespace std;
class Maker
{
    // 1.将构造函数私有化
private:
    Maker()
    {
    }
    Maker(const Maker &m)
        {
        }
public:
    // 静态成员函数访问静态成员变量
    static Maker *getInstance()
    {
        return pMaker;
    }
    int a;

private:
    // 2.定义一个类内的静态成员指针
    static Maker *pMaker;
    // 3.提供一个静态成员变量
};
Maker *Maker::pMaker = new Maker; // 这里可以new是因为有Maker：：作用域，编译器这时把它当成在类内

void test()
{
    // Maker m;//错误，不能创建对象
    Maker *m = Maker::getInstance();
    Maker *m2 = Maker::getInstance();
    cout << m << endl;
    cout << m2 << endl; // m和m2的地址相同，说明只有一个实例
    m->a = 100;
    cout<<m->a<<endl;
       
}

int main()
{
    test();
    return 0;
}
/* 实现单例模式的步骤：
1.将无参构造函数和拷贝构造私有化
2.定义一个类内的静态成员指针
3.在类外初始化时，new一个对象
4.把指针权限设置为私有，然后提供静态成员函数，让外面获取这个指针 */