#include<iostream>
#include"Maker.hpp"//
using namespace std;
void test()
{
    Maker<string,int> m("Tom",20);
    m.PrintMaker();
}
int main()
{
    test();
    return 0;
}
