#include<iostream>
using namespace std;
class Person    //��H�������A��H���]�p��
{
private:
    int m_money;  //�p���ƾڡA�����~�����X��
protected:
    int m_age;
public:
    string m_name;
    Person(string name, int age, int money);
    ~Person();
    void say_hello(){
        cout << "�j�a�n�ڬO" << m_name << endl;
    }

    int get_money() const{
        //m_money = 600;
        return m_money;
    }
};

Person::Person(string name, int age, int money):m_name(name), m_age(age), m_money(money)
{
}

Person::~Person()
{
}

int main()
{
    //�����h��ҤƤ@�ӹ�H(�N�O��Person�h�w�q�@���ܶq)
    Person person("Amy",18, 5000);
    person.say_hello();
    cout << person.m_name << "��" << person.get_money() << "��";
}
