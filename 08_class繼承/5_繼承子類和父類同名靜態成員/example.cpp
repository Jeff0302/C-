#include<iostream>
using namespace std;

class Base
{
public:
    //靜態成員
    static int num; 
    static int data; 
    Base(){};
    ~Base(){};
    static void showData(){
        cout << "Base的data=" << data << endl;
    }
};

int Base::num = 100;
int Base::data = 200;


class Son:public Base
{
public:
    static int data;
    Son(){};
    ~Son(){};
    static void showData(){
        cout << "Son的data=" << data << endl;
    }
};

int Son::data = 200;


int main(){
    Son son;
    Son::num = 10;
    cout << Son::num << endl;
    cout << Base::num << endl;

    Son::data = 2;
    cout << Son::data << endl;
    //訪問父類的靜態成員
    cout << Base::data << endl;
    cout << son.Base::data << endl;
    cout << Son::Base::data << endl;

    //訪問父類和子類的同名靜態函數
    Son::showData();
    Son::Base::showData();
}
