#include<iostream>
#include<set>
#include<algorithm>
using namespace std;


class MyGreater
{
public:
    static bool operator()(int n1, int n2){
        return n1>n2? true:false;
    }
};




int main(){

       
    //默認從小到大排
    //改成從大到小排
    //set<int, 排序規則> s;
    //排序規則既是類型又是函數--> 仿函數
    set<int, MyGreater> st;

    st.insert(30);
    st.insert(10);
    st.insert(20);
    st.insert(50);
    st.insert(40);
 
    for_each(st.begin(), st.end(), [](int a){ cout << a << " ";});
    cout << endl;


}