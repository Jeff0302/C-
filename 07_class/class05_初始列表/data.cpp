#include "data.h"
#include <iostream>
using namespace std;

A::A()
{
    cout<<"A�L�Ѻc�y"<<endl;
}
A::A(int a)
{
    m_a = a;
    cout<<"A���Ѻc�y"<<endl;
}
A::~A()
{
    cout<<"A�R�c"<<endl;
}

B::B()
{
    cout<<"B�L�Ѻc�y"<<endl;
}
B::B(int b)
{
    m_B = b;
    cout<<"B���Ѻc�y"<<endl;
}
B::~B()
{
     cout<<"B�R�c"<<endl;
}



///////////////////////////////////////////////////////////////////////////////////////
// Data::Data(int a, int b, int c):m_a(a), m_b(b), m_c(c)  //��l�ƦC��
// {
//     // m_a = a;
//     // m_b = b;
//     // m_c = c;
//     cout << "���Ѻc�y" << endl;
// }
Data::Data()
{
    cout << "Data�L�Ѻc�y���" << endl;
}

//��l�ƦC��: �㦡���ե� ��H�������c�y���, ��H�W+()
Data::Data(int a, int b, int c):m_a(a), m_b(c), data(c)
{
    // data = c;
    cout << "Data���Ѻc�y���" << endl;
}

Data::Data(A a, B b, int c)
{
    m_a = a;
    m_b = b;
    data = c;
    cout << "Data���Ѻc�y���" << endl;
}

void Data::showData()
{
    // cout << "(a,b,c)=(" << m_a << "," << m_b << ","  << m_c <<")" << endl;
}


Data::~Data()
{
    cout << "Data�R�c" << endl;
}




int main()
{
    // Data data(10, 20, 30);
    // data.showData();

    //���եι�H�������c�y��� --> �ۤv���c�y��� --> �R�c�ۤv --> �R�c��H����
    //Data ob1;

    //�t���q�{�եΪ��O ��H�������L�Ѻc�y
    Data ob2(10, 20 ,30);
    cout << "-----------------------------" << endl;
    // A a(10);
    // B b(20);
    // Data ob3(a, b, 30);

}
