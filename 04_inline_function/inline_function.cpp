#include<iostream>
using namespace std;

//不可以對參數進行類型檢查
//宏是替換
//宏沒有作用域的概念，不能作為類的成員函數
#define ADD(x, y) x+y
#define COMPARE(x, y) (((x)<(y))?(x):(y))

//可以對參數進行類型檢查
inline int ADD_inline(int x, int y){
    return x+y;
}

inline int compare_inline(int x, int y){
    return x<y? x:y;
}


int main(){
    int a=10;
    int b=20;
    cout << "(a+b)*10=" << ADD(a, b) * 10<< endl;  //10+20*10 = 210
    cout << "(a+b)*10=" << ADD_inline(a, b)*10 << endl; // (10+20)*10 = 300l;
    
    //(((++a)<(b))?(++a):(b))
    cout << "COMPARE(++a, b)=" << COMPARE(++a, b) << endl;   //希望返回11, 實際返回12
    a = 10;
    cout << "compara_inline(++a, b)=" << compare_inline(++a, b) << endl;   //希望返回11, 實際返回12
}