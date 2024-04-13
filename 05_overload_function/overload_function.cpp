#include<iostream>
using namespace std;
//函數重載條件
void fun(){
    cout << "無參的fun" << endl;
}

//a. 參數個數不同
void fun(int a){
    cout << " 一個int參數的fun" << endl;
}
//b. 參數類型不同
void fun(char b){
    cout << " 一個char參數的fun" << endl;
}
//c. 參數順序不同
void fun(int a, char b){
    cout << "(int, char)的fun" << endl;
}

void fun(char a, int b){
    cout << "(char, int)的fun" << endl;
}

//函數類型的返回值不能作為重載的依據
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