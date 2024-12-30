#include<iostream>
#include "include/Circle.h"
#include"Circle.cpp"
#include"Point.cpp"
//抽象点：点的坐标，方法：设置坐标，获取坐标
//抽象圆：圆心（直接用点），半径，方法：设置圆心，获取圆心，设置半径，获取半径，判断点和圆的关系
using namespace std;    
int main()
{
    //创建圆
    Circle c1;
    //设置半径
    c1.setR(10);
    //创建圆心
    Point center;
    center.setX(10);
    center.setY(0);
    //设置圆心
    c1.setCenter(center);
    //创建点
    Point p;
    p.setX(10);
    p.setY(10);
    //判断关系
    c1.isPointInCircle(p);
    return 0;
}//终端命令：g++ main.cpp Point.cpp Circle.cpp -Iinclude -o main