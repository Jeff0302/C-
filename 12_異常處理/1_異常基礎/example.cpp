#include<iostream>
using namespace std;

//c語言風格
// int myDiv(int a, int b)
// {
//     return b==0? -1: a/b; //-1表示失敗
// }

//c++語言風格
int myDiv(int a, int b)
{
     if(b==0)
        throw 0;//"div 0異常"; //拋出異常
     return a/b;
}

int main(){

    ///c語言風格
    // int ret = myDiv(10, -10);
    // if(ret==-1)
    // {
    //     cout << "程序異常" << endl; 
    // }
    // else
    // {
    //     cout << "result=" << ret << endl; 
    // }
    try
    {
        int ret = myDiv(10, 0);
        cout << "rer=" << ret << endl;
    }
    catch(const char* e)
    {
         cout << e << endl;
    }
    catch(...)
    {
         cout << "捕獲其他到異常" << endl;
    }
    cout << "~~~~~~~~~~~" <<  endl;
}