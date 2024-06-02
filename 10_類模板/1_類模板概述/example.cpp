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
        cout << "構造函數" << endl;
    }
    ~Data()
    {      
        cout << "析構函數" << endl;
    }
    void showData(){
         cout << typeid(a).name() << ":" << a << endl << typeid(b).name() << ":" <<b<< endl;
    }
};

int main(){
    //報錯，類模板不能自動推導類型
    //Person p1(10, "12");
    Data<int, string> p1(10, "12");
    p1.showData();
    
    Data<double, char> p2(10.0, 'b');
    p2.showData();

}