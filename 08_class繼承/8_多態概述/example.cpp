#include <iostream>
using namespace std;

class Animal
{
public:
    //����: �u�n�A���~�ӡA�l�������P�W��� ���O���ơC
    virtual void sleep(){
        cout << "�ʪ��b��ı~~~~" << endl;
    }
};

class Cat:public Animal
{
public:
    virtual void sleep(){
        cout << "�ߦb��ı~~~~" << endl;
    }
};


int main(){
    //�ΰ���(���w or �ޥ�) �O�s�l����H(�V�W�ഫ)
    Animal *pp = new Animal;
    pp->sleep();
    Animal *p = new Cat;
    p->sleep(); //�եΪ��O������sleep()


    Cat cat;
    Animal &a = cat;
    a.sleep();//�եΪ��O������sleep()

    //�ݨD: �ΰ���(���w�Τޥ�)�O�s�l����H�A�P���٭n�ާ@�l���ۨ������C
}





