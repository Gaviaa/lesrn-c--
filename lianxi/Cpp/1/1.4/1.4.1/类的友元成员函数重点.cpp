#include <iostream>//这种方法太复杂，直接声明友元类或全局友元函数就行
using namespace std;
// 编译器知道类的声明，不知道类的结构
class Building;// 前向声明
class GoodGay
{
public:
    void func(Building &bud);
};
class Building
{
    // 声明这个GoodGay类的成员函数func是Building的友元函数，可以访问Building的私有成员
    friend void GoodGay::func(Building &bud);

public:
    Building()
    {
        this->keting = "客厅";
        this->woshi = "卧室";
    }
    string keting;

private:
    string woshi;
};
void GoodGay::func(Building &bud)
{
    {
        cout << "访问：" << bud.keting << endl;
        cout << "访问：" << bud.woshi << endl;
    }
}

void test()
{
    Building bud;
    GoodGay GF;
    GF.func(bud);
}
int main()
{
    test();
    return 0;//
}
