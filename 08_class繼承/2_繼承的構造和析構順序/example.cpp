#include <iostream>
using namespace std;

class Other
{
public:
    Other(){
          cout << "��H�������L�Ѻc�y���" << endl;
    };
    ~Other(){
        
          cout << "��H�������R�c���" << endl;

    };
};



class Base
{  
public:
    int a;
    Base(){
        cout << "�������L�Ѻc�y���" << endl;
    };
    Base(int a){
        this->a = a;

    };

    ~Base(){
        cout << "�������R�c���" << endl;
    };
};



class Son:public Base
{
private:
    Other other;
public:
    int b;
    Son(){
        cout << "�l�����L�Ѻc�y���" << endl;
    };
    
    Son(int b){
        cout << "�l�������Ѻc�y���(int b)" << endl;
        this->b = b;
    };
    //�l�������� ��l�ƦC�� ��ܽեΤ��������Ѻc�y���
    //�����W��(�Ѽ�)
    Son(int a, int b):Base(a){
        cout << "�l�������Ѻc�y���(int a, int b)" << endl;
        this->b = b;
    };
    ~Son(){
        cout << "�l�����R�c���" << endl;
    };
};


int main(){
    //�l�� �q�{ �|�ե� �����L�Ѻc�y
    Son son1(10);
    
    
    //�l�������� ��l�ƦC�� ��ܽեΤ��������Ѻc�y���
    Son son2(10, 20);
    cout << "son.a=" << son2.a << endl;
    cout << "son.b=" << son2.b << endl;


}