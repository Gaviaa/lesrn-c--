#include<iostream>
using namespace std;
//设置圆的周长类
class Circle
{
private:
    /* data */
public:  
    double m_r;//半径
public://公有权限
    void setR(double r)//设置半径
    {
        m_r=r;
    }
    double getL()//计算周长
    {
        return 2*3.14*m_r;
    }
};
void test01(int r)
{
    Circle c1;//类实例化对象
    c1.setR(r);  
    cout<<"圆的周长为："<<c1.getL()<<endl;
}
int main()
{
    int r=10;
    test01(r);
    return EXIT_SUCCESS;
}