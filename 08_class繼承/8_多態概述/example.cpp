#include <iostream>
using namespace std;

class Animal
{
public:
    //虛函數: 只要涉及繼承，子類中的同名函數 都是虛函數。
    virtual void sleep(){
        cout << "動物在睡覺~~~~" << endl;
    }
};

class Cat:public Animal
{
public:
    virtual void sleep(){
        cout << "貓在睡覺~~~~" << endl;
    }
};


int main(){
    //用基類(指針 or 引用) 保存子類對象(向上轉換)
    Animal *pp = new Animal;
    pp->sleep();
    Animal *p = new Cat;
    p->sleep(); //調用的是基類的sleep()


    Cat cat;
    Animal &a = cat;
    a.sleep();//調用的是基類的sleep()

    //需求: 用基類(指針或引用)保存子類對象，同時還要操作子類自身成員。
}





