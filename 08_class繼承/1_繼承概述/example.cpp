#include<iostream>
#include<string.h>
using namespace std;

//�]�m����
class Base
{
public:
    int a;
private: 
    int b;
protected:
    int c;  


};

//�]�m�@�Ӥl��
class Son:public Base
{
public:
    //1. �������������ƾڦb�l�����]�O������
    //2. ���������p���ƾڦb�l�����O "���i����"(�l���L�k�X�ݤ������p���ƾ�)
    //3. ���������O�@�ƾڡA�b�l�����O�O�@��(�i����)
    //�l������
    void showSon(){
        
        //�l���L�k�X�ݤ������p���ƾ�
        //this.b = 200; //���ઽ���X��
        //�l���i�H�X�ݤ������O�@�ƾ�
        this->c = 100;

    };    

};


class SonProtected:protected Base
{
public:
    //1. �������������ƾڦb�l�����O �O�@��
    //2. ���������p���ƾڦb�l�����O "���i����"(�l���L�k�X�ݤ������p���ƾ�)
    //3. ���������O�@�ƾڡA�b�l�����O�O�@��(�i����)
    //�l������
    void showSon(){

        this->a = 100;
    };    

};


class SonPrivate:private Base
{
public:
    //1. �������������ƾڦb�l�����O �p����
    //2. ���������p���ƾڦb�l�����O "���i����"(�l���L�k�X�ݤ������p���ƾ�)
    //3. ���������O�@�ƾڡA�b�l�����O �p����
    //�l������
    void showSon(){
        
        this->a = 100;
        cout << this->a<< endl;
    };    

};


int main(){
  //���~��
  
  //1. ���}�~��
  Son son;
  son.a = 100;
  cout << "��������public�ƾ�a=" << son.a << endl;
  //�L�k�X��
  //son.b = 200;
  //�L�k�X��
  //son.c = 100

  //2. �O�@�~��
  SonProtected son2;
  //�l���~���i�H�X��
  //son2.a=100;

  SonPrivate son3;
  //�l���~���i�H�X��
  //son3.a = 100;
  son3.showSon();


}