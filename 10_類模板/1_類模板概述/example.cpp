#include <iostream>
using namespace std;

template<class T1,class T2>
class Data
{
private:
    T1 a;
    T2 b;
public:
    Data(T1 a, T2 b):a(a), b(b)
    {
        cout << "�c�y���" << endl;
    }
    ~Data()
    {      
        cout << "�R�c���" << endl;
    }
    void showData(){
         cout << typeid(a).name() << ":" << a << endl << typeid(b).name() << ":" <<b<< endl;
    }
};

int main(){
    //�����A���ҪO����۰ʱ�������
    //Person p1(10, "12");
    Data<int, string> p1(10, "12");
    p1.showData();
    
    Data<double, char> p2(10.0, 'b');
    p2.showData();

}