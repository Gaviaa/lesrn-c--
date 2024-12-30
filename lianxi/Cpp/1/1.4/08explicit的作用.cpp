#include<iostream>
using namespace std;

class Maker
{
public:
    explicit Maker (int a)//explicit关键字可以防止隐式转换 Maker m=10;只能放在有参构造函数前面
    {
        cout << "有参构造函数" << endl;
    }

};
int main()
{
    //Maker m=10;  //error,explicit关键字可以防止隐式转换
    Maker m(10);

    return 0;
}