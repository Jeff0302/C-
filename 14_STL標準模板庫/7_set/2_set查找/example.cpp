#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){

    set<int> st;
    //set�e���۰ʮھ���ȱƧ�
    st.insert(30);
    st.insert(10);
    st.insert(20);
    st.insert(50);
    st.insert(40);

    set<int>::const_iterator it= st.find(20);

    if(it==st.end())
    {
        cout << "���s�b" << *it << endl;
    }
    else
    {
        cout << "�s�b" << *it << endl;
    }

    //�d�����key�������ӼơA�s�b��Ȫ�^1�A�_�h��^0
    cout << "��Ȭ�100���ƶq: " <<st.count(100) << endl;

    //lower_bound(keyElem)
    set<int>::const_iterator it2 = st.lower_bound(30);

    if(it2 == st.end())
    {
        cout << "�S�����30���U��";
    }
    else
    {
        cout << "���30���U��:" << *it2;
    }

    cout << endl;
    //upper_bound(keyElem)
    set<int>::const_iterator it3 = st.upper_bound(30);

    if(it3 == st.end())
    {
        cout << "�S�����30���W��";
    }
    else
    {
        cout << "���30���W��:" << *it3;
    }

    cout << endl;
    //equal_range(keyElem)
    //��^���O���
    //first��դ��Ĥ@�ӭ�
    //second��դ��ĤG�ӭ�
    pair<set<int>::const_iterator, set<int>::const_iterator> its = st.equal_range(30);
    if (its.first==st.end())
    {
        cout << "�S�����30���U��";
    }
    else
    {
         cout << "���30���U��:" << *(its.first);
    }
    cout << endl;
    if (its.second==st.end())
    {
        cout << "�S�����30���W��";
    }
    else
    {
         cout << "���30���W��:" << *(its.second);
    }
    

}
