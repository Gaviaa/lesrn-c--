#include<iostream>
using namespace std;

class Building
{
    friend void GoodGay(Building &bd);//声明这个全局函数是Building的友元函数，可以访问Building的私有成员
    friend class GoodF;//声明GoodF类是Building的友元类，可以访问Building的私有成员
    friend class GoodF2;
public:
    Building()
    {
        this->keting="客厅";
        this->woshi="卧室";
    }
    string keting;
private:
    string woshi;
};
void GoodGay(Building &bd)
{
    cout<<"好基友正在访问："<<bd.keting<<endl;
    cout<<"好基友正在访问："<<bd.woshi<<endl;//友元函数才可以访问类的私有成员
}
void test()
{
    Building gavia;
    GoodGay(gavia);
}
class GoodF
{
public:
    void func(Building &bd)
    {
        cout<<"访问："<<bd.keting<<endl;
        cout<<"访问："<<bd.woshi<<endl;
    }
    
};
//通过传入参数的方式，访问私有成员
void test2()
{
    Building gavia;
    GoodF gf;
    gf.func(gavia);
}
//通过类内指针访问类的私有成员
class GoodF2
{
public:
    GoodF2()
    {
        pbu=new Building;
    }
    void func()
    {
        cout<<"访问："<<pbu->keting<<endl;
        cout<<"访问："<<pbu->woshi<<endl;
    }
public:
    Building *pbu;
};
void test3()
{
    GoodF2 gf2;
    gf2.func();
}
int main()
{
    test();
    test2();
    test3();
    return 0;
}