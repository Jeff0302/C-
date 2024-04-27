#include <cstring>
#include <iostream>
using namespace std;
#include "person.h"


Person::Person()
{
    // strcpy(m_name, "");
    // m_num = -1;
    cout << "無參構造" << endl;
}

Person::Person(char *name, int number)
{
    cout << "Person有參構造" << endl;
    strcpy(m_name, name);
    m_num = number;
}

Person::~Person()
{
     cout << "Person析構" << endl;
}
void Person::showInfo()
{
    cout << m_name << ", "<<m_num << endl;
}

int main()
{
    //new 給Person申請空間，如果申請成功，會自動調用構造函數。
    // Person *per2 = new Person("Jeff", 22);
    // per2->showInfo();
    //delete 釋放空間，會先自動調用析構函數，再釋放堆區空間。
    // delete per2;

    Person *per_arry = NULL; 
    per_arry = new Person[3]{Person("Jeff", 1), Person("Amy",19)};
    for(int i=0;i<3;i++)
    {
        (per_arry+i)->showInfo();
    }

    delete [] per_arry;
}

