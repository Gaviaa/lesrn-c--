//类是自定义数据类型
//对象是类实例化出的，用数据类型定义一个变量，这个变量就是对象
#include <iostream>
using namespace std;
class Maker 
{
    public:
    void func()
    {
        cout<<"func"<<endl;
    }
    private:
     int a;
};
int main()
{
    Maker m;//m是对象
    m.func();
    return 0;
}