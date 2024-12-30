#include<iostream>
using namespace std;
 
 int main()
 {
        int arr[5]={0};
        //第一种方法
        typedef int (MY_ARR)[5];
        MY_ARR &arref=arr;//定义一个数组的引用，别名为arref
        //第二种方法
        int (&arref2)[5]=arr;//定义一个数组的引用，别名为arref2
        //第三种方法
        typedef int (&MY_ARR2)[5];//建立引用数组类型
        MY_ARR2 arref3=arr;//定义一个数组的引用，别名为arref3

        for(int i=0;i<5;i++)
        {
            cout<<arr[i]<<endl;
            arref[i]=i+1;
        }
        cout<<"-------------------"<<endl;
        for (int i=0;i<5;i++)
        {
            arref[i]=i+1;
             cout<<arref[i]<<endl;
               
        }
        cout<<"-------------------"<<endl;
        for (int i=0;i<5;i++)
        {
            arref2[i]=i+2;
             cout<<arref2[i]<<endl;

        }
        cout<<"-------------------"<<endl;
        for (int i=0;i<5;i++)
        {
            arref3[i]=i+3;
             cout<<arref3[i]<<endl;

        }
        return EXIT_SUCCESS;
 }