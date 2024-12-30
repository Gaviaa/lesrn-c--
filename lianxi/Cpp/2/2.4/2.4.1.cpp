#include <iostream>
using namespace std;
//静态转换
//1.基础类型

void test1()
{
    char a = 'a';
    //char->double
    double b = static_cast<double>(a);//强制类型转换,static_cast<目标类型>(原始数据)
    cout << "b = " << b << endl;
}
//2.类指针或引用转换
class A
{
public:
    virtual void func()
    {
        cout << "A::func()" << endl;
    }
};
class B : public A
{
public:
    void func()
    {
        cout << "B::func()" << endl;
    }
    void func2()
    {
        cout << "B::func2()" << endl;
    }
};
//指针
void test2()
{
    A *a =new B;//父类指针指向子类对象
    B *b1 = static_cast<B *>(a);//父类指针转换为子类指针(向下，不安全)，static_cast<目标类型>(原始数据)，
    b1->func();
    b1->func2();
}
//引用
void test03()
{
    A a;
    B &b = static_cast<B &>(a);//父类引用转换为子类引用(向下，不安全)，static_cast<目标类型>(原始数据)，
    b.func();//打印出A::func()，因为引用是指向a的，a是A类的
    b.func2();
}
//动态转换
void test04()
{
    A *a = new B;//发生多态才可以向下转换
    B *b = dynamic_cast<B *>(a);//动态类型转换，只能用于指针或引用，dynamic_cast<目标类型>(原始数据)
    if (b == NULL)
    {
        cout << "转换失败" << endl;
    }
    else
    {
        b->func();
        b->func2();
    }
}
void test05(){
    B b1;
    A &a1 = dynamic_cast<A &>(b1);//动态类型转换，只能用于指针或引用，dynamic_cast<目标类型>(原始数据)
    a1.func();
}
//常量转换
void test06(){
    const int a = 10;
    //int *p = &a;//error
    int *p = const_cast<int *>(&a);//去掉常量性，const_cast<目标类型>(原始数据)
    *p = 20;
    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl;
}
//重新解释转换:不安全
void test07(){
    int a = 10;
    double &b = reinterpret_cast<double &>(a);//重新解释转换，reinterpret_cast<目标类型>(原始数据)
    int &c = reinterpret_cast<int &>(a);

    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}
int main()
{
    test07();
    return 0;
}