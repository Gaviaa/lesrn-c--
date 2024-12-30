#include<iostream>
using namespace std;


class Maker
{
    friend void test();
    friend void operator>>(istream &in ,Maker& m);
    public:
    Maker(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    int getage()
    {
        return age;
    }
    private:
    string name;
    int age;
};
void operator>>(istream &in ,Maker &m)
{
    in>>m.name>>m.age; 
}
void test()
{
    string name;
    int age;
    cin>>name>>age;
    Maker m(name,age);
    cout<<m.name<<" "<<m.age<<endl;
    cin>>m;
    cout<<m.name<<" "<<m.age<<endl;
}
int main()
{
    test();
    return 0;
}