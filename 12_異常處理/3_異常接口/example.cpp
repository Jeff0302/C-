#include <iostream>
using namespace std;
void testfunc01(){
    //��Ƥ����i�H�ߥX���󲧱`
    //throw 10;
    //throw 3.14f;
    //throw 'a';
    throw "hihi";
}

//�u��ߥXint char���`
void testfunc02() throw(int, char)
{
    throw 10;
    //throw "hihi";
}

//��Ƥ��ߥX���󲧱`
void testfunc03() throw()
{
    throw 10; //���򤣨�
}

int main(){
    try
    {
        testfunc03();
    }
    catch(int e)
    {
       cout << "����int���`" << endl;
    }
    catch(float e)
    {
       cout << "����float���`" << endl;
    }
    catch(char e)
    {
       cout << "����char���`" << endl;
    }
     catch(const char * e)
    {
       cout << "����const char *���`" << endl;
    }
    
}