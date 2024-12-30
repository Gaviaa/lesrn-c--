#include <iostream>
#include <string>
using namespace std;
template <class NameType,class AgeType>
class Maker
{
public:
    Maker(NameType name, AgeType age)
    {
        this->name = name;
        this->age = age;
    }
public:
    NameType name;
    AgeType age;
};
int main()
{
    Maker<string,int> m("张三", 10);//类模板不会自动类型推导
    cout << "姓名：" << m.name << " 年龄：" << m.age << endl;
    return 0;
}