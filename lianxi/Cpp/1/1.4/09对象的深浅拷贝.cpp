#include<iostream>
#include<string.h>
using namespace std;

class Maker
{
public:
    Maker(int id,int age)
    {
        m_id = id;
        m_age = age;
    }
public:
    int m_id;
    int m_age;
};
void test01()
{
    Maker m1(1,20);
    Maker m2(m1);
    cout<<"m1.id"<<m1.m_id<<"----m1.age"<<m1.m_age<<endl;
    cout<<"m2.id"<<m2.m_id<<"----m2.age"<<m2.m_age<<endl;

}
class student
{
public:
    student (const char *name,int Age)
    {
        pName=(char*)malloc(strlen(name)+1);
        strcpy(pName,name);
        age=Age;
    }
    //自己提供拷贝构造函数，防止浅拷贝
    student(const student &s)
    {
        pName=(char*)malloc(strlen(s.pName)+1);//申请空间
        strcpy(pName,s.pName);
        age=s.age;
    }
    ~student()//堆区开辟的内存，需要手动释放
    {
        if(pName!=NULL)
        {
            free(pName);
            pName=NULL;
        }
    }
public:
    char *pName;
    int age;

};
void test02()
{
    student s1("张三",20);
    student s2(s1);//浅拷贝（使用默认拷贝函数）导致堆区内存重复释放，所以需要自己提供拷贝构造函数（深拷贝）
    cout<<"s1.name"<<s1.pName<<"----s1.age"<<s1.age<<endl;
    cout<<"s2.name"<<s2.pName<<"----s2.age"<<s2.age<<endl;
}
int main()
{
    test02();
    return 0;
}