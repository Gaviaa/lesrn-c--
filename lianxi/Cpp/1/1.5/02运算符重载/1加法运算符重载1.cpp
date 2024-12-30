#include <iostream>
using namespace std;
class Maker
{
public:
    Maker(int ID, int Age)
    {
        this->id = ID;
        this->age = Age;
    }
public:
    int id;
    int age;
};
 class student
{
public:
    student()
    {
        mid = 0;
    }
    student(int id)
    {
        mid = id;
    }

public:
    int mid;
}; 
Maker  operator+(Maker &m,student &s)
{
    Maker tmp(m.id+s.mid,m.age);
    return tmp;
} 
void test()
{
    Maker m1(1,18);
    student s1(2);
    Maker m3=m1+s1;
    cout<<m3.id<<" "<<m3.age<<endl;
}
int main()
{
    test();
    return 0;
}