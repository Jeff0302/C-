#include<iostream>
#include<list>
using namespace std;

class Person
{
    friend ostream& operator<<(ostream &out,const Person &p);    
private:
    string name;
    int age;
public:
    Person(string name, int age):name(name),age(age){

    }

    bool operator==(const Person& t) const{
        return (t.age == this->age && t.name==this->name)? true: false;
    }
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

int main(){
    list<Person> lst_p;

    lst_p.push_back(Person("Jeff", 18));
    lst_p.push_back(Person("Amy", 16));
    lst_p.push_back(Person("Jack", 30));

    //刪除自訂義數據, 報錯必須重載==運算符
    lst_p.remove(Person("Jack", 30));
    
    showPerson(lst_p);

}