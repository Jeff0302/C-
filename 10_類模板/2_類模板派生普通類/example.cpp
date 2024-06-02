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
        cout << "Base構造" << endl;
    }
    ~Base(){
        cout << "Base析構" << endl;
    }
    T& getData(){
        return a;
    }
};


//類模板派生普通類，類模板必須指定類型
class Son:public Base<int>
{

public:
    Son(int a):Base(a){
        cout << "Son構造" << endl;
    }
    
    ~Son(){
        cout << "Son析構" << endl;
    }
    
};


int main(){
    Son s1(10);
    cout << s1.getData() << endl;
    
}