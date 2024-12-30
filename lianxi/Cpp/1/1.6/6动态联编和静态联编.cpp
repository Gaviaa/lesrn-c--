#include<iostream>
using namespace std;

class Animal
{
public:
   virtual void speak()
    {
        cout<<"Animal virtual speak"<<endl;
    }
};
class Dog :public Animal
{
public:
     virtual void speak()
    {
        cout<<"Dog speak"<<endl;
    }
};
void doLogin(Animal *animal)
{
    animal->speak();
}
void test()
{
    Animal an;
    an.speak();
}
void test01()
{
    Dog *dog=new Dog;
    doLogin(dog);
}
int main()
{
    test01();
    return 0;
}