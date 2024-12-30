#pragma once//声明
template<class NameType,class AgeType>
class Maker
{
public:
    Maker(NameType a,AgeType b);
   
    void PrintMaker();
    
    NameType a;
    AgeType b;
    
};
//实现
template<class NameType,class AgeType>
Maker<NameType ,AgeType>::Maker(NameType a,AgeType b)
{
    this->a=a;
    this->b=b;
}
template<class NameType,class AgeType>
void Maker<NameType,AgeType>::PrintMaker()
{
    std::cout<<"Name:"<<a<<" Age:"<<b<<std::endl;
}

