#include <iostream>
using namespace std;

template <class T, class X> // 让后面紧跟着的函数里有T不要报错，T代表泛型的数据类型，不是只能写T
void mySwap(T &a, X &b)     // 这是一个函数模板，
{
    T tmp = a;
    a = b;
    b = tmp;
}
// 使用函数模板
void test()
{
    int a = 10;
    int b = 20;
    mySwap(a, b);
    double c = 1.1;
    double d = 2.2;
    mySwap(a, d);
    mySwap<int>(a, b); //<int>代表只传int
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "c=" << c << endl;
    cout << "d=" << d << endl;
}
template <class T>
T func(T a, T b)
{
    return a + b;
}
// 排序
template <class T>
void mySort(T arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        int max = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[max] < arr[j])
            {
                max = j;
            }
        }
        if (max != i)
        {
            mySwap(arr[max], arr[i]);
        }
    }
}
template <class T>
void myprint(T arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void test02()
{
    char arrchar[] = "badcfe";
    int len = sizeof(arrchar) / sizeof(char);
    mySort(arrchar, len);
    myprint(arrchar, len);
    int arrint[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    len = sizeof(arrint) / sizeof(arrint[0]);
    mySort(arrint, len);
    myprint(arrint, len);
}
void test01()
{
    int a = 10;
    double b = 20.2;
    func<int>(a, b);                 // func(a,b);错误5
    cout << func<int>(a, b) << endl; // 结果为30，将20.2转化为了20
}

int main()
{
    test02();
    return 0;
}