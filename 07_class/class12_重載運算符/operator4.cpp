#include <iostream>
#include <string.h>
using namespace std;
/*
class Person
{
    friend ostream& operator<<(ostream &out, Person &p);
private:
    //類中有指針成員變量
    char *name;
public:
    Person(){
        name = NULL;
    };

    Person(const char* name){
        this->name = new char [strlen(name)+1];
        strcpy(this->name, name);
        cout << this->name << "構造了" << endl;
    };

    //拷貝構造函數
    Person(const Person &p){
        this->name = new char [strlen(p.name)+1];
        strcpy(this->name, p.name);
        cout << this->name << "構造了" << endl;
    };
    ~Person(){
        cout << this->name << "析構了" << endl;
        if(this->name!=NULL)
        {
            delete [] this->name;
            this->name = NULL;
        }
    };


    Person &operator=(Person &p){
        //如果已經有值需要先清空並釋放內存
        if(this->name!=NULL)
        {
            delete [] this->name;
            this->name = NULL;
        }

        //申請新的空間
        this->name = new char [strlen(p.name)+1];
        strcpy(this->name, p.name);

    
        return *this;
    };

    bool operator==(Person &p){
        return strcmp(this->name,p.name)==0? true: false;
    
    };

    bool operator!=(Person &p){
        return strcmp(this->name,p.name)!=0? true: false;
    
    };
};

ostream &operator<<(ostream &out, Person &p)
{
    cout << p.name;
    return out;
}

int main()
{
    Person p1("Jeff");
    cout << p1 << endl;

    Person p2 = p1;

    Person p3;
    
    //如果沒有重載等號， 默認是淺拷貝，p1 p3空間會重複釋放
    p3 = p1;
    //重載必須有返回值，不然無法完成如下操作
    //p3 = (p2 = p1)

    cout << "p1 == p2 ->" << (p1 == p2) << endl;
    cout << "p1 != p2 ->" << (p1 != p2) << endl;

}
*/

