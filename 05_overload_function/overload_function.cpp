#include<iostream>
using namespace std;
//ㄧ计更兵ン
void fun(){
    cout << "礚把fun" << endl;
}

//a. 把计计ぃ
void fun(int a){
    cout << " int把计fun" << endl;
}
//b. 把计摸ぃ
void fun(char b){
    cout << " char把计fun" << endl;
}
//c. 把计抖ぃ
void fun(int a, char b){
    cout << "(int, char)fun" << endl;
}

void fun(char a, int b){
    cout << "(char, int)fun" << endl;
}

//ㄧ计摸ぃ更ㄌ沮
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