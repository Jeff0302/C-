#include <iostream>
#include <string.h>
using namespace std;
/*
class Person
{
    friend ostream& operator<<(ostream &out, Person &p);
private:
    //���������w�����ܶq
    char *name;
public:
    Person(){
        name = NULL;
    };

    Person(const char* name){
        this->name = new char [strlen(name)+1];
        strcpy(this->name, name);
        cout << this->name << "�c�y�F" << endl;
    };

    //�����c�y���
    Person(const Person &p){
        this->name = new char [strlen(p.name)+1];
        strcpy(this->name, p.name);
        cout << this->name << "�c�y�F" << endl;
    };
    ~Person(){
        cout << this->name << "�R�c�F" << endl;
        if(this->name!=NULL)
        {
            delete [] this->name;
            this->name = NULL;
        }
    };


    Person &operator=(Person &p){
        //�p�G�w�g���Ȼݭn���M�Ũ����񤺦s
        if(this->name!=NULL)
        {
            delete [] this->name;
            this->name = NULL;
        }

        //�ӽзs���Ŷ�
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
    
    //�p�G�S�����������A �q�{�O�L�����Ap1 p3�Ŷ��|��������
    p3 = p1;
    //������������^�ȡA���M�L�k�����p�U�ާ@
    //p3 = (p2 = p1)

    cout << "p1 == p2 ->" << (p1 == p2) << endl;
    cout << "p1 != p2 ->" << (p1 != p2) << endl;

}
*/

