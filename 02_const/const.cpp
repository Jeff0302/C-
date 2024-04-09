#include<iostream>
#include"fun.cpp"
using namespace std;

extern const int a;
struct Person
{
    string name;
    int age;
    double weight;
};


int main(){
    cout << "全局的a=" << a << endl;

    //1.c++中對於基礎類型，系統不會給data開闢空間，data放在符號表中
    const int data=100;
    //data = 200; //無法修改
    //2.c++中當對data取地址的時候，系統會為data開闢空間。
    int *p =(int *)&data;
    *p = 1000;
    cout << "*p=" << *p << endl;    
    /*p=1000，空間內容修改成功*/
    cout << "局部的data=" << data << endl; 
    //data為什麼還是100? 

    //3.當以變量的形式，初始化const修飾變量，系統會為其開闢空間。
    int bb=50;
    const int b=bb; //系統會直接為b開闢空間，而不會把b放入符號表。

    int *pb = (int *)&b ;
    *pb = 100;
    cout << "bb=" << bb << endl; 
    cout << "局部的b=" << b << endl; 
    
    //4.const修飾自訂義數據類型(結構體、類)，系統會為其開闢空間。 
    
    const Person person1 = {"Jeff", 18, 65.0};
    // person1.name = "Amy"; //無法修改
    Person *per_p=(Person *)&person1;
    per_p->name = "Amy";
    cout << "person1.name=" << person1.name; //Amy

}