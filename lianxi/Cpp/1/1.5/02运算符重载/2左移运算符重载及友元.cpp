#include <iostream>
using namespace std;

class Maker
{
    friend void operator<<(ostream &out, Maker &m);
public:
    Maker(int id, string n)
    {
        this->id = id;
        this->name = n;
    }
private:
    int id;
    string name;
};
void operator <<(ostream &out, Maker &m) // cout是ostream类中的对象（重点）
{
    cout << m.id << " ";
    cout << m.name << endl;
}
void test()
{
    Maker m1(10, "gavia");
    Maker m2(20, "zhaoxiang");
    cout << m1;  //可以直接打印
    cout << m2;
}
int main()
{
    test();
    return 0;
}