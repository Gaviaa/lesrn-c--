#include<iostream>
using namespace std;

class People
{
public:
    virtual void Mypro()
    {

    }
};
class xishi:public People
{
public:
//重写父类虚函数
    virtual void Mypro()
    {
        cout<<"西施"<<endl;
    }
};
class wangzhaojun:public People
{
public:
    virtual void Mypro()
    {
        cout<<"王昭君"<<endl;
    }
};
class diaochan:public People
{
public:
    virtual void Mypro()
    {
        cout<<"貂蝉"<<endl;
    }
};
class yangyuhuan:public People
{
public:
    virtual void Mypro()
    {
        cout<<"杨玉环"<<endl;
    }
};

//同一个操作
void doLogin(People*pro)
{
    pro->Mypro();
}
void test()
{
   People*pro=NULL;
   pro =new xishi ;
   doLogin(pro); 
   delete pro;
   pro=new wangzhaojun;
    doLogin(pro); 
   delete pro;
   pro=new diaochan;
    doLogin(pro); 
   delete pro;
   pro=new yangyuhuan;
    doLogin(pro); 
   delete pro;

}

int main()
{
    test();
    return 0;
}
