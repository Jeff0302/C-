#include<iostream>
using namespace std;

template<class T>
class Base
{
private:
    T a;
public:
    Base(T a):a(a)
    {
        cout << "Base�c�y" << endl;
    }
    ~Base(){
        cout << "Base�R�c" << endl;
    }
    T& getData(){
        return a;
    }
};


//���ҪO���ʹ��q���A���ҪO�������w����
class Son:public Base<int>
{

public:
    Son(int a):Base(a){
        cout << "Son�c�y" << endl;
    }
    
    ~Son(){
        cout << "Son�R�c" << endl;
    }
    
};


int main(){
    Son s1(10);
    cout << s1.getData() << endl;
    
}