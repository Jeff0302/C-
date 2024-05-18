#include <iostream>
using namespace std;

class Other
{
public:
    Other(){
          cout << "癸禜Θ礚把篶硑ㄧ计" << endl;
    };
    ~Other(){
        
          cout << "癸禜Θ猂篶ㄧ计" << endl;

    };
};



class Base
{  
public:
    int a;
    Base(){
        cout << "摸礚把篶硑ㄧ计" << endl;
    };
    Base(int a){
        this->a = a;

    };

    ~Base(){
        cout << "摸猂篶ㄧ计" << endl;
    };
};



class Son:public Base
{
private:
    Other other;
public:
    int b;
    Son(){
        cout << "摸礚把篶硑ㄧ计" << endl;
    };
    
    Son(int b){
        cout << "摸Τ把篶硑ㄧ计(int b)" << endl;
        this->b = b;
    };

    Son(int a, int b):Base(a){
        cout << "摸Τ把篶硑ㄧ计(int a, int b)" << endl;
        this->b = b;
    };
    ~Son(){
        cout << "摸猂篶ㄧ计" << endl;
    };
};


int main(){
    //摸 纐粄 穦秸ノ 摸礚把篶硑
    Son son1(10);
    
    //
    Son son2(10, 20);
    cout << "son.a=" << son2.a << endl;
    cout << "son.b=" << son2.b << endl;


}