#include<iostream>
using namespace std;
//��ƭ�������
void fun(){
    cout << "�L�Ѫ�fun" << endl;
}

//a. �ѼƭӼƤ��P
void fun(int a){
    cout << " �@��int�Ѽƪ�fun" << endl;
}
//b. �Ѽ��������P
void fun(char b){
    cout << " �@��char�Ѽƪ�fun" << endl;
}
//c. �Ѽƶ��Ǥ��P
void fun(int a, char b){
    cout << "(int, char)��fun" << endl;
}

void fun(char a, int b){
    cout << "(char, int)��fun" << endl;
}

//�����������^�Ȥ���@���������̾�
// int fun(int a){
//     return a;
// }


int main(){
    fun();
    fun(10);
    fun('a');
    fun(10, 'a');
    fun('a', 10);
}