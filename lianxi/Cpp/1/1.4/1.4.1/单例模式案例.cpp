#include<iostream>
using namespace std;

//需求，获取打印机使用次数
class Printer
{
public:
    static Printer *getInstance()
    {
        return pPrinter;
    }
    void printText(string text)
    {
        cout << text << endl;
        mcount++;
    }
    int getCount()
    {
        return mcount;
    }
private:
    Printer()
    {
        mcount = 0;
    }
    Printer (const Printer &p)
    {

    }
    int mcount;//打印机使用次数
    static Printer *pPrinter;
};
Printer *Printer::pPrinter = new Printer;
void test()
{
    int a;
    Printer *p1 = Printer::getInstance();
    p1->printText("gavia");
    p1->printText("I love you");
    p1->printText("Come on");
    p1->printText("you can do it!");
    Printer *p2 = Printer::getInstance();
    p2->printText("gavia");
    cout <<"打印机使用“" <<p1->getCount()<<"”次"<<endl;


}
int main()
{
    test();
    return 0;
}