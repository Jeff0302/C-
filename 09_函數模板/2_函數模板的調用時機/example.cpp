#include <iostream>
using namespace std;


void test(int a, int b){
    cout << "���q���" << endl;
    cout << a + b << endl;
}

template<typename T>
void test(T a, T b){
    cout << "��ƼҪO" << endl;
    cout << a + b << endl;
}


int main(){
    
    int a = 10;
    char b = 'a';
    // �u���եδ��q��� 
    test(a, a);
    // �եΨ�ƼҪO
    test<>(a, a);
    // �եδ��q��ơAb�۰������ഫ
    test(a, b);
    // ��ƼҪO�L�k�۰����ഫ
    //test<>(a, b);

    // ��ƼҪO�۰����ഫ
    test<int>(a, b);


}