#include<iostream>
using namespace std;

class Animal{};
class Dog:public Animal{};
class Other{};


int main(){

//1. dynamic_cast�����������
char ch = 'a';
//����������������ഫ
//cannot 'dynamic_cast' 'ch' (of type 'char') to type 'double'
//double d = dynamic_cast<double>(ch);

//�W���ഫ �w�� (�������w���V�l���Ŷ�)
Animal *an = dynamic_cast<Animal *>(new Dog);
//�U���ഫ ���w��, ����  (�l�����w���V�����Ŷ�)
//Dog *dog =dynamic_cast<Dog*>(new Animal);  //��������w���ഫ

//dynamic_cast������S�����Y�������ഫ
//����
//Other *an = dynamic_cast<Other *>(new Dog);
}