#include "person.h"
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

Person::Person()
{
    m_name = nullptr;
    m_num = 0;
    cout << "�L�Ѻc�y" << endl;
}

Person::Person(char *name, int num)
{
    //��m_name�ӽЪŶ�
    // m_name = name;
    m_name = (char*)calloc(1, strlen(name)+1);
    if(m_name==NULL)
    {
        cout << "�c�y����" << endl;
    }
    strcpy(m_name, name);
    m_num = num;
    cout << "�L�Ѻc�y" << endl;

}

Person::~Person()
{
    if(m_name!=NULL)
    {
        //����Ŷ�
        free(m_name);
        m_name=NULL;
        cout << "�Ŷ��w�Q����" << endl;
    }
    cout << "�R�c���" << endl;
}

Person::Person(const Person&ob)
{
    cout << "�����c�y���" << endl;
    m_name = (char*)calloc(1, strlen(ob.m_name)+1);
    if (m_name==NULL)
    {
        cout << "�c�y����" << endl;
    }
    m_num = ob.m_num;
}

void Person::showPerson(){
    cout << m_name << endl;
}

int main()
{
    
    Person p1("Jeff", 18);
    p1.showPerson();
    //�L�������D(�h������P�@����ϪŶ�)
    Person p2 = p1; //�եΨt���q�{�������c�y(��­ȫ���)

}

