#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){

    set<int> st;
    //set容器自動根據鍵值排序
    st.insert(30);
    st.insert(10);
    st.insert(20);
    st.insert(50);
    st.insert(40);

    set<int>::const_iterator it= st.find(20);

    if(it==st.end())
    {
        cout << "不存在" << *it << endl;
    }
    else
    {
        cout << "存在" << *it << endl;
    }

    //查找鍵值key的元素個數，存在鍵值返回1，否則返回0
    cout << "鍵值為100的數量: " <<st.count(100) << endl;

    //lower_bound(keyElem)
    set<int>::const_iterator it2 = st.lower_bound(30);

    if(it2 == st.end())
    {
        cout << "沒有找到30的下限";
    }
    else
    {
        cout << "找到30的下限:" << *it2;
    }

    cout << endl;
    //upper_bound(keyElem)
    set<int>::const_iterator it3 = st.upper_bound(30);

    if(it3 == st.end())
    {
        cout << "沒有找到30的上限";
    }
    else
    {
        cout << "找到30的上限:" << *it3;
    }

    cout << endl;
    //equal_range(keyElem)
    //返回的是對組
    //first對組中第一個值
    //second對組中第二個值
    pair<set<int>::const_iterator, set<int>::const_iterator> its = st.equal_range(30);
    if (its.first==st.end())
    {
        cout << "沒有找到30的下限";
    }
    else
    {
         cout << "找到30的下限:" << *(its.first);
    }
    cout << endl;
    if (its.second==st.end())
    {
        cout << "沒有找到30的上限";
    }
    else
    {
         cout << "找到30的上限:" << *(its.second);
    }
    

}
