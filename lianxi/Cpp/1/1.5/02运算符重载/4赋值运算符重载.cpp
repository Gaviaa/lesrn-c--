#include <iostream>
#include<string.h>
using namespace std;
// 编译器默认给类提供一个默认赋值运算符重载函数

class Maker
{
public:
    Maker()
    {
        id = 0;
        age = 0;
    }
    Maker(int id,int age)
    {
        this->id=id;
        this->age=age;
    }
public:
    int id;
    int age;
};
void test()
{
    Maker m1(10,20);
    Maker m2;
    m2=m1; //赋值操作，有默认赋值运算符重载函数
    cout<<m2.id<<" "<<m2.age<<endl;
}
class student
{
public:
    student(const char*name)
    {
        pName=new char[strlen(name)+1];
        strcpy(pName,name);
    }
    //防止浅拷贝
    student(const student &stu)
    {
        pName=new char[strlen(stu.pName)+1];
        strcpy(pName,stu.pName);
    }
    //重写赋值运算符重载
    student &operator=(const student&stu )
    {
        //不能确定this->pName指向的空间能否装下stu中的数据，所以先释放this->pName指向的空间
        if(pName!=NULL)
        {
            delete[]pName;
            pName=NULL;
        }
        //申请堆区空间
         pName=new char[strlen(stu.pName)+1];
         strcpy(this->pName,stu.pName);

         return *this;
    }
    ~student()
    {
        if(pName!=NULL)
        {
            delete[]pName;
            pName=NULL;
        }
    }
    void printStudent()
    {
        cout<<"Name:"<<pName<<endl;
    }

public:
    char *pName;
};
void test01()
{
    student s1("gav");
    student s2("gav1");
    s1.printStudent();
    s2.printStudent();
    s1=s2;
    s1.printStudent();
    s2.printStudent();

}
int main()
{
    test01();
    return 0;
}