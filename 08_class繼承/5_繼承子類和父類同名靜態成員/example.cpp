#include<iostream>
using namespace std;

class Base
{
public:
    //�R�A����
    static int num; 
    static int data; 
    Base(){};
    ~Base(){};
    static void showData(){
        cout << "Base��data=" << data << endl;
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
        cout << "Son��data=" << data << endl;
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
    //�X�ݤ������R�A����
    cout << Base::data << endl;
    cout << son.Base::data << endl;
    cout << Son::Base::data << endl;

    //�X�ݤ����M�l�����P�W�R�A���
    Son::showData();
    Son::Base::showData();
}
