#include "data.h"
#include <iostream>
using namespace std;

A::A()
{
    cout<<"A礚把篶硑"<<endl;
}
A::A(int a)
{
    m_a = a;
    cout<<"AΤ把篶硑"<<endl;
}
A::~A()
{
    cout<<"A猂篶"<<endl;
}

B::B()
{
    cout<<"B礚把篶硑"<<endl;
}
B::B(int b)
{
    m_B = b;
    cout<<"BΤ把篶硑"<<endl;
}
B::~B()
{
     cout<<"B猂篶"<<endl;
}



///////////////////////////////////////////////////////////////////////////////////////
// Data::Data(int a, int b, int c):m_a(a), m_b(b), m_c(c)  //﹍て
// {
//     // m_a = a;
//     // m_b = b;
//     // m_c = c;
//     cout << "Τ把篶硑" << endl;
// }
Data::Data()
{
    cout << "Data礚把篶硑ㄧ计" << endl;
}

//﹍て: 陪Α秸ノ 癸禜Θ篶硑ㄧ计, 癸禜+()
Data::Data(int a, int b, int c):m_a(a), m_b(c), data(c)
{
    // data = c;
    cout << "DataΤ把篶硑ㄧ计" << endl;
}

Data::Data(A a, B b, int c)
{
    m_a = a;
    m_b = b;
    data = c;
    cout << "DataΤ把篶硑ㄧ计" << endl;
}

void Data::showData()
{
    // cout << "(a,b,c)=(" << m_a << "," << m_b << ","  << m_c <<")" << endl;
}


Data::~Data()
{
    cout << "Data猂篶" << endl;
}




int main()
{
    // Data data(10, 20, 30);
    // data.showData();

    //秸ノ癸禜Θ篶硑ㄧ计 --> 篶硑ㄧ计 --> 猂篶 --> 猂篶癸禜Θ
    //Data ob1;

    //╰参纐粄秸ノ琌 癸禜Θ礚把篶硑
    Data ob2(10, 20 ,30);
    cout << "-----------------------------" << endl;
    // A a(10);
    // B b(20);
    // Data ob3(a, b, 30);

}
