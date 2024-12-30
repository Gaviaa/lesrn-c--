#include<iostream>
using namespace std;

template<class T>
class Father
{
public:
    Father(T a)
    {
        this->a = a;
    } 
    void print()
    {
        cout << "a=" << a << endl;
    }
    T a;
};
//普通类继承
class Son :public Father<int>//必须指定父类模板参数
{
public:
    Son(int a):Father<int>(a)
    {
    }
    
};

//类模板继承
template<class T>
class Son2 :public Father<T>
{
public:
    Son2(T a):Father<T>(a)
    {
    }
   
};
void test()
{
    Son s(1);
    
    s.print();
    Son2<int> s2(2);
    s2.print();
    
}
int main()
{
    test();
    return 0;
}