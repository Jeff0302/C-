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
    //�µ���
    //�p�G�@���������µ��ơA�o�����N�O��H��
    //��H�������Ҥƹ�H
    virtual void sleep()=0;
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
   
   // �����A��H�������Ҥƹ�H
   // Animal an;
   Animal *p = new Cat;
   p->sleep();
   delete p;
}