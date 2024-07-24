#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

class Person
{
friend ostream& operator<<(ostream &out,const Person &p);
private:
    string m_name;
    int m_age;
public:
    Person(){}
    Person(string name, int age):m_name(name), m_age(age){}
    //方式1 重載 < 運算符
    // bool operator<(const Person &p2) const{
    //     return this->m_age < p2.m_age;
    // }
    int getAge() const{
        return m_age;
    }
    ~Person(){};
};

ostream& operator<<(ostream &out,const Person &p){
    out<< p.m_age << ", " << p.m_name;
    return out;
}

class MyGreaterPerson
{
public:
    static bool operator()(const Person &p1, const Person &p2){
        return p1.getAge()>p2.getAge();
    }

};



int main(){

    //方法2 指定排序規則
    set<Person, MyGreaterPerson> st;
    st.insert(Person("Amy", 18));
    st.insert(Person("Jack", 10));
    st.insert(Person("Mark", 40));
    st.insert(Person("Kobe", 34));
    st.insert(Person("Jeff", 20));

    for_each(st.begin(), st.end(), [](const Person &p){ cout<< p << endl;});
}