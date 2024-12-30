#include <iostream>
using namespace std;
// 值传递
void swap1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
// 指针传递
void swap2(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// 引用传递
void swap3(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void print(int a, int b)
{
    cout << "a=" << a << "-----b=" << b << endl;
    
}
int main()
{
    int a = 10;
    int b = 20;
    swap1(a, b);//没有交换
    print(a, b);
    swap2(&a, &b);//交换了
    print(a, b);
    a=10;b=20;
    swap3(a, b);//交换了
    print(a, b);
}