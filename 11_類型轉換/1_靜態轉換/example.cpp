#include <iostream>
using namespace std;

class Animal{};
class Dog:public Animal{};
class Other{};


int main(){
//靜態轉換static_cast
//1. static_cast作用於基本類型
char ch = 'a';
//c語言風格
//double d = (double)ch;
double d = static_cast<double>(ch);

//2. static_cast作用於自訂義類型(結構體-類)
//上行轉換 安全
Animal *an = static_cast<Animal *>(new Dog);
delete an;
//下行轉換 不安全
Dog *dog2 = static_cast<Dog*>(new Animal);
delete dog2;

//報錯
//3. static_cast不能作用於不相關類之間的轉換
//Dog *dog3 = static_cast<Dog*>(new Other);
Dog *dog3 = (Dog*)(new Other);




}