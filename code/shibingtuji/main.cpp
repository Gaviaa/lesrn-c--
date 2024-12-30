
#include "Soldier.h"
#include "Gun.h"
#include <iostream>

void test()
{
    Soldier sanduo("xusanduo");
    sanduo.addGun(new Gun("Ak47")); // 给许三多配一把枪
    sanduo.addBulletToGun(20);
    sanduo.fire();
}
int main()
{
    std::cout << "This is a test string..." << std::endl;
    test();
    return 0;
} // g++ main.cpp src/Gun.cpp src/Soldier.cpp -Iinclude -o main 或者 cmake

// cmakelists中第5行代码：-g代表编译、-o2代表优化、-wall代表打印警告信息
//launch.json task.json是配置过后的，f5 可直接运行，不需要在终端命令输入