#include <iostream>
using namespace std;

class Manito
{
public:
    virtual void show() = 0;
};
class Maker : public Manito
{
public:
    Maker(string name, int age, string sex, string skill)
    {
        this->age = age;
        this->name = name;
        this->sex = sex;
        this->skill = skill;
    }
    virtual void show()
    {
        cout << name << "展现" << skill << endl;
    }

private:
    string name;
    int age;
    string sex;
    string skill;
};
class Class
{
public:
    Class()
    {
        mCapacity = 50;
        mSize = 0;
        this->p = new Manito *[mCapacity];
    }
    ~Class()
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
    void AddManito(Manito *m)
    {
        if (mSize == mCapacity)
        {
            return;
        }

        this->p[mSize] = m;
        mSize++;
    }
    void Startshow()
    {
        for (int i = 0; i < mSize; i++)
        {
            p[i]->show();
        }
    }

private:
    Manito **p;
    int mCapacity;
    int mSize;
};
void test()
{
    Class *m=new Class;
    m->AddManito(new Maker("gavia", 23, "男", "唱歌"));
    m->AddManito(new Maker("zz", 23, "男", "跳舞"));
    m->Startshow();
    delete m;
}
int main()
{
    test();
    return 0;
}