#pragma once //防止头文件重复
#include <string>
class Gun
{
    public:
    Gun(std::string type){
        this->_bullet_count = 0;//指针
        this->_type = type;

    }
    void addBullet(int bullet_num);//装填子弹
    bool shoot();     //发射
    private:
    int _bullet_count;
    std::string _type;

};//注意加分号