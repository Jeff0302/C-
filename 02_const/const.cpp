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
    cout << "������a=" << a << endl;

    //1.c++������¦�����A�t�Τ��|��data�}�P�Ŷ��Adata��b�Ÿ���
    const int data=100;
    //data = 200; //�L�k�ק�
    //2.c++�����data���a�}���ɭԡA�t�η|��data�}�P�Ŷ��C
    int *p =(int *)&data;
    *p = 1000;
    cout << "*p=" << *p << endl;    
    /*p=1000�A�Ŷ����e�ק令�\*/
    cout << "������data=" << data << endl; 
    //data�������٬O100? 

    //3.��H�ܶq���Φ��A��l��const�׹��ܶq�A�t�η|����}�P�Ŷ��C
    int bb=50;
    const int b=bb; //�t�η|������b�}�P�Ŷ��A�Ӥ��|��b��J�Ÿ���C

    int *pb = (int *)&b ;
    *pb = 100;
    cout << "bb=" << bb << endl; 
    cout << "������b=" << b << endl; 
    
    //4.const�׹��ۭq�q�ƾ�����(���c��B��)�A�t�η|����}�P�Ŷ��C 
    
    const Person person1 = {"Jeff", 18, 65.0};
    // person1.name = "Amy"; //�L�k�ק�
    Person *per_p=(Person *)&person1;
    per_p->name = "Amy";
    cout << "person1.name=" << person1.name; //Amy

}