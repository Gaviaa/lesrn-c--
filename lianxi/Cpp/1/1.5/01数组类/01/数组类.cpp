#include <iostream>
#include "MyArray.cpp"
#include "MyArray.h"
using namespace std;
void printMyArray(MyArray &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr.Get(i)<<" ";
    }
        cout << endl;
    }

void test01()
{
    MyArray arr(20, 1);
    printMyArray(arr);
    //修改数组中arr[4]的值
    arr.Set(4,7);
    printMyArray(arr);
}
void test02()
{
    MyArray arr;
    //添加元素
    for(int i=0;i<10;i++)
    {
        //尾插
        arr.PushBack(i+10);
    }
    for(int i=0;i<9;i++)
    {
        //头插
        arr.PushFront(i+20);
    }
    //指定位置插入
    arr.Insert(10,100);
     printMyArray(arr);
    //尾删
    arr.PopBack();
    //头删
    arr.PopFront();
     printMyArray(arr);
}
int main()
{
    test02();
    return 0;
}