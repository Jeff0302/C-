#include <cstring>
#include <iostream>
using namespace std;
#include "person.h"


Person::Person()
{
    // strcpy(m_name, "");
    // m_num = -1;
    cout << "�L�Ѻc�y" << endl;
}

Person::Person(char *name, int number)
{
    cout << "Person���Ѻc�y" << endl;
    strcpy(m_name, name);
    m_num = number;
}

Person::~Person()
{
     cout << "Person�R�c" << endl;
}
void Person::showInfo()
{
    cout << m_name << ", "<<m_num << endl;
}

int main()
{
    //new ��Person�ӽЪŶ��A�p�G�ӽЦ��\�A�|�۰ʽեκc�y��ơC
    // Person *per2 = new Person("Jeff", 22);
    // per2->showInfo();
    //delete ����Ŷ��A�|���۰ʽեΪR�c��ơA�A�����ϪŶ��C
    // delete per2;

    Person *per_arry = NULL; 
    per_arry = new Person[3]{Person("Jeff", 1), Person("Amy",19)};
    for(int i=0;i<3;i++)
    {
        (per_arry+i)->showInfo();
    }

    delete [] per_arry;
}

