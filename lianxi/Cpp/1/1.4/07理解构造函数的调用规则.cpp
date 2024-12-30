#include<iostream>
using namespace std;

class Maker
{
public:
    
    /* Maker(int a)
    {
        cout << "有参构造函数" << endl;
    } */
    Maker(const Maker &m)
    {
        cout << "拷贝构造函数" << endl;
    }
};
//如果程序员提供了有参构造函数，编译器不会提供默认无参构造函数，但是会提供默认拷贝构造函数 
void test01()
{
    /* //Maker m;//错误，没有无参构造函数
    Maker m1(10);//有参构造函数
    Maker m2(m1);//拷贝构造函数*/
} 
//如果程序员提供了拷贝构造函数，编译器不会提供其他构造函数
void test02()
{
   /*  Maker m1;//error */
   
}
int main()
{
    test01();
    return 0;
}