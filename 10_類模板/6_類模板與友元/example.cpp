#include <iostream>
using namespace std;
//person摸禜玡羘
template<class T1, class T2> class Person;
//矗玡羘ㄧ计家狾禗絪亩竟showPerson02ㄧ计家狾琌
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
    //1. ねじㄧ计摸い﹚竡(ねじぃ妮赣摸Θㄧ计)
    friend void showPerson01(Person<T1, T2> &ob){
         cout << ob.name << ", " << ob.age << endl;
    }
    //ねじㄧ计摸﹚竡ゲ斗禗絪亩竟赣ねじㄧ计琌家狾ㄧ计
    friend void showPerson02<>(Person<T1, T2> &ob);
    friend ostream& operator<<<>(ostream &out, Person<T1, T2> &ob);
};

//2. ねじㄧ计摸﹚竡
//ㄧ计家狾
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
