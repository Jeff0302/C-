#include<iostream>
using namespace std;

class Animal
{
public:
    Animal(){
        cout << "Animal�c�y" << endl;
    }
    //��R�c
    virtual ~Animal(){
        cout << "Animal�R�c" << endl;
    }
    virtual void sleep(){
        cout << "Animal��ı" << endl;
    }
};

class Cat:public Animal
{
public:
    Cat(){
        cout << "Cat�c�y" << endl;
    }
    //��R�c
    virtual ~Cat(){
        cout << "Cat�R�c" << endl;
    }
    virtual void sleep(){
        cout << "Cat��ı" << endl;
    }
};


int main(){
    Animal *p = new Cat;
    p->sleep();
    //�X�{���D: �u��R�c����
    p->Animal::sleep();
    delete p;
}