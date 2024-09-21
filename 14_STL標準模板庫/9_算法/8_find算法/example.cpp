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
    //返回值為一個迭代器
    //find Amy
    vector<Person>::iterator iter = find(v2.begin(), v2.end(), v2[3]);
    if (iter!=v2.end())
    {
        cout << "找到的Person= " << *iter << endl ;
    }
    else{
        cout << "找不到對應Person" << endl;
    }


    //find if
    //尋找第一個大於30歲的人
    vector<Person>::iterator iter2 = find_if(v2.begin(), v2.end(), bind(ageAboveX, std::placeholders::_1, 30));
     if (iter2!=v2.end())
    {
        cout << "找到的Person= " << *iter2 << endl ;
    }
    else{
        cout << "找不到對應Person" << endl;
    }

    
}