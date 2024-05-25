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
    virtual void sleep(){
        cout << "Animal睡覺" << endl;
    }
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
    Animal *p = new Cat;
    p->sleep();
    //出現問題: 只能析構父類
    p->Animal::sleep();
    delete p;
}