#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

class Person
{
private:
    string m_name;
    int m_age;
public:
    Person(string name, int age):m_name(name), m_age(age){}
    void showPerson() const {
        cout << m_name << ", " << m_age << endl;
    }
    ~Person(){}
};




int main(){
    vector<Person> v;
    v.push_back(Person("Jack",18));
    v.push_back(Person("Amy",12));
    v.push_back(Person("John",38));
    v.push_back(Person("Rank",16));
    v.push_back(Person("Tom",28));

    for_each(v.begin(), v.end(), mem_fn(&Person::showPerson));
}
