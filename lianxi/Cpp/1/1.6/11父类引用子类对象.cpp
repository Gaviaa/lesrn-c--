#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout << "Aniaml spaek()" << endl;
    }
};
class Dog : public Animal
{
public:
    virtual void speak()
    {
        cout << "Dog speak()" << endl;
    }
};
void test()
{
    Dog a=Dog();
    Animal &animal=  a;
   animal.speak();
}
int main()
{
    test();
    return 0;
}