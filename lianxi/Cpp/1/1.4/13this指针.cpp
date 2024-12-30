#include <iostream>
using namespace std;
//每个对象都有一个this指针，指向自己,指向不能改变
//编译器会把this指针传入成员函数中
//this指针指向对象的存储空间
class Maker
{
public:
    Maker()
    {
        a = 10;
        b = 20;
    }
    void func()
    {
        cout << this->a << " " << this->b << endl;
    }
public:
    int a;
    int b;
};
void test01()
{
    Maker m;
    m.func();
    Maker m2;
    m2.func();
}
class Maker2
{
public:
//当形参名和成员变量名相同时，可以用this指针区分
    Maker2(int id)
    {
        this->id = id;
    }
    //返回对象的本身,返回对象的引用
    Maker2 &getMaker()
    {
        return *this;//this是指针，*this是对象
    }
    Maker2 ff()
    {
        return b;
    }
    void func()
    {
        cout << this->id << endl;
    }
    static void func2()
    {
        //静态成员函数没有this指针
        //cout << this->id << endl;
    }
public:
    int id;
    int b=300000;
};
void test02()
{
    Maker2 m(10);
    m.func();
   cout<< m.ff().b << endl;
   cout<< m.getMaker().id << endl;

    
   
}
int main()
{
    test02();
    return 0;
}