#include<iostream>
using namespace std;

template<class T1, class T2>
class Person
{
private:
    T1 name;
    T2 age;
public:
    Person(T1 name, T2 age);
    ~Person();
    void showPerson();
};

template<class T1, class T2> 
Person<T1, T2>::Person(T1 name, T2 age):name(name), age(age)
{
    cout << "Person¦³°Ñºc³y" << endl;
}

template<class T1, class T2>
Person<T1, T2>::~Person()
{
    cout << "PersonªRºc" << endl;
}

template<class T1, class T2> 
void Person<T1, T2>::showPerson(){
    cout << "name=" << name << ", age=" << age << endl;
}
