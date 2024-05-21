#include <iostream>
using namespace std;

class Base
{
public:
    void fun(){
        cout << "父類中的void fun" << endl;
    }
    void fun(int a){
        cout << "父類中的int fun a = " << a << endl;
    }
};

class Son:public Base
{
public:
    //*一旦子類實現的父類的成員函數，將屏蔽父類所有同名成員函數。
    void fun(){
        cout << "子類中的void fun" << endl;
    }

    

};


int main(){
    Son son;
    son.fun();
    
    //如果用戶必須調用父類的同名成員函數 必須加作用域。
    son.Base::fun();
    son.Base::fun(10);
    // son.fun(10); //報錯    
}