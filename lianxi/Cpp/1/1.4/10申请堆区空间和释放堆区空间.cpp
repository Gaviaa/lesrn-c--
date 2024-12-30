#include<iostream>
#include<string.h>
using namespace std;

class Maker
{
public:
     Maker ()
    {
        cout << "构造函数" << endl;
    }
    Maker (int a)
    {
        cout << "有参构造函数" << endl;
    }
    ~Maker()
    {
        cout << "析构函数" << endl;
    }
    int a;
};
int main()
{
    //Maker m;//申请栈区空间，自动释放
    Maker *m=(Maker*)malloc(sizeof(Maker));//申请堆区空间，需要手动释放.c语言的写法(不会调用构造函数和析构函数)
    Maker *p=new Maker;//申请堆区空间，需要手动释放,
    Maker *p1=new Maker(10);
    delete p;//释放堆区空间
    p=NULL;
    delete p1;
    p1=NULL;
    return 0;
}