#include<iostream>
using namespace std;
class Animal{};
class Dog:public Animal{};
class Other{};

int main(){
    //1. reinterpret_cast ������������ഫ
    char ch = 'a';
    //����
    //double d = reinterpret_cast<double>(ch); 
    
    //2. reinterpret_cast�@�Ω�ۭq�q����
    //�W���ഫ �w��
    Animal *an = reinterpret_cast<Animal *>(new Dog);
    delete an;
    //�U���ഫ ���w��
    Dog *dog2 = reinterpret_cast<Dog*>(new Animal);
    delete dog2;

    //����
    //3. reinterpret_cast�i�H�@�Ω󤣬������������ഫ
    Dog *dog3 = reinterpret_cast<Dog*>(new Other);
    //Dog *dog3 = (Dog*)(new Other);
}
