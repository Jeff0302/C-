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

    //�M��set�e��
    for_each(st.begin(), st.end(),[](int a){ cout << a <<" ";});

    //set�e�����ѥuŪ���N��const_iterator
    //�Τᤣ�i�H�ק�set�e��������
    set<int>::const_iterator it = st.begin();
    //���~
    //*it = 200;
    cout << endl;
    cout << "st��size(): " << st.size() << endl;

    //�R���_�l��m������
    st.erase(st.begin());
    for_each(st.begin(), st.end(),[](int a){ cout << a <<" ";});
    cout << endl;

    //�ھڤ����R��
    st.erase(40);
    for_each(st.begin(), st.end(),[](int a){ cout << a <<" ";});


}
