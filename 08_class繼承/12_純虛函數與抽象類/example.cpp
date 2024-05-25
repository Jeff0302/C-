#include<iostream>
using namespace std;

class Animal
{
public:
    Animal(){
        cout << "Animal構造" << endl;
    }
    //虛析構
    virtual ~Animal(){
        cout << "Animal析構" << endl;
    }
    //純虛函數
    //如果一個類中有純虛函數，這個類就是抽象類
    //抽象類不能實例化對象
    virtual void sleep()=0;
};

class Cat:public Animal
{
public:
    Cat(){
        cout << "Cat構造" << endl;
    }
    //虛析構
    virtual ~Cat(){
        cout << "Cat析構" << endl;
    }
    virtual void sleep(){
        cout << "Cat睡覺" << endl;
    }
};


int main(){
   
   // 報錯，抽象類不能實例化對象
   // Animal an;
   Animal *p = new Cat;
   p->sleep();
   delete p;
}