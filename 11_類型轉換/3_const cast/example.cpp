#include<iostream>
using namespace std;

int main(){
    
    //���w��`�q���w
    int *p = NULL;
    const int* cp = const_cast<const int*>(p);
    
    //�`�q���w����w
    const int* cp2 = NULL; 
    int *p2 = const_cast<int *>(cp2);

    //�ޥ���`�q�ޥ�
    int data = 10;
    int &rd = data;
    const int &crd =const_cast<const int &>(rd);

    //�`�q�ޥ���ޥ�
    const int data2 = 20;
    const int &crd2 = data2;
    int &rd2 = const_cast<int&>(crd2);
   
    //const_cast������D���w�ΫD�ޥΪ��ഫ�C
    int a = 10;
    //����
    //const int b = const_cast<const int>(a);

}