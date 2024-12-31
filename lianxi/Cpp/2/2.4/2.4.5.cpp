#include <iostream>
using namespace std;

class Maker {
public:
    Maker() {
        cout << "Maker的构造函数" << endl;
    }
    Maker(const Maker &m) {
        cout << "Maker的拷贝构造函数" << endl;
    }
    ~Maker() {
        cout << "Maker的析构函数" << endl;
    }
};
//产生三个对象
void func1() {
    Maker m;//第一个对象，在异常接受前会被释放
    throw m;//第二个对象，是第一个对象拷贝过来的
}


void test01(){
    try{
        func1();
    }
    catch(Maker m1){//第三个对象，是第二个对象拷贝过来的
        cout<<"接受一个Maker类型的异常"<<endl;
        //第二个和第三个对象在catch结束会被释放
    }
}
//产生两个对象
void func2() {
    throw Maker();//匿名对象，第一个对象
    }
void test02(){
    try{
        func2();
    }
    catch(Maker m1){//  第二个对象
        cout<<"接受一个Maker类型的异常"<<endl;
        //第一个对象和第二个在catch结束会被释放

    }
}
//产生一个对象，用引用
void func3() 
{
    throw Maker();//匿名对象，第一个对象
}
void test03(){
    try{
        func3();
    }
    catch(Maker &m1){// *引用*
        cout<<"接受一个Maker类型的异常"<<endl;
    }
}
//产生一个对象，用指针
void func4() 
{
    //编译器不允许对栈中的匿名对象取地址操作
    //throw Maker();//匿名对象,error
    //编译器允许对堆中的匿名对象取地址操作
    throw new Maker();
}
void test04(){
    try{
        func4();
    }
    catch(Maker *m1){//
        cout<<"接受一个Maker类型的异常"<<endl;
        delete m1;
    }
}
int main() {
    test04();
    return 0;
}