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

    //遍歷set容器
    for_each(st.begin(), st.end(),[](int a){ cout << a <<" ";});

    //set容器提供只讀迭代器const_iterator
    //用戶不可以修改set容器的元素
    set<int>::const_iterator it = st.begin();
    //錯誤
    //*it = 200;
    cout << endl;
    cout << "st的size(): " << st.size() << endl;

    //刪除起始位置的元素
    st.erase(st.begin());
    for_each(st.begin(), st.end(),[](int a){ cout << a <<" ";});
    cout << endl;

    //根據元素刪除
    st.erase(40);
    for_each(st.begin(), st.end(),[](int a){ cout << a <<" ";});


}
