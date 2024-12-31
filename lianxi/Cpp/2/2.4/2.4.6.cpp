#include <iostream>
using namespace std;
//多态发生三个条件
class Father{
    public:
        virtual void print(){
            cout<<"Father"<<endl;
        }
};
class Son:public Father{//1.有继承
    public:
        virtual void print(){//2.重写父类的虚函数
            cout<<"Son"<<endl;
        }
};
class SonOut:public Father{
    public:
        virtual void print(){
            cout<<"越位溢出"<<endl;
        }
};
void func(int a,int b){
    if (a==0){
        throw Son();
    }
    if (b==0){
        throw SonOut();
    }
}
void test(){
    int a=0;
    int b=3;
    try{
        func(a,b);
    }
    catch(Father &f){//3.父类指针或引用接收子类对象
        f.print();
    }
}
int main(){
    test();
    return 0;
}