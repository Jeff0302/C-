#include <iostream>
using namespace std;

class Base
{
public:
    void fun(){
        cout << "��������void fun" << endl;
    }
    void fun(int a){
        cout << "��������int fun a = " << a << endl;
    }
};

class Son:public Base
{
public:
    //*�@���l����{��������������ơA�N�̽������Ҧ��P�W������ơC
    void fun(){
        cout << "�l������void fun" << endl;
    }

    

};


int main(){
    Son son;
    son.fun();
    
    //�p�G�Τᥲ���եΤ������P�W������� �����[�@�ΰ�C
    son.Base::fun();
    son.Base::fun(10);
    // son.fun(10); //����    
}