#include<iostream>
using namespace std;

class Maker
{
public:
    Maker(string id,int age)
    {
        this->id=id;
        this->age=age;
        this->b=10;

    }
    void printMaker()const  //加const修饰，表示函数内部不会修改成员属性,这就是常函数
    {
        //this->id="duan";  //常函数不能修改成员属性
        b=20;  //常函数可以修改mutable修饰的成员属性
        cout<<"id:"<<this->id<<" age:"<<this->age<<endl;
        cout<<"b:"<<this->b<<endl;
    }
    void func()
    {}
public:
    string id;
    int age;
    mutable int b; //加mutable修饰，表示即使在常函数中，也可以修改这个成员属性
};
int main()
{
    const Maker m("gavia段",22);//加const变为常对象
    //m.id="jsokjpo" //常对象不能修改成员属性
    m.printMaker();//常对象只能调用常函数
    //m.func();//常对象只能调用常函数********重点
    m.b=100;//常对象可以修改mutable修饰的成员属性
    cout<<"b="<<m.b<<endl;
    Maker m2("gavia段",22);
    m2.printMaker();//普通对象可以调用常函数
    return 0;
}