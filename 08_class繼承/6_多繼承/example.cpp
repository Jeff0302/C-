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
    //報錯,多繼承二義性，須加作用域
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
    //多繼承二義性，須加作用域
    ob.Base1::a = 100;
    ob.Base2::a = 200;
}