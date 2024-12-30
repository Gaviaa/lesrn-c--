#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
    (a>b?a:b) = 100;//三目运算符返回的是空间，可以作为左值（等号左边）,.c中不允许这样写,.cpp中可以
    *(c>d?&c:&d) = 200;//这是标准写法
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    return EXIT_SUCCESS;
    
}