#include<iostream>
using namespace std;

//设置学生类
class Student
{
  private://私有属性 (main函数无法访问)
    string name;//姓名
    int age;//年龄
    unsigned int Student_num;//学号
  public:
    //设置姓名
    void setName(string a)
    {
        name=a;
    }
    //设置年龄
    void setAge(int age)
    {
        this->age=age;//this指针指向当前对象
    }
    //设置学号
    void setStudent_num(int score)
    {
        this->Student_num=score;
    }
    //打印信息
  void show()
    {
        cout<<"姓名："<<name<<" \n年龄:"<<age<<" \n分数:"<<Student_num<<endl;
    }
};
int main()
{
    Student s1;
    s1.setName("gavia");
    s1.setAge(22);
    s1.setStudent_num(2308211691);
    s1.show();
    return EXIT_SUCCESS;
}

