#include <iostream>
#include <string> 
using namespace std;


class Person
{
private:
    string name;
public:
    Person(string name):name(name){
        cout << "Person�c�y���, "  << this->name << endl;    
    }    
    ~Person(){
         cout << "Person�R�c���, " << this->name << endl;
    }
};

int main(){
    try
    {
        Person p1("jeff1");
        Person p2("jeff2");
        Person p3("jeff3");
        throw "�c�y���`";
    }
    catch(const char* e)
    {
        cout << e << endl;
    }

    cout << "��L�u�@" << endl;
}