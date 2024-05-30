#include <iostream>
using namespace std;

class Other
{
public:
    Other(){
          cout << "對象成員的無參構造函數" << endl;
    };
    ~Other(){
        
          cout << "對象成員的析構函數" << endl;

    };
};



class Base
{  
public:
    int a;
    Base(){
        cout << "父類的無參構造函數" << endl;
    };
    Base(int a){
        this->a = a;

    };

    ~Base(){
        cout << "父類的析構函數" << endl;
    };
};



class Son:public Base
{
private:
    Other other;
public:
    int b;
    Son(){
        cout << "子類的無參構造函數" << endl;
    };
    
    Son(int b){
        cout << "子類的有參構造函數(int b)" << endl;
        this->b = b;
    };
    //子類必須用 初始化列表 顯示調用父類的有參構造函數
    //父類名稱(參數)
    Son(int a, int b):Base(a){
        cout << "子類的有參構造函數(int a, int b)" << endl;
        this->b = b;
    };
    ~Son(){
        cout << "子類的析構函數" << endl;
    };
};


int main(){
    //子類 默認 會調用 父類無參構造
    Son son1(10);
    
    
    //子類必須用 初始化列表 顯示調用父類的有參構造函數
    Son son2(10, 20);
    cout << "son.a=" << son2.a << endl;
    cout << "son.b=" << son2.b << endl;


}