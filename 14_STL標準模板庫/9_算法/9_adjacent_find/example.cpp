#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

class Person
{
    friend ostream& operator<<(ostream& out, const Person& p);
private:
    string name;
    int age;
public:
    Person(string name, int age):name(name), age(age){};
    ~Person(){};
    bool operator==(const Person& p){
        return p.age==this->age && p.name == this->name;
    };
};


ostream& operator<<(ostream &out, const Person& p){
    out << "name= " << p.name << ", age= " << p.age;
    return out;
}

int main(){
    vector<Person> v2;
    v2.push_back(Person("Jeff",18));
    v2.push_back(Person("Jack",28));
    v2.push_back(Person("Jack",28));
    v2.push_back(Person("Amy",48));
    v2.push_back(Person("Mark",58));

    vector<Person>::iterator iter = adjacent_find(v2.begin(), v2.end());

    if(iter!=v2.end()){
        cout <<"找到Person= " << *iter << endl;
    }
    else
    {
        cout << "沒有找到相鄰重複元素" << endl;
    }



}
