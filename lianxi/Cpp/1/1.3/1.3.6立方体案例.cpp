#include <iostream>
using namespace std;
/* bool IScompareCube(Cube c1,Cube c2)
{
    if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
    {
        return true;
    }
    return false;
} */
class Cube
{
public:
    void INIT()
    {
        mL = 0;
        mW = 0;
        mH = 0;
    }
    void setmL(int l)
    {
        mL = l;
    }
    void setmW(int w)
    {
        mW = w;
    }
    void setmH(int h)
    {
        mH = h;
    }
    int getL()
    {
        return mL;
    }
    int getW()
    {
        return mW;
    }
    int getH()
    {
        return mH;
    }
    double caculateS()
    {
        return (2 * (mL * mW + mL * mH + mW * mH));
    }
   double caculateV()
    {
        return (mL * mW * mH);
    }
    bool compareCube(Cube cube)
    {
        if (mL == cube.getL() && mW == cube.getW() && mH == cube.getH())
        {
            return true;
        }
        return false;
    }
private:
    int mL;
    int mW;
    int mH;
};
void test01()
{
    Cube c1,c2;
    c1.INIT();
    c1.setmL(10);
    c1.setmW(20);
    c1.setmH(30);
    c1.caculateS();
    c1.caculateV();
    c2.INIT();
    c2.setmH(100);
    c2.setmL(200);
    c2.setmW(300);
    c2.caculateS();
    c2.caculateV();
    cout<<"c1的面积为:"<<c1.caculateS()<<"----"<<"c1的体积为:"<<c1.caculateV()<<endl;
    cout<<"c2的面积为:"<<c2.caculateS()<<"----"<<"c2的体积为:"<<c2.caculateV()<<endl;
    bool ret = c1.compareCube(c2);
    if (ret)
    {
        cout << "c1和c2相等" << endl;
    }
    else
    {
        cout << "c1和c2不相等" << endl;
    }
    bool IScompareCube(Cube c1,Cube c2);
    if (IScompareCube(c1,c2))
    {
        cout << "全局 c1和c2相等" << endl;
    }
    else
    {
        cout << "全局 c1和c2不相等" << endl;
    }
}
bool IScompareCube(Cube c1,Cube c2)
{
    if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
    {
        return true;
    }
    return false;
}
int main()
{
    test01();
    return 0;
}
