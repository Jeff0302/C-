#include "data.h"
#include <iostream>
using namespace std;

Data::Data()
{
    num = 0;
    cout << "�L�Ѻc�ynum=" << num << endl;
    
}

Data::Data(int data)
{
    num = data;
    cout << "���Ѻc�ynum=" << num << endl;
}

Data::Data(const Data &data)
{
    num = data.num;
    cout << "�����c�ynum=" << num << endl;
}


Data::~Data()
{
    cout << "�R�c~~~"<< num << endl;
}

int main(){
    //�եεL�Ѻc�y
    Data a;
    //�եΦ��Ѻc�y
    Data b(10);
    //�եΫ����c�y
    //�p�G�Τᤣ��{�����c�y�A�t�αN�ե��q�{�������c�y
    //�q�{�������c�y: ��ª�������(�L����)
    //�p�G�Τ��{�F�����c�y�A�t�αN�եΥΤ��{�������c�y
    //�����c�y���եΧΦ�1(�����ե�)
    Data c(b);
    //�����c�y���եΧΦ�2(�㦡�ե�)
    Data d = Data(b);
    //�����c�y���եΧΦ�3(�����ഫ�ե�)
    Data e = b;
    //�ΦW�c�y
    Data(20); //�������W�R�c

}