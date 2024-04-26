#include "person.h"
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

Person::Person()
{
    m_name = nullptr;
    m_num = 0;
    cout << "無參構造" << endl;
}

Person::Person(char *name, int num)
{
    //為m_name申請空間
    // m_name = name;
    m_name = (char*)calloc(1, strlen(name)+1);
    if(m_name==NULL)
    {
        cout << "構造失敗" << endl;
    }
    strcpy(m_name, name);
    m_num = num;
    cout << "無參構造" << endl;

}

Person::~Person()
{
    if(m_name!=NULL)
    {
        //釋放空間
        free(m_name);
        m_name=NULL;
        cout << "空間已被釋放" << endl;
    }
    cout << "析構函數" << endl;
}

Person::Person(const Person&ob)
{
    cout << "拷貝構造函數" << endl;
    m_name = (char*)calloc(1, strlen(ob.m_name)+1);
    if (m_name==NULL)
    {
        cout << "構造失敗" << endl;
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
    //淺拷貝問題(多次釋放同一塊堆區空間)
    Person p2 = p1; //調用系統默認的拷貝構造(單純值拷貝)

}

