#pragma once
class MyArray
{
public:
    MyArray();
    MyArray(const MyArray &arr);//拷贝构造吗
    MyArray(int capacity, int val = 0); // 默认参数
    ~MyArray();

    // 头插
    void PushFront(int val);
    // 尾插
    void PushBack(int val);
    // 头删
    void PopFront();
    // 尾删
    void PopBack();
    // 获取数组元素个数
    int size();
    // 获取数组容量
    int Capacity();
    // 指定位置插入元素
    void Insert(int pos, int val);
    // 获取指定位置的值
    int &Get(int pos);
    // 在指定位置修改值
    void Set(int pos, int val);

private:
    int *pArray;   // 指向堆区空间，存储数据
    int mSize;     // 元素个数
    int mCapacity; // 容量
};