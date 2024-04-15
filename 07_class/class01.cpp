#include<iostream>
using namespace std;
class Person    //抽象的概念，對象的設計圖
{
private:
    int m_money;  //私有數據，類的外部不訪問
protected:
    int m_age;
public:
    string m_name;
    Person(string name, int age, int money);
    ~Person();
    void say_hello(){
        cout << "大家好我是" << m_name << endl;
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
    //用類去實例化一個對象(就是用Person去定義一個變量)
    Person person("Amy",18, 5000);
    person.say_hello();
    cout << person.m_name << "有" << person.get_money() << "塊";
}
