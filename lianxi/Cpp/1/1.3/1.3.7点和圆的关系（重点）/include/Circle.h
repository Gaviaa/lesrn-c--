#pragma once
#include "Point.h"
class Circle
{
    public:
    void setR(int r);
    int getR();
    void setCenter(Point center);
    void setCenter(int x,int y);
    Point getCenter();
    //判断点和圆的关系
    void isPointInCircle(Point &p);
    private:
        int C_r;  //半径
        Point C_center;//圆心
};