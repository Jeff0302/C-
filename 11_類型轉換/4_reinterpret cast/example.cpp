#include<iostream>
using namespace std;
class Animal{};
class Dog:public Animal{};
class Other{};

int main(){
    //1. reinterpret_cast 不支持基本類型轉換
    char ch = 'a';
    //報錯
    //double d = reinterpret_cast<double>(ch); 
    
    //2. reinterpret_cast作用於自訂義類型
    //上行轉換 安全
    Animal *an = reinterpret_cast<Animal *>(new Dog);
    delete an;
    //下行轉換 不安全
    Dog *dog2 = reinterpret_cast<Dog*>(new Animal);
    delete dog2;

    //報錯
    //3. reinterpret_cast可以作用於不相關類之間的轉換
    Dog *dog3 = reinterpret_cast<Dog*>(new Other);
    //Dog *dog3 = (Dog*)(new Other);
}
