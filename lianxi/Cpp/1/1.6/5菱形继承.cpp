#include<iostream>
using namespace std;

class Animal
{
public:
    Animal()
    {
        mA=100;
    }
public:
    int mA;
};
//虚继承
class Sheep:virtual public::Animal
{

};
class Camel:virtual public::Animal
{

};
class SheepCamel:public::Sheep,public::Camel
{

};
void test()
{
    SheepCamel sc;
    sc.mA;
    cout<<sc.mA<<endl; //有二义性问题
}
int main()
{
    test();
    return 0;
}




