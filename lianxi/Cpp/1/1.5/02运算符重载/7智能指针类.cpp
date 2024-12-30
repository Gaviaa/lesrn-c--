#include <iostream>
using namespace std;

// 智能指针类是管理另一类的对象的释放
class Maker
{
public:
    Maker()
    {
        cout << "无参构造" << endl;
    }
    void printMaker()
    {
        cout << "hello Maker" << endl;
    }
    ~Maker()
    {
        cout << "析构函数" << endl;
    }
};
class SmartPoint
{
public:
    SmartPoint(Maker *m)
    {
        this->pMaker = m;
    }
    //重载指针运算符
    Maker *operator->()
    {
        return this->pMaker;
    }
    //重载*
    Maker &operator*()
    {
        return *pMaker;
    }
    ~SmartPoint()
    {
        cout << "smartpoint析构函数" << endl;
        if (this->pMaker != NULL)
        {
            delete this->pMaker;//delete会调用Maker析构函数
            this->pMaker = NULL;
        }
    }
private:
    Maker *pMaker;
};
void test01()
{
    Maker *p = new Maker;
    SmartPoint sm(p); // 栈区会调用析构函数，释放
}
void test02()
{
    Maker *p = new Maker;
    SmartPoint sm(p);  
   p->printMaker();
    sm->printMaker(); 
    (*sm).printMaker();
    (*p).printMaker();
}
int main()
{
    test02();
    return 0;
}
