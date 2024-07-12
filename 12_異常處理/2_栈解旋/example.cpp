#include <iostream>
#include <string> 
using namespace std;


class Person
{
private:
    string name;
public:
    Person(string name):name(name){
        cout << "Person構造函數, "  << this->name << endl;    
    }    
    ~Person(){
         cout << "Person析構函數, " << this->name << endl;
    }
};

int main(){
    try
    {
        Person p1("jeff1");
        Person p2("jeff2");
        Person p3("jeff3");
        throw "構造異常";
    }
    catch(const char* e)
    {
        cout << e << endl;
    }

    cout << "其他工作" << endl;
}