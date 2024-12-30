#include "Mystring.h"
#include <string.h>
#include <iostream>
using namespace std;
Mystring::Mystring()
{
    this->pM = new char[1];
    this->pM[0] = '\0';
    this->mSize = 0;
}
Mystring::~Mystring()
{
    if (this->pM != NULL)
    {
        delete[] this->pM;
        this->pM = NULL;
    }
}
Mystring::Mystring(int n, char c) // 用户可以设定字符串，N个c组成的字符串
{
    this->pM = new char[n + 1]; //+1是因为\0
    for (int i = 0; i < n; i++)
    {
        this->pM[i] = c;
    }
    this->pM[n] = '\0';
    this->mSize = n;
}
Mystring::Mystring(const Mystring &str) // 拷贝构造
{
    this->pM = new char[strlen(str.pM) + 1];
    strcpy(this->pM, str.pM);
    this->mSize = str.mSize;
} // 拷贝构造
Mystring &Mystring::operator=(const Mystring &str)
{
    if (this->pM != NULL)
    {
        delete[] this->pM;
        this->pM = NULL;
    }
    this->pM = new char[strlen(str.pM) + 1];
    strcpy(this->pM, str.pM);
    this->mSize = str.mSize;

    return *this;
}
Mystring Mystring::operator+(const Mystring &str) // s3=s1+s2
{
    int newlen = this->mSize + str.mSize + 1;
    Mystring tmp;
    if (tmp.pM != NULL)
    {
        delete[] tmp.pM;
        tmp.pM = NULL;
    }
    tmp.pM = new char[newlen];
    memset(tmp.pM, 0, newlen); // 清空
    tmp.mSize = this->mSize + str.mSize;
    strcat(tmp.pM, this->pM);
    strcat(tmp.pM, str.pM);
    return tmp;
}
Mystring Mystring::operator+(const char *s) // s1+"hello"
{
    int newlen = this->mSize + strlen(s);
    char *newspace = new char[newlen + 1];
    memset(newspace, 0, newlen + 1); // 清空
    strcat(newspace, this->pM);
    strcat(newspace, s);
    Mystring tmp;
    if (tmp.pM != NULL)
    {
        delete[] tmp.pM;
        tmp.pM = NULL;
    }
    tmp.pM = newspace;
    tmp.mSize = newlen;

    return tmp;
}

Mystring &Mystring::operator+=(const Mystring &str) // s1+=s2
{
    int newlen = this->mSize + str.mSize;
    char *newspace = new char[newlen + 1];
    memset(newspace, 0, newlen + 1); // 清空
    strcat(newspace, this->pM);
    strcat(newspace, str.pM);
    if (this->pM != NULL)
    {
        delete[] this->pM;
        this->pM = NULL;
    }
    this->pM = newspace;
    this->mSize = newlen;
    return *this;
}
Mystring &Mystring::operator+=(const char *s) // s1+="hello"
{
    int newlen = this->mSize + strlen(s);
    char *newspace = new char[newlen + 1];
    memset(newspace, 0, newlen + 1); // 清空
    strcat(newspace, this->pM);
    strcat(newspace, s);
    if (this->pM != NULL)
    {
        delete[] this->pM;
        this->pM = NULL;
    }
    this->pM = newspace;
    this->mSize = newlen;
    return *this;
}
int Mystring::getSize()
{
    return this->mSize;
}

char &Mystring::operator[](int index)
{
    return this->pM[index];
}
ostream &operator<<(ostream &out, Mystring &str) // 不是类的成员函数，所以不需要加作用域
{
    out << str.pM;
    return out;
}
 istream &operator>>(istream &in, Mystring &str)  //cin>>s4
{
    char tmp[1024]={0};
    in>>tmp;
    if(str.pM!=NULL)
    {
        delete[]str.pM;
        str.pM=NULL;
    }
    str.pM=new char[strlen(tmp)+1];
    memset(str.pM, 0, strlen(tmp)+1); // 清空
    strcpy(str.pM,tmp); 
    str.mSize=strlen(tmp);
    return in;
} 
