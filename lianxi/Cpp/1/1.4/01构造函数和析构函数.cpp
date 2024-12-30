#include <iostream>
#include <cstring> // add this line to include the header file for strlen
using namespace std;

class Maker
{
public:
    // 构造函数的作用是初始化成员变量，是编译器自动调用的
    Maker()
    {
        a = 10;
        cout << "构造函数" << endl;
    }
    // 析构函数的作用是清理对象，是编译器自动调用的
    ~Maker()
    {
        cout << "析构函数" << endl;
    }

public:
    int a;
};
void test01()
{
    // 实例化对象，内部做了两件事，1.分配空间，2.调用构造函数
    Maker m;
    int b = m.a;
    cout << b << endl;
}
// 析构函数的作用
// 1.用来清理对象
// 2.用来释放对象所占用的内存空间
// 3.析构函数是在对象销毁前调用的，由编译器自动调用，不要手动调用
class Maker2
{
public:            // 有参构造

    Maker2( const char *name, int age)//构造函数可以重载 
    {
        cout << "有参构造" << endl;
        // 从堆区空间申请
        pName = (char *)malloc(strlen(name) + 1);//
        strcpy(pName, name);
        mAge = age;
    }
    ~Maker2() // 析构函数
    {
        // 释放堆区空间
        cout << "析构函数" << endl;
        if (pName != NULL)
        {
            free(pName);// 释放堆区空间
            pName = NULL;
        }
    }
    void printMaker2()
    {
        cout << "姓名：" << pName << " 年龄：" << mAge << endl;
    }

private:
    char *pName;
    int mAge;
};


void test02()
{
    Maker2 m2("张三", 18);
    m2.printMaker2();
}
int main()
{
    //test01();
    test02();
    return 0;
}
//有对象产生必然会调用构造函数，有对象销毁必然会调用析构函数
//有多少次对象产生和销毁就会调用多少次构造函数和析构函数