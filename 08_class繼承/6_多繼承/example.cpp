#include <iostream>
using namespace std;

class Base1
{
public:
    int a;
    Base1(){};
    ~Base1(){};
};

class Base2
{
public:
    int b;
    //����,�h�~�ӤG�q�ʡA���[�@�ΰ�
    int a;
    Base2(){};
    ~Base2(){};
};

class Son: public Base1, public Base2
{
public:
    Son(){};
    ~Son(){};
};


int main(){
    Son ob;
    //�h�~�ӤG�q�ʡA���[�@�ΰ�
    ob.Base1::a = 100;
    ob.Base2::a = 200;
}