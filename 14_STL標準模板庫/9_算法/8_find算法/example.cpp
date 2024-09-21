#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

class Person
{
    friend ostream& operator<<(ostream& out, const Person& p);
    friend bool ageAboveX(const Person&p, int age);
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

bool ageAboveX(const Person&p, int age){
        return p.age > age;
}
int main(){
    vector<Person> v2;
    v2.push_back(Person("Jeff",18));
    v2.push_back(Person("Jack",28));
    v2.push_back(Person("John",38));
    v2.push_back(Person("Amy",48));
    v2.push_back(Person("Mark",58));

    //find
    //��^�Ȭ��@�ӭ��N��
    //find Amy
    vector<Person>::iterator iter = find(v2.begin(), v2.end(), v2[3]);
    if (iter!=v2.end())
    {
        cout << "��쪺Person= " << *iter << endl ;
    }
    else{
        cout << "�䤣�����Person" << endl;
    }


    //find if
    //�M��Ĥ@�Ӥj��30�����H
    vector<Person>::iterator iter2 = find_if(v2.begin(), v2.end(), bind(ageAboveX, std::placeholders::_1, 30));
     if (iter2!=v2.end())
    {
        cout << "��쪺Person= " << *iter2 << endl ;
    }
    else{
        cout << "�䤣�����Person" << endl;
    }

    
}