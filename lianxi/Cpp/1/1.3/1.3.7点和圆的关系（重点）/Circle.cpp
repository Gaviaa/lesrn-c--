#include <iostream>
using namespace std;
#include "include/Circle.h"  //路径设置正确
#include<cmath>
void Circle::setR(int r)
{
     C_r = r;
}
int Circle::getR()
{
    return C_r;
}

void Circle::setCenter(Point center)
{

    C_center.setX (center.getX());
    C_center.setY (center.getY());
}   
void Circle::setCenter(int x,int y)
{
    C_center.setX(x);
    C_center.setY(y);
}
Point Circle::getCenter()
{
    return C_center;
}
//判断点和圆的关系
void Circle::isPointInCircle(Point &p)
{
    //计算两点之间的距离
    int distance = (p.getX() - C_center.getX()) * (p.getX() - C_center.getX()) + (p.getY() - C_center.getY()) * (p.getY() - C_center.getY());
    //计算半径的平方
    int rDistance = C_r * C_r;
    if (distance == rDistance)
    {
        cout << "点在圆上" << endl;
    }
    else if (distance > rDistance)
    {
        cout << "点在圆外" << endl;
    }
    else
    {
        cout << "点在圆内" << endl;
    }
}