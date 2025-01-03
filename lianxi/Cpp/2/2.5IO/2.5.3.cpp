#include <iostream>
using namespace std;
#include<string.h>
#include<fstream>

class Maker{
    public:
        Maker(string name,int age)
        {
            this->name=name;
            this->age=age;
        }
        Maker()
        {

        }
    int age;
    string name;
    //string类中有一个成员指针char*,该指针指向存储字符串的空间
    //当我们把string类的数据存储到文件中，再读取出来时，不能保证指针有效

    //sring开辟的空间如果大于16个字节就在堆区，小于就在栈区
};

void test01()
{
    //创建对象
    Maker m1("张三",18);
    Maker m2("李四",28);
    //写文件
    ofstream ofs("test.txt",ios::out|ios::trunc|ios::binary);
    if(!ofs.is_open())
    {
        cout<<"文件打开失败"<<endl;
        return;
    }
    ofs.write((const char *)&m1,sizeof(Maker));
    ofs.write((const char *)&m2,sizeof(Maker));
    ofs.close();
}
void test02()
{
    //读文件
    ifstream ifs("test.txt",ios::in|ios::binary);
    if(!ifs.is_open())
    {
        cout<<"文件打开失败"<<endl;
        return;
    }
    Maker m1;
    Maker m2;

    ifs.read((char *)&m2,sizeof(Maker));
    ifs.read((char *)&m1,sizeof(Maker));
    cout<<"姓名:"<<m1.name<<" 年龄:"<<m1.age<<endl;
    cout<<"姓名:"<<m2.name<<" 年龄:"<<m2.age<<endl;
    ifs.close();
}
 int main()
 {
        test01();
        test02();
        return 0;
 }