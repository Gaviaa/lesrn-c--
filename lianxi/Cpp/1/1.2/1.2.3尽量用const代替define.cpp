#include<iostream>
using namespace std;
#define MAX 100 //没有数据类型
const short MAX1=10;
void func(int a)
{
    cout<<"func(int a)"<<endl;
}
void func(short a)
{
    cout<<"func(short a)"<<endl;
}
//进行类型检查
int main()
{
    
    func(MAX);//func(int a)调用
    func(MAX1);//func(short a)调用
    return EXIT_SUCCESS;
}