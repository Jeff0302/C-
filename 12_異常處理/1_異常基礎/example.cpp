#include<iostream>
using namespace std;

//c�y������
// int myDiv(int a, int b)
// {
//     return b==0? -1: a/b; //-1��ܥ���
// }

//c++�y������
int myDiv(int a, int b)
{
     if(b==0)
        throw 0;//"div 0���`"; //�ߥX���`
     return a/b;
}

int main(){

    ///c�y������
    // int ret = myDiv(10, -10);
    // if(ret==-1)
    // {
    //     cout << "�{�ǲ��`" << endl; 
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
         cout << "�����L�첧�`" << endl;
    }
    cout << "~~~~~~~~~~~" <<  endl;
}