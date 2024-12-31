#include <iostream>
using namespace std;

class Maker {
public:
    Maker() {
        cout << "Maker的构造函数" << endl;
    }
    Maker(const Maker &m) {
        cout << "Maker的拷贝构造函数" << endl;
    }
    ~Maker() {
        cout << "Maker的析构函数" << endl;
    }
};

void func() {
    // 在抛出异常的函数中，如果在抛出异常之后，但函数没有结束，这时，栈上申请的对象都会被释放
    Maker m;
    throw m; // 第一次拷贝构造：这个m是上面的m拷贝构造出来的
    cout << "func函数结束" << endl;
}

void test() {
    try {
        func();
    }
    catch (Maker) { // 第二次拷贝构造：捕获到异常时，异常对象被拷贝到catch块的参数中
        cout << "捕获到异常" << endl;
    }
}

int main() {
    test();
    return 0;
}