#include <iostream>
using namespace std;



class MyException
{
public:
    MyException(){
        cout << "���`���c�y" << endl;
    }
    MyException(const MyException &ob){
        cout << "���`�������c�y" << endl;
    }
    ~MyException(){
         cout << "���`���R�c" << endl;
    }
};

int main(){
    //1. ���q��H�����`
    try
    {
        MyException ob;
        throw ob;
    }
    catch(MyException ob)
    {
       cout << "���`�o��" << endl;
    }
    cout << "------------------------------" << endl;
    //2. ���w�����`
    try
    {
        
        throw new MyException;
    }
    catch(MyException * ob)
    {
       cout << "���`�o��" << endl;
       delete ob; //�����O�o����
    }

    cout << "------------------------------" << endl;
    //3. �ޥα����`
    try
    {
        throw MyException();
    }
    catch(MyException &ob)
    {
       cout << "���`�o��" << endl;
    }
}