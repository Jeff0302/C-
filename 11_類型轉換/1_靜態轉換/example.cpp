#include <iostream>
using namespace std;

class Animal{};
class Dog:public Animal{};
class Other{};


int main(){
//�R�A�ഫstatic_cast
//1. static_cast�@�Ω������
char ch = 'a';
//c�y������
//double d = (double)ch;
double d = static_cast<double>(ch);

//2. static_cast�@�Ω�ۭq�q����(���c��-��)
//�W���ഫ �w��
Animal *an = static_cast<Animal *>(new Dog);
delete an;
//�U���ഫ ���w��
Dog *dog2 = static_cast<Dog*>(new Animal);
delete dog2;

//����
//3. static_cast����@�Ω󤣬������������ഫ
//Dog *dog3 = static_cast<Dog*>(new Other);
Dog *dog3 = (Dog*)(new Other);




}