#include <iostream>
using namespace std;
//同等条件下，优先使用前置++
void test()
{
    int a = 1;      
    cout << ++a << endl;
    cout << a++ << endl;
    cout << a << endl;
}
class Maker
{
    friend ostream &operator<<(ostream &out, Maker &m);

public:
    Maker(int a)
    {
        this->a = a;
    }
    // 重载前置加加
    Maker &operator++()
    {
        ++a;
        return *this;
    }
    // 重载后置加加
    Maker operator++(int) // 占位参数
    {
        // 后置加加先返回后加加
        Maker tmp(*this); //*this里面的值是2
        ++this->a;
        return tmp;
    }

private:
    int a;
};
ostream &operator<<(ostream &out, Maker &m)
{
    out << m.a << endl;
    return out;
}
void test01()
{
    Maker m(1);
    cout << m << endl;
    cout << ++m << endl;
    Maker m2=m++;
    cout << m2 << endl;
    cout << m<< endl;
}
int main()
{
    test01();
    return 0;
}