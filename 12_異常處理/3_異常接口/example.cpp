#include <iostream>
using namespace std;
void testfunc01(){
    //函數內部可以拋出任何異常
    //throw 10;
    //throw 3.14f;
    //throw 'a';
    throw "hihi";
}

//只能拋出int char異常
void testfunc02() throw(int, char)
{
    throw 10;
    //throw "hihi";
}

//函數不拋出任何異常
void testfunc03() throw()
{
    throw 10; //捕獲不到
}

int main(){
    try
    {
        testfunc03();
    }
    catch(int e)
    {
       cout << "捕獲int異常" << endl;
    }
    catch(float e)
    {
       cout << "捕獲float異常" << endl;
    }
    catch(char e)
    {
       cout << "捕獲char異常" << endl;
    }
     catch(const char * e)
    {
       cout << "捕獲const char *異常" << endl;
    }
    
}