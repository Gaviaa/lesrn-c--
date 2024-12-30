#include"Gun.h"
#include<iostream>
using namespace std ;
void Gun::addBullet(int bullet_num)
{
    this->_bullet_count += bullet_num;//把装填的子弹数量放
                                        //到子弹数中
}
bool Gun::shoot()
{
    if (this->_bullet_count<=0)//判断子弹数是否为0
    {
        cout<<"This is no bullet!"<< endl;
        return false;
    }
    
    this->_bullet_count -= 1;// a-=1等于a=a-1;
    cout<<"shoot successfully!"<< endl;
    return true ;
}