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
            cout << this->name << "�Ѻc�Q�եΤF" << endl;
            delete [] this->name;
            this->name = NULL;
           
        }
    };

    // ������� �����B���+���� ob1��this�N��, ob2�ΧΰѥN��
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

// ������Ƨ@���ͤ��A�����B��ŭ��� <<
ostream &operator<<(ostream &out, Person &p){
    //���s��{��X�榡
    out << "name=" << p.name << ", " << "num= " << p.num << endl;
    //�C�������A��^�Ȫ���cout
    return out;
};

// ������Ƨ@���ͤ��A�����B��ŭ��� +
// Person &operator+(Person &p1, Person &p2){
    
//     // cout<<strlen(p1.name)+strlen(p2.name)+1<<endl;
//     //name + name (�r�Ŧ�l�[)
//     Person *p = new Person();
//     int len = strlen(p1.name)+strlen(p2.name)+1;
//     p->name = new char[len];
//     // memset(p->name, '\0', len);
//     strcpy(p->name, p1.name);
//     strcat(p->name, p2.name);
 
//     //num + num (�Ʀr�ۥ[)
//     p->num = p1.num + p2.num;   
//     return *p;
// };
int main()
{
    Person p1("Jeff", 20);
    Person p2("Amy", 18);
    // p1.printPerson();
    
    // ���~, cout�L�k�ѧO �ۭq�q��H ��X�榡
    // cout << p1 << endl;

    // 1. ���� <<
    // �B��ŭ����եΤ覡1
    operator<<(cout, p1);

    // �B��ŭ����եΤ覡2
    // ���k1�i���u�ơA�h��operator�A�Ĥ@�ӰѼƩ�b << �B��ť���A�ĤG�ӰѼƩ�b << �B��Ū��k��
    cout << p2 << endl;;

    // 2. ���� +
    // Person ob = p1 + p2;
    //Person ob = p1.operator+(p2);
    Person ob = p1 + p2;
    cout << ob << endl;

}

*/
