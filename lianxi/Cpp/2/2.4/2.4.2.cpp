#include <iostream>
using namespace std;

int func(int a,int b)
{
    if(b==0)
    {
        throw 0;//1.抛出异常
    }
    return a/b;
}
void test()
{
    int a=5;
    int b=0;
    //1.把有可能出现异常的代码放在try中
    try
    {
        func(a,b);
    }
    catch(int)//3.接收一个int类型的异常
    {
        cout<<"除数不能为0"<<endl;
    }

}

int main()
{
    test();
    return 0;
}
