#include<iostream>
#include<string>
using namespace std;
//友元函数用来访问类的私有成员
template<class NameType,class AgeType>
class Maker;//提前声明
template<class NameType,class AgeType>
void printMaker2(Maker<NameType,AgeType>&p);//类外实现需要提前声明
template<class NameType,class AgeType>
class Maker
{
    friend void printMaker(Maker< NameType,AgeType>&p)
    {
        cout<<"类内实现友元函数"<<p.name<<" "<<p.age<<endl;
    }
    friend void printMaker2<>(Maker< NameType,AgeType>&p);
public:
    Maker(NameType name,AgeType age)
    {
        this->name=name;
        this->age=age;
    }      
private:  
    NameType name;
    AgeType age;
    
};
template<class NameType,class AgeType>
void printMaker2(Maker<NameType,AgeType>&p)
{
    cout<<"类外实现友元函数"<<p.name<<" "<<p.age<<endl;
}
void test01()
{
    Maker<string,int> m("Tom",20);
    printMaker(m);
    printMaker2(m);
}
int main()
{
    test01();
    return 0;
}