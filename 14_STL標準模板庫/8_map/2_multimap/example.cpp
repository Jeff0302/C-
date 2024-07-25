#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

//multimap 使用場景 5個人加入三的部門

class Person
{
    friend ostream& operator<<(ostream &out, const Person &p);
private:
    string m_name;
    int m_age;
public:
    Person(string name, int age):m_name(name), m_age(age){}
    ~Person(){}
};

ostream& operator<<(ostream &out, const Person &p){

    out << p.m_name << ", " << p.m_age;
    return out;
}

void showDepartment(int id, multimap<int, Person> &m){

    // multimap<int, Person>::const_iterator it;
    // for(it=m.begin();it!=m.end();it++){
    //     if((*it).first==id)
    //         cout << (*it).second << endl;
    // }

    //由於multimap將依據key值自動排序，相同key一定連在一起。
    multimap<int, Person>::const_iterator it = m.find(id);
    int cnt = m.count(id);
    for(int i=0;i<cnt;i++)
    {
        cout << (*it).second << endl;
        it++;
    }
}

int main(){
    // map<int, string> m1;

    // m1.insert(make_pair(1, "RNG"));
    // //插入失敗
    // m1.insert(make_pair(1, "IG"));

    // cout << m1[1] << endl;
    // cout << m1.count(1) << endl; //2


    // multimap<int, string> m2;
    // m2.insert(make_pair(1, "RNG"));
    // m2.insert(make_pair(1, "IG"));

    // cout << m2.count(1) << endl; //2
    multimap<int, Person> mm;
    mm.insert(make_pair(2, Person("A", 18)));
    mm.insert(make_pair(2, Person("B", 20)));
    mm.insert(make_pair(1, Person("C", 30)));
    mm.insert(make_pair(1, Person("D", 33)));
    mm.insert(make_pair(3, Person("E", 40)));

    showDepartment(1, mm);

}

