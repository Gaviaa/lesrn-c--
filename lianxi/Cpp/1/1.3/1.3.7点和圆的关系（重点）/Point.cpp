#include<iostream>
#include "include/Point.h"
using namespace std;
void Point::setX(int x)
    {
        P_x = x;
    }
void Point::setY(int y)
    {   
        P_y = y;
    }
int Point::getX()  
    {
        return P_x;
    }
int Point::getY()
    {
        return P_y;
    }
