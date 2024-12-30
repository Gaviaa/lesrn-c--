#include<iostream>   //引用：与c中指针一样，引用是给空间起别名的作用
//引用的本质是编译器在内部使用常指针来实现
using namespace std;
void test01()
{
    int a=10;
    int &b=a;//&b是a的引用，b是a的别名,不是取地址

    b=100;//给b赋值，相当于给a赋值
    cout<<"a:"<<a<<endl;
}
void func(int &a)
{
    a=200;
}
void test02()
{
    int a=10;
    func(a);//引用做函数参数，传递的是实参本身，而不是实参的拷贝
    cout<<"a:"<<a<<endl;
}
int main()
{   
    test01();
    test02();
    return EXIT_SUCCESS;
}
//注意：引用必须初始化，因为引用一旦初始化后，就不可以改变指向了
//    引用必须引一块合法的内存空间