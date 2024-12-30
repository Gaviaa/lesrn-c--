#include <iostream>
using namespace std;

class Drink
{
public:
    //喝啥
    virtual void kind()=0;
    // 煮水
    virtual void Boil() = 0;
    // 冲泡
    virtual void Brew() = 0;
    // 导入杯中
    virtual void PourInCup() = 0;
    // 加点辅料
    virtual void addSonm() = 0;

    // 模版方法 :把调用函数的顺序先确定下来
    void func()
    {
        kind();
        Boil();
        Brew();
        PourInCup();
        addSonm();
    }
};
class Coffee : public Drink
{
    //喝啥
    virtual void kind()
    {
        cout<<"Coffee:"<<endl;
    }
    // 煮水
    virtual void Boil()
    {
        cout << "煮点露水" << endl;
    }
    // 冲泡
    virtual void Brew()
    {
        cout << "冲泡拿铁" << endl;
    }
    // 导入杯中
    virtual void PourInCup()
    {
        cout << "倒入高脚杯" << endl;
    }
    // 加点辅料
    virtual void addSonm()
    {
        cout << "加入珍珠、椰果" << endl;
    }
};
class Tea : public Drink
{
    //喝啥
    virtual void kind()
    {
         cout<<"Tea:"<<endl;
    }
    // 煮水
    virtual void Boil()
    {
        cout << "煮点自来水" << endl;
    }
    // 冲泡
    virtual void Brew()
    {
        cout << "铁观音" << endl;
    }
    // 导入杯中
    virtual void PourInCup()
    {
        cout << "倒入碗中" << endl;
    }
    // 加点辅料
    virtual void addSonm()
    {
        cout << "加入糖" << endl;
    }
};
void test()
{
    Drink *dr = NULL;
    dr = new Coffee;
    dr->func();
    delete dr;
    dr = new Tea;
    dr->func();
    delete dr;
    dr = NULL;
}
int main()
{
    test();
    return 0;
}