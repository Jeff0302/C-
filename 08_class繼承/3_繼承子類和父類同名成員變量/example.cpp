#include <iostream>
using namespace std;

class Base
{
protected:
    int num;
public:
    Base(int num){
        this->num = num;
        cout << "Base有參構造函數" << endl;
    };
    ~Base(){
         cout << "Base析構函數" << endl;
    };
    int getNum(){
        return this->num;
    };
};

class Son:public Base
{
private:
    int num; 
public:
     Son(int num1, int num2):Base(num1){
        this->num = num2;
        cout << "Son有參構造函數" << endl;
     };
     ~Son(){
        cout << "Son析構函數" << endl;
     };

     void showNum(){
        //當父類和子類的成員變量同名時，會選擇當前作用域的成員變量(就近原則)。
        cout << "Son的num=" << this->num << endl;
        //如果在子類中要使用 父類的同名成員 必須要加上父類的作用域。
        cout << "Base的num=" << Base::num << endl;
        //子類也可以借助父類的公有方法間接操作父類的私有數據。
        cout << "Base的num=" << getNum() << endl;
     };
};


int main(){
    Son son(10,20);
   son.showNum(); 
}