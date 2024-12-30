#include <iostream>
#include<string.h>
using namespace std;

class Maker
{
public:
    Maker()
    {
        id = 0;
        age = 0;
    }
    Maker(int id,int age)
    {
        this->id=id;
        this->age=age;
    }
    bool operator==(Maker&m)
    {
        if(this->age==m.age&&this->id==m.id)
        {
            return 1;
        }
        return 0;
    }
     bool operator!=(Maker&m)
    {
        if(this->age==m.age&&this->id==m.id)
        {
            return 0;
        }
        return 1;
    }
public:
    int id;
    int age;
};
void test()
{
    Maker m1(1,20);
    Maker m2;
    if(m1==m2)
    {
        cout<<"真"<<endl;
    }
    else
    {
         cout<<"假"<<endl;
    }
    if(m1!=m2)
    {
        cout<<"假"<<endl;
    }
    else
    {
           cout<<"真"<<endl;
    }
}
int main()
{
    test();
    return 0;
}