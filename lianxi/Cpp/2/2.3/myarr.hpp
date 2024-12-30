#pragma once

template<class T>
class MyArray
{
public:
    MyArray(int capacity)
    {
        this->m_Capacity=capacity;
        this->m_Size=0;
        this->pAddr=new T[this->m_Capacity];
    }
    //拷贝构造
    MyArray(const MyArray &arr)
    {
        this->m_Capacity=arr.m_Capacity;
        this->m_Size=arr.m_Size;
        this->pAddr=new T[this->m_Capacity];
        for(int i=0;i<this->m_Size;i++)
        {
            this->pAddr[i]=arr.pAddr[i];
        }
    }
    //赋值函数
    MyArray& operator=(const MyArray &arr)
    {
        if(this->pAddr!=NULL)
        {
            delete[] this->pAddr;
            this->pAddr=NULL;
            this->m_Capacity=0;
            this->m_Size=0;
        }
        this->m_Capacity=arr.m_Capacity;
        this->m_Size=arr.m_Size;
        this->pAddr=new T[this->m_Capacity];
        for(int i=0;i<this->m_Size;i++)
        {
            this->pAddr[i]=arr.pAddr[i];
        }
        return *this;
    }
    //重载[]：通过下标访问数组中的元素
    T& operator[](int index)
    {
        return this->pAddr[index];
    }
    //尾插法：向数组中插入元素
    void Push_Back(const T &data)
    {
        if(this->m_Capacity==this->m_Size)
        {
            return;
        }
        this->pAddr[this->m_Size]=data;
        this->m_Size++;
    }
    //尾删法：删除数组中最后一个元素
    void Pop_Back()
    {
        if(this->m_Size==0)
        {
            return;
        }
        this->m_Size--;
    }
    ~MyArray()
    {
        if(this->pAddr!=NULL)
        {
            delete[] this->pAddr;
            this->pAddr=NULL;
            this->m_Capacity=0;
            this->m_Size=0;
        }
    }
    //获取数组容量
    int getCapacity()
    {
        return this->m_Capacity;
    }
    //获取数组大小
    int getSize()
    {
        return this->m_Size;
    }
private:
    T *pAddr;//指针指向堆区开辟的真实数组
    int m_Capacity;//数组容量
    int m_Size;//数组大小
};