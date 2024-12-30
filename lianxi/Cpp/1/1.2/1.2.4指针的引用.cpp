#include<iostream>
using namespace std;
#include <cstring>

void test()
{
    const char* p = "gavia";
    const char* &p1 = p;
    cout << p1 << endl;
}

void func(char* &tmp)//被调函数
{
    char *p = (char*)malloc(64);
    memset(p, 0, 64);//清空
    strcpy(p, "hello world");//拷贝
    tmp = p;
    
}
void test1()//主调函数
{
    char *str = NULL;
    func(str);
    cout << str << endl;
}
int main()
{
    test();
    test1();
    return EXIT_SUCCESS;
}