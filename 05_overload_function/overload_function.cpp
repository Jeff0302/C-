#include<iostream>
using namespace std;
//�������d�l��
void fun(){
    cout << "�o����fun" << endl;
}

//a. ����������ͬ
void fun(int a){
    cout << " һ��int������fun" << endl;
}
//b. ������Ͳ�ͬ
void fun(char b){
    cout << " һ��char������fun" << endl;
}
//c. �������ͬ
void fun(int a, char b){
    cout << "(int, char)��fun" << endl;
}

void fun(char a, int b){
    cout << "(char, int)��fun" << endl;
}

//������͵ķ���ֵ�����������d������
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