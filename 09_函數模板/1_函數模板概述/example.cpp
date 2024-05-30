#include <iostream>
using namespace std;

void swapInt(int &a, int &b)
{
    cout << "���q���" << endl;
    int temp = a;
    a = b;
    b = temp;
}

void myswap(int &a, int &b)
{
    cout << "���q���" << endl;
    int temp = a;
    a = b;
    b = temp;
}
//���q���
void swapChar(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

//��ƼҪOtemplate����r
template<typename T>
void myswap(T &a, T &b)
{
    cout << "��ƼҪO" << endl;
    T temp = a;
    a = b;
    b = temp;
}


int main(){
    int data1 = 10, data2 = 20;
    cout << "data1=" << data1 << "," << "data2=" << data2 << endl;
    //swapInt(data1, data2);
    //myswap(data1, data2);  //�۰ʱ��ɥXT��int
    
    //��ƼҪO �M ���q��Ƴ��O�ѧO���ܡA�u���եδ��q���
    myswap(data1, data2);
    //�Τ��㦡���w�����νեΨ�ƼҪO
    myswap<int>(data1, data2);
    cout << "data1=" << data1 << "," << "data2=" << data2 << endl;

    char data3 = 'a', data4 = 'b';
    cout << "data3=" << data3 << "," << "data4=" << data4 << endl;
    //swapChar(data3, data4);
    myswap<char>(data3, data4);  //�۰ʱ��ɥXT��char
    cout << "data3=" << data3 << "," << "data4=" << data4 << endl;
}
