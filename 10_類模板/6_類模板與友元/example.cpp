#include <iostream>
using namespace std;
//person���H�V�e�n��
template<class T1, class T2> class Person;
//���e�n����ƼҪO�A�i�D�sĶ��showPerson02��ƼҪO�O�s�b���C
template<typename T1, typename T2> void showPerson02(Person<T1, T2> &ob);
template<typename T1, typename T2> ostream& operator<<(ostream &out, Person<T1, T2> &ob);


template<class T1, class T2>
class Person
{
private:
    T1 name;
    T2 age;
public:
    Person(T1 name, T2 age):name(name), age(age){};
    ~Person(){};
    //1. �ͤ���ƥi�H�b�����w�q(�ͤ����ݩ�����������)
    friend void showPerson01(Person<T1, T2> &ob){
         cout << ob.name << ", " << ob.age << endl;
    }
    //�ͤ���Ʀb���~�w�q�����i�D�sĶ���Ӥͤ���ƬO�ҪO���
    friend void showPerson02<>(Person<T1, T2> &ob);
    friend ostream& operator<<<>(ostream &out, Person<T1, T2> &ob);
};

//2. �ͤ���Ʀb���~�w�q
//��ƼҪO
template<typename T1, typename T2> 
void showPerson02(Person<T1, T2> &ob){
    cout << ob.name << ", " << ob.age << endl;
}
template<typename T1, typename T2>
ostream& operator<<(ostream &out, Person<T1, T2> &ob){
    cout << ob.name << ", " << ob.age;
    return out; 
}

int main(){

    Person<string, int> p1("Jeff",18);
    showPerson01(p1);
    showPerson02(p1);
    cout << p1 << endl;

}
