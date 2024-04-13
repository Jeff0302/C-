#include<iostream>
using namespace std;

//���i�H��Ѽƶi�������ˬd
//���O����
//���S���@�ΰ쪺�����A����@�������������
#define ADD(x, y) x+y
#define COMPARE(x, y) (((x)<(y))?(x):(y))

//�i�H��Ѽƶi�������ˬd
inline int ADD_inline(int x, int y){
    return x+y;
}

inline int compare_inline(int x, int y){
    return x<y? x:y;
}


int main(){
    int a=10;
    int b=20;
    cout << "(a+b)*10=" << ADD(a, b) * 10<< endl;  //10+20*10 = 210
    cout << "(a+b)*10=" << ADD_inline(a, b)*10 << endl; // (10+20)*10 = 300l;
    
    //(((++a)<(b))?(++a):(b))
    cout << "COMPARE(++a, b)=" << COMPARE(++a, b) << endl;   //�Ʊ��^11, ��ڪ�^12
    a = 10;
    cout << "compara_inline(++a, b)=" << compare_inline(++a, b) << endl;   //�Ʊ��^11, ��ڪ�^12
}