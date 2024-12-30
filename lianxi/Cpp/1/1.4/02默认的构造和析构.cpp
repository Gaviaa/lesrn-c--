#include<iostream>
using namespace std ;
class Maker
{
public:

    //编译器默认提供默认的构造函数和析构函数
    //Maker(){}//默认构造函数,函数体为空
    //{

    //}
    //~Maker(){}//默认析构函数
    //{

    //}
    void printMaker()
    {
        a = 100;
        cout << "a = " << a << endl;
    }
private:
    int a;
};
void test01()
{
    Maker m;
    m.printMaker();
}
int main()
{
    test01();
    return 0;
}