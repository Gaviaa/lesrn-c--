#include<iostream>
using namespace std ;
class Maker
{
public:
    Maker()
    {
        a = 100;
        cout << "无参构造函数" << endl;
    }
    //拷贝构造函数
    Maker(const Maker &m)  //const是为了防止修改m的值，且要用引用，否则会无限调用拷贝构造函数
    {
        a = m.a;
        cout << "拷贝构造函数" << endl;
    }
    void printMaker()
    {
        cout << "a = " << a << endl;
    }
private:
    int a;
};
void test01()
{
    Maker m1;
    //用一个已经创建完毕的对象来初始化一个新对象
    Maker m2(m1);//调用拷贝构造函数
    m2.printMaker();
}
class Maker2
{
    public:
    Maker2()
    {
        a = 100;
        cout << "无参构造函数" << endl;
    }
    void printMaker()
    {
        cout << "a = " << a << endl;
    }
private:
    int a;
};
void test02()
{
    Maker2 m1;
    Maker2 m2(m1);//没有拷贝构造函数，调用默认的拷贝构造函数
    //默认拷贝构造函数如下
    /* Maker（const Maker &m）
    {
        a = m.a;
    } */
    m2.printMaker();
}
int main()
{
    test01();
    test02();
    return 0;
}