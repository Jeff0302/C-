#include <iostream>
using namespace std;



class MyException
{
public:
    MyException(){
        cout << "異常的構造" << endl;
    }
    MyException(const MyException &ob){
        cout << "異常的拷貝構造" << endl;
    }
    ~MyException(){
         cout << "異常的析構" << endl;
    }
};

int main(){
    //1. 普通對象接異常
    try
    {
        MyException ob;
        throw ob;
    }
    catch(MyException ob)
    {
       cout << "異常發生" << endl;
    }
    cout << "------------------------------" << endl;
    //2. 指針接異常
    try
    {
        
        throw new MyException;
    }
    catch(MyException * ob)
    {
       cout << "異常發生" << endl;
       delete ob; //必須記得釋放
    }

    cout << "------------------------------" << endl;
    //3. 引用接異常
    try
    {
        throw MyException();
    }
    catch(MyException &ob)
    {
       cout << "異常發生" << endl;
    }
}