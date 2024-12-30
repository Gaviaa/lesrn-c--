#pragma once
#include<iostream>
using namespace std;

class Mystring
{
    friend ostream &operator<<(ostream &out,Mystring &str);
    friend istream &operator>>(istream &in,Mystring &str);
public:
    Mystring();
    Mystring(int n,char c); //用户可以设定字符串，N个c组成的字符串
    Mystring(const Mystring &str);//拷贝构造
    Mystring &operator=(const Mystring &str);
    ~Mystring();

    Mystring operator+(const Mystring &str);   //s1+s2
    Mystring operator+(const char *s); //s1+"hello"

    Mystring &operator+=(const Mystring &str); //s1+=s2
    Mystring &operator+=(const char *s); //s1+="hello"

    int getSize();

    char &operator[](int index);

private:
    char *pM; //指向堆区空间
    int mSize;
};