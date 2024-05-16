#include <iostream>
#include <cstring>
using namespace std;
/*
class Person
{
    friend ostream &operator<<(ostream &out, Person &p);
    // friend Person  &operator+(Person &p1, Person &p2);
private:   
    char* name;
    int num;
public:
    Person(){};
    Person(char* name, int num){
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);
        this->num = num;
    };

    ~Person(){
        if(this->name!=NULL)
        {
            cout << this->name << "秆篶砆秸ノ" << endl;
            delete [] this->name;
            this->name = NULL;
           
        }
    };

    // Θㄧ计 ЧΘ笲衡才+更 ob1ノthis蠢, ob2ノ把蠢
    Person &operator+(Person &p){
        Person *temp_p = new Person();
        temp_p->name = new char(strlen(p.name)+ strlen(this->name) + 1);
        strcpy(temp_p->name, this->name);
        strcat(temp_p->name, p.name);

        temp_p->num = this->num + p.num;

        return *temp_p;


    };

    void printPerson(){
        cout << "name=" << this->name << ", " << "num= " << num << endl;
    };
};

// Ыㄧ计ねじЧΘ笲衡才更 <<
ostream &operator<<(ostream &out, Person &p){
    //穝龟瞷块Α
    out << "name=" << p.name << ", " << "num= " << p.num << endl;
    //–Ω磅︽cout
    return out;
};

// Ыㄧ计ねじЧΘ笲衡才更 +
// Person &operator+(Person &p1, Person &p2){
    
//     // cout<<strlen(p1.name)+strlen(p2.name)+1<<endl;
//     //name + name (才﹃發)
//     Person *p = new Person();
//     int len = strlen(p1.name)+strlen(p2.name)+1;
//     p->name = new char[len];
//     // memset(p->name, '\0', len);
//     strcpy(p->name, p1.name);
//     strcat(p->name, p2.name);
 
//     //num + num (计)
//     p->num = p1.num + p2.num;   
//     return *p;
// };
int main()
{
    Person p1("Jeff", 20);
    Person p2("Amy", 18);
    // p1.printPerson();
    
    // 岿粇, cout礚猭醚 璹竡癸禜 块Α
    // cout << p1 << endl;

    // 1. 更 <<
    // 笲衡才更秸ノよΑ1
    operator<<(cout, p1);

    // 笲衡才更秸ノよΑ2
    // 癸よ猭1秈︽纔て奔operator材把计 << 笲衡才オ娩材把计 << 笲衡才娩
    cout << p2 << endl;;

    // 2. 更 +
    // Person ob = p1 + p2;
    //Person ob = p1.operator+(p2);
    Person ob = p1 + p2;
    cout << ob << endl;

}

*/
