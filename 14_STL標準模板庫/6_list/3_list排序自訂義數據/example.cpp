#include<iostream>
#include<list>
using namespace std;

class Person
{
    
    friend bool mycompare(const Person &p1, const Person &p2);
    friend ostream& operator<<(ostream &out,const Person &p);    
private:
    string name;
    int age;
public:
    Person(string name, int age):name(name),age(age){
    }

    // bool operator<(const Person& t) const{
    //     return this->age<t.age;
    // }
    ~Person(){}
};

ostream& operator<<(ostream &out,const Person &p){
    cout << p.name << ", " << p.age; 
    return out;
}
void showPerson(list<Person> &p)
{
    for (const Person& temp:p)
    {
        cout << temp << endl;
    }
}

bool mycompare(const Person &p1, const Person &p2){
    return p1.age < p2.age;
}

int main(){
    list<Person> lst_p;

    lst_p.push_back(Person("Jeff", 18));
    lst_p.push_back(Person("Amy", 16));
    lst_p.push_back(Person("Jack", 30));

    //排序自訂義數據, 報錯必須重載<運算符 or 指定排序規則
    lst_p.sort(mycompare);
    
    showPerson(lst_p);
}