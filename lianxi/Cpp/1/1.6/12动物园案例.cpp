#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void speak() = 0;
};
class Dog : public Animal
{
public:
    Dog(string name)
    {
        this->name = name;
    }
    virtual void speak()
    {
        cout << "小狗" << name << "汪汪汪" << endl;
    }

private:
    string name;
};
class Duck : public Animal
{
public:
    Duck(string name, string type)
    {
        this->name = name;
        this->type = type;
    }
    virtual void speak()
    {
        cout << type << "的鸭子" << name << "嘎嘎嘎" << endl;
    }

private:
    string name;
    string type;
};
class Tiger : public Animal
{
public:
    Tiger(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    virtual void speak()
    {
        cout << age << "岁的老虎" << name << "嗷呜嗷呜" << endl;
    }

private:
    string name;
    int age;
};
class Cat : public Animal
{
public:
    Cat(string name)
    {
        this->name = name;
    }
    virtual void speak()
    {
        cout << "小猫" << name << "喵喵喵"<<endl;
    }

private:
    string name;
};
class Zoo
{
    friend void Print(Zoo *z);

public:
    Zoo()
    {
        this->mCapacity = 1024;
        this->mSize = 0;
        // 申请空间，储存Animal*的空间，指针数组
        this->p = new Animal *[mCapacity];
    }
    // 增加动物
    int AddAnimal(Animal *animal)
    {
        if (mCapacity == mSize)
        {
            return -1;
        }
        this->p[mSize] = animal;
        mSize++;
        return 0;
    }
    void StarSpeak()
    {
        for (int i = 0; i < mSize; i++)
        {
            p[i]->speak();
        }
    }
    ~Zoo()
    {
        for (int i = 0; i < mSize; i++)
        {
            if (p[i] != NULL)
            {
                delete p[i];
                p[i] = NULL;
            }
        }
        delete[] p;
        p = NULL;
    }

private:
    Animal **p;
    int mCapacity;
    int mSize;
};
void Print(Zoo *z)
{
    cout << "这个动物园有";
    cout << z->mSize;
    cout << "只动物" << endl;
}
void test()
{
    Zoo *z = new Zoo;
    z->AddAnimal(new Dog("哮天犬"));
    z->AddAnimal(new Duck("唐老鸭", "Beijing"));
    z->AddAnimal(new Tiger("泰格", 10));
    z->AddAnimal(new Cat("Tom"));
    Print(z);
    z->StarSpeak();
    delete z;
}
int main()
{
    test();
    return 0;
}