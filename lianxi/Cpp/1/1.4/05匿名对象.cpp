#include<iostream>
using namespace std;

class Maker
{
public:
    Maker()
    {
        cout << "无参构造函数" << endl;
    }
    Maker(int a)
    {
        cout << "有参构造函数" << endl;
    }
    Maker(const Maker &m)
    {
        cout << "拷贝构造函数" << endl;
    }
    ~Maker()
    {
        cout << "析构函数" << endl;
    }
};
void test01()
{
    Maker m1(10);
    Maker(); //匿名对象（没有名字m1），当前行结束后，系统会立即回收掉匿名对象，生命周期在当前行结束

    cout <<"test01结束"<< endl;
    Maker m2 = Maker(10);//这不是匿名对象，是一个有名字的对象，不会被立即回收
}
int main()
{
    test01();
    return 0;
}