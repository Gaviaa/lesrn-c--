#include <iostream>
using namespace std;
//1.引入头文件
#include <fstream>

void test01()
{
    //2.创建流对象
    ofstream ofs;
    //3.指定打开方式,以写的方式打开文件，如果文件不存在，直接创建
    ofs.open("test.txt",ios::out|ios::trunc);
    //4.判断文件是否打开成功
    if(!ofs.is_open())
    {
        cout<<"文件打开失败"<<endl;
    }
    else
    {
        cout<<"文件打开成功"<<endl;
    }
    //5.写文件
    ofs<<"姓名:张三"<<endl;
    ofs<<"性别:男"<<endl;
    ofs<<"年龄: 18"<<endl;
    //6.关闭文件
    ofs.close();
}
void test02()
{
    //1.创建流对象
    ifstream ifs;
    //2.打开文件，并判断文件是否打开成功
    ifs.open("test.txt",ios::in);
    if(ifs.is_open()==false)
    {
        cout<<"文件打开失败"<<endl;
    }
    else
    {
        cout<<"文件打开成功"<<endl;
    }
    //3.读文件
    //第一种方式,一行一行读取
    // char buf[1024]={0};
    // while(ifs>>buf)
    // {
    //     cout<<buf<<endl;
    // }
    //第二种方式，判断文件是否读到末尾
    // char buf[1024]={0};
    // while(ifs.eof()==false)
    // {
    //     ifs.getline(buf,sizeof(buf));
    //     cout<<buf<<endl;
    // }
    //第三种方式，单个字符读取
    char c;
    while((c=ifs.get())!=EOF)//EOF是文件读取结束的标志
    {
        cout<<c;
    }
    //4.关闭文件
    ifs.close();
}
int main()
{
    test02();
    return 0;
}
