#include<iostream>
using namespace std;
class Person
{
    //��ƼҪO�]�m���ͤ�
    //��ƼҪO�ӧۡA��^�ȫe�[friend����r
    template<typename T> friend T& mybigger(T &ob1, T &ob2);
    //template<typename Person> friend Person& mybigger(Person &ob1, Person &ob2);
    friend ostream& operator<<(ostream &out, Person &ob);
private:
    int a;
    int b;
               
public:
    Person(int a, int b):a(a), b(b){

    }
    ~Person(){

    }

    bool operator>(Person &ob){
        return this->a > ob.a ? true:false;
    }
};

template<typename T>
T& mybigger(T &ob1, T &ob2){
    //Person�����ѧO>�B���
    return ob1>ob2? ob1:ob2;
}

ostream& operator<<(ostream &out, Person &ob){
    cout << "ob.a = " <<  ob.a << ",ob. b = " <<  ob.b;
    return out;
}

//��k1 ����� ��ƼҪO
/*
template<> Person& mybigger(Person &ob1, Person &ob2){
    
    return ob1.a>ob2.b?  ob1:ob2;
}
*/

int main(){

    Person ob1(10, 10);
    Person ob2(20, 20);
    cout << ob1 << endl;

    //�覡1 ����� ��ƼҪO
    cout << mybigger<Person>(ob1, ob2);
}

