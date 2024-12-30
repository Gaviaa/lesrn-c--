#include "MyArray.h"
#include <iostream>
using namespace std;
MyArray::MyArray()
{
    this->mCapacity = 20;
    this->mSize = 0;
    this->pArray = new int[this->mCapacity];
    for (int i = 0; i < this->mCapacity; i++)
    {
        this->pArray[i] = 0;
    }
}
MyArray::~MyArray()
{
    if (this->pArray != NULL)
    {
        delete[] this->pArray;
        this->pArray = NULL;
    }
}
MyArray::MyArray(const MyArray &arr)
{
    this->mCapacity = arr.mCapacity;
    this->mSize = arr.mSize;
    // 申请空间
    this->pArray = new int[arr.mCapacity];
    // 拷贝数据
    for (int i = 0; i < this->mSize, i++;)
    {
        this->pArray[i] = arr.pArray[i];
    }
}
MyArray::MyArray(int capacity, int val) // 定义20个8
{
    this->mCapacity = capacity;
    this->mSize = capacity;
    this->pArray = new int[capacity];
    for (int i = 0; i < this->mSize; i++)
    {
        this->pArray[i] = val;
    }
}
// 头插
void MyArray::PushFront(int val)
{
    // 判断容量是否满
    if (this->mSize == this->mCapacity)
    {
        return;
    }
    for(int i=this->mSize-1;i>=0;i--)
    {
        this->pArray[i+1]= this->pArray[i];
    }
    this->pArray[0]=val;
    //维护元素个数,新加入了一个数
    this->mSize++;
}
// 尾插
void MyArray::PushBack(int val)
{
   if (this->mSize == this->mCapacity)
    {
        return;
    }
     this->pArray[this->mSize]=val;
    //维护元素个数,新加入了一个数
    this->mSize++; 
}
// 头删
void MyArray::PopFront()
{
    if (this->mSize == 0)
    {
        return;
    }
    for(int i=0;i<this->mSize-1;i++)
    {
        this->pArray[i]=this->pArray[i+1];
    }
    //维护元素个数
    this->mSize--;
}
// 尾删
void MyArray::PopBack()
{
   if (this->mSize == 0)
    {
        return;
    }//无需删除，后续加入的值会覆盖
    //维护元素个数
    this->mSize--; 
}
// 获取数组元素个数
int MyArray::size()
{
    return this->mSize;
}
// 获取数组容量
int MyArray::Capacity()
{
    return this->mCapacity;
}
// 指定位置插入元素
void MyArray::Insert(int pos, int val)
{
    if(this->mSize==this->mCapacity)
    {
        return;
    }
    if(pos<0||pos>this->mSize-1)
    {
        pos=this->mSize;
    }
    for(int i=this->mSize-1;i>=pos;i--)
    {
        this->pArray[i+1]=this->pArray[i];
    }
    this->pArray[pos]=val;
    this->mSize++;
}
// 获取指定位置的值
int &MyArray::Get(int pos)
{
    return this->pArray[pos];
}
// 在指定位置修改值
void MyArray::Set(int pos, int val)
{
    if (pos < 0 || pos > this->mCapacity - 1)
    {
        return;
    }
    this->pArray[pos] = val;
}