#include<iostream>
using namespace std;
#include"Mystring.cpp"

void test()
{
    Mystring s1(10,'a');
    Mystring s2;
    Mystring s3=s1+s3;
    Mystring s4=s2+"gavia hello";
    cout<<s3<<endl;
    cout<<s4<<endl;
    Mystring s5(5,'c');
    s4+=s5;
    cout<<s4<<endl;
    s4+="woc";
    cout<<s4<<endl;
    cin>>s4;
    cout<<s4<<endl;

}

int main()
{
    test();
    return 0;
}