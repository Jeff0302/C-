#include<iostream>
using namespace std;

int main(){
    
    //指針轉常量指針
    int *p = NULL;
    const int* cp = const_cast<const int*>(p);
    
    //常量指針轉指針
    const int* cp2 = NULL; 
    int *p2 = const_cast<int *>(cp2);

    //引用轉常量引用
    int data = 10;
    int &rd = data;
    const int &crd =const_cast<const int &>(rd);

    //常量引用轉引用
    const int data2 = 20;
    const int &crd2 = data2;
    int &rd2 = const_cast<int&>(crd2);
   
    //const_cast不支持非指針或非引用的轉換。
    int a = 10;
    //報錯
    //const int b = const_cast<const int>(a);

}