#include <iostream>
using namespace std;

int main()
{
    // char* p = malloc(100); .cpp中不允许这样写,.c中可以
    char *p = (char *)malloc(100); //malloc返回的是void*，需要强制转换,void*表示未确定类型的指针，可以指向任何类型的数据
    int a = 10;
    int b = 3;
    double c = a / b;
    double d= (double)a / b;//强制转换
    cout << c << endl;
    cout << d << endl;
    return 0;
}