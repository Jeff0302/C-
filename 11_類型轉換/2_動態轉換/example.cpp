#include<iostream>
using namespace std;

class Animal{};
class Dog:public Animal{};
class Other{};


int main(){

//1. dynamic_cast不支持基本類型
char ch = 'a';
//報錯不支持基本類型轉換
//cannot 'dynamic_cast' 'ch' (of type 'char') to type 'double'
//double d = dynamic_cast<double>(ch);

//上行轉換 安全 (父類指針指向子類空間)
Animal *an = dynamic_cast<Animal *>(new Dog);
//下行轉換 不安全, 報錯  (子類指針指向父類空間)
//Dog *dog =dynamic_cast<Dog*>(new Animal);  //不支持不安全轉換

//dynamic_cast不支持沒有關係的類型轉換
//報錯
//Other *an = dynamic_cast<Other *>(new Dog);
}