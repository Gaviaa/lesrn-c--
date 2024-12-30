#include <iostream>
using namespace std;
template <class T>
class Complex
{
public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(T a, T b)
    {
        this->a = a;
        this->b = b;
    }
    void print()
    {
        cout << "(" << a << " ," << b << " )" << endl;
    }
    Complex add(Complex &a,Complex &b)//c3.add(c1,c2)
    {
        Complex tmp;
        tmp.a = a.a + b.a;
        tmp.b = a.b + b.b;
        return tmp;
    }
    Complex C_add(Complex &a)//c3=c1.C_add(c2) 
    {
        Complex <T> tmp;
        tmp.a = this->a + a.a;
        tmp.b = this->b + a.b;
        return tmp;
    }
    Complex operator+(Complex &a)//运算符重载
    {
        Complex <T> tmp;
        tmp.a = this->a + a.a;
        tmp.b = this->b + a.b;
        return tmp;
    }
private:
    T a;
    T b;
};
void test01()
{
    Complex<int> c1(3, 4);
    c1.print();
    Complex<int> c2(5,-10);
    
    c2.print();
    Complex<int> c3=c3.add(c1,c2);
    c3.print();
}
void test02()
{
    Complex<int> c1(3, 4);
    c1.print();
    Complex<int> c2(5,-10);
    c2.print();
    Complex<int> c3;
    c3=c1.C_add(c2);
    c3.print();
    Complex<double> c4(1.1,2.2);
    c4.print();
    Complex<double> c5=c4.C_add(c4);
    c5.print();
}
void test03()
{
    Complex<int> c1(3, 4);
    c1.print();
    Complex<int> c2(5,-10);
    c2.print();
    Complex<int> c3;
    c3=c1+c2;
    c3.print();
}
int main()
{
    test03();
    return 0;
}