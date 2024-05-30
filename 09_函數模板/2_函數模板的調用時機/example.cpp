#include <iostream>
using namespace std;


void test(int a, int b){
    cout << "炊硄ㄧ计" << endl;
    cout << a + b << endl;
}

template<typename T>
void test(T a, T b){
    cout << "ㄧ计家狾" << endl;
    cout << a + b << endl;
}


int main(){
    
    int a = 10;
    char b = 'a';
    // 纔秸ノ炊硄ㄧ计 
    test(a, a);
    // 秸ノㄧ计家狾
    test<>(a, a);
    // 秸ノ炊硄ㄧ计b笆摸锣传
    test(a, b);
    // ㄧ计家狾礚猭笆摸锣传
    //test<>(a, b);

    // ㄧ计家狾笆摸锣传
    test<int>(a, b);


}